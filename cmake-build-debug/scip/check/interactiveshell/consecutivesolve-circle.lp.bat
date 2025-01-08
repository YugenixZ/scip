set display verblevel 0
set timing enabled FALSE
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MINLP/circle.lp"
optimize
write statistics temp/circle.lp_r1.stats
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MINLP/circle.lp"
optimize
write statistics temp/circle.lp_r2.stats
quit
