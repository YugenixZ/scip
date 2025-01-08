set display verblevel 0
set timing enabled FALSE
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MINLP/ex1266.mps"
optimize
write statistics temp/ex1266.mps_r1.stats
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MINLP/ex1266.mps"
optimize
write statistics temp/ex1266.mps_r2.stats
quit
