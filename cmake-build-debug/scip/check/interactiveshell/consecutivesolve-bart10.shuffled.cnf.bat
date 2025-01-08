set display verblevel 0
set timing enabled FALSE
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/SAT/bart10.shuffled.cnf"
optimize
write statistics temp/bart10.shuffled.cnf_r1.stats
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/SAT/bart10.shuffled.cnf"
optimize
write statistics temp/bart10.shuffled.cnf_r2.stats
quit
