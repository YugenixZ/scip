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

/**@file   cons_benders.h
 * @ingroup CONSHDLRS
 * @brief  constraint handler for benders decomposition
 * @author Stephen J. Maher
 */

/*---+----1----+----2----+----3----+----4----+----5----+----6----+----7----+----8----+----9----+----0----+----1----+----2*/

#ifndef __SCIP_CONS_BENDERS_H__
#define __SCIP_CONS_BENDERS_H__


#include "scip/scip.h"
#include "scip/benders.h"

#ifdef __cplusplus
extern "C" {
#endif

/** creates the handler for benders constraints and includes it in SCIP
 *
 * @ingroup ConshdlrIncludes
 * */
EXTERN
SCIP_RETCODE SCIPincludeConshdlrBenders(
   SCIP*                 scip                /**< SCIP data structure */
   );

/**@addtogroup CONSHDLRS
 *
 * @{
 *
 * @name Benders Constraints
 *
 * Two constraint handlers are implemented for the generation of Benders' decomposition cuts. When included in a
 * problem, the Benders' decomposition constraint handlers generate cuts during the enforcement of LP and relaxation
 * solutions. Additionally, Benders' decomposition cuts can be generated when checking the feasibility of solutions with
 * respect to the subproblem constraints.
 *
 * This constraint handler has an enforcement priority that is less than the integer constraint handler. This means that
 * only integer feasible solutions from the LP solver are enforced by this constraint handler. This is the traditional
 * behaviour of the branch-and-check approach to Benders' decomposition. Additionally, the check priority is set low,
 * such that this expensive constraint handler is only called as a final check on primal feasible solutions.
 *
 * This constraint handler in the standard constraint handler that should be added when using Benders' decomposition.
 * Additionally, there is a flag in SCIPincludeConshdlrBenders that permits the addition of the LP constraint handler,
 * cons_benderslp. The use of both cons_benders and cons_benderslp allows the user to perform a multiphase Benders'
 * decomposition algorithm.
 *
 * @{
 */

/** the method for the enforcement of solutions
 *  This method is called from cons_benderslp and cons_benders. If the method is called from cons_benderslp, then the
 *  solutions are not guaranteed to be integer feasible. This is because the default priority is set greater than the
 *  integer constraint handler. If this method is called from cons_benders, then, because the default enforcement
 *  priority is set less than that of the integer constraint handler, then it can be assumed that the solutions are
 *  integer feasible.
 *  The checkint flag indicates whether integer feasibility can be assumed. If it is not assumed, i.e. checkint ==
 *  FALSE, then only the convex relaxations of the subproblems are solved. If integer feasibility is assumed, i.e.
 *  checkint == TRUE, then the convex relaxations and the full CIP are solved to generate Benders' cuts and check
 *  solution feasibility.
 */
EXTERN
SCIP_RETCODE SCIPconsBendersEnforceSolution(
   SCIP*                 scip,               /**< the SCIP instance */
   SCIP_SOL*             sol,                /**< the primal solution to enforce, or NULL for the current LP/pseudo sol */
   SCIP_CONSHDLR*        conshdlr,           /**< the constraint handler */
   SCIP_RESULT*          result,             /**< the result of the enforcement */
   SCIP_BENDERSENFOTYPE  type,               /**< the type of solution being enforced */
   SCIP_Bool             checkint            /**< should integrality be considered when checking the subproblems */
   );

/* @} */

/* @} */

#ifdef __cplusplus
}
#endif

#endif
