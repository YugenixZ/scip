set display verblevel 0
set timing enabled FALSE
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/stein27.fzn"
optimize
write statistics temp/stein27.fzn_r1.stats
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MIP/stein27.fzn"
optimize
write statistics temp/stein27.fzn_r2.stats
quit
