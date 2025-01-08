# CMake generated Testfile for 
# Source directory: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/VRP/check
# Build directory: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/scip/examples/VRP/check
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(examples-vrp-build "D:/CLion 2023.3.4/bin/cmake/win/x64/bin/cmake.exe" "--build" "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug" "--config" "Debug" "--target" "vrp")
set_tests_properties(examples-vrp-build PROPERTIES  RESOURCE_LOCK "libscip" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/VRP/check/CMakeLists.txt;18;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/VRP/check/CMakeLists.txt;0;")
add_test(examples-vrp-eil13 "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/examples/vrp.exe" "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/VRP/check/../data/eil13.vrp")
set_tests_properties(examples-vrp-eil13 PROPERTIES  DEPENDS "examples-vrp-build" RESOURCE_LOCK "libscip" WORKING_DIRECTORY "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/Debug" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/VRP/check/CMakeLists.txt;38;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/VRP/check/CMakeLists.txt;0;")
add_test(examples-vrp-eil7 "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/examples/vrp.exe" "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/VRP/check/../data/eil7.vrp")
set_tests_properties(examples-vrp-eil7 PROPERTIES  DEPENDS "examples-vrp-build" RESOURCE_LOCK "libscip" WORKING_DIRECTORY "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/Debug" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/VRP/check/CMakeLists.txt;38;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/VRP/check/CMakeLists.txt;0;")
