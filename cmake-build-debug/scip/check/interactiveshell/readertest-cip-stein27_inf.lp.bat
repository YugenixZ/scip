set heur emph off
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/stein27_inf.lp"
write problem temp/stein27_inf.lp.cip
presolve
write transproblem temp/stein27_inf.lp_trans.cip
set heur emph def
read temp/stein27_inf.lp_trans.cip
optimize
validatesolve "+infinity" "+infinity"
read temp/stein27_inf.lp.cip
optimize
validatesolve "+infinity" "+infinity"
quit
