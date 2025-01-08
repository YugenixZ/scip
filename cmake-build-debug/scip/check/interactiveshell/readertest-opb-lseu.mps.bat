set heur emph off
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/lseu.mps"
write problem temp/lseu.mps.opb
presolve
write transproblem temp/lseu.mps_trans.opb
set heur emph def
read temp/lseu.mps_trans.opb
optimize
validatesolve "1120" "1120"
read temp/lseu.mps.opb
optimize
validatesolve "1120" "1120"
quit
