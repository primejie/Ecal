// #ifndef ECALELF_NTUPLE_PROCESSOR
// #define ECALELF_NTUPLE_PROCESSOR

#include "sstream"
#include "iostream"
#include "fstream"
#include "string.h"
#include "map"
#include "functional"
#include "algorithm"
#include "vector"
#include "math.h"
#include "bitset"
#include "TROOT.h"
#include "TFile.h"
#include "TIterator.h"
#include "TKey.h"
#include "TClass.h"
#include "TTree.h"
#include "TChain.h"
#include "TColor.h"
#include "TDatime.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TGraphAsymmErrors.h"
#include "TBrowser.h"
#include "TLorentzVector.h"
#include "TMath.h"
#include "TString.h"
#include "boost/function.hpp"
#include <boost/algorithm/string/replace.hpp>
#include "boost/filesystem.hpp"
#include "statistic.cc"
#include "ECALELF_ntuple_processor.h"

#include <sys/stat.h> // for mkdir

#include "extra_tools.cc"
#define eleIDmask 0x0004 
void test(){
UInt_t eleID=0x00007;


std::cout<<std::hex<<(eleID & eleIDmask)<<std::endl;
// std::cout<<( & eleIDmask)<<std::endl;
}