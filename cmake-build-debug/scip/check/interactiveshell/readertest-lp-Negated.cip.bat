set heur emph off
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/Negated.cip"
write problem temp/Negated.cip.lp
presolve
write transproblem temp/Negated.cip_trans.lp
set heur emph def
read temp/Negated.cip_trans.lp
optimize
validatesolve "1" "1"
read temp/Negated.cip.lp
optimize
validatesolve "1" "1"
quit
