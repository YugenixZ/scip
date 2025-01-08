read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/Indicator/mcf64-4-1.lp"
write problem temp/mcf64-4-1.lp.cip
read temp/mcf64-4-1.lp.cip
optimize
validatesolve "10" "10"
quit
