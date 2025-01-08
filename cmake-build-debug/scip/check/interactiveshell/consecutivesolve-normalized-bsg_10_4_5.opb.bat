set display verblevel 0
set timing enabled FALSE
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/PseudoBoolean/normalized-bsg_10_4_5.opb"
optimize
write statistics temp/normalized-bsg_10_4_5.opb_r1.stats
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/PseudoBoolean/normalized-bsg_10_4_5.opb"
optimize
write statistics temp/normalized-bsg_10_4_5.opb_r2.stats
quit
