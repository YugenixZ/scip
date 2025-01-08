set heur emph off
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/enigma.mps"
write problem temp/enigma.mps.mps
presolve
write transproblem temp/enigma.mps_trans.mps
set heur emph def
read temp/enigma.mps_trans.mps
optimize
validatesolve "0" "0"
read temp/enigma.mps.mps
optimize
validatesolve "0" "0"
quit
