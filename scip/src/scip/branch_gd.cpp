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

#include <assert.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <scip/scip_var.h>
#include <scip/scip_branch.h>
#include <scip/branch_gd.h>
#include <objscip/objbranchrule.h>
#include <scip/scipdefplugins.h>
#include <cassert>

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
      scip::ObjBranchrule *objbranchrule; /**< branching rule object */
      SCIP_Bool deleteobject; /**< should the branching rule object be deleted when branching rule is freed? */
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
         LP_data.A.push_back(vector<SCIP_Real>(ncols));
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
void SubModelSolve(
   SCIP* scip,
   SCIP_BranchruleData A,
   SCIP_BranchruleData b,
   SCIP_BranchruleData c,
   SCIP_Real zl,
   SCIP_Real M,
   SCIP_Real k,
   SCIP_Real delta
){
   SCIP_Real zl_low = zl;
   if (zl > 0){
      SCIP_Real zl_high = zl * 2;

   }
}


/*
 * Callback methods of branching rule
 */

/* TODO: Implement all necessary branching rule methods. The methods with an #if 0 ... #else #define ... are optional */


/** copy method for branchrule plugins (called when SCIP copies plugins) */
#if 0
static
SCIP_DECL_BRANCHCOPY(branchCopyGeneraldisjunction)
{  /*lint --e{715}*/
   SCIPerrorMessage("method of general disjunction branching rule not implemented yet\n");
   SCIPABORT(); /*lint --e{527}*/

   return SCIP_OKAY;
}
{  /*lint --e{715}*/
   SCIPerrorMessage("method of xyz branching rule not implemented yet\n");
   SCIPABORT(); /*lint --e{527}*/

   return SCIP_OKAY;
}
#else
#define branchCopyXyz NULL
#endif

/** destructor of branching rule to free user data (called when SCIP is exiting) */
#if 0
static
SCIP_DECL_BRANCHFREE(branchFreeXyz)
{  /*lint --e{715}*/
   SCIPerrorMessage("method of xyz branching rule not implemented yet\n");
   SCIPABORT(); /*lint --e{527}*/

   return SCIP_OKAY;
}
#else
#define branchFreeXyz NULL
#endif


/** initialization method of branching rule (called after problem was transformed) */
#if 0
static
SCIP_DECL_BRANCHINIT(branchInitXyz)
{  /*lint --e{715}*/
   SCIPerrorMessage("method of xyz branching rule not implemented yet\n");
   SCIPABORT(); /*lint --e{527}*/

   return SCIP_OKAY;
}
#else
#define branchInitXyz NULL
#endif


/** deinitialization method of branching rule (called before transformed problem is freed) */
#if 0
static
SCIP_DECL_BRANCHEXIT(branchExitXyz)
{  /*lint --e{715}*/

   SCIPerrorMessage("method of xyz branching rule not implemented yet\n");
   SCIPABORT(); /*lint --e{527}*/

   return SCIP_OKAY;
}
#else
#define branchExitXyz NULL
#endif


/** solving process initialization method of branching rule (called when branch and bound process is about to begin) */
#if 0
static
SCIP_DECL_BRANCHINITSOL(branchInitsolXyz)
{  /*lint --e{715}*/
   SCIPerrorMessage("method of xyz branching rule not implemented yet\n");
   SCIPABORT(); /*lint --e{527}*/

   return SCIP_OKAY;
}
#else
#define branchInitsolXyz NULL
#endif


/** solving process deinitialization method of branching rule (called before branch and bound process data is freed) */
#if 0
static
SCIP_DECL_BRANCHEXITSOL(branchExitsolXyz)
{  /*lint --e{715}*/
   SCIPerrorMessage("method of xyz branching rule not implemented yet\n");
   SCIPABORT(); /*lint --e{527}*/

   return SCIP_OKAY;
}
#else
#define branchExitsolXyz NULL
#endif


/** branching execution method for fractional LP solutions */
#if 0
static
SCIP_DECL_BRANCHEXECLP(branchExeclpgd)
{
   /*Get the constraint matrix*/

   SCIPerrorMessage("method of general disjunction branching rule not implemented yet\n");
   SCIPABORT();
   return SCIP_OKAY;
}
#else
#define branchExeclpXyz NULL
#endif


/** branching execution method for external candidates */
#if 0
static
SCIP_DECL_BRANCHEXECEXT(branchExecextXyz)
{  /*lint --e{715}*/

   SCIPerrorMessage("method of xyz branching rule not implemented yet\n");
   SCIPABORT(); /*lint --e{527}*/

   return SCIP_OKAY;
}
#else
#define branchExecextXyz NULL
#endif


/** branching execution method for not completely fixed pseudo solutions */
#if 0
static
SCIP_DECL_BRANCHEXECPS(branchExecpsXyz)
{  /*lint --e{715}*/
   SCIPerrorMessage("method of xyz branching rule not implemented yet\n");
   SCIPABORT(); /*lint --e{527}*/

   return SCIP_OKAY;
}
#else
#define branchExecpsXyz NULL
#endif


/*
 * branching rule specific interface methods
 */

/** creates the xyz branching rule and includes it in SCIP */
SCIP_RETCODE SCIPincludeBranchruleGeneraldisjunction(
        SCIP *scip                /**< SCIP data structure */
) {
    SCIP_BRANCHRULEDATA *branchruledata;
    SCIP_BRANCHRULE *branchrule;

//    /* create xyz branching rule data */
    branchruledata = NULL;
    /* TODO: (optional) create branching rule specific data here */

    branchrule = NULL;

    /* include branching rule */

    /* use SCIPincludeBranchrule() if you want to set all callbacks explicitly and realize (by getting compiler errors) when
     * new callbacks are added in future SCIP versions
     */
    SCIP_CALL( SCIPincludeBranchrule(scip, BRANCHRULE_NAME, BRANCHRULE_DESC, BRANCHRULE_PRIORITY, BRANCHRULE_MAXDEPTH,
          BRANCHRULE_MAXBOUNDDIST,
          branchCopyXyz, branchFreeXyz, branchInitXyz, branchExitXyz, branchInitsolXyz, branchExitsolXyz,
          branchExeclpXyz, branchExecextXyz, branchExecpsXyz, branchruledata) );

    /* use SCIPincludeBranchruleBasic() plus setter functions if you want to set callbacks one-by-one and your code should
     * compile independent of new callbacks being added in future SCIP versions
     */
    SCIP_CALL(SCIPincludeBranchruleBasic(scip, &branchrule, BRANCHRULE_NAME, BRANCHRULE_DESC, BRANCHRULE_PRIORITY,
                                         BRANCHRULE_MAXDEPTH, BRANCHRULE_MAXBOUNDDIST, branchruledata));

    assert(branchrule != NULL);

    /* set non fundamental callbacks via setter functions */
    SCIP_CALL(SCIPsetBranchruleCopy(scip, branchrule, branchCopyXyz));
    SCIP_CALL(SCIPsetBranchruleFree(scip, branchrule, branchFreeXyz));
    SCIP_CALL(SCIPsetBranchruleInit(scip, branchrule, branchInitXyz));
    SCIP_CALL(SCIPsetBranchruleExit(scip, branchrule, branchExitXyz));
    SCIP_CALL(SCIPsetBranchruleInitsol(scip, branchrule, branchInitsolXyz));
    SCIP_CALL(SCIPsetBranchruleExitsol(scip, branchrule, branchExitsolXyz));
    SCIP_CALL(SCIPsetBranchruleExecLp(scip, branchrule, branchExeclpXyz));
    SCIP_CALL(SCIPsetBranchruleExecExt(scip, branchrule, branchExecextXyz));
    SCIP_CALL(SCIPsetBranchruleExecPs(scip, branchrule, branchExecpsXyz));


    /* add xyz branching rule parameters */
    /* TODO: (optional) add branching rule specific parameters with SCIPaddTypeParam() here */

    return SCIP_OKAY;
}
