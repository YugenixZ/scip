if(NOT TARGET libgcg)
  include("${CMAKE_CURRENT_LIST_DIR}/gcg-targets.cmake")
endif()

if(0)
   set(SCIP_DIR "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/scip")
   find_package(SCIP QUIET CONFIG)
endif()

set(GCG_LIBRARIES libgcg)
set(GCG_INCLUDE_DIRS "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src")
set(GCG_FOUND TRUE)
