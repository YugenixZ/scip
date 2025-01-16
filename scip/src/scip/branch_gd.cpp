/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                           */
/*                  This file is part of the program and library             */
/*         SCIP --- Solving Constraint Integer Programs                      */
/*                                                                           */
/*  Copyright (c) 2002-2024 Zuse Institute Berlin (ZIB)                      */
/*                                                                           */
/*  Licensed under the Apache License, Version 2.0 (the "License");          */
/*  you may not use this file except in compliance with the License.         */
/*  You may obtain a copy of the License at                                  */
/*                                                                           */
/*      http://www.apache.org/licenses/LICENSE-2.0                           */
/*                                                                           */
/*  Unless required by applicable law or agreed to in writing, software      */
/*  distributed under the License is distributed on an "AS IS" BASIS,        */
/*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. */
/*  See the License for the specific language governing permissions and      */
/*  limitations under the License.                                           */
/*                                                                           */
/*  You should have received a copy of the Apache-2.0 license                */
/*  along with SCIP; see the file LICENSE. If not visit scipopt.org.         */
/*                                                                           */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/**@file   branch_gd.cpp
 * @ingroup DEFPLUGINS_BRANCH
 * @brief  branching rule with general disjunction
 * @author Yugeng Zhou
 */

/*---+----1----+----2----+----3----+----4----+----5----+----6----+----7----+----8----+----9----+----0----+----1----+----2*/


#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
#include <scip/scip_var.h>
#include <scip/scip_branch.h>
#include <scip/branch_gd.h>
#include <objscip/objbranchrule.h>
#include <scip/scipdefplugins.h>
#include "struct_lp.h"


#define scip_name_            "gd"
#define scip_desc_           "branching rule with general disjunctions"
#define scip_priority_        1000000
#define scip_maxdepth_        -1
#define scip_maxbounddist_    1.0

using namespace std;

/*
 * Data structures
 */
/** branching rule data */
struct SCIP_BranchruleData {
};
/*
 * Local methods
 */
/* get the LP constraint matrix A, vector b and objective vector c*/
static
MatrixData getConstraintMatrix(SCIP* scip)
{
   SCIP_COL** cols = SCIPgetLPCols(scip);
   SCIP_ROW** rows = SCIPgetLPRows(scip);
   int ncols = SCIPgetNLPCols(scip);
   int nrows = SCIPgetNLPRows(scip);

   MatrixData LP_data;

   // Extract objective coefficients
   LP_data.c.resize(ncols);
   for (int i = 0; i < ncols; ++i)
   {
      LP_data.c[i] = SCIPcolGetObj(cols[i]);
   }

   // Extract the constraint matrix A and vector b
   LP_data.A.resize(nrows, vector<SCIP_Real>(ncols, 0.0));
   LP_data.b.resize(nrows);

   for (int i = 0; i < nrows; ++i)
   {
      SCIP_ROW* row = rows[i];
      SCIP_Real* rowvals = SCIProwGetVals(row);
      SCIP_COL** rowcols = SCIProwGetCols(row);
      int nnonz = SCIProwGetNNonz(row);

      for (int j = 0; j < nnonz; ++j)
      {
         int colindex = SCIPcolGetLPPos(rowcols[j]);
         LP_data.A[i][colindex] = rowvals[j];
      }

      SCIP_Real lhs = SCIProwGetLhs(row);
      SCIP_Real rhs = SCIProwGetRhs(row);
      if (lhs == rhs)
      {
         LP_data.b[i] = lhs;
         LP_data.A.emplace_back(ncols);
         for (int j = 0; j < ncols; ++j)
         {
            LP_data.A.back()[j] = -LP_data.A[i][j];
         }
         LP_data.b.push_back(-lhs);
      }
      else if (lhs == -SCIPinfinity(scip))
      {
         LP_data.b[i] = -rhs;
         for (int j = 0; j < ncols; ++j)
         {
            LP_data.A[i][j] = -LP_data.A[i][j];
         }
      }
      else
      {
         LP_data.b[i] = lhs;
      }
   }

   // Add the bounds of each column to the constraint matrix A and vector b
   for (int i = 0; i < ncols; ++i)
   {
      SCIP_Real lb = SCIPcolGetLb(cols[i]);
      SCIP_Real ub = SCIPcolGetUb(cols[i]);
      if (lb > -SCIPinfinity(scip))
      {
         vector<SCIP_Real> row(ncols, 0.0);
         row[i] = 1.0;
         LP_data.A.push_back(row);
         LP_data.b.push_back(lb);
      }
      if (ub < SCIPinfinity(scip))
      {
         vector<SCIP_Real> row(ncols, 0.0);
         row[i] = -1.0;
         LP_data.A.push_back(row);
         LP_data.b.push_back(-ub);
      }
   }

   return LP_data;
}

static
SubmodelVars submodel_create(
        SCIP* scip,
        vector<vector<SCIP_Real>> A,
        vector<SCIP_Real> b,
        vector<SCIP_Real> c,
        int M,
        int k,
        SCIP_Real delta,
        SCIP_Real zl
){

   // Create the submodel
   int m = A.size();
   int n = A[0].size();
   SCIP *model_sub;
   SCIP_RETCODE retcode;

   retcode = SCIPcreate(&model_sub);
   if (retcode != SCIP_OKAY) {
      SCIPprintError(retcode);
      return SubmodelVars{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
   }

   retcode = SCIPincludeDefaultPlugins(model_sub);
   if (retcode != SCIP_OKAY) {
      SCIPprintError(retcode);
      SCIPfree(&model_sub);

      return SubmodelVars{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
   }

   retcode = SCIPcreateProbBasic(model_sub, "sub");
   if (retcode != SCIP_OKAY) {
      SCIPprintError(retcode);
      SCIPfree(&model_sub);

      return SubmodelVars{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
   }

   // Define vector variables
   vector<SCIP_VAR *> p(m);
   SCIP_VAR *s_L;
   vector<SCIP_VAR *> q(m);
   SCIP_VAR *s_R;
   vector<SCIP_VAR *> pi_plus(n);
   vector<SCIP_VAR *> pi_minus(n);
   SCIP_VAR *pi0;

   // Create variables
   for (int i = 0; i < m; ++i) {
      retcode = SCIPcreateVarBasic(model_sub, &p[i], ("p_" + to_string(i)).c_str(), 0.0, SCIPinfinity(model_sub), 0.0, SCIP_VARTYPE_CONTINUOUS);
      if (retcode != SCIP_OKAY) {
         SCIPprintError(retcode);
         SCIPfree(&model_sub);
         return SubmodelVars{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
      }
      SCIP_CALL_ABORT(SCIPaddVar(model_sub, p[i]));
   }

   retcode = SCIPcreateVarBasic(model_sub, &s_L, "s_L", 0.0, SCIPinfinity(model_sub), 0.0, SCIP_VARTYPE_CONTINUOUS);
   if (retcode != SCIP_OKAY) {
      SCIPprintError(retcode);
      SCIPfree(&model_sub);
      return SubmodelVars{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
   }
   SCIP_CALL_ABORT(SCIPaddVar(model_sub, s_L));

   for (int i = 0; i < m; ++i) {
      retcode = SCIPcreateVarBasic(model_sub, &q[i], ("q_" + to_string(i)).c_str(), 0.0, SCIPinfinity(model_sub), 0.0, SCIP_VARTYPE_CONTINUOUS);
      if (retcode != SCIP_OKAY) {
         SCIPprintError(retcode);
         SCIPfree(&model_sub);

         return SubmodelVars{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
      }
      SCIP_CALL_ABORT(SCIPaddVar(model_sub, q[i]));
   }

   retcode = SCIPcreateVarBasic(model_sub, &s_R, "s_R", 0.0, SCIPinfinity(model_sub), 0.0, SCIP_VARTYPE_CONTINUOUS);
   if (retcode != SCIP_OKAY) {
      SCIPprintError(retcode);
      SCIPfree(&model_sub);

      return SubmodelVars{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
   }
   SCIP_CALL_ABORT(SCIPaddVar(model_sub, s_R));

   for (int j = 0; j < n; ++j) {
      retcode = SCIPcreateVarBasic(model_sub, &pi_plus[j], ("pi_plus_" + to_string(j)).c_str(), 0.0, M, 0.0, SCIP_VARTYPE_INTEGER);
      if (retcode != SCIP_OKAY) {
         SCIPprintError(retcode);
         SCIPfree(&model_sub);
         return SubmodelVars{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
      }
      SCIP_CALL_ABORT(SCIPaddVar(model_sub, pi_plus[j]));

      retcode = SCIPcreateVarBasic(model_sub, &pi_minus[j], ("pi_minus_" + to_string(j)).c_str(), 0.0, M, 0.0, SCIP_VARTYPE_INTEGER);
      if (retcode != SCIP_OKAY) {
         SCIPprintError(retcode);
         SCIPfree(&model_sub);
         return SubmodelVars{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
      }
      SCIP_CALL_ABORT(SCIPaddVar(model_sub, pi_minus[j]));
   }

   retcode = SCIPcreateVarBasic(model_sub, &pi0, "pi0", -SCIPinfinity(model_sub), SCIPinfinity(model_sub), 0.0, SCIP_VARTYPE_INTEGER);
   if (retcode != SCIP_OKAY) {
      SCIPprintError(retcode);
      SCIPfree(&model_sub);
      return SubmodelVars{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
   }
   SCIP_CALL_ABORT(SCIPaddVar(model_sub, pi0));

// Add constraints
   for (int j = 0; j < n; ++j) {
      SCIP_CONS* cons;
      SCIP_CALL_ABORT(SCIPcreateConsBasicLinear(model_sub, &cons, ("cons_pA_" + to_string(j)).c_str(), 0, nullptr, nullptr, 0.0, 0.0));
      for (int i = 0; i < m; ++i) {
         SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, p[i], A[i][j]));
      }
      SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, s_L, -c[j]));
      SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, pi_plus[j], -1.0));
      SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, pi_minus[j], 1.0));
      SCIP_CALL_ABORT(SCIPaddCons(model_sub, cons));
      SCIP_CALL_ABORT(SCIPreleaseCons(model_sub, &cons));
   }

   {
      SCIP_CONS* cons;
      SCIP_CALL_ABORT(SCIPcreateConsBasicLinear(model_sub, &cons, "cons_pb", 0, nullptr, nullptr, delta, SCIPinfinity(model_sub)));
      for (int i = 0; i < m; ++i) {
         SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, p[i], b[i]));
      }
      SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, s_L, -zl));
      SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, pi0, -1.0));
      SCIP_CALL_ABORT(SCIPaddCons(model_sub, cons));
      SCIP_CALL_ABORT(SCIPreleaseCons(model_sub, &cons));
   }

   for (int j = 0; j < n; ++j) {
      SCIP_CONS* cons;
      SCIP_CALL_ABORT(SCIPcreateConsBasicLinear(model_sub, &cons, ("cons_qA_" + to_string(j)).c_str(), 0, nullptr, nullptr, 0.0, 0.0));
      for (int i = 0; i < m; ++i) {
         SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, q[i], A[i][j]));
      }
      SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, s_R, -c[j]));
      SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, pi_plus[j], 1.0));
      SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, pi_minus[j], -1.0));
      SCIP_CALL_ABORT(SCIPaddCons(model_sub, cons));
      SCIP_CALL_ABORT(SCIPreleaseCons(model_sub, &cons));
   }

   {
      SCIP_CONS* cons;
      SCIP_CALL_ABORT(SCIPcreateConsBasicLinear(model_sub, &cons, "cons_qb", 0, nullptr, nullptr, delta - 1, SCIPinfinity(model_sub)));
      for (int i = 0; i < m; ++i) {
         SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, q[i], b[i]));
      }
      SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, s_R, -zl));
      SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, pi0, 1.0));
      SCIP_CALL_ABORT(SCIPaddCons(model_sub, cons));
      SCIP_CALL_ABORT(SCIPreleaseCons(model_sub, &cons));
   }

   {
      SCIP_CONS* cons;
      SCIP_CALL_ABORT(SCIPcreateConsBasicLinear(model_sub, &cons, "cons_pi_sum", 0, nullptr, nullptr, -SCIPinfinity(model_sub), k));
      for (int i = 0; i < n; ++i) {
         SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, pi_plus[i], 1.0));
         SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, pi_minus[i], 1.0));
      }
      SCIP_CALL_ABORT(SCIPaddCons(model_sub, cons));
      SCIP_CALL_ABORT(SCIPreleaseCons(model_sub, &cons));
   }

   // Check if the LP relaxation of the original problem is optimal
   SCIP_LPSOLSTAT status_LP = SCIPgetLPSolstat(scip);
   if (status_LP == SCIP_LPSOLSTAT_OPTIMAL) {
      vector<SCIP_Real> x_star(n);
      SCIP_Real epsilon = 1e-4;
      SCIP_COL **cols = SCIPgetLPCols(scip);
      for (int j = 0; j < n; ++j) {
         x_star[j] = SCIPgetSolVal(scip, nullptr, SCIPcolGetVar(cols[j]));
      }

      // Add constraints pi0 <= sum((pi_plus[i] - pi_minus[i]) * x_star[i]) - epsilon
      {
         SCIP_CONS *cons;
         SCIP_CALL_ABORT(SCIPcreateConsBasicLinear(model_sub, &cons, "cons_pi0_lower", 0, nullptr, nullptr, -SCIPinfinity(model_sub), -epsilon));
         for (int i = 0; i < n; ++i) {
            SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, pi_plus[i], x_star[i]));
            SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, pi_minus[i], -x_star[i]));
         }
         SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, pi0, 1.0));
         SCIP_CALL_ABORT(SCIPaddCons(model_sub, cons));
         SCIP_CALL_ABORT(SCIPreleaseCons(model_sub, &cons));
      }

      // Add constraints pi0 >= sum((pi_plus[i] - pi_minus[i]) * x_star[i]) + epsilon - 1
      {
         SCIP_CONS *cons;
         SCIP_CALL_ABORT(SCIPcreateConsBasicLinear(model_sub, &cons, "cons_pi0_upper", 0, nullptr, nullptr, epsilon - 1, SCIPinfinity(model_sub)));
         for (int i = 0; i < n; ++i) {
            SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, pi_plus[i], x_star[i]));
            SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, pi_minus[i], -x_star[i]));
         }
         SCIP_CALL_ABORT(SCIPaddCoefLinear(model_sub, cons, pi0, -1.0));
         SCIP_CALL_ABORT(SCIPaddCons(model_sub, cons));
         SCIP_CALL_ABORT(SCIPreleaseCons(model_sub, &cons));
      }
   }
   retcode = SCIPsetRealParam(model_sub, "limits/time", 1000);
   if (retcode != SCIP_OKAY) {
      SCIPprintError(retcode);
      SCIPfree(&model_sub);
      return SubmodelVars{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
   }

   return SubmodelVars{model_sub, p, s_L, q, s_R, pi_plus, pi_minus, pi0};
}

static
SCIP* ckmodel_create(
        const string& name,
        vector<vector<SCIP_Real>> A,
        vector<SCIP_Real> b,
        vector<SCIP_Real> c,
        int m,
        int n,
        vector<int> pi_solution,
        int pi0_solution,
        SCIP_Real delta,
        SCIP_Real zl,
        const string& condition
) {
   SCIP* model_ck;
   SCIP_RETCODE retcode;
   vector<SCIP_VAR*> x(n);

   retcode = SCIPcreate(&model_ck);
   if (retcode != SCIP_OKAY) {
      SCIPprintError(retcode);
      return nullptr;
   }

   retcode = SCIPincludeDefaultPlugins(model_ck);
   if (retcode != SCIP_OKAY) {
      SCIPprintError(retcode);
      SCIPfree(&model_ck);
      return nullptr;
   }

   retcode = SCIPcreateProbBasic(model_ck, name.c_str());
   if (retcode != SCIP_OKAY) {
      SCIPprintError(retcode);
      return nullptr;
   }

   for (int i = 0; i < n; ++i) {
      SCIP_VAR* var;
      SCIPcreateVarBasic(model_ck, &var, ("x_" + to_string(i)).c_str(), -SCIPinfinity(model_ck), SCIPinfinity(model_ck), 0.0, SCIP_VARTYPE_CONTINUOUS);
      SCIPaddVar(model_ck, var);
      x[i] = var;
   }

   for (int j = 0; j < m; ++j) {
      SCIP_CONS* cons;
      SCIPcreateConsBasicLinear(model_ck, &cons, ("cons_" + to_string(j)).c_str(), 0, NULL, NULL, b[j], SCIPinfinity(model_ck));
      for (int i = 0; i < n; ++i) {
         SCIPaddCoefLinear(model_ck, cons, x[i], A[j][i]);
      }
      SCIPaddCons(model_ck, cons);
      SCIPreleaseCons(model_ck, &cons);
   }

   if (condition == "pi0") {
      SCIP_CONS* cons;
      SCIPcreateConsBasicLinear(model_ck, &cons, "cons_pi0", 0, NULL, NULL, -SCIPinfinity(model_ck), pi0_solution);
      for (int i = 0; i < n; ++i) {
         SCIPaddCoefLinear(model_ck, cons, x[i], pi_solution[i]);
      }
      SCIPaddCons(model_ck, cons);
      SCIPreleaseCons(model_ck, &cons);
   } else if (condition == "pi0+1") {
      SCIP_CONS* cons;
      SCIPcreateConsBasicLinear(model_ck, &cons, "cons_pi0_plus_1", 0, NULL, NULL, pi0_solution + 1, SCIPinfinity(model_ck));
      for (int i = 0; i < n; ++i) {
         SCIPaddCoefLinear(model_ck, cons, x[i], pi_solution[i]);
      }
      SCIPaddCons(model_ck, cons);
      SCIPreleaseCons(model_ck, &cons);
   }
   //set objective function
   SCIPsetObjsense(model_ck, SCIP_OBJSENSE_MINIMIZE);
   for (int i = 0; i < n; ++i) {
      SCIPaddVarObj(model_ck, x[i], c[i]);
   }

   return model_ck;

};

static
pair<string, SCIP_Real> check_feasibility(
        SCIP* model,
        SCIP_Real Best_zl)
        {
   std::string status;
   SCIP_Real est;
   if (SCIPgetStatus(model) == SCIP_STATUS_OPTIMAL) {
      if (SCIPgetPrimalbound(model) - Best_zl > 1e-6) {
         status = "updated_zl";
         //Retrieve the objective value of the solution.
         est = SCIPgetPrimalbound(model); //TODO: Specific the estimate value here
      } else {
         status = "obj_val less than Best_zl";
         est = 1e+20;
         return {status, est};
      }
   } else {
      status = "infeasible";
      est = 1e+20;
      return {status, est};
   }
   return {status, est};
}

static
vector<Submodel_sols> submodel_solve(
         SubmodelVars submodel_datas,
         SCIP_Real zl_low,
         SCIP_Real zl_high,
         int m,
         int n,
         SCIP_Real delta,
         vector<vector<SCIP_Real>> A,
         vector<SCIP_Real> b,
         vector<SCIP_Real> c
        ){
   SCIP* model_sub = submodel_datas.model_sub;
   vector<SCIP_Real> estL_list;
   vector<SCIP_Real> estR_list;
   vector<SCIP_Real> feasible_zl;
   vector<vector<int>> best_pi_solutions;
   vector<int> best_pi0_solutions;
   vector<string> Status_l;
   vector<string> Status_r;
   vector<Submodel_sols> final_results;

   while (abs(zl_high - zl_low) > 1e-6){
      SCIP_Real zl = (zl_high + zl_low) / 2;
      SCIP_RETCODE retcode = SCIPsolve(submodel_datas.model_sub);
      if (retcode != SCIP_OKAY) {
         SCIPprintError(retcode);
      }
      if (SCIPgetStatus(submodel_datas.model_sub) == SCIP_STATUS_OPTIMAL) {
         // Retrieve the solutions
         vector<int> pi_solution(n); // pi_solution = pi_plus - pi_minus
         int pi0_solution = SCIPgetSolVal(submodel_datas.model_sub, nullptr, submodel_datas.pi0); // pi0

         for (int i = 0; i < n; ++i) {
            pi_solution[i] = SCIPgetSolVal(submodel_datas.model_sub, nullptr, submodel_datas.pi_plus[i])
                    - SCIPgetSolVal(submodel_datas.model_sub, nullptr, submodel_datas.pi_minus[i]);
         }
         assert(SCIPisFeasIntegral(model_sub, pi0_solution));
         for (int i : pi_solution) {
            assert(SCIPisFeasIntegral(model_sub, i));
         }
         // Check if the solution is feasible for the general disjunction
         SCIP* model_ck_l = ckmodel_create("check_model_left", A, b, c, m, n, pi_solution, pi0_solution, delta, zl, "pi0");
         SCIP* model_ck_r = ckmodel_create("check_model_left", A, b, c, m, n, pi_solution, pi0_solution, delta, zl, "pi0+1");

         pair<string, SCIP_Real> result_l = check_feasibility(model_ck_l, zl);
         pair<string, SCIP_Real> result_r = check_feasibility(model_ck_r, zl);

         if (result_l.first == "updated_zl" || result_r.first == "updated_zl") {
            feasible_zl.push_back(zl);
            best_pi_solutions.push_back(pi_solution);
            best_pi0_solutions.push_back(pi0_solution);
            Status_l.push_back(result_l.first);
            Status_r.push_back(result_r.first);
            zl_low = zl;

            estL_list.push_back(result_l.first == "updated_zl" ? result_l.second : 1e+20);
            estR_list.push_back(result_r.first == "updated_zl" ? result_r.second : 1e+20);
         } else {
            feasible_zl.push_back(zl);
            best_pi_solutions.push_back(pi_solution);
            best_pi0_solutions.push_back(pi0_solution);
            Status_l.push_back(result_l.first);
            Status_r.push_back(result_r.first);
            zl_high = zl;
         }
      }
      else {
         zl_high = zl;
      }
   }
   assert (feasible_zl.size() == best_pi_solutions.size());
   assert (feasible_zl.size() == best_pi0_solutions.size());

   Submodel_sols result;

   if (feasible_zl.empty()){
      result = {SCIP_INVALID, {}, static_cast<int>(SCIP_INVALID), NULL, NULL, NULL, NULL};
   } else {
      SCIP_Real best_zl = *max_element(feasible_zl.begin(), feasible_zl.end());
      auto idx_zl = distance(feasible_zl.begin(), find(feasible_zl.begin(), feasible_zl.end(), best_zl));
      vector<int> best_pi_solution = best_pi_solutions[idx_zl];
      int best_pi0_solution = best_pi0_solutions[idx_zl];
      string status_l = Status_l[idx_zl];
      string status_r = Status_r[idx_zl];
      SCIP_Real est_l = estL_list[idx_zl];
      SCIP_Real est_r = estR_list[idx_zl];

      result = {best_zl, best_pi_solution, best_pi0_solution, est_l, est_r, status_l, status_r};
   }
   final_results.push_back(result);
   return final_results;
};

static
SCIP_NODE* get_information(SCIP* scip) {
   std::cout << "_____________________________________" << std::endl;
   std::cout << "Now starting branching" << std::endl;

   SCIP_NODE* curr_Node = SCIPgetCurrentNode(scip);
   std::cout << "Current branching Node number: " << SCIPnodeGetNumber(curr_Node) << std::endl;

   if (SCIPnodeGetDepth(curr_Node) > 0) {
      int num_addedCons = SCIPnodeGetNAddedConss(curr_Node);
      auto** addedconss = (SCIP_CONS**) malloc(num_addedCons * sizeof(SCIP_CONS*));
      if (num_addedCons == 0) {
         std::cout << "No constraints added" << std::endl;

      } else {
         SCIPnodeGetAddedConss(curr_Node, reinterpret_cast<SCIP_CONS **>(num_addedCons),
                               reinterpret_cast<int *>(addedconss), num_addedCons);
         std::cout << "Number of added constraints: " << num_addedCons << std::endl;
         for (int i = 0; i < num_addedCons; ++i) {
            SCIP_ROW* row = SCIPgetRowLinear(scip, addedconss[i]);
            std::cout << "Added constraint: ";
            SCIP_Real* vals = SCIProwGetVals(row);
            for (int j = 0; j < SCIProwGetNNonz(row); ++j) {
               std::cout << vals[j] << " ";
            }
            std::cout << std::endl;
            std::cout << "Rhs: " << SCIProwGetRhs(row) << std::endl;
            std::cout << "Lhs: " << SCIProwGetLhs(row) << std::endl;
         }
      }
   }
   return curr_Node;
}

static
SCIP_RETCODE createBranchingConstraint(
        SCIP* scip,
        SCIP_Bool createChild,
        SCIP_NODE* curr_Node,
        const vector<SCIP_VAR*>& vars_lp,
        const vector<int>& pi_solution,
        int pi0_solution,
        SCIP_Real est,
        const string& side
         )
         {
   if (side == "left") {
      SCIP_CONS *cons_l;
      SCIP_CALL(
              SCIPcreateConsBasicLinear(scip, &cons_l, (side + std::to_string(SCIPnodeGetNumber(curr_Node))).c_str(), 0,
                                        nullptr, nullptr, pi0_solution, SCIPinfinity(scip)));
      for (size_t i = 0; i < vars_lp.size(); ++i) {
         SCIP_CALL(SCIPaddCoefLinear(scip, cons_l, vars_lp[i], pi_solution[i]));
      }
      if (createChild == TRUE) {
         SCIP_NODE *child_node;
         SCIP_CALL(SCIPcreateChild(scip, &child_node, 1.0, est));
         SCIP_CALL(SCIPaddConsNode(scip, child_node, cons_l, nullptr));
         SCIP_CALL(SCIPreleaseCons(scip, &cons_l));
      }
      else {
         SCIP_CALL(SCIPaddConsLocal(scip, cons_l, curr_Node));
         SCIP_CALL(SCIPreleaseCons(scip, &cons_l));
      }
   }
   else if (side == "right") {
      SCIP_CONS *cons_r;
      SCIP_CALL(SCIPcreateConsBasicLinear(scip, &cons_r, (side + std::to_string(SCIPnodeGetNumber(curr_Node))).c_str(), 0, nullptr, nullptr, pi0_solution, SCIPinfinity(scip)));
      for (int i = 0; i < pi_solution.size(); ++i) {
         SCIP_CALL(SCIPaddCoefLinear(scip, cons_r, vars_lp[i], pi_solution[i]));
      }
      if (createChild == TRUE){
         SCIP_NODE* child_node;
         SCIP_CALL(SCIPcreateChild(scip, &child_node, 1.0, est));
         SCIP_CALL(SCIPaddConsNode(scip, child_node, cons_r, nullptr));
         SCIP_CALL(SCIPreleaseCons(scip, &cons_r));
         }else{
         SCIP_CALL(SCIPaddConsLocal(scip, cons_r, curr_Node));
         SCIP_CALL(SCIPreleaseCons(scip, &cons_r));
         }
      }
   else {
      cout << "Invalid side" << endl;
   }
   return SCIP_OKAY;
};

/*
 * Callback methods of branching rule
 */
/** copy method for branchrule plugins (called when SCIP copies plugins) */
static
SCIP_DECL_BRANCHCOPY(branchCopyGeneraldisjunction)
{  /*lint --e{715}*/
   assert(scip != nullptr);
   assert(branchrule != nullptr);
   assert(strcmp(SCIPbranchruleGetName(branchrule), scip_name_) == 0);

   /* call inclusion method of branching rule */
   SCIP_CALL( SCIPincludeBranchruleGeneralDisjunction(scip) );
   return SCIP_OKAY;
}

//
///** destructor of branching rule to free user data (called when SCIP is exiting) */
//#if 0
//static
//SCIP_DECL_BRANCHFREE(branchFreeXyz)
//{  /*lint --e{715}*/
//   SCIPerrorMessage("method of xyz branching rule not implemented yet\n");
//   SCIPABORT(); /*lint --e{527}*/
//
//   return SCIP_OKAY;
//}
//#else
//#define branchFreeXyz NULL
//#endif
//
//
///** initialization method of branching rule (called after problem was transformed) */
//#if 0
//static
//SCIP_DECL_BRANCHINIT(branchInitXyz)
//{  /*lint --e{715}*/
//   SCIPerrorMessage("method of xyz branching rule not implemented yet\n");
//   SCIPABORT(); /*lint --e{527}*/
//
//   return SCIP_OKAY;
//}
//#else
//#define branchInitXyz NULL
//#endif
//
//
///** deinitialization method of branching rule (called before transformed problem is freed) */
//#if 0
//static
//SCIP_DECL_BRANCHEXIT(branchExitXyz)
//{  /*lint --e{715}*/
//
//   SCIPerrorMessage("method of xyz branching rule not implemented yet\n");
//   SCIPABORT(); /*lint --e{527}*/
//
//   return SCIP_OKAY;
//}
//#else
//#define branchExitXyz NULL
//#endif
//
//
///** solving process initialization method of branching rule (called when branch and bound process is about to begin) */
//#if 0
//static
//SCIP_DECL_BRANCHINITSOL(branchInitsolXyz)
//{  /*lint --e{715}*/
//   SCIPerrorMessage("method of xyz branching rule not implemented yet\n");
//   SCIPABORT(); /*lint --e{527}*/
//
//   return SCIP_OKAY;
//}
//#else
//#define branchInitsolXyz NULL
//#endif
//
//
///** solving process deinitialization method of branching rule (called before branch and bound process data is freed) */
//#if 0
//static
//SCIP_DECL_BRANCHEXITSOL(branchExitsolXyz)
//{  /*lint --e{715}*/
//   SCIPerrorMessage("method of xyz branching rule not implemented yet\n");
//   SCIPABORT(); /*lint --e{527}*/
//
//   return SCIP_OKAY;
//}
//#else
//#define branchExitsolXyz NULL
//#endif

/** branching execution method for fractional LP solutions */
static
SCIP_DECL_BRANCHEXECLP(branchExeclpgd)
{  /*lint --e{715}*/
   MatrixData LP_data = getConstraintMatrix(scip);
   vector<vector<SCIP_Real>> A = LP_data.A;
   vector<SCIP_Real> b = LP_data.b;
   vector<SCIP_Real> c = LP_data.c;
   SCIP_Node *curr_Node = get_information(scip);
   SCIP_COL** cols_lp = SCIPgetLPCols(scip);
   vector<SCIP_VAR*> vars_lp(A.size());
   for (size_t i = 0; i < A.size(); ++i) {
      vars_lp[i] = SCIPcolGetVar(cols_lp[i]);
   }
   size_t m = A.size();
   size_t n = A[0].size();
   int M = 1;
   int k = 2;
   SCIP_Real zl = SCIPgetLPObjval(scip);
   SCIP_Real delta = 0.05;
   SCIP_Real zl_low = zl;
   SCIP_Real zl_high = SCIPinfinity(scip);

   SubmodelVars submodel_datas = submodel_create(scip, A, b, c, M, k, delta, zl);
   vector<Submodel_sols> final_results = submodel_solve(submodel_datas, zl_low, zl_high, m, n, delta, A, b, c);
   SCIP_Real est_l = final_results[0].est_l;
   SCIP_Real est_r = final_results[0].est_r;
   string status_l = final_results[0].status_l;
   string status_r = final_results[0].status_r;
   [[maybe_unused]] SCIP_Real downprio = 1.0;
   if ( est_l == NULL || est_r == NULL) {
      *result = SCIP_DIDNOTRUN;
      return SCIP_OKAY;
   } else if (status_l == "updated_zl" and status_r == "updated_zl") {
      SCIP_Bool CreateChild = TRUE;
      SCIP_CALL(createBranchingConstraint(scip, CreateChild, curr_Node, vars_lp, final_results[0].pi_solution, final_results[0].pi0_solution, est_l, "left"));
      SCIP_CALL(createBranchingConstraint(scip, CreateChild, curr_Node, vars_lp, final_results[0].pi_solution, final_results[0].pi0_solution + 1, est_r, "right"));
      *result = SCIP_BRANCHED;
      return SCIP_OKAY;
   }else if (status_l == "infeasible" && status_r != "updated_zl") {
      std::cout << "Infeasible left child" << std::endl;
      *result = SCIP_CUTOFF;
      return SCIP_OKAY;
   } else if (status_l != "updated_zl" && status_r == "infeasible") {
      std::cout << "Infeasible right child" << std::endl;
      *result = SCIP_CUTOFF;
      return SCIP_OKAY;
   } else if (status_l == "updated_zl" && status_r != "updated_zl") {
      SCIP_Bool CreateChild = FALSE;
      SCIP_CALL(createBranchingConstraint(scip, CreateChild, curr_Node, vars_lp, final_results[0].pi_solution, final_results[0].pi0_solution, est_l, "left"));
      std::cout << "Only Left constraint added:" << std::endl;
      *result = SCIP_BRANCHED;
      return SCIP_OKAY;
   } else if (status_r == "updated_zl" && status_l != "updated_zl") {
      SCIP_Bool CreateChild = FALSE;
      SCIP_CALL(createBranchingConstraint(scip, CreateChild, curr_Node, vars_lp, final_results[0].pi_solution, final_results[0].pi0_solution + 1, est_r, "right"));
      std::cout << "Only Right constraint added:" << std::endl;
      *result = SCIP_BRANCHED;
      return SCIP_OKAY;
   } else {
      std::cout << "Both children are not added" << std::endl;
      *result = SCIP_DIDNOTFIND;
      return SCIP_OKAY;
   };
};
//
//
///** branching execution method for external candidates */
//#if 0
//static
//SCIP_DECL_BRANCHEXECEXT(branchExecextXyz)
//{  /*lint --e{715}*/
//
//   SCIPerrorMessage("method of xyz branching rule not implemented yet\n");
//   SCIPABORT(); /*lint --e{527}*/
//
//   return SCIP_OKAY;
//}
//#else
//#define branchExecextXyz NULL
//#endif
//
//
///** branching execution method for not completely fixed pseudo solutions */
//#if 0
//static
//SCIP_DECL_BRANCHEXECPS(branchExecpsXyz)
//{  /*lint --e{715}*/
//   SCIPerrorMessage("method of xyz branching rule not implemented yet\n");
//   SCIPABORT(); /*lint --e{527}*/
//
//   return SCIP_OKAY;
//}
//#else
//#define branchExecpsXyz NULL
//#endif
/*
 * branching rule specific interface methods
 */

/** creates the general disjunction branching rule and includes it in SCIP */
SCIP_RETCODE SCIPincludeBranchruleGeneralDisjunction(
        SCIP *scip                /**< SCIP data structure */
){
   SCIP_BRANCHRULE *branchrule;
   /* create general branching rule data */
   branchrule = nullptr;
   /* include branching rule */
   SCIP_CALL(SCIPincludeBranchruleBasic(scip, &branchrule, scip_name_, scip_desc_, scip_priority_,
                                        scip_maxdepth_, scip_maxbounddist_, nullptr));
   assert(branchrule != nullptr);
   /* set non fundamental callbacks via setter functions */
   SCIP_CALL(SCIPsetBranchruleCopy(scip, branchrule, branchCopyGeneraldisjunction));
   SCIP_CALL(SCIPsetBranchruleExecLp(scip, branchrule, branchExeclpgd));
//    SCIP_CALL(SCIPsetBranchruleFree(scip, branchrule, branchFreeXyz));
//    SCIP_CALL(SCIPsetBranchruleInit(scip, branchrule, branchInitXyz));
//    SCIP_CALL(SCIPsetBranchruleExit(scip, branchrule, branchExitXyz));
//    SCIP_CALL(SCIPsetBranchruleInitsol(scip, branchrule, branchInitsolXyz));
//    SCIP_CALL(SCIPsetBranchruleExitsol(scip, branchrule, branchExitsolXyz));
//    SCIP_CALL(SCIPsetBranchruleExecExt(scip, branchrule, branchExecextXyz));
//    SCIP_CALL(SCIPsetBranchruleExecPs(scip, branchrule, branchExecpsXyz));
   return SCIP_OKAY;
}

