/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                           */
/*                  This file is part of the program and library             */
/*         SCIP --- Solving Constraint Integer Programs                      */
/*                                                                           */
/*    Copyright (C) 2002-2017 Konrad-Zuse-Zentrum                            */
/*                            fuer Informationstechnik Berlin                */
/*                                                                           */
/*  SCIP is distributed under the terms of the ZIB Academic License.         */
/*                                                                           */
/*  You should have received a copy of the ZIB Academic License              */
/*  along with SCIP; see the file COPYING. If not email to scip@zib.de.      */
/*                                                                           */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/**@file   reader_mps.h
 * @ingroup FILEREADERS
 * @brief  (extended) MPS file reader
 * @author Thorsten Koch
 * @author Tobias Achterberg
 *
 * This reader allows to parse and write MPS files with linear and quadratic constraints and objective,
 * special ordered sets of type 1 and 2, indicators on linear constraints, and semicontinuous variables.
 * For writing, linear (general and specialized), indicator, quadratic, second order cone, and
 * special ordered set constraints are supported.
 *
 * See http://en.wikipedia.org/wiki/MPS_%28format%29 for a description.
 */

/*---+----1----+----2----+----3----+----4----+----5----+----6----+----7----+----8----+----9----+----0----+----1----+----2*/

#ifndef __SCIP_READER_MPS_H__
#define __SCIP_READER_MPS_H__


#include "scip/scip.h"

#ifdef __cplusplus
extern "C" {
#endif

/** includes the mps file reader into SCIP
 *
 *  @ingroup FileReaderIncludes
 */
EXTERN
SCIP_RETCODE SCIPincludeReaderMps(
   SCIP*                 scip                /**< SCIP data structure */
   );

/**@addtogroup FILEREADERS
 *
 * @{
 */

/** reads problem from file */
EXTERN
SCIP_RETCODE SCIPreadMps(
   SCIP*                 scip,               /**< SCIP data structure */
   SCIP_READER*          reader,             /**< the file reader itself */
   const char*           filename,           /**< full path and name of file to read, or NULL if stdin should be used */
   SCIP_RESULT*          result,             /**< pointer to store the result of the file reading call */
   const char***         varnames,           /**< storage for the variable names, or NULL */
   const char***         consnames,          /**< storage for the constraint names, or NULL */
   int*                  varnamessize,       /**< the size of the variable names storage, or NULL */
   int*                  consnamessize,      /**< the size of the constraint names storage, or NULL */
   int*                  nvarnames,          /**< the number of stored variable names, or NULL */
   int*                  nconsnames          /**< the number of stored constraint names, or NULL */
   );

/** writes problem to file */
EXTERN
SCIP_RETCODE SCIPwriteMps(
   SCIP*                 scip,               /**< SCIP data structure */
   SCIP_READER*          reader,             /**< the file reader itself */
   FILE*                 file,               /**< output file, or NULL if standard output should be used */
   const char*           name,               /**< problem name */
   SCIP_Bool             transformed,        /**< TRUE iff problem is the transformed problem */
   SCIP_OBJSENSE         objsense,           /**< objective sense */
   SCIP_Real             objscale,           /**< scalar applied to objective function; external objective value is
                                              * extobj = objsense * objscale * (intobj + objoffset) */
   SCIP_Real             objoffset,          /**< objective offset from bound shifting and fixing */
   SCIP_VAR**            vars,               /**< array with active variables ordered binary, integer, implicit, continuous */
   int                   nvars,              /**< number of active variables in the problem */
   int                   nbinvars,           /**< number of binary variables */
   int                   nintvars,           /**< number of general integer variables */
   int                   nimplvars,          /**< number of implicit integer variables */
   int                   ncontvars,          /**< number of continuous variables */
   SCIP_VAR**            fixedvars,          /**< array with fixed and aggregated variables */
   int                   nfixedvars,         /**< number of fixed and aggregated variables in the problem */
   SCIP_CONS**           conss,              /**< array with constraints of the problem */
   int                   nconss,             /**< number of constraints in the problem */
   SCIP_RESULT*          result              /**< pointer to store the result of the file writing call */
   );

/* @} */

#ifdef __cplusplus
}
#endif

#endif
