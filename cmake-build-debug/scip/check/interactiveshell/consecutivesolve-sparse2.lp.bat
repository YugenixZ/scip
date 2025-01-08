set display verblevel 0
set timing enabled FALSE
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/SOS/sparse2.lp"
optimize
write statistics temp/sparse2.lp_r1.stats
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/SOS/sparse2.lp"
optimize
write statistics temp/sparse2.lp_r2.stats
quit
