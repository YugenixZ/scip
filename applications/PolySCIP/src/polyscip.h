/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                           */
/*        This file is part of the program PolySCIP                          */
/*                                                                           */
/*    Copyright (C) 2012-2016 Konrad-Zuse-Zentrum                            */
/*                            fuer Informationstechnik Berlin                */
/*                                                                           */
/*  PolySCIP is distributed under the terms of the ZIB Academic License.     */
/*                                                                           */
/*  You should have received a copy of the ZIB Academic License              */
/*  along with PolySCIP; see the file LICENCE.                               */
/*                                                                           */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/** @brief  PolySCIP solver class
 *
 * The PolySCIP solver class.
 */

#ifndef POLYSCIP_SRC_POLYSCIP_H_INCLUDED
#define POLYSCIP_SRC_POLYSCIP_H_INCLUDED

#include <cstdlib>
#include <iostream>
#include <ostream>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "cmd_line_args.h"
#include "objscip/objscip.h"
#include "polyscip_types.h"
#include "weight_space_polyhedron.h"

namespace polyscip {

    class Polyscip {
    public:
        using betaElem = std::pair< ValueType, ValueType>;
        using betaT = std::vector<betaElem>;

        explicit Polyscip(int argc, const char *const *argv);

        ~Polyscip();

        SCIP_RETCODE readProblem();

        SCIP_RETCODE computeNondomPoints();

        bool writeResults() const {return cmd_line_args_.writeSolutions();};

        void writeSupportedResults() const;

        void writeFileForVertexEnumeration() const;

        void printResults(std::ostream &os = std::cout, bool withSolution = true) const;

    private:

        enum class PolyscipStatus {
            Unsolved, InitPhase, WeightSpacePhase, CompUnsupportedPhase, Finished, TimeLimitReached,
        };

        bool filenameIsOkay(const std::string &filename);

        /** Computes first non-dominated point and initializes
         * the weight space polyhedron or finds out that there is no non-dominated point
         * @return true if first non-dom point was found and weight space polyhedron initialized;
         * false otherwise
         */
        SCIP_RETCODE initWeightSpace();

        SCIP_RETCODE computeUnitWeightOutcomes();

        void deleteWeaklyNondomResults();

        /* Return true if other element exists which dominates 'it' or has objective values coinciding with 'it
         */
        bool isDominatedOrEqual(ResultContainer::const_iterator it) const;

        SCIP_RETCODE setWeightedObjective(const WeightType& weight);

        SCIP_RETCODE solve();

        SCIP_STATUS separateINFORUNBD(const WeightType& weight, bool with_presolving = true);

        SCIP_RETCODE handleNonOptNonUnbdStatus(SCIP_STATUS status);

        SCIP_RETCODE handleOptimalStatus();
        SCIP_RETCODE handleOptimalStatus(const WeightType& weight,
                                         ValueType current_opt_val);


        SCIP_RETCODE handleUnboundedStatus(bool check_if_new_result=false);

        bool outcomesAreEqual(const OutcomeType& outcome1, const OutcomeType& outcome2) const;

        bool outcomeIsNew(const OutcomeType& outcome, bool outcome_is_bounded) const;

        Result getResult(bool outcome_is_bounded = false, SCIP_SOL *primal_sol = nullptr);

        Result getOptimalResult();

        void computeNonRedundantObjectives(bool printObjectives) = delete;

        void printObjective(std::size_t obj_no,
                            const std::vector<int>& nonzero_indices,
                            const std::vector<SCIP_Real>& nonzero_vals,
                            std::ostream& os = std::cout) const;

        bool objIsRedundant(const std::vector<int>& begin_nonzeros,
                            const std::vector< std::vector<int> >& obj_to_nonzero_indices,
                            const std::vector< std::vector<SCIP_Real> >& obj_to_nonzero_values,
                            std::size_t index) const;

        /** Computes the supported solutions/rays and corresponding non-dominated points */
        SCIP_RETCODE computeSupported();

        /** Computes the unsupported solutions and corresponding non-dominated points */
        SCIP_RETCODE computeUnsupported();

        SCIP_RETCODE computeUnsupported(SCIP_VAR* new_var,
                                        std::vector<std::vector<SCIP_VAR*>>& orig_vars,
                                        std::vector<std::vector<ValueType>>& orig_vals,
                                        const OutcomeType& predecessor,
                                        const OutcomeType& successor);

        SCIP_RETCODE solveWeightedTchebycheff(SCIP_VAR* new_var,
                                              const std::vector<std::vector<SCIP_VAR*>>& orig_vars,
                                              const std::vector<std::vector<ValueType>>& orig_vals,
                                              const OutcomeType& predecessor,
                                              const OutcomeType& successor,
                                              const OutcomeType& reference_point,
                                              const OutcomeType& upper_point);

        /** add contraint new_var  - beta_i* vals \cdot vars >= - beta_i * ref_point[i]
         */
        SCIP_CONS* createObjFctCons(SCIP_VAR* new_var,
                                          const std::vector<SCIP_VAR*>& orig_vars,
                                          const std::vector<ValueType>& orig_vals,
                                          const ValueType& rhs,
                                          const ValueType& beta_i);

        betaT getInitialBeta(std::size_t unit_index, // index for which beta_i is kept 1
                             const OutcomeType& pred,
                             const OutcomeType& succ,
                             const OutcomeType& reference_point,
                             const OutcomeType& upper_point) const;

        void deleteVarNameFromResult(SCIP_VAR* var, Result& res) const;

        std::vector<ValueType> computeUpperBetaValues(const betaT& used_beta,
                                                      SCIP_Real opt_value,
                                                      const OutcomeType& new_result,
                                                      const OutcomeType& pred,
                                                      const OutcomeType& succ,
                                                      const OutcomeType& reference_point,
                                                      const OutcomeType& upper_point) const;

        void printSol(const SolType& sol, std::ostream& os) const;

        /** Prints given ray to given output stream */
        void printRay(const OutcomeType &ray, std::ostream &os = std::cout) const;

        /** Prints given point to given output stream */
        void printPoint(const OutcomeType &point, std::ostream& os) const;

        CmdLineArgs cmd_line_args_;
        PolyscipStatus polyscip_status_;
        SCIP *scip_;
        /**< objective sense of given problem */
        SCIP_Objsense obj_sense_;
        /**< number of objectives */
        std::size_t no_all_objs_;
        std::vector<std::size_t> considered_objs_;
        /**< clock measuring the time needed for the entire program */
        SCIP_CLOCK* clock_total_;

        std::unique_ptr<WeightSpacePolyhedron> weight_space_poly_;
        ResultContainer supported_;
        ResultContainer unsupported_;
        ResultContainer unbounded_;

    };

}

#endif //POLYSCIP_SRC_POLYSCIP_H_INCLUDED
