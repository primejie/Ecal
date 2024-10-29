grep -E -h "mean is|sigma60 is" logs/ul2018_all/*log | tee logs/summary/2018_all.log
grep -E -h "mean is|sigma60 is" logs/ul2017_all/*log | tee logs/summary/2017_all.log
#grep -E -h "mean is|sigma60 is" logs/ul2016_all/*log | tee logs/summary/2016_all.log

