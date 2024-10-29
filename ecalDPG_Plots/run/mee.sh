cmsenv

workdir="$( pwd )"  

#declare -a mYears=("2016" "2017" "2018")
#declare -a mStatistics=("all" "noTrain")

#declare -a vNames=("mee_in_EB" "mee_in_EE" "mee_in_EB_LowR9" "mee_in_EB_HighR9" "mee_in_EE_LowR9" "mee_in_EE_HighR9")
#declare -a vNames=("mee_in_EB_LowR92" "mee_in_EB_HighR92" "mee_in_EE_LowR92" "mee_in_EE_HighR92")
#declare -a vNames=("mee_in_EB_LowR9_2016" "mee_in_EB_HighR9_2016" "mee_in_EE_LowR9_2016" "mee_in_EE_HighR9_2016")
#declare -a vNames=("mee_in_EB_LowR9_2017" "mee_in_EB_HighR9_2017" "mee_in_EE_LowR9_2017" "mee_in_EE_HighR9_2017")
#declare -a vNames=("mee_in_EB_LowR9_2018" "mee_in_EB_HighR9_2018" "mee_in_EE_LowR9_2018" "mee_in_EE_HighR9_2018")

#declare -a vNames=("mee_in_EB" "mee_in_EE" "mee_in_EB_LowR9" "mee_in_EB_HighR9" "mee_in_EE_LowR9" "mee_in_EE_HighR9" "mee_in_EB_LowR92" "mee_in_EB_HighR92" "mee_in_EE_LowR92" "mee_in_EE_HighR92" "mee_in_EB_LowR9_2016" "mee_in_EB_HighR9_2016" "mee_in_EE_LowR9_2016" "mee_in_EE_HighR9_2016" "mee_in_EB_LowR9_2017" "mee_in_EB_HighR9_2017" "mee_in_EE_LowR9_2017" "mee_in_EE_HighR9_2017" "mee_in_EB_LowR9_2018" "mee_in_EB_HighR9_2018" "mee_in_EE_LowR9_2018" "mee_in_EE_HighR9_2018")

declare -a mStatistics=("all")

#declare -a mYears=("2016")
#declare -a vNames=("mee_in_EB" "mee_in_EE" "mee_in_EB_LowR92" "mee_in_EB_HighR92" "mee_in_EE_LowR92" "mee_in_EE_HighR92" "mee_in_EB_LowR9_2016" "mee_in_EB_HighR9_2016" "mee_in_EE_LowR9_2016" "mee_in_EE_HighR9_2016")

#declare -a mYears=("2017")
#declare -a vNames=("mee_in_EB" "mee_in_EE" "mee_in_EB_LowR92" "mee_in_EB_HighR92" "mee_in_EE_LowR92" "mee_in_EE_HighR92" "mee_in_EB_LowR9_2017" "mee_in_EB_HighR9_2017" "mee_in_EE_LowR9_2017" "mee_in_EE_HighR9_2017")

#declare -a mYears=("2018")
#declare -a vNames=("mee_in_EB" "mee_in_EE" "mee_in_EB_LowR92" "mee_in_EB_HighR92" "mee_in_EE_LowR92" "mee_in_EE_HighR92" "mee_in_EB_LowR9_2018" "mee_in_EB_HighR9_2018" "mee_in_EE_LowR9_2018" "mee_in_EE_HighR9_2018")


#declare -a vNames=("mee_in_EB" "mee_in_EE")
#declare -a vNames=("mee_in_EB")

#declare -a mYears=("2016" "2017" "2018")
declare -a vNames=("mee_in_EB" "mee_in_EE" "mee_in_EB_LowR92" "mee_in_EB_HighR92" "mee_in_EE_LowR92" "mee_in_EE_HighR92")

declare -a mYears=("2018")
declare -a data1=("sep2018_newReg")
declare -a data2=("sep2018Every2fb")
#declare -a data2=("sep2018Every2fb_normalized")

#declare -a mYears=("2017")
#declare -a data1=("ul2017")
#declare -a data2=("ul2017_eopPNEB_eflowEB_normalized")

optfile=${workdir}/histDataOptions.txt

for i in "${!mYears[@]}";
do
	optdir=${workdir}/options/ul${mYears[i]}
        mkdir -vp ${optdir}
	for m_stat in "${mStatistics[@]}";
	do
		plotdir=${workdir}/plots/mee/${mYears[i]}/${data2[i]}_${m_stat}/ 
                logdir=${workdir}/logs/ul${mYears[i]}_${m_stat}/
		mData1=${workdir}/data/${data1[i]}_${m_stat}.root
		mData2=${workdir}/data/${data2[i]}_${m_stat}.root
		mkdir -vp $logdir
		for j in "${!vNames[@]}";
		do
			tempfile=${optdir}/histDataOptions_${vNames[j]}.txt
			cp $optfile $tempfile
	                sed -i 's|plotdir|'${plotdir}'|g' $tempfile
	                sed -i 's|mData1|'${mData1}'|g' $tempfile
	                sed -i 's|mData2|'${mData2}'|g' $tempfile
	                sed -i 's|mYear|'${mYears[i]}'|g' $tempfile
			sed -i 's|vName|'${vNames[j]}'|g' $tempfile
			root -b -q -l "plotDataHistsDPG.C(\"$tempfile\")" > $logdir/${mYears[i]}_${m_stat}_${vNames[j]}.log
		done
	done
done
