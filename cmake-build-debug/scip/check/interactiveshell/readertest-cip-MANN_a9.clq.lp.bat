set heur emph off
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/MANN_a9.clq.lp"
write problem temp/MANN_a9.clq.lp.cip
presolve
write transproblem temp/MANN_a9.clq.lp_trans.cip
set heur emph def
read temp/MANN_a9.clq.lp_trans.cip
optimize
validatesolve "16" "16"
read temp/MANN_a9.clq.lp.cip
optimize
validatesolve "16" "16"
quit
