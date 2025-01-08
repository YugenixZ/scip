set heur emph off
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/flugpl.mps"
write problem temp/flugpl.mps.mps
presolve
write transproblem temp/flugpl.mps_trans.mps
set heur emph def
read temp/flugpl.mps_trans.mps
optimize
validatesolve "1201500" "1201500"
read temp/flugpl.mps.mps
optimize
validatesolve "1201500" "1201500"
quit
