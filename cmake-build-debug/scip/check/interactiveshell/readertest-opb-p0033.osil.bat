set heur emph off
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/p0033.osil"
write problem temp/p0033.osil.opb
presolve
write transproblem temp/p0033.osil_trans.opb
set heur emph def
read temp/p0033.osil_trans.opb
optimize
validatesolve "3089" "3089"
read temp/p0033.osil.opb
optimize
validatesolve "3089" "3089"
quit
