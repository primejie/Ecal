source /cvmfs/sft.cern.ch/lcg/app/releases/ROOT/6.26.10/x86_64-centos8-gcc85-opt/bin/thisroot.sh
fileName="testyear22"
years=("1")

# vars=("medianmeevstimeinEB" "medianmeevstimeinEE" "medianmeevstimeinEEOUT")
vars=("medianmeevstimeinEB" "medianmeevstimeinEE" )
for year in ${years[@]}
do
for var in ${vars[@]}
do
echo $year $var
cp options/stabilityPlotOptions_medianmeevstimein.txt options/stabilityPlotOptions_medianmeevstimein_run.txt
sed -i "s#VARNAME#${var}#g" options/stabilityPlotOptions_medianmeevstimein_run.txt
sed -i "s#YEAR#${year}#g" options/stabilityPlotOptions_medianmeevstimein_run.txt
sed -i "s#FILENAME#${fileName}#g" options/stabilityPlotOptions_medianmeevstimein_run.txt
root -b -q -l "plotStability.C(\"options/stabilityPlotOptions_medianmeevstimein_run.txt\")"
done
done
