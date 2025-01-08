# CMake generated Testfile for 
# Source directory: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Queens
# Build directory: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/scip/examples/Queens
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(examples-queens-build "D:/CLion 2023.3.4/bin/cmake/win/x64/bin/cmake.exe" "--build" "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug" "--config" "Debug" "--target" "queens")
set_tests_properties(examples-queens-build PROPERTIES  RESOURCE_LOCK "libscip" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Queens/CMakeLists.txt;28;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Queens/CMakeLists.txt;0;")
add_test(examples-queens-1 "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/examples/queens.exe" "1")
set_tests_properties(examples-queens-1 PROPERTIES  DEPENDS "examples-queens-build" WORKING_DIRECTORY "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/Debug" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Queens/CMakeLists.txt;52;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Queens/CMakeLists.txt;0;")
add_test(examples-queens-2 "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/examples/queens.exe" "2")
set_tests_properties(examples-queens-2 PROPERTIES  DEPENDS "examples-queens-build" WORKING_DIRECTORY "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/Debug" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Queens/CMakeLists.txt;52;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Queens/CMakeLists.txt;0;")
add_test(examples-queens-4 "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/examples/queens.exe" "4")
set_tests_properties(examples-queens-4 PROPERTIES  DEPENDS "examples-queens-build" WORKING_DIRECTORY "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/Debug" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Queens/CMakeLists.txt;52;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Queens/CMakeLists.txt;0;")
add_test(examples-queens-8 "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/examples/queens.exe" "8")
set_tests_properties(examples-queens-8 PROPERTIES  DEPENDS "examples-queens-build" WORKING_DIRECTORY "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/Debug" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Queens/CMakeLists.txt;52;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Queens/CMakeLists.txt;0;")
add_test(examples-queens-16 "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/examples/queens.exe" "16")
set_tests_properties(examples-queens-16 PROPERTIES  DEPENDS "examples-queens-build" WORKING_DIRECTORY "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/Debug" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Queens/CMakeLists.txt;52;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Queens/CMakeLists.txt;0;")
