/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                           */
/*                  This file is part of the program and library             */
/*         SCIP --- Solving Constraint Integer Programs                      */
/*                                                                           */
/*    Copyright (C) 2002-2004 Tobias Achterberg                              */
/*                                                                           */
/*                  2002-2004 Konrad-Zuse-Zentrum                            */
/*                            fuer Informationstechnik Berlin                */
/*                                                                           */
/*  SCIP is distributed under the terms of the SCIP Academic Licence.        */
/*                                                                           */
/*  You should have received a copy of the SCIP Academic License             */
/*  along with SCIP; see the file COPYING. If not email to scip@zib.de.      */
/*                                                                           */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#pragma ident "@(#) $Id: type_cons.h,v 1.11 2004/05/05 14:05:03 bzfpfend Exp $"

/**@file   type_cons.h
 * @brief  type definitions for constraints and constraint handlers
 * @author Tobias Achterberg
 */

/*---+----1----+----2----+----3----+----4----+----5----+----6----+----7----+----8----+----9----+----0----+----1----+----2*/

#ifndef __TYPE_CONS_H__
#define __TYPE_CONS_H__


typedef struct Conshdlr CONSHDLR;       /**< constraint handler for a specific constraint type */
typedef struct Cons CONS;               /**< constraint data structure */
typedef struct ConshdlrData CONSHDLRDATA; /**< constraint handler data */
typedef struct ConsData CONSDATA;       /**< locally defined constraint type specific data */
typedef struct ConsSetChg CONSSETCHG;   /**< tracks additions and removals of the set of active constraints */



/** destructor of constraint handler to free constraint handler data (called when SCIP is exiting)
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 */
#define DECL_CONSFREE(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr)

/** initialization method of constraint handler (called after problem was transformed)
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 */
#define DECL_CONSINIT(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr)

/** deinitialization method of constraint handler (called before transformed problem is freed)
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 */
#define DECL_CONSEXIT(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr)

/** presolving initialization method of constraint handler (called when presolving is about to begin)
 *
 *  This method is called when the presolving process is about to begin, even if presolving is turned off.
 *  The constraint handler may use this call to initialize its presolving data, or to modify its constraints
 *  before the presolving process begins.
 *  Necessary constraint modifications that have to be performed even if presolving is turned off should be done here
 *  or in the presolving deinitialization call.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - conss           : array of constraints in transformed problem
 *  - nconss          : number of constraints in transformed problem
 *
 *  output:
 *  - result          : pointer to store the result of the call
 *
 *  possible return values for *result:
 *  - SCIP_UNBOUNDED  : at least one variable is not bounded by any constraint in obj. direction -> problem is unbounded
 *  - SCIP_CUTOFF     : at least one constraint is infeasible in the variable's bounds -> problem is infeasible
 *  - SCIP_FEASIBLE   : no infeasibility nor unboundness could be found
 */
#define DECL_CONSINITPRE(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS** conss, int nconss, RESULT* result)

/** presolving deinitialization method of constraint handler (called after presolving has been finished)
 *
 *  This method is called after the presolving has been finished, even if presolving is turned off.
 *  The constraint handler may use this call e.g. to clean up its presolving data, or to finally modify its constraints
 *  before the branch and bound process begins.
 *  Necessary constraint modifications that have to be performed even if presolving is turned off should be done here
 *  or in the presolving initialization call.
 *  Besides necessary modifications and clean up, no time consuming operations should be done.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - conss           : final array of constraints in transformed problem
 *  - nconss          : final number of constraints in transformed problem
 *
 *  output:
 *  - result          : pointer to store the result of the call
 *
 *  possible return values for *result:
 *  - SCIP_UNBOUNDED  : at least one variable is not bounded by any constraint in obj. direction -> problem is unbounded
 *  - SCIP_CUTOFF     : at least one constraint is infeasible in the variable's bounds -> problem is infeasible
 *  - SCIP_FEASIBLE   : no infeasibility nor unboundness could be found
 */
#define DECL_CONSEXITPRE(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS** conss, int nconss, RESULT* result)

/** solving process initialization method of constraint handler (called when branch and bound process is about to begin)
 *
 *  This method is called when the presolving was finished and the branch and bound process is about to begin.
 *  The constraint handler may use this call to initialize its branch and bound specific data.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - conss           : array of constraints of the constraint handler
 *  - nconss          : number of constraints of the constraint handler
 */
#define DECL_CONSINITSOL(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS** conss, int nconss)

/** solving process deinitialization method of constraint handler (called before branch and bound process data is freed)
 *
 *  This method is called before the branch and bound process is freed.
 *  The constraint handler should use this call to clean up its branch and bound data, in particular to release
 *  all LP rows that he has created or captured.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - conss           : array of constraints of the constraint handler
 *  - nconss          : number of constraints of the constraint handler
 */
#define DECL_CONSEXITSOL(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS** conss, int nconss)

/** frees specific constraint data
 *
 *  WARNING! There may exist unprocessed events. For example, a variable's bound may have been already changed, but
 *  the corresponding bound change event was not yet processed.
 *
 *  input:
 *    scip            : SCIP main data structure
 *    conshdlr        : the constraint handler itself
 *    cons            : the constraint belonging to the constraint data
 *    consdata        : pointer to the constraint data to free
 */
#define DECL_CONSDELETE(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS* cons, CONSDATA** consdata)

/** transforms constraint data into data belonging to the transformed problem
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - sourcecons      : source constraint to transform
 *  - targetcons      : pointer to store created target constraint
 */ 
#define DECL_CONSTRANS(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS* sourcecons, CONS** targetcons)

/** LP initialization method of constraint handler
 *
 *  Puts the LP relaxations of all "initial" constraints into the LP. The method should scan the constraints
 *  array for constraints that are marked initial via calls to SCIPconsIsInitial() and put the LP relaxation
 *  of all initial constraints to the LP with calls to SCIPaddCut().
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - conss           : array of constraints to process
 *  - nconss          : number of constraints to process
 */
#define DECL_CONSINITLP(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS** conss, int nconss)

/** separation method of constraint handler
 *
 *  Separates all constraints of the constraint handler. The method is called in the LP solution loop,
 *  which means that a valid LP solution exists.
 *
 *  The first nusefulconss constraints are the ones, that are identified to likely be violated. The separation
 *  method should process only the useful constraints in most runs, and only occasionally the remaining
 *  nconss - nusefulconss constraints.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - conss           : array of constraints to process
 *  - nconss          : number of constraints to process
 *  - nusefulconss    : number of useful (non-obsolete) constraints to process
 *  - result          : pointer to store the result of the separation call
 *
 *  possible return values for *result:
 *  - SCIP_CUTOFF     : at least one constraint is infeasible in the variable's bounds -> node is infeasible
 *  - SCIP_SEPARATED  : at least one cutting plane was generated
 *  - SCIP_REDUCEDDOM : no cutting plane was generated, but at least one domain was reduced
 *  - SCIP_CONSADDED  : no cutting plane or domain reductions, but at least one additional constraint was generated
 *  - SCIP_DIDNOTFIND : the separator searched, but did not find a cutting plane
 *  - SCIP_DIDNOTRUN  : the separator was skipped
 */
#define DECL_CONSSEPA(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS** conss, int nconss, int nusefulconss, \
                                    RESULT* result)

/** constraint enforcing method of constraint handler for LP solutions
 *
 *  The method is called at the end of the node processing loop for a node where the LP was solved.
 *  The LP solution has to be checked for feasibility. If possible, an infeasibility should be resolved by
 *  branching, reducing a variable's domain to exclude the solution or separating the solution with a valid
 *  cutting plane.
 *
 *  The enforcing methods of the active constraint handlers are called in decreasing order of their enforcing
 *  priorities until the first constraint handler returned with the value SCIP_CUTOFF, SCIP_SEPARATED,
 *  SCIP_REDUCEDDOM, SCIP_CONSADDED, or SCIP_BRANCHED.
 *  The integrality constraint handler has an enforcing priority of zero. A constraint handler which can
 *  (or wants) to enforce its constraints only for integral solutions should have a negative enforcing priority
 *  (e.g. the alldiff-constraint can only operate on integral solutions).
 *  A constraint handler which wants to incorporate its own branching strategy even on non-integral
 *  solutions must have an enforcing priority greater than zero (e.g. the SOS-constraint incorporates
 *  SOS-branching on non-integral solutions).
 *
 *  The first nusefulconss constraints are the ones, that are identified to likely be violated. The enforcing
 *  method should process the useful constraints first. The other nconss - nusefulconss constraints should only
 *  be enforced, if no violation was found in the useful constraints.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - conss           : array of constraints to process
 *  - nconss          : number of constraints to process
 *  - nusefulconss    : number of useful (non-obsolete) constraints to process
 *  - result          : pointer to store the result of the enforcing call
 *
 *  possible return values for *result:
 *  - SCIP_CUTOFF     : at least one constraint is infeasible, and it cannot be resolved -> node is infeasible
 *  - SCIP_SEPARATED  : a cutting plane was generated to resolve an infeasibility
 *  - SCIP_REDUCEDDOM : no cutting plane was generated, but at least one domain was reduced to resolve an infeasibility
 *  - SCIP_CONSADDED  : no cutting plane or domain reductions, but a constraint was generated to resolve an infeasibility
 *  - SCIP_BRANCHED   : no changes were made to the problem, but a branching was applied to resolve an infeasibility
 *  - SCIP_INFEASIBLE : at least one constraint is infeasible, but it was not resolved
 *  - SCIP_FEASIBLE   : all constraints of the handler are feasible
 */
#define DECL_CONSENFOLP(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS** conss, int nconss, int nusefulconss, \
                                      RESULT* result)

/** constraint enforcing method of constraint handler for pseudo solutions
 *
 *  The method is called at the end of the node processing loop for a node where the LP was not solved.
 *  The pseudo solution has to be checked for feasibility. If possible, an infeasibility should be resolved by
 *  branching, reducing a variable's domain to exclude the solution or adding an additional constraint.
 *  Separation is not possible, since the LP is not processed at the current node. All LP informations like
 *  LP solution, slack values, or reduced costs are invalid and must not be accessed.
 *
 *  Like in the enforcing method for LP solutions, the enforcing methods of the active constraint handlers are
 *  called in decreasing order of their enforcing priorities until the first constraint handler returned with
 *  the value SCIP_CUTOFF, SCIP_REDUCEDDOM, SCIP_CONSADDED, SCIP_BRANCHED, or SCIP_SOLVELP.
 *
 *  The first nusefulconss constraints are the ones, that are identified to likely be violated. The enforcing
 *  method should process the useful constraints first. The other nconss - nusefulconss constraints should only
 *  be enforced, if no violation was found in the useful constraints.
 *
 *  If the pseudo solution's objective value is lower than the lower bound of the node, it cannot be feasible
 *  and the enforcing method may skip it's check and set *result to SCIP_DIDNOTRUN. However, it can also process
 *  its constraints and return any other possible result code.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - conss           : array of constraints to process
 *  - nconss          : number of constraints to process
 *  - nusefulconss    : number of useful (non-obsolete) constraints to process
 *  - objinfeasible   : is the solution infeasible anyway due to violating lower objective bound?
 *  - result          : pointer to store the result of the enforcing call
 *
 *  possible return values for *result:
 *  - SCIP_DIDNOTRUN  : the enforcement was skipped (only possible, if objinfeasible is true)
 *  - SCIP_CUTOFF     : at least one constraint is infeasible, and it cannot be resolved -> node is infeasible
 *  - SCIP_REDUCEDDOM : at least one domain was reduced to resolve an infeasibility
 *  - SCIP_CONSADDED  : no domain reductions, but a constraint was generated to resolve an infeasibility
 *  - SCIP_BRANCHED   : no changes were made to the problem, but a branching was applied to resolve an infeasibility
 *  - SCIP_SOLVELP    : at least one constraint is infeasible, and this can only be resolved by solving the LP
 *  - SCIP_INFEASIBLE : at least one constraint is infeasible, but it was not resolved
 *  - SCIP_FEASIBLE   : all constraints of the handler are feasible
 */
#define DECL_CONSENFOPS(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS** conss, int nconss, int nusefulconss, \
                                      Bool objinfeasible, RESULT* result)

/** feasibility check method of constraint handler for integral solutions
 *
 *  The given solution has to be checked for feasibility.
 *  
 *  The check methods of the active constraint handlers are called in decreasing order of their check
 *  priorities until the first constraint handler returned with the result SCIP_INFEASIBLE.
 *  The integrality constraint handler has a check priority of zero. A constraint handler which can
 *  (or wants) to check its constraints only for integral solutions should have a negative check priority
 *  (e.g. the alldiff-constraint can only operate on integral solutions).
 *  A constraint handler which wants to check feasibility even on non-integral solutions must have a
 *  check priority greater than zero (e.g. if the check is much faster than testing all variables for
 *  integrality).
 *
 *  In some cases, integrality conditions or rows of the current LP don't have to be checked, because their
 *  feasibility is already checked or implicitly given. In these cases, 'checkintegrality' or
 *  'checklprows' is FALSE.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - conss           : array of constraints to process
 *  - nconss          : number of constraints to process
 *  - sol             : the solution to check feasibility for
 *  - checkintegrality: has integrality to be checked?
 *  - checklprows     : have current LP rows to be checked?
 *  - result          : pointer to store the result of the feasibility checking call
 *
 *  possible return values for *result:
 *  - SCIP_INFEASIBLE : at least one constraint of the handler is infeasible
 *  - SCIP_FEASIBLE   : all constraints of the handler are feasible
 */
#define DECL_CONSCHECK(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS** conss, int nconss, SOL* sol, \
                                     Bool checkintegrality, Bool checklprows, RESULT* result)

/** domain propagation method of constraint handler
 *
 *  The first nusefulconss constraints are the ones, that are identified to likely be violated. The propagation
 *  method should process only the useful constraints in most runs, and only occasionally the remaining
 *  nconss - nusefulconss constraints.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - conss           : array of constraints to process
 *  - nconss          : number of constraints to process
 *  - nusefulconss    : number of useful (non-obsolete) constraints to process
 *  - result          : pointer to store the result of the propagation call
 *
 *  possible return values for *result:
 *  - SCIP_CUTOFF     : at least one constraint is infeasible for the current domains -> node is infeasible
 *  - SCIP_REDUCEDDOM : at least one domain reduction was found
 *  - SCIP_DIDNOTFIND : the propagator searched but did not find any domain reductions
 *  - SCIP_DIDNOTRUN  : the propagator was skipped
 */
#define DECL_CONSPROP(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS** conss, int nconss, int nusefulconss, \
                                    RESULT* result)

/** presolving method of constraint handler
 *
 *  The presolver should go through the variables and constraints and tighten the domains or
 *  constraints. Each tightening should increase the given total number of changes.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - conss           : array of constraints to process
 *  - nconss          : number of constraints to process
 *  - nrounds         : number of presolving rounds already done
 *  - nnewfixedvars   : number of variables fixed since the last call to the presolving method
 *  - nnewaggrvars    : number of variables aggregated since the last call to the presolving method
 *  - nnewchgvartypes : number of variable type changes since the last call to the presolving method
 *  - nnewchgbds      : number of variable bounds tightend since the last call to the presolving method
 *  - nnewholes       : number of domain holes added since the last call to the presolving method
 *  - nnewdelconss    : number of deleted constraints since the last call to the presolving method
 *  - nnewupgdconss   : number of upgraded constraints since the last call to the presolving method
 *  - nnewchgcoefs    : number of changed coefficients since the last call to the presolving method
 *  - nnewchgsides    : number of changed left or right hand sides since the last call to the presolving method
 *
 *  input/output:
 *  - nfixedvars      : pointer to count total number of variables fixed of all presolvers
 *  - naggrvars       : pointer to count total number of variables aggregated of all presolvers
 *  - nchgvartypes    : pointer to count total number of variable type changes of all presolvers
 *  - nchgbds         : pointer to count total number of variable bounds tightend of all presolvers
 *  - naddholes       : pointer to count total number of domain holes added of all presolvers
 *  - ndelconss       : pointer to count total number of deleted constraints of all presolvers
 *  - nupgdconss      : pointer to count total number of upgraded constraints of all presolvers
 *  - nchgcoefs       : pointer to count total number of changed coefficients of all presolvers
 *  - nchgsides       : pointer to count total number of changed left/right hand sides of all presolvers
 *
 *  output:
 *  - result          : pointer to store the result of the presolving call
 *
 *  possible return values for *result:
 *  - SCIP_UNBOUNDED  : at least one variable is not bounded by any constraint in obj. direction -> problem is unbounded
 *  - SCIP_CUTOFF     : at least one constraint is infeasible in the variable's bounds -> problem is infeasible
 *  - SCIP_SUCCESS    : the presolver found a reduction
 *  - SCIP_DIDNOTFIND : the presolver searched, but did not find a presolving change
 *  - SCIP_DIDNOTRUN  : the presolver was skipped
 */
#define DECL_CONSPRESOL(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS** conss, int nconss, int nrounds, \
   int nnewfixedvars, int nnewaggrvars, int nnewchgvartypes, int nnewchgbds, int nnewholes, \
   int nnewdelconss, int nnewupgdconss, int nnewchgcoefs, int nnewchgsides,                 \
   int* nfixedvars, int* naggrvars, int* nchgvartypes, int* nchgbds, int* naddholes,        \
   int* ndelconss, int* nupgdconss, int* nchgcoefs, int* nchgsides, RESULT* result)

/** conflict variable resolving method of constraint handler
 *
 *  This method is called during conflict analysis. If the conflict handler wants to support conflict analysis,
 *  it should call SCIPinferBinVar() in domain propagation in order to fix binary variables to deduced values.
 *  In this call, the handler provides the constraint, that deduced the variable's assignment, and an integer
 *  value "inferinfo" that can be arbitrarily chosen.
 *  The conflict variable resolving method must then be implemented, to provide the "reasons" for the variable
 *  assignment, i.e. the fixed binary variables, that forced the constraint to set the conflict variable to its
 *  current value. It can use the "inferinfo" tag to identify its own propagation rule and thus identify the
 *  "reason" variables. The variables that form the reason of the assignment must then be provided by calls to
 *  SCIPaddConflictVar() in the conflict variable resolving method.
 *
 *  For example, the logicor constraint c = "x or y or z" fixes variable z to TRUE, if both, x and y, are assigned
 *  to FALSE. It uses SCIPinferBinVar(scip, z, TRUE, c) to apply this assignment. In the conflict analysis, the
 *  constraint handler may be asked to resolve variable z with constraint c. With a call to SCIPvarGetLbLocal(z), 
 *  the handler can find out, that variable z is currently assigned to TRUE, and should call 
 *  SCIPaddConflictVar(scip, x) and SCIPaddConflictVar(scip, y) to tell SCIP, that the assignments to x and y were
 *  the reason for the deduction of z.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - cons            : the constraint that deduced the assignment of the conflict variable
 *  - infervar        : the binary conflict variable that has to be resolved
 *  - inferinfo       : the user information passed to the corresponding SCIPinferBinVar() call
 *
 *  output:
 *  - result          : pointer to store the result of the presolving call
 *
 *  possible return values for *result:
 *  - SCIP_SUCCESS    : the conflict variable has been successfully resolved by adding all reason variables
 *  - SCIP_DIDNOTFIND : the conflict variable could not be resolved and has to be put into the conflict set
 */
#define DECL_CONSRESCVAR(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS* cons, VAR* infervar, int inferinfo, \
                                       RESULT* result)

/** variable rounding lock method of constraint handler
 *
 *  This method is called, after a constraint is added to the transformed problem. It should lock the rounding
 *  of all associated variables with calls to SCIPvarLock(), depending on the way, the variable is involved
 *  in the constraint:
 *  - If the constraint may get violated by decreasing the value of a variable, it should call
 *    SCIPvarLock(var, nlockspos, nlocksneg), saying that rounding down is potentially rendering the
 *    (positive) constraint infeasible and rounding up is potentially rendering the negation of the constraint
 *    infeasible.
 *  - If the constraint may get violated by increasing the value of a variable, it should call
 *    SCIPvarLock(var, nlocksneg, nlockspos), saying that rounding down is potentially rendering the
 *    constraint's negation infeasible and rounding up is potentially rendering the constraint itself
 *    infeasible.
 *  - If the constraint may get violated by changing the variable in any direction, it should call
 *    SCIPvarLock(var, nlockspos + nlocksneg, nlockspos + nlocksneg).
 *
 *  Consider the linear constraint "3x -5y +2z <= 7" as an example. The variable rounding lock method of the
 *  linear constraint handler should call SCIPvarLock(x, nlocksneg, nlockspos), 
 *  SCIPvarLock(y, nlockspos, nlocksneg) and SCIPvarLock(z, nlocksneg, nlockspos) to tell SCIP, that
 *  rounding up of x and z and rounding down of y can destroy the feasibility of the constraint, while rounding
 *  down of x and z and rounding up of y can destroy the feasibility of the constraint's negation "3x -5y +2z > 7".
 *  A linear constraint "2 <= 3x -5y +2z <= 7" should call
 *  SCIPvarLock(..., nlockspos + nlocksneg, nlockspos + nlocksneg) on all variables, since rounding in both
 *  direction of each variable can destroy both the feasibility of the constraint and it's negation
 *  "3x -5y +2z < 2  or  3x -5y +2z > 7".
 *
 *  If the constraint itself contains other constraints as sub constraints (e.g. the "or" constraint concatenation
 *  "c(x) or d(x)"), the rounding lock methods of these constraints should be called in a proper way.
 *  - If the constraint may get violated by the violation of the sub constraint c, it should call
 *    SCIPlockConsVars(scip, c, nlockspos, nlocksneg), saying that infeasibility of c may lead to infeasibility of
 *    the (positive) constraint, and infeasibility of c's negation (i.e. feasibility of c) may lead to infeasibility
 *    of the constraint's negation (i.e. feasibility of the constraint).
 *  - If the constraint may get violated by the feasibility of the sub constraint c, it should call
 *    SCIPlockConsVars(scip, c, nlocksneg, nlockspos), saying that infeasibility of c may lead to infeasibility of
 *    the constraint's negation (i.e. feasibility of the constraint), and infeasibility of c's negation (i.e. feasibility
 *    of c) may lead to infeasibility of the (positive) constraint.
 *  - If the constraint may get violated by any change in the feasibility of the sub constraint c, it should call
 *    SCIPlockConsVars(scip, c, nlockspos + nlocksneg, nlockspos + nlocksneg).
 *
 *  Consider the or concatenation "c(x) or d(x)". The variable rounding lock method of the or constraint handler
 *  should call SCIPlockConsVars(scip, c, nlockspos, nlocksneg) and SCIPlockConsVars(scip, d, nlockspos, nlocksneg)
 *  to tell SCIP, that infeasibility of c and d can lead to infeasibility of "c(x) or d(x)".
 *
 *  As a second example, consider the equivalence constraint "y <-> c(x)" with variable y and constraint c. The
 *  constraint demands, that y == 1 if and only if c(x) is satisfied. The variable lock method of the corresponding
 *  constraint handler should call SCIPvarLock(y, nlockspos + nlocksneg, nlockspos + nlocksneg) and
 *  SCIPlockConsVars(scip, c, nlockspos + nlocksneg, nlockspos + nlocksneg), because any modification to the
 *  value of y or to the feasibility of c can alter the feasibility of the equivalence constraint.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - cons            : the constraint that should lock rounding of its variables
 *  - nlockspos       : number of times, the roundings should be locked for the constraint
 *  - nlocksneg       : number of times, the roundings should be locked for the constraint's negation
 */
#define DECL_CONSLOCK(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS* cons, int nlockspos, int nlocksneg)

/** variable rounding unlock method of constraint handler
 *
 *  This method is called, before a constraint is deleted from the transformed problem. It should unlock the rounding
 *  of all associated variables with calls to SCIPvarUnlock(), depending on the way, the variable is involved
 *  in the constraint:
 *  - If the constraint may get violated by decreasing the value of a variable, it should call
 *    SCIPvarUnlock(var, nunlockpos, nunlockneg).
 *  - If the constraint may get violated by increasing the value of a variable, it should call
 *    SCIPvarUnlock(var, nunlockneg, nunlockpos).
 *  - If the constraint may get violated by changing the variable in any direction, it should call
 *    SCIPvarUnlock(var, nunlockpos + nunlockneg, nunlockpos + nunlockneg).
 *
 *  If the constraint itself contains other constraints as sub constraints, the rounding lock methods of these
 *  constraints should be called in a proper way.
 *  - If the constraint may get violated by the violation of the sub constraint c, it should call
 *    SCIPunlockConsVars(scip, c, nunlockspos, nunlocksneg).
 *  - If the constraint may get violated by the feasibility of the sub constraint c, it should call
 *    SCIPunlockConsVars(scip, c, nunlocksneg, nunlockspos).
 *  - If the constraint may get violated by any change in the feasibility of the sub constraint c, it should call
 *    SCIPunlockConsVars(scip, c, nunlockspos + nunlocksneg, nunlockspos + nunlocksneg).
 *
 *  The unlocking method should exactly undo all lockings performed in the locking method of the constraint handler.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - cons            : the constraint that should unlock rounding of its variables
 *  - nunlockspos     : number of times, the roundings should be unlocked for the constraint
 *  - nunlocksneg     : number of times, the roundings should be unlocked for the constraint's negation
 */
#define DECL_CONSUNLOCK(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS* cons, int nunlockspos, int nunlocksneg)

/** constraint activation notification method of constraint handler
 *
 *  WARNING! There may exist unprocessed events. For example, a variable's bound may have been already changed, but
 *  the corresponding bound change event was not yet processed.
 *
 *  This method is always called after a constraint of the constraint handler was activated. The constraint
 *  handler may use this call to update his own (statistical) data.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - cons            : the constraint that has been activated
 */
#define DECL_CONSACTIVE(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS* cons)

/** constraint deactivation notification method of constraint handler
 *
 *  WARNING! There may exist unprocessed events. For example, a variable's bound may have been already changed, but
 *  the corresponding bound change event was not yet processed.
 *
 *  This method is always called before a constraint of the constraint handler is deactivated. The constraint
 *  handler may use this call to update his own (statistical) data.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - cons            : the constraint that will be deactivated
 */
#define DECL_CONSDEACTIVE(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS* cons)

/** constraint enabling notification method of constraint handler
 *
 *  WARNING! There may exist unprocessed events. For example, a variable's bound may have been already changed, but
 *  the corresponding bound change event was not yet processed.
 *
 *  This method is always called after a constraint of the constraint handler was enabled. The constraint
 *  handler may use this call to update his own (statistical) data.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - cons            : the constraint that has been enabled
 */
#define DECL_CONSENABLE(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS* cons)

/** constraint disabling notification method of constraint handler
 *
 *  WARNING! There may exist unprocessed events. For example, a variable's bound may have been already changed, but
 *  the corresponding bound change event was not yet processed.
 *
 *  This method is always called before a constraint of the constraint handler is disabled. The constraint
 *  handler may use this call to update his own (statistical) data.
 *
 *  input:
 *  - scip            : SCIP main data structure
 *  - conshdlr        : the constraint handler itself
 *  - cons            : the constraint that will be disabled
 */
#define DECL_CONSDISABLE(x) RETCODE x (SCIP* scip, CONSHDLR* conshdlr, CONS* cons)



#include "def.h"
#include "type_retcode.h"
#include "type_result.h"
#include "type_var.h"
#include "type_sol.h"
#include "type_scip.h"


#endif
