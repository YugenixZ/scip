set heur emph off
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/stein27_inf.lp"
write problem temp/stein27_inf.lp.lp
presolve
write transproblem temp/stein27_inf.lp_trans.lp
set heur emph def
read temp/stein27_inf.lp_trans.lp
optimize
validatesolve "+infinity" "+infinity"
read temp/stein27_inf.lp.lp
optimize
validatesolve "+infinity" "+infinity"
quit
