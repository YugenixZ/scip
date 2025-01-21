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

/**@file   branch_gd.h
 * @ingroup BRANCHINGRULES
 * @brief  general disjunction branching rule
 * @author Yugeng Zhou
 */

/*---+----1----+----2----+----3----+----4----+----5----+----6----+----7----+----8----+----9----+----0----+----1----+----2*/

#ifndef __SCIP_BRANCH_GD_H__
#define __SCIP_BRANCH_GD_H__

#include "scip/type_retcode.h"
#include "scip/scip.h"
#include "scip/branch.h"
#include <string>
#include <vector>
using namespace std;

typedef struct {
    std::vector<std::vector<SCIP_Real>> A;   // constraint matrix
    std::vector<SCIP_Real> b;            // right hand side vector
    std::vector<SCIP_Real> c;            // objective vector
} MatrixData;

typedef struct {
    SCIP* model_sub;
    vector<SCIP_VAR*> p;
    SCIP_VAR* s_L;
    vector<SCIP_VAR*> q;
    SCIP_VAR* s_R;
    vector<SCIP_VAR*> pi_plus;
    vector<SCIP_VAR*> pi_minus;
    SCIP_VAR* pi0;
} SubmodelVars;

typedef struct {
   SCIP_Real zl;
   vector<int> pi_solution;
   int pi0_solution;
   SCIP_Real est_l;
   SCIP_Real est_r;
   string status_l;
   string status_r;
} Submodel_sols;

#ifdef __cplusplus
extern "C" {
#endif

/** creates the xyz branching rule and includes it in SCIP
 *
 *  @ingroup BranchingRuleIncludes
 */
SCIP_EXPORT
SCIP_RETCODE SCIPincludeBranchruleGeneralDisjunction(
        SCIP*                 scip                /**< SCIP data structure */
);

/**@addtogroup BRANCHINGRULES
 *
 * @{
 */

/* TODO place other public methods in this group to facilitate navigation through the documentation */

/** @} */

#ifdef __cplusplus
}
#endif

#endif
