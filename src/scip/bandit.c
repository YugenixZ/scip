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

/**@file   bandit.c
 * @brief  internal API of bandit algorithms and bandit virtual function tables
 * @author Gregor Hendel
 */

/*---+----1----+----2----+----3----+----4----+----5----+----6----+----7----+----8----+----9----+----0----+----1----+----2*/

#include <assert.h>
#include <string.h>
#include "scip/bandit.h"
#include "scip/struct_bandit.h"
#include "struct_set.h"
#include "scip/set.h"

#define DEFAULT_SEED 999

/** creates a bandit algorithm */
SCIP_RETCODE SCIPbanditCreate(
   SCIP_BANDIT**         bandit,             /**< pointer to bandit algorithm data structure */
   SCIP_BANDITVTABLE*    banditvtable,       /**< virtual table for this bandit algorithm */
   SCIP_SET*             set,                /**< global SCIP settings */
   BMS_BLKMEM*           blkmem,             /**< block memory for parameter settings */
   int                   nactions,           /**< the number of actions for this bandit */
   SCIP_BANDITDATA*      banditdata          /**< algorithm specific bandit data */
   )
{
   SCIP_BANDIT* banditptr;
   assert(bandit != NULL);
   assert(banditvtable != NULL);
   assert(set != NULL);

   SCIP_ALLOC( BMSallocBlockMemory(blkmem, bandit) );
   assert(*bandit != NULL);
   banditptr = *bandit;
   banditptr->vtable = banditvtable;
   banditptr->data = banditdata;
   banditptr->nactions = nactions;

   SCIP_CALL( SCIPrandomCreate(&banditptr->rng, blkmem, SCIPsetInitializeRandomSeed(set, DEFAULT_SEED)) );

   return SCIP_OKAY;
}

/** calls destructor and frees memory of bandit algorithm */
SCIP_RETCODE SCIPbanditFree(
   SCIP_BANDIT**         bandit,             /**< pointer to bandit algorithm data structure */
   SCIP_SET*             set,                /**< global SCIP settings */
   BMS_BLKMEM*           blkmem              /**< block memory */
   )
{
   SCIP_BANDIT* banditptr;
   SCIP_BANDITVTABLE* vtable;
   assert(bandit != NULL);
   assert(*bandit != NULL);

   banditptr = *bandit;
   vtable = banditptr->vtable;
   assert(vtable != NULL);

   /* call bandit specific data destructor */
   if( vtable->banditfree != NULL )
   {
      SCIP_CALL( vtable->banditfree(set->scip, banditptr) );
   }

   /* free random number generator */
   SCIPrandomFree(&banditptr->rng, blkmem);

   BMSfreeBlockMemory(blkmem, bandit);

   return SCIP_OKAY;
}

/** reset the bandit algorithm */
SCIP_RETCODE SCIPbanditReset(
   SCIP_BANDIT*          bandit,             /**< pointer to bandit algorithm data structure */
   SCIP_SET*             set,                /**< global SCIP settings */
   SCIP_Real*            priorities,         /**< priorities for each action, or NULL if not needed */
   unsigned int          seed                /**< initial seed for random number generation */
   )
{
   SCIP_BANDITVTABLE* vtable;

   assert(bandit != NULL);
   assert(set != NULL);

   vtable = bandit->vtable;
   assert(vtable != NULL);
   assert(vtable->banditreset != NULL);

   /* reset the random seed of the bandit algorithm */
   SCIPrandomSetSeed(bandit->rng, SCIPsetInitializeRandomSeed(set, seed));

   /* call the reset callback of the bandit algorithm */
   SCIP_CALL( vtable->banditreset(set->scip, bandit, priorities) );

   return SCIP_OKAY;
}

/** select the next action */
SCIP_RETCODE SCIPbanditSelect(
   SCIP_BANDIT*          bandit,             /**< pointer to bandit algorithm data structure */
   SCIP_SET*             set,                /**< global SCIP settings */
   int*                  action              /**< pointer to store the selected action */
   )
{
   assert(bandit != NULL);
   assert(set != NULL);
   assert(action != NULL);

   *action = -1;

   assert(bandit->vtable->banditselect != NULL);

   SCIP_CALL( bandit->vtable->banditselect(set->scip, bandit, action) );

   assert(SCIPbanditGetNActions(bandit) == 0 || *action >= 0);
   assert(*action < SCIPbanditGetNActions(bandit));

   return SCIP_OKAY;
}

/** update the score of the selected action */
SCIP_RETCODE SCIPbanditUpdate(
   SCIP_BANDIT*          bandit,             /**< pointer to bandit algorithm data structure */
   SCIP_SET*             set,                /**< global SCIP settings */
   int                   action,             /**< index of action for which the score should be updated */
   SCIP_Real             score               /**< observed gain of the i'th action */
   )
{
   assert(bandit != NULL);
   assert(set != NULL);
   assert(0 <= action && action < SCIPbanditGetNActions(bandit));
   assert(bandit->vtable->banditupdate != NULL);

   SCIP_CALL( bandit->vtable->banditupdate(set->scip, bandit, action, score) );

   return SCIP_OKAY;
}

/** get data of this bandit algorithm */
SCIP_BANDITDATA* SCIPbanditGetData(
   SCIP_BANDIT*          bandit              /**< pointer to bandit algorithm data structure */
   )
{
   assert(bandit != NULL);

   return bandit->data;
}

/** set the data of this bandit algorithm */
void SCIPbanditSetData(
   SCIP_BANDIT*          bandit,             /**< bandit algorithm data structure */
   SCIP_BANDITDATA*      banditdata          /**< bandit algorihm specific data, or NULL */
   )
{
   assert(bandit != NULL);

   bandit->data = banditdata;
}

/** create a bandit VTable for bandit algorithm callback functions */
SCIP_RETCODE SCIPbanditvtableCreate(
   SCIP_BANDITVTABLE**   banditvtable,       /**< pointer to virtual table for bandit algorithm */
   const char*           name,               /**< a name for the algorithm represented by this vtable */
   SCIP_SET*             set,                /**< global SCIP settings */
   SCIP_MESSAGEHDLR*     messagehdlr,        /**< message handler */
   BMS_BLKMEM*           blkmem,             /**< block memory for parameter settings */
   SCIP_DECL_BANDITFREE  ((*banditfree)),    /**< callback to free bandit specific data structures */
   SCIP_DECL_BANDITSELECT((*banditselect)),  /**< selection callback for bandit selector */
   SCIP_DECL_BANDITUPDATE((*banditupdate)),  /**< update callback for bandit algorithms */
   SCIP_DECL_BANDITRESET ((*banditreset))    /**< update callback for bandit algorithms */
   )
{
   SCIP_BANDITVTABLE* banditvtableptr;
   assert(banditvtable != NULL);
   assert(name != NULL);
   assert(blkmem != NULL);
   assert(set != NULL);
   assert(messagehdlr != NULL);
   assert(banditfree != NULL);
   assert(banditselect != NULL);
   assert(banditupdate != NULL);
   assert(banditreset != NULL);

   /* allocate memory for this virtual function table */
   SCIP_ALLOC( BMSallocMemory(banditvtable) );
   SCIP_ALLOC( BMSduplicateMemoryArray(&(*banditvtable)->name, name, strlen(name)+1) );
   banditvtableptr = *banditvtable;
   banditvtableptr->banditfree = banditfree;
   banditvtableptr->banditselect = banditselect;
   banditvtableptr->banditupdate = banditupdate;
   banditvtableptr->banditreset = banditreset;

   return SCIP_OKAY;
}


/** free a bandit virtual table for bandit algorithm callback functions */
void SCIPbanditvtableFree(
   SCIP_BANDITVTABLE**   banditvtable        /**< pointer to virtual table for bandit algorithm */
   )
{
   assert(banditvtable != NULL);
   assert(*banditvtable != NULL);

   BMSfreeMemoryArray(&(*banditvtable)->name);
   BMSfreeMemory(banditvtable);
}

/** return the name of this bandit virtual function table */
const char* SCIPbanditvtableGetName(
   SCIP_BANDITVTABLE*    banditvtable        /**< virtual table for bandit algorithm */
   )
{
   assert(banditvtable != NULL);

   return banditvtable->name;
}


/** return the random number generator of a bandit algorithm */
SCIP_RANDNUMGEN* SCIPbanditGetRandnumgen(
   SCIP_BANDIT*          bandit              /**< bandit algorithm data structure */
   )
{
   assert(bandit != NULL);

   return bandit->rng;
}

/** return number of actions of this bandit algorithm */
int SCIPbanditGetNActions(
   SCIP_BANDIT*          bandit              /**< bandit algorithm data structure */
   )
{
   return bandit->nactions;
}
