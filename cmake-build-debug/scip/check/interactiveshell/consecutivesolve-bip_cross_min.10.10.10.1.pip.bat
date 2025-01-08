set display verblevel 0
set timing enabled FALSE
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MINLP/bip_cross_min.10.10.10.1.pip"
optimize
write statistics temp/bip_cross_min.10.10.10.1.pip_r1.stats
read "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/scip"/check/"instances/MINLP/bip_cross_min.10.10.10.1.pip"
optimize
write statistics temp/bip_cross_min.10.10.10.1.pip_r2.stats
quit
