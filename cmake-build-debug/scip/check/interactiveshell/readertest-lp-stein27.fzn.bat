set heur emph off
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/stein27.fzn"
write problem temp/stein27.fzn.lp
presolve
write transproblem temp/stein27.fzn_trans.lp
set heur emph def
read temp/stein27.fzn_trans.lp
optimize
validatesolve "18" "18"
read temp/stein27.fzn.lp
optimize
validatesolve "18" "18"
quit
