# CMake generated Testfile for 
# Source directory: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr
# Build directory: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/scip/examples/Eventhdlr
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(examples-eventhdlr-build "D:/CLion 2023.3.4/bin/cmake/win/x64/bin/cmake.exe" "--build" "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug" "--config" "Debug" "--target" "eventhdlr")
set_tests_properties(examples-eventhdlr-build PROPERTIES  RESOURCE_LOCK "libscip" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;53;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;0;")
add_test(examples-eventhdlr-linking.cip "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/examples/eventhdlr.exe" "-f" "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/../../check/instances/CP/linking.cip" "-o" "2" "2")
set_tests_properties(examples-eventhdlr-linking.cip PROPERTIES  DEPENDS "examples-eventhdlr-build" PASS_REGULAR_EXPRESSION "Validation         : Success" WORKING_DIRECTORY "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/Debug" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;74;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;0;")
add_test(examples-eventhdlr-j301_2.cip "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/examples/eventhdlr.exe" "-f" "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/../../check/instances/CP/j301_2.cip" "-o" "47" "47")
set_tests_properties(examples-eventhdlr-j301_2.cip PROPERTIES  DEPENDS "examples-eventhdlr-build" PASS_REGULAR_EXPRESSION "Validation         : Success" WORKING_DIRECTORY "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/Debug" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;74;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;0;")
add_test(examples-eventhdlr-flugpl.mps "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/examples/eventhdlr.exe" "-f" "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/../../check/instances/MIP/flugpl.mps" "-o" "1201500" "1201500")
set_tests_properties(examples-eventhdlr-flugpl.mps PROPERTIES  DEPENDS "examples-eventhdlr-build" PASS_REGULAR_EXPRESSION "Validation         : Success" WORKING_DIRECTORY "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/Debug" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;74;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;0;")
add_test(examples-eventhdlr-gt2.mps "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/examples/eventhdlr.exe" "-f" "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/../../check/instances/MIP/gt2.mps" "-o" "21166" "21166")
set_tests_properties(examples-eventhdlr-gt2.mps PROPERTIES  DEPENDS "examples-eventhdlr-build" PASS_REGULAR_EXPRESSION "Validation         : Success" WORKING_DIRECTORY "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/Debug" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;74;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;0;")
add_test(examples-eventhdlr-ex1266.mps "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/examples/eventhdlr.exe" "-f" "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/../../check/instances/MINLP/ex1266.mps" "-o" "16.3" "16.3")
set_tests_properties(examples-eventhdlr-ex1266.mps PROPERTIES  DEPENDS "examples-eventhdlr-build" PASS_REGULAR_EXPRESSION "Validation         : Success" WORKING_DIRECTORY "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/Debug" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;74;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;0;")
add_test(examples-eventhdlr-m3.osil "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/examples/eventhdlr.exe" "-f" "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/../../check/instances/MINLP/m3.osil" "-o" "37.8" "37.8")
set_tests_properties(examples-eventhdlr-m3.osil PROPERTIES  DEPENDS "examples-eventhdlr-build" PASS_REGULAR_EXPRESSION "Validation         : Success" WORKING_DIRECTORY "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/Debug" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;74;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;0;")
add_test(examples-eventhdlr-partorb_1-FullIns_3.cip "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/examples/eventhdlr.exe" "-f" "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/../../check/instances/Symmetry/partorb_1-FullIns_3.cip" "-o" "4" "4")
set_tests_properties(examples-eventhdlr-partorb_1-FullIns_3.cip PROPERTIES  DEPENDS "examples-eventhdlr-build" PASS_REGULAR_EXPRESSION "Validation         : Success" WORKING_DIRECTORY "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/Debug" _BACKTRACE_TRIPLES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;74;add_test;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip/examples/Eventhdlr/CMakeLists.txt;0;")
