# Install script for directory: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/SCIPOptSuite")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "D:/CLion 2023.3.4/bin/mingw/bin/objdump.exe")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gcg" TYPE FILE FILES
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/branch_empty.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/branch_bpstrong.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/branch_generic.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/branch_orig.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/branch_relpsprob.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/branch_ryanfoster.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/class_conspartition.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/class_indexpartition.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/miscvisualization.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/class_pricingcontroller.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/class_pricingtype.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/class_partialdecomp.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/class_detprobdata.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/class_stabilization.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/class_varpartition.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/clscons.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/clsvar.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/colpool.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/cons_decomp.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/cons_decomp.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/cons_integralorig.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/cons_masterbranch.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/cons_origbranch.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_compgreedily.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_connected_noNewLinkingVars.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_connectedbase.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_consclass.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_constype.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_dbscan.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_densemasterconss.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_generalmastersetcover.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_generalmastersetpack.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_generalmastersetpart.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_mastersetcover.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_mastersetpack.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_mastersetpart.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_mst.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_neighborhoodmaster.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_postprocess.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_staircase_lsp.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_stairheur.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dec_varclass.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/decomp.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/def.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dialog_gcg.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dialog_graph.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/dialog_master.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/disp_gcg.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/disp_master.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/event_bestsol.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/event_display.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/event_mastersol.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/event_relaxsol.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/event_solvingstats.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/gcg.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/gcgcol.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/gcg_general.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/gcggithash.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/gcgplugins.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/gcgpqueue.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/gcgsort.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_gcgcoefdiving.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_gcgdins.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_gcgfeaspump.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_gcgfracdiving.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_gcgguideddiving.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_gcglinesdiving.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_gcgpscostdiving.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_gcgrens.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_gcgrins.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_gcgrounding.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_gcgshifting.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_gcgsimplerounding.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_gcgveclendiving.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_gcgzirounding.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_greedycolsel.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_mastercoefdiving.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_masterdiving.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_masterfracdiving.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_masterlinesdiving.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_mastervecldiving.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_origdiving.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_relaxcolsel.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_restmaster.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_setcover.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_xpcrossover.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/heur_xprins.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/masterplugins.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/nodesel_master.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/objdialog.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/objpricer_gcg.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/params_visu.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/presol_roundbound.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pricer_gcg.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pricestore_gcg.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pricingjob.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pricingprob.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pub_bliss.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pub_clscons.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pub_clsvar.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pub_colpool.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pub_decomp.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pub_gcgcol.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pub_gcgheur.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pub_gcgsepa.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pub_gcgpqueue.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pub_gcgvar.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pub_pricingjob.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pub_pricingprob.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pub_score.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/pub_solver.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/reader_blk.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/reader_cls.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/reader_dec.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/reader_gp.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/reader_ref.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/reader_tex.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/relax_gcg.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/scip_misc.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/score_bender.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/score_border.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/score_classic.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/score_fawh.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/score_forswh.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/score_maxwhite.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/score_spfawh.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/score_spfwh.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/score_strong.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/score.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/sepa_basis.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/sepa_master.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/solver.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/solver_cliquer.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/solver_knapsack.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/solver_mip.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/solver_xyz.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/stat.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/struct_branchgcg.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/struct_colpool.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/struct_decomp.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/struct_detector.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/struct_gcgcol.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/struct_gcgpqueue.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/struct_pricestore_gcg.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/struct_pricingjob.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/struct_pricingprob.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/struct_score.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/struct_solver.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/struct_vardata.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_branchgcg.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_classifier.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_colpool.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_consclassifier.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_decomp.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_detector.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_gcgcol.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_gcgpqueue.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_masterdiving.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_origdiving.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_parameter.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_pricestore_gcg.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_pricingjob.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_pricingprob.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_pricingstatus.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_score.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_solver.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/type_varclassifier.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/wrapper_partialdecomp.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/graph" TYPE FILE FILES
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/bipartitegraph.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/bipartitegraph_def.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/bridge.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/columngraph.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/columngraph_def.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/graph.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/graph_def.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/graph_gcg.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/graph_interface.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/graph_tclique.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/graphalgorithms.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/graphalgorithms_def.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/hypercolgraph.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/hypercolgraph_def.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/hypergraph.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/hypergraph_def.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/hyperrowcolgraph.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/hyperrowcolgraph_def.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/hyperrowgraph.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/hyperrowgraph_def.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/matrixgraph.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/matrixgraph_def.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/rowgraph.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/rowgraph_def.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/graph/weights.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/gcg.exe")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/gcg.exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/gcg.exe")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "D:/CLion 2023.3.4/bin/mingw/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/gcg.exe")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/lib/libgcg.dll.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/libgcg.dll")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/libgcg.dll" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/libgcg.dll")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "D:/CLion 2023.3.4/bin/mingw/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/libgcg.dll")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/gcg/gcg-targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/gcg/gcg-targets.cmake"
         "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/gcg/src/CMakeFiles/Export/55a8c2330c2af6b35ecce0f90032ca65/gcg-targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/gcg/gcg-targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/gcg/gcg-targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/gcg" TYPE FILE FILES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/gcg/src/CMakeFiles/Export/55a8c2330c2af6b35ecce0f90032ca65/gcg-targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/gcg" TYPE FILE FILES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/gcg/src/CMakeFiles/Export/55a8c2330c2af6b35ecce0f90032ca65/gcg-targets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/gcg" TYPE FILE FILES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/gcg/CMakeFiles/gcg-config.cmake")
endif()

