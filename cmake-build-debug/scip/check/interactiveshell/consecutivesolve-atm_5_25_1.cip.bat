set display verblevel 0
set timing enabled FALSE
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/Cardinality/atm_5_25_1.cip"
optimize
write statistics temp/atm_5_25_1.cip_r1.stats
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/Cardinality/atm_5_25_1.cip"
optimize
write statistics temp/atm_5_25_1.cip_r2.stats
quit
