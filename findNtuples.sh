
source /cvmfs/sft.cern.ch/lcg/app/releases/ROOT/6.26.10/x86_64-centos8-gcc85-opt/bin/thisroot.sh
workdir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null && pwd )"/  # pass the directory of this script to workdir
echo $workdir
for i in /eos/cms/store/group/dpg_ecal/alca_ecalcalib/ecalelf/ntuples/ticao/mc2022/*.root
do
    find $i -name "*root" >> inputs/$1.txt
done

for i in /eos/cms/store/group/dpg_ecal/alca_ecalcalib/ecalelf/ntuples/zhangjie/MC2023/*post*.root
do
    find $i -name "*root" >> inputs/$2.txt
done

for i in /eos/cms/store/group/dpg_ecal/alca_ecalcalib/ecalelf/ntuples/ticao/mc2023/*.root
do
    find $i -name "*root" >> inputs/$3.txt
done

for i in /eos/cms/store/group/dpg_ecal/alca_ecalcalib/ecalelf/ntuples/zhangjie/MC2024/*.root
do
    find $i -name "*root" >> inputs/$4.txt
done

echo $1
mkdir -p outputs/$2
root -b -q -l "ntupleDumper.cxx(\"$workdir\", \"$2\",0, \"inputs/Run3_timebins_all.root\",\"inputs/Run3.dat\")" 

cd ecalDPG_Plots/
cp ../outputs/$2/$2_all.root data/$2_medianGraph.root 

cd ..

mkdir -p outputs/$3
root -b -q -l "ntupleDumper.cxx(\"$workdir\", \"$3\",0, \"inputs/Run3_timebins_all.root\",\"inputs/Run3.dat\")" 

cd ecalDPG_Plots/
cp ../outputs/$3/$3_all.root data/$3_medianGraph.root 

cd ..
mkdir -p outputs/$4
root -b -q -l "ntupleDumper.cxx(\"$workdir\", \"$4\",0, \"inputs/Run3_timebins_all.root\",\"inputs/Run3.dat\")" 

cd ecalDPG_Plots/
cp ../outputs/$4/$4_all.root data/$4_medianGraph.root 

