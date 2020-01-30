/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                           */
/*                  This file is part of the program and library             */
/*         SCIP --- Solving Constraint Integer Programs                      */
/*                                                                           */
/*    Copyright (C) 2002-2020 Konrad-Zuse-Zentrum                            */
/*                            fuer Informationstechnik Berlin                */
/*                                                                           */
/*  SCIP is distributed under the terms of the ZIB Academic License.         */
/*                                                                           */
/*  You should have received a copy of the ZIB Academic License              */
/*  along with SCIP; see the file COPYING. If not visit scip.zib.de.         */
/*                                                                           */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/**@file   heur_reoptsols.h
 * @ingroup PRIMALHEURISTICS
 * @brief  reoptsols primal heuristic
 * @author Jakob Witzig
 *
 * template file for primal heuristic plugins
 */

/*---+----1----+----2----+----3----+----4----+----5----+----6----+----7----+----8----+----9----+----0----+----1----+----2*/

#ifndef __SCIP_HEUR_REOPTSOLS_H__
#define __SCIP_HEUR_REOPTSOLS_H__

#include "scip/def.h"
#include "scip/type_retcode.h"
#include "scip/type_scip.h"

#ifdef __cplusplus
extern "C" {
#endif

/** creates the reoptsols primal heuristic and includes it in SCIP
 *
 *  @ingroup PrimalHeuristicIncludes
 */
SCIP_EXPORT
SCIP_RETCODE SCIPincludeHeurReoptsols(
   SCIP*                 scip                /**< SCIP data structure */
   );

/**@addtogroup PRIMALHEURISTICS
 *
 * @{
 */

/* returns the number of checked solutions */
SCIP_EXPORT
int SCIPreoptsolsGetNCheckedsols(
   SCIP*                 scip
   );

/* returns the number of found improving solutions */
SCIP_EXPORT
int SCIPreoptsolsGetNImprovingsols(
   SCIP*                 scip
   );

/** @} */

#ifdef __cplusplus
}
#endif

#endif
