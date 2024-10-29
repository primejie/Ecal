cmsenv

workdir="$( pwd )"  

#declare -a mStatistics=("all" "noTrain")
declare -a mStatistics=("all")

declare -a mYears=("3years")
declare -a vNames=("mee_in_EB" "mee_in_EE" "mee_in_EB_LowR92" "mee_in_EB_HighR92" "mee_in_EE_LowR92" "mee_in_EE_HighR92")


optfile=${workdir}/histDataOptions_3years.txt

for i in "${!mYears[@]}";
do
	optdir=${workdir}/options/ul${mYears[i]}
        mkdir -vp ${optdir}
	for m_stat in "${mStatistics[@]}";
	do
		plotdir=${workdir}/plots/mee/ul${mYears[i]}_${m_stat}/     
                logdir=${workdir}/logs/ul${mYears[i]}_${m_stat}/
		mData1=${workdir}/data/ul2016_${m_stat}.root
		mData2=${workdir}/data/ul2017_${m_stat}.root
                mData3=${workdir}/data/ul2018_${m_stat}.root
		mkdir -vp $logdir
		for j in "${!vNames[@]}";
		do
			tempfile=${optdir}/histDataOptions_${vNames[j]}.txt
			cp $optfile $tempfile
	                sed -i 's|plotdir|'${plotdir}'|g' $tempfile
	                sed -i 's|mData1|'${mData1}'|g' $tempfile
	                sed -i 's|mData2|'${mData2}'|g' $tempfile
                        sed -i 's|mData3|'${mData3}'|g' $tempfile
	                sed -i 's|mYear|'${mYears[i]}'|g' $tempfile
			sed -i 's|vName|'${vNames[j]}'|g' $tempfile
			root -b -q -l "plotDataHistsDPG_3years.C(\"$tempfile\")" > $logdir/${mYears[i]}_${m_stat}_${vNames[j]}.log
		done
	done
done
