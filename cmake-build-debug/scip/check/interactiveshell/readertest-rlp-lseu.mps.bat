set heur emph off
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/lseu.mps"
write problem temp/lseu.mps.rlp
presolve
write transproblem temp/lseu.mps_trans.rlp
set heur emph def
read temp/lseu.mps_trans.rlp
optimize
validatesolve "1120" "1120"
read temp/lseu.mps.rlp
optimize
validatesolve "1120" "1120"
quit
