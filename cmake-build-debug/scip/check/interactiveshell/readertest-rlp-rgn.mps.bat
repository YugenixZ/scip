set heur emph off
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/rgn.mps"
write problem temp/rgn.mps.rlp
presolve
write transproblem temp/rgn.mps_trans.rlp
set heur emph def
read temp/rgn.mps_trans.rlp
optimize
validatesolve "82.19999924" "82.19999924"
read temp/rgn.mps.rlp
optimize
validatesolve "82.19999924" "82.19999924"
quit
