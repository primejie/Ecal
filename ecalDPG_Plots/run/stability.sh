cmsenv

workdir="$( pwd )"  

#declare -a mYears=("pre2016_all" "pre2017_all" "pre2018_all")
#declare -a mYears=("ul2016_all" "ul2017_all" "ul2018_all" "ul3years_all")
declare -a mYears=("sep2018_newReg_all" "sep2018Every2fb_all" "sep2018Every2fb_normalized_all" "ul2017_eopPNEB_eflowEB_normalized_all" "ul2017_all")
declare -a vNames=("medianmeevstimeinEB" "medianmeevstimeinEE" "medianR9eLvstimeinEB" "medianR9eLvstimeinEE")

#declare -a mYears=("ul2016_all")
#declare -a vNames=("medianmeevstimeinEB" "medianR9eLvstimeinEB")
#declare -a vNames=("medianR9eLvstimeinEB")

#declare -a mYears=("ul3years_all")
#declare -a vNames=("medianmeevstimeinEB")
#declare -a vNames=("medianmeevstimeinEB" "medianmeevstimeinEE" "medianR9eLvstimeinEB" "medianR9eLvstimeinEE")


for i in "${!mYears[@]}";
do
	optdir=${workdir}/options/stability/${mYears[i]}
	for j in "${!vNames[@]}";
	do
                tempfile=${optdir}/stabilityPlotOptions_${vNames[j]}.txt
                if [[ ${vNames[j]} == medianmee* ]];
                then
                        optfile=${workdir}/stabilityPlotOptions.txt
                fi
		if [[ ${vNames[j]} == medianR9* ]];
		then
	                optfile=${workdir}/stabilityPlotOptions_R9.txt
		fi
		mkdir -vp ${optdir}
		cp $optfile $tempfile
		sed -i 's|mYear|'${mYears[i]}'|g' $tempfile
		sed -i 's|vName|'${vNames[j]}'|g' $tempfile
		root -b -q -l "plotStability.C(\"$tempfile\")"
	done
done
