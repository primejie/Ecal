cmsenv

workdir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null && pwd )"/  # pass the directory of this script to workdir
echo $workdir

mkdir -vp logs

root -b -q -l "ntupleDumper.cxx(\"$workdir\", \"Run3_eop_2d_median_IOVN\",1, \"inputs/Run3_timebins_all.root\",\"inputs/Run3.dat\")" 
# root -b -q -l "ntupleDumper.cxx(\"$workdir\", \"Run3_eop_2d_median_IOVN_pulse\",1, \"inputs/Run3_timebins_all.root\",\"inputs/Run3.dat\")" 

# root -b -q -l "plotAll.cxx(\"outputs/Run3_eop_2d_median_IOVN/Run3_eop_2d_median_IOVN_all.root\",\"outputs/Run3_eop_2d_median_IOVN_pulse/Run3_eop_2d_median_IOVN_pulse_all.root\")"

