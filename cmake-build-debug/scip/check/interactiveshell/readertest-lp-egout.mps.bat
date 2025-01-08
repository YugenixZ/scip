set heur emph off
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/egout.mps"
write problem temp/egout.mps.lp
presolve
write transproblem temp/egout.mps_trans.lp
set heur emph def
read temp/egout.mps_trans.lp
optimize
validatesolve "568.1007" "568.1007"
read temp/egout.mps.lp
optimize
validatesolve "568.1007" "568.1007"
quit
