set heur emph off
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/gt2.mps"
write problem temp/gt2.mps.rlp
presolve
write transproblem temp/gt2.mps_trans.rlp
set heur emph def
read temp/gt2.mps_trans.rlp
optimize
validatesolve "21166" "21166"
read temp/gt2.mps.rlp
optimize
validatesolve "21166" "21166"
quit
