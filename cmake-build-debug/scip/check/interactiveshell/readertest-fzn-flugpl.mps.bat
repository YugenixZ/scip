set heur emph off
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/flugpl.mps"
write problem temp/flugpl.mps.fzn
presolve
write transproblem temp/flugpl.mps_trans.fzn
set heur emph def
read temp/flugpl.mps_trans.fzn
optimize
validatesolve "1201500" "1201500"
read temp/flugpl.mps.fzn
optimize
validatesolve "1201500" "1201500"
quit
