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

#include <cassert>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
#include <scip/scip_var.h>
#include <scip/scip_branch.h>
#include <scip/branch_gd.h>
#include <objscip/objbranchrule.h>
#include <scip/scipdefplugins.h>


#define BRANCHRULE_NAME            "gd"
#define BRANCHRULE_DESC            "branching rule with general disjunctions"
#define BRANCHRULE_PRIORITY        0
#define BRANCHRULE_MAXDEPTH        -1
#define BRANCHRULE_MAXBOUNDDIST    1.0

using namespace std;
/*
 * Data structures
 */

/* TODO: fill in the necessary branching rule data */

/** branching rule data */
struct SCIP_BranchruleData {
      vector<vector<SCIP_Real>> A;   // constraint matrix
      vector<SCIP_Real> b;            // right hand side vector
      vector<SCIP_Real> c;            // objective vector

};

/*
 * Local methods
 */

/* put your local methods here, and declare them static */

/* get the LP constraint matrix A, vector b and objective vector c*/
static
SCIP_BranchruleData getConstraintMatrix(SCIP* scip)
{
   SCIP_COL** cols = SCIPgetLPCols(scip);
   SCIP_ROW** rows = SCIPgetLPRows(scip);
   int ncols = SCIPgetNLPCols(scip);
   int nrows = SCIPgetNLPRows(scip);

   SCIP_BranchruleData LP_data;

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
SubmodelDatas submodel_create(
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
      return SubmodelDatas{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
   }

   retcode = SCIPincludeDefaultPlugins(model_sub);
   if (retcode != SCIP_OKAY) {
      SCIPprintError(retcode);
      SCIPfree(&model_sub);

      return SubmodelDatas{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
   }

   retcode = SCIPcreateProbBasic(model_sub, "sub");
   if (retcode != SCIP_OKAY) {
      SCIPprintError(retcode);
      SCIPfree(&model_sub);

      return SubmodelDatas{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
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
         return SubmodelDatas{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
      }
      SCIP_CALL_ABORT(SCIPaddVar(model_sub, p[i]));
   }

   retcode = SCIPcreateVarBasic(model_sub, &s_L, "s_L", 0.0, SCIPinfinity(model_sub), 0.0, SCIP_VARTYPE_CONTINUOUS);
   if (retcode != SCIP_OKAY) {
      SCIPprintError(retcode);
      SCIPfree(&model_sub);
      return SubmodelDatas{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
   }
   SCIP_CALL_ABORT(SCIPaddVar(model_sub, s_L));

   for (int i = 0; i < m; ++i) {
      retcode = SCIPcreateVarBasic(model_sub, &q[i], ("q_" + to_string(i)).c_str(), 0.0, SCIPinfinity(model_sub), 0.0, SCIP_VARTYPE_CONTINUOUS);
      if (retcode != SCIP_OKAY) {
         SCIPprintError(retcode);
         SCIPfree(&model_sub);

         return SubmodelDatas{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
      }
      SCIP_CALL_ABORT(SCIPaddVar(model_sub, q[i]));
   }

   retcode = SCIPcreateVarBasic(model_sub, &s_R, "s_R", 0.0, SCIPinfinity(model_sub), 0.0, SCIP_VARTYPE_CONTINUOUS);
   if (retcode != SCIP_OKAY) {
      SCIPprintError(retcode);
      SCIPfree(&model_sub);

      return SubmodelDatas{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
   }
   SCIP_CALL_ABORT(SCIPaddVar(model_sub, s_R));

   for (int j = 0; j < n; ++j) {
      retcode = SCIPcreateVarBasic(model_sub, &pi_plus[j], ("pi_plus_" + to_string(j)).c_str(), 0.0, M, 0.0, SCIP_VARTYPE_INTEGER);
      if (retcode != SCIP_OKAY) {
         SCIPprintError(retcode);
         SCIPfree(&model_sub);
         return SubmodelDatas{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
      }
      SCIP_CALL_ABORT(SCIPaddVar(model_sub, pi_plus[j]));

      retcode = SCIPcreateVarBasic(model_sub, &pi_minus[j], ("pi_minus_" + to_string(j)).c_str(), 0.0, M, 0.0, SCIP_VARTYPE_INTEGER);
      if (retcode != SCIP_OKAY) {
         SCIPprintError(retcode);
         SCIPfree(&model_sub);
         return SubmodelDatas{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
      }
      SCIP_CALL_ABORT(SCIPaddVar(model_sub, pi_minus[j]));
   }

   retcode = SCIPcreateVarBasic(model_sub, &pi0, "pi0", -SCIPinfinity(model_sub), SCIPinfinity(model_sub), 0.0, SCIP_VARTYPE_INTEGER);
   if (retcode != SCIP_OKAY) {
      SCIPprintError(retcode);
      SCIPfree(&model_sub);
      return SubmodelDatas{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
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
      return SubmodelDatas{nullptr, {}, nullptr, {}, nullptr, {}, {}, nullptr};
   }

   return SubmodelDatas{model_sub, p, s_L, q, s_R, pi_plus, pi_minus, pi0};
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
vector<tuple<SCIP_Real, vector<int>, int, vector<SCIP_Real>, vector<SCIP_Real>>> submodel_solve(
         SubmodelDatas submodel_datas,
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
   vector<tuple<SCIP_Real, vector<int>, int, vector<SCIP_Real>, vector<SCIP_Real>>> final_results;

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

   tuple<SCIP_Real, vector<int>, int, vector<SCIP_Real>, vector<SCIP_Real>> result;

   if (feasible_zl.empty()){
      result = {SCIP_INVALID, {}, static_cast<int>(SCIP_INVALID), {}, {}};
   } else {
      SCIP_Real best_zl = *max_element(feasible_zl.begin(), feasible_zl.end());
      auto idx_zl = distance(feasible_zl.begin(), find(feasible_zl.begin(), feasible_zl.end(), best_zl));
      vector<int> best_pi_solution = best_pi_solutions[idx_zl];
      int best_pi0_solution = best_pi0_solutions[idx_zl];
      vector<SCIP_Real> data_l = {estL_list[idx_zl], static_cast<SCIP_Real>(Status_l[idx_zl] == "updated_zl")};
      vector<SCIP_Real> data_r = {estR_list[idx_zl], static_cast<SCIP_Real>(Status_r[idx_zl] == "updated_zl")};
      result = {best_zl, best_pi_solution, best_pi0_solution, data_l, data_r};
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
      SCIP_CONS** addedconss = (SCIP_CONS**) malloc(num_addedCons * sizeof(SCIP_CONS*));
      if (num_addedCons == 0) {
         std::cout << "No constraints added" << std::endl;
         addedconss = nullptr;
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
SCIP_RETCODE create_child_with_constraints(
         SCIP* scip,
         SCIP_NODE* curr_Node,
         vector<SCIP_Real> pi,
         SCIP_Real pi0,
         const vector<tuple<SCIP_Real, vector<int>, int, vector<SCIP_Real>, vector<SCIP_Real>>>& final_results,
         const string& direction
        ){
   //TODO: Add the constraints to the child node
}

/*
 * Callback methods of branching rule
 */

/* TODO: Implement all necessary branching rule methods. The methods with an #if 0 ... #else #define ... are optional */


/** copy method for branchrule plugins (called when SCIP copies plugins) */

static
SCIP_DECL_BRANCHCOPY(branchCopyGeneraldisjunction)
{  /*lint --e{715}*/
   assert(scip != nullptr);
   assert(branchrule != nullptr);
   assert(strcmp(SCIPbranchruleGetName(branchrule), BRANCHRULE_NAME) == 0);

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
{
   /*Get the constraint matrix*/
   SCIP_BranchruleData LP_data = getConstraintMatrix(scip);
   vector<vector<SCIP_Real>> A = LP_data.A;
   vector<SCIP_Real> b = LP_data.b;
   vector<SCIP_Real> c = LP_data.c;

   /*Get the number of rows and columns of the constraint matrix*/
   int m = A.size();
   int n = A[0].size();
   SCIP_Real zl = SCIPgetLPObjval(scip);
   /*Create submodel*/
   SCIP_Real delta = 0.05;
   SCIP_Real zl_low = zl;
   SCIP_Real zl_high = SCIPinfinity(scip);
   SubmodelDatas submodel_datas = submodel_create(scip, A, b, c, 1, 2, delta, zl);
   vector<tuple<SCIP_Real, vector<int>, int, vector<SCIP_Real>, vector<SCIP_Real>>> final_results = submodel_solve(submodel_datas, zl_low, zl_high, m, n, delta, A, b, c);



   return SCIP_OKAY;
}
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
) {
    SCIP_BRANCHRULEDATA *branchruledata;
    SCIP_BRANCHRULE *branchrule;

//    /* create general branching rule data */
    branchruledata = nullptr;

    /* TODO: (optional) create branching rule specific data here */

    branchrule = nullptr;

    /* include branching rule */

    /* use SCIPincludeBranchrule() if you want to set all callbacks explicitly and realize (by getting compiler errors) when
     * new callbacks are added in future SCIP versions
     */
    SCIP_CALL(SCIPincludeBranchruleBasic(scip, &branchrule, BRANCHRULE_NAME, BRANCHRULE_DESC, BRANCHRULE_PRIORITY, BRANCHRULE_MAXDEPTH,
          BRANCHRULE_MAXBOUNDDIST, branchruledata) );

    /* use SCIPincludeBranchruleBasic() plus setter functions if you want to set callbacks one-by-one and your code should
     * compile independent of new callbacks being added in future SCIP versions
     */
    SCIP_CALL(SCIPincludeBranchruleBasic(scip, &branchrule, BRANCHRULE_NAME, BRANCHRULE_DESC, BRANCHRULE_PRIORITY,
                                         BRANCHRULE_MAXDEPTH, BRANCHRULE_MAXBOUNDDIST, branchruledata));

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


    /* add xyz branching rule parameters */
    /* TODO: (optional) add branching rule specific parameters with SCIPaddTypeParam() here */

    return SCIP_OKAY;
}
