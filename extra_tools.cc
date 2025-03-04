#ifndef EXTRATOOLS_H
#define EXTRATOOLS_H


#include "TROOT.h"
#include "TH1.h"
#include "TH2.h"
#include "THStack.h"
#include "TAxis.h"
#include "TGaxis.h"
#include "TLeaf.h"
#include "TKey.h"
#include "TChain.h"
#include "TFile.h"
#include "TGraph.h"
#include "TGraphAsymmErrors.h"
#include "TTree.h"
#include "TAxis.h"
#include "TObjArray.h"
#include "TColor.h"
#include "TBranch.h"
#include "TTreeReader.h"
#include "TTreeReaderValue.h"
#include "TTreeReaderArray.h"
#include "TCollection.h"
#include "TKey.h"
#include "TMath.h"
#include "TLorentzVector.h"
#include "TProfile.h"
#include "RtypesCore.h"
#include <boost/algorithm/string.hpp>
#include "boost/algorithm/string/replace.hpp"
#include <boost/type_index.hpp>
#include <sys/stat.h>
#include "iostream"
#include "sstream"
#include "fstream"
#include "vector"
#include "math.h"
#include <algorithm>
#include <cctype>
#include <locale>
#include <numeric>
#include <regex>
#include <dirent.h>
#include <errno.h>
#include <dirent.h>
#include <stdio.h>
#include <iterator>
#include <string>




/*************************************************************Declarations*************************************************************/
Double_t deltaR(Double_t eta1, Double_t phi1, Double_t eta2, Double_t phi2);
void setBit(UChar_t & _container, UChar_t _pos, Bool_t _bitVal=1);
Bool_t getBit(UChar_t _container, UChar_t _pos);
std::string removeNonAlpha(std::string word);
template <class any_number>
std::string removeTrailingZeros(any_number number);
Bool_t file_exists(std::string fileName);
Int_t mkdir(std::string dir_path);
std::map<std::string, Double_t> load_xsecs(std::string filepath);
std::vector<std::string> getObjectList(std::string filepath, std::string objtype, std::vector<std::string> exclusion_list={});
Bool_t match(char const *needle, char const *haystack);
std::string ReadNthLine(std::string filename, int N);
UInt_t countLines(std::string filename);
std::vector<std::string> split_string(std::string _string, std::string _delimiter=",");
std::string get_cell(std::string filename, UInt_t row, UInt_t column, std::string _delimiter=",");
std::string getFileName(std::string _filepath);
std::vector<std::string> getNonemptyLines(std::string filepath);
std::vector<std::string> getNonemptyLinesWithFilenameKeyword(std::string filepath, std::string keyword, std::vector<std::string> exclude={});
std::vector<std::string> getLinesRegex(std::string _filepath, std::string _regexStr);
TH1* getHistFromFile(std::string _histName, std::string _filename, Bool_t _verbose=0);
TObject *getObjectFromFile(std::string _objectName, std::string _filename);
TH1* rebinHist(TH1* _hist, Double_t _statUnc);
TH1* rebinHist(TH1* _hist, std::vector<Double_t> _newBins);
std::vector<Double_t> getGoodBins(TH1* _hist, Double_t _statUnc);
Double_t sumNextNbins(TH1* _hist, UInt_t _n, UInt_t _curr);
void copyHistAtts(TH1* _source, TH1* _mock);
Double_t getSumW(std::string _cutflowfile);
void ltrim(std::string &s);
void rtrim(std::string &s);
void trim(std::string &s);
std::string ltrim_copy(std::string s);
std::string rtrim_copy(std::string s);
std::string trim_copy(std::string s);
Double_t ams(Double_t _s, Double_t _b);
template <typename T>
std::string to_string_with_precision(const T a_value, const int n = 6);
std::string getUnit(TH1* _hist);
std::string getUnit(std::string ystring);
std::string eraseUnit(std::string ystring);
std::string first_numberstring(std::string const & str);
std::vector<Double_t> getXbins(TH1 *hist);
void closeTChain(TChain *_chain);
void setFrameColor(TAxis* _axis, std::string _color);
void setFrameColor(TH1* _hist, std::string _color);
void setFrameColor(THStack* _stack, std::string _color);
TTree *loadTreeFromFile(std::string _treeName, std::string _filename);
Char_t isDirectory(std::string filePath, Bool_t _verbose=0);
void addPointToGraph(TGraph & _graph, Double_t _x, Double_t _y);
void graphStats(TGraphAsymmErrors* graph, Double_t &mean, Double_t &stdev);
TH1D* graph2hist(TGraphAsymmErrors* graph, UInt_t ndivs, Double_t ylow, Double_t yhigh);
Int_t writeToFile(TObject *_object, std::string _filePath, std::string _mode = "RECREATE");
std::string findAndReplaceAll(std::string data, std::string toSearch, std::string replaceStr);
TChain *openTChain(std::string _chainListFile, std::string _treeName="");
TChain *openTChain(std::vector<std::string> _chainList, std::string _treeName="");
TChain *openTChainWithFilesInDir(std::string _dirPath, std::string _treeName="");
std::vector<std::pair<std::string, std::string>> getBranchList(std::string _treePath, std::string _treeName="", Bool_t _verbose=1);
std::vector<std::string> listFilesInDir(std::string _dirPath, std::string _regexStr="", Bool_t _verb=0);
Bool_t matchRegex(std::string _str,std::string _regexStr);
std::string getTreeNameInFile(std::string _filePath);
TH1F *mergeBins(std::string _fileList, std::string _histName, std::string _sumWeightsHistname, std::string _xsecMap, Int_t _nameCol=0, Int_t _xSecCol=2, std::string _suffix="_merged");
std::string vLookup(std::string _lookupKey, std::string _inFile, Int_t _lookupCol, Int_t _valCol, Bool_t _regex=0);
Bool_t isROOTfile(std::string _filepath);
std::vector<Float_t> getXlimits(std::vector<TH1*> _hists, Float_t _binThreshold=0.);
void clearStack();
Double_t weightedYmean(TH1 *_hist);
Bool_t branchExists(std::string _branchName, TTree *_tree);
Float_t getMean(std::vector<Float_t> _set);
template <class ObjType>
ObjType copyObjectDeleteSrc(ObjType *_object);

template <class ObjType>
ObjType copyObjectDeleteSrc(ObjType *_original){
	ObjType _copy(*_original);
	_original->Delete();
	return _copy;
};

struct JJG_EventClass;
template <typename anytype>
struct TTreeReaderAnyValue;
template <typename anytype>
struct TTreeReaderVectorValue;
template <typename anytype>
struct TTreeReaderArrayValue;
struct plot_variable;
struct histogram_template;
struct twoDhistogram_template;
template <typename anytype>
struct vector_association;
struct BinCollection;
struct signal_atts;
struct sample;
struct Profile2D;
struct parseOptions;

class CSVReader;


const std::map<std::string, Double_t> xsec_unit_map = {
	{"fb", 1.0e-3},
	{"pb", 1.0},
	{"nb", 1.0e3}
};


/*************************************************************Definitions*************************************************************/
struct JJG_EventClass {
	std::string name;
	Bool_t *Pass;
	JJG_EventClass(Bool_t &_Pass, std::string _name): Pass(&_Pass), name(_name) {
	};
	JJG_EventClass(){};
	~JJG_EventClass(){};
};

template <typename anytype1, typename anytype2>
void setBit(anytype1 & _container, anytype2 _pos, Bool_t _bitVal){
	_container ^= (-_bitVal ^ _container) & (1UL << _pos);
};


template <typename anytype1, typename anytype2>
Bool_t getBit(anytype1 _container, anytype2 _pos){
	return (_container>>_pos) & 1;
};


template <typename anytype>
struct TTreeReaderAnyValue{
	TTreeReaderValue<anytype> *val = nullptr;
	TTreeReaderAnyValue(TTreeReader & ttreereader, std::string branchname){
		set(ttreereader, branchname);
	};
	TTreeReaderAnyValue(){};
	~TTreeReaderAnyValue(){
		delete val;
	};
	void set(TTreeReader & ttreereader, std::string branchname){
		val = new TTreeReaderValue<anytype>(ttreereader,branchname.c_str());
		std::cout<<"\t\tInitialized branch <"<< boost::typeindex::type_id<anytype>().pretty_name() <<"> "<<branchname<<std::endl;
	};
	operator anytype () const {
		return **val;
	}
};


template <typename anytype>
struct TTreeReaderVectorValue: TTreeReaderAnyValue<std::vector<anytype>>{
	TTreeReaderVectorValue(TTreeReader & ttreereader, std::string branchname):TTreeReaderAnyValue<std::vector<anytype>>(ttreereader, branchname){
	};
	TTreeReaderVectorValue(){};
	~TTreeReaderVectorValue(){
	};
	anytype operator[](UInt_t index) {
		return (*(this->val))->at(index);
	};
	anytype at(UInt_t index){
		return (*(this->val))->at(index);
	};
	UInt_t size(){
		return (*(this->val))->size();
	};

	//define begin & end function for iterator
};


template <typename anytype>
struct TTreeReaderArrayValue{
	TTreeReaderArray<anytype> *val = nullptr;
	TTreeReaderArrayValue(TTreeReader & ttreereader, std::string branchname){
		set(ttreereader, branchname);
	};
	TTreeReaderArrayValue(){};
	~TTreeReaderArrayValue(){
		delete val;
	};
	void set(TTreeReader & ttreereader, std::string branchname){
		val = new TTreeReaderArray<anytype>(ttreereader,branchname.c_str());
		std::cout<<"\t\tInitialized array branch <"<< boost::typeindex::type_id<anytype>().pretty_name() <<"> "<<branchname<<std::endl;
	};
	anytype operator[](UInt_t index) {
		return (*(this->val)).At(index);
	};
	anytype at(UInt_t index){
		return (*(this->val)).At(index);
	};
	UInt_t size(){
		return (*(this->val)).GetSize();
	};
	//returns pointer to 0th position
	operator anytype* () const{
		return &(*(*(this->val)).begin());
	};
};


template <typename anytype>
struct vector_association{
	std::vector<anytype> *vec = nullptr;
	anytype *var = nullptr;
	vector_association(anytype *_var, std::vector<anytype> *_vec): var(_var), vec(_vec){};
	vector_association(){};
	~vector_association(){};
	anytype operator[](UInt_t index) {
		return vec->at(index);
	}
	void push_back(){
		vec->push_back(*var);
	};
	void clear(){
		vec->clear();
	};
};


struct plot_variable {
	const Float_t *xptr = nullptr;
	Float_t xmin;
	Float_t xmax;
	ULong_t nbins;
	Double_t *xBins = nullptr;
	std::string xtitle;
	std::string xunit;
	plot_variable(const Float_t &_xptr, Float_t _xmin, Float_t _xmax, ULong_t _nbins,	std::string _xtitle = "", std::string _xunit = ""){
		set(_xptr, _xmin, _xmax, _nbins, _xtitle, _xunit);
	};
	plot_variable(const Float_t &_xptr, const Double_t *_xBins = nullptr, ULong_t _nbins = 0, std::string _xtitle = "", std::string _xunit = ""){
		set(_xptr, _xBins, _nbins, _xtitle, _xunit);
	};
	plot_variable(){};
	void set(const Float_t &_xptr, Float_t _xmin, Float_t _xmax, ULong_t _nbins,	std::string _xtitle = "", std::string _xunit = ""){
		xptr = &_xptr;
		xmin = _xmin;
		xmax = _xmax;
		nbins = _nbins;
		xtitle = _xtitle;
		xunit = _xunit;
	};
	void set(const Float_t &_xptr, const Double_t *_xBins, ULong_t _nbins, std::string _xtitle = "", std::string _xunit = ""){
		xptr = &_xptr;
		nbins = _nbins;
		xtitle = _xtitle;
		xunit = _xunit;
		xBins = new Double_t[nbins+1];
		for(ULong_t i = 0; i <= _nbins; i++){
			xBins[i] = _xBins[i];
		}
	};
	~plot_variable(){
		//to-do:
		// if(xBins) delete [] xBins;
	};
	operator Float_t () const{
		return *xptr;
	}
};


struct histogram_template {
	const plot_variable *var = nullptr;
	TH1F* hist = nullptr;
	std::string histTitle;
	std::string histName;
	histogram_template(const plot_variable &_var, std::string _histTitle="", std::string _histName="", TH1F* _hist=nullptr){
		set(_var, _histTitle, _histName, _hist);
	};

	histogram_template() {};

	void set(const plot_variable &_var, std::string _histTitle="", std::string _histName="", TH1F* _hist=nullptr){
		var = &_var;
		histTitle = _histTitle;
		hist = _hist;
		if(hist) isUser = 1;
	};

	void initializehist(std::string name_prefix="", std::string title_prefix="", Bool_t Yunit = 1, TFile *_file = nullptr){
		if(isUser) std::cout<<"\tWarning: Data member .hist will not point to user-set histogram!"<<std::endl;
		std::string binwidth_string = "";
		if(var->xBins == nullptr && Yunit){
			binwidth_string = removeTrailingZeros((var->xmax - var->xmin)/(Float_t)var->nbins);
			if(!binwidth_string.compare("1") && !var->xunit.empty()) binwidth_string.pop_back();
			else binwidth_string += " ";
			binwidth_string = "/"+binwidth_string;
			binwidth_string += var->xunit;
			rtrim(binwidth_string);
		}
		if(histName.empty()) histName = removeNonAlpha(name_prefix) + "_1D_" + removeNonAlpha(var->xtitle);
		trim(histName);
		if(histTitle.empty()) histTitle = title_prefix;
		trim(histTitle);
		std::string titles = histTitle + ";" + var->xtitle + (var->xunit.empty()?"":(" ["+var->xunit+"]")) + ";" + "# of events"+binwidth_string;
		if(var->xBins != nullptr) hist = new TH1F(histName.c_str(), titles.c_str(), var->nbins, var->xBins);
		else hist = new TH1F(histName.c_str(), titles.c_str(), var->nbins, var->xmin, var->xmax);
		hist->GetXaxis()->CenterTitle();
		hist->GetYaxis()->CenterTitle();
		hist->Sumw2();
		if(_file) hist->SetDirectory(_file->GetDirectory(""));
		isUser = 0;
		std::cout<<"\t\tInitialized TH1F "<<histName<<std::endl;
	};

	void fill(Float_t weight = 1.0){
		if(!hist){
			std::cout<<"Cannot fill! TH1F ("<<var->xtitle <<") is uninitialized!";
			return;
		}
		hist->Fill(*(var->xptr), weight);
	};

	~histogram_template() {
		// if(hist) delete hist;
	}
private:
	Bool_t isUser = 0;
};


struct twoDhistogram_template {
	const plot_variable *xvar = nullptr;
	const plot_variable *yvar = nullptr;
	TH2F* hist = nullptr;
	std::string histTitle;
	std::string histName;

	twoDhistogram_template(const plot_variable &_xvar, const plot_variable &_yvar, std::string _histTitle = "", std::string _histName="", TH2F* _hist = nullptr){
		set(_xvar, _yvar, _histTitle, _histName, _hist);
	};

	twoDhistogram_template(){};

	void set(const plot_variable &_xvar, const plot_variable &_yvar, std::string _histTitle = "", std::string _histName="", TH2F* _hist = nullptr){
		xvar = &_xvar;
		yvar = &_yvar;
		histTitle = _histTitle;
		hist = _hist;
		if(hist) isUser = 1;
	};

	void fill(Float_t weight = 1.0){
		if(!hist) {
			std::cout<<"Cannot fill! TH2F ("<<xvar->xtitle << " VS "<< yvar->xtitle<<") is uninitialized!";
			return;
		}
		hist->Fill(*(xvar->xptr), *(yvar->xptr), weight);
	};

	void initializehist(std::string name_prefix = "", std::string title_prefix="", TFile *_file = nullptr){
		if(isUser) std::cout<<"\tWarning: Data member .hist will not point to user-set histogram!"<<std::endl;
		if(histName.empty())histName = removeNonAlpha(name_prefix) + "_2D_" + removeNonAlpha(xvar->xtitle +"\\ VS\\ " + yvar->xtitle);
		trim(histName);
		if(histTitle.empty()) histTitle =  title_prefix;
		trim(histTitle);
		std::string titles = histTitle + ";" + xvar->xtitle + (xvar->xunit.empty()?"":(" ["+xvar->xunit+"]")) + ";" + yvar->xtitle + (yvar->xunit.empty()?"":(" ["+yvar->xunit+"]")) ;
		if(xvar->xBins != nullptr && yvar->xBins == nullptr){
			hist = new TH2F(histName.c_str(), titles.c_str(), xvar->nbins, xvar->xBins, yvar->nbins, yvar->xmin, yvar->xmax);
		}
		else if(xvar->xBins == nullptr && yvar->xBins != nullptr){
			hist = new TH2F(histName.c_str(), titles.c_str(), xvar->nbins, xvar->xmin, xvar->xmax, yvar->nbins, yvar->xBins);
		}
		else if(xvar->xBins != nullptr && yvar->xBins != nullptr){
			hist = new TH2F(histName.c_str(), titles.c_str(), xvar->nbins, xvar->xBins, yvar->nbins, yvar->xBins);
		}
		else{
			hist = new TH2F(histName.c_str(), titles.c_str(), xvar->nbins, xvar->xmin, xvar->xmax, yvar->nbins, yvar->xmin, yvar->xmax);
		}
		hist->GetXaxis()->CenterTitle();
		hist->GetYaxis()->CenterTitle();
		hist->SetTitle(histTitle.c_str());
		hist->Sumw2();
		if(_file) hist->SetDirectory(_file->GetDirectory(""));
		isUser = 0;
		std::cout<<"\t\tInitialized TH2F "<<histName<<std::endl;
	};

	~twoDhistogram_template() {
		// if(hist) delete hist;
	}
private:
	Bool_t isUser = 0;
};

struct signal_atts {
	signal_atts(std::string _couplingname, std::string _legend, std::string _color, Int_t _markerstyle) : couplingname(_couplingname), legend(_legend), color(_color), markerstyle(_markerstyle) {
	}

	signal_atts() {
	}
	std::string couplingname;
	std::string legend;
	std::string color;
	Int_t markerstyle;
	// std::string operator[]{
	// 	return couplingname;
	// };
};


struct sample {

	sample(std::string _ntuple, std::string _legend = "", Int_t _marker = 20, std::string _color = "#252525", Bool_t _drawLine = 0, TFile *_file = NULL, Float_t _luminosity=-999) {
		set(_ntuple, _legend, _marker, _color, _drawLine,_file, _luminosity);
	}

	sample() {
	}
	std::string ntuple;
	std::string legend;
	Int_t marker;
	std::string color;
	Bool_t drawLine = 0;
	TFile *file;
	Float_t luminosity = 0.;

	void set(std::string _ntuple, std::string _legend = "", Int_t _marker = 20, std::string _color = "#252525", Bool_t _drawLine = 0, TFile *_file = NULL, Float_t _luminosity=-999){
		ntuple= _ntuple;
		legend = _legend;
		marker = _marker;
		color = _color;
		drawLine = _drawLine;
		file = _file;
		luminosity = _luminosity;
	};

	void assignAtt(TH1 *_hist, Float_t _markerSize=1.5, Float_t _lineWidth=2.){
		if(marker>0){
			_hist->SetMarkerStyle(marker);
			_hist->SetMarkerSize(_markerSize);
			_hist->SetMarkerColor(TColor::GetColor(color.c_str()));
			_hist->SetLineColor(TColor::GetColor(color.c_str()));
			_hist->SetLineWidth(_lineWidth);
		} else{
			_hist->SetFillStyle((-marker));
			_hist->SetFillColor(TColor::GetColor(color.c_str()));
			_hist->SetLineColor(TColor::GetColor(color.c_str()));
			_hist->SetLineWidth(_lineWidth);
		}

	};
};


struct Profile2D{
	TH2D *hist = nullptr;
	std::vector<Double_t> _bin_entries;
	UInt_t nBinsTot;
	Profile2D(std::string _name, std::string _title, UInt_t _nBinsX, Double_t _xMin, Double_t _xMax, UInt_t _nBinsY, Double_t _yMin, Double_t _yMax){
		set(_name, _title, _nBinsX, _xMin, _xMax, _nBinsY, _yMin, _yMax);
	};
	Profile2D(){};
	~Profile2D(){};
	void set(std::string _name, std::string _title, UInt_t _nBinsX, Double_t _xMin, Double_t _xMax, UInt_t _nBinsY, Double_t _yMin, Double_t _yMax){
		hist = new TH2D(_name.c_str(), _title.c_str(), _nBinsX, _xMin, _xMax, _nBinsY, _yMin, _yMax);
		hist->GetXaxis()->CenterTitle();
		hist->GetYaxis()->CenterTitle();
		nBinsTot = (_nBinsX+2) * (_nBinsY+2);
		_bin_entries.reserve(nBinsTot);
		for(UInt_t i = 0; i < nBinsTot; i++){
			_bin_entries.push_back(0.);
		}
	};
	void fill(Double_t _x, Double_t _y, Double_t _Zvalue, Double_t _weight=1.0){
		hist->Fill(_x, _y, _Zvalue * _weight);
		UInt_t whichBin = hist->FindBin(_x, _y);
		_bin_entries[whichBin] += _weight;
	}
	TH2D * getProfile(){
		std::string profile_name = (std::string) hist->GetName() + "_profile";
		std::string profile_title = "Profile\\ " + (std::string) hist->GetTitle();
		TH2D *profile = (TH2D*) hist->Clone(profile_name.c_str());
		profile->Reset();
		profile->GetXaxis()->CenterTitle();
		profile->GetYaxis()->CenterTitle();
		profile->SetTitle(profile_title.c_str());
		Double_t sumEntries = std::accumulate(_bin_entries.begin(), _bin_entries.end(), 0);
		for(UInt_t i = 0; i < nBinsTot; i++){
			Double_t _mean = _bin_entries[i] > 0. ? hist->GetBinContent(i)/_bin_entries[i] : 0. ;
			if(_bin_entries[i] > 0.) profile->SetBinContent(i, _mean);
		}
		return profile;
	}
	operator TH2D* () {
		return hist;
	}
};


/*
 * A class to read data from a csv file.
 */
class CSVReader{
private:
	std::string fileName;
	std::string delimeter;

public:
	CSVReader(std::string filename, std::string delm = ",") :
	fileName(filename), delimeter(delm){};

	// Function to fetch data from a CSV File
	//Parses through csv file line by line and returns the data
	//in vector of vector of strings.
	std::vector<std::vector<std::string> > getData(){
		std::ifstream file(fileName);
		std::vector<std::vector<std::string> > dataList;
		std::string line = "";
		// Iterate through each line and split the content using delimeter
		while (getline(file, line))
		{
			std::vector<std::string> vec;
			boost::algorithm::split(vec, line, boost::is_any_of(delimeter));
			dataList.push_back(vec);
		}
		// Close the File
		file.close();

		return dataList;
	};
};


struct parseOptions {

	std::string optFile;
	std::map<std::string, std::string> optMap;

	parseOptions(std::string _optFile): optFile(_optFile){
		parseIt(optFile);

	};

	parseOptions(){};

	void parseIt(std::string _optFile){
		std::cout<<"\t\tOptions parsed from file "<<_optFile<<"... ";
		CSVReader _csvFile(_optFile);
		std::vector<std::vector<std::string>> _data = _csvFile.getData();

		for(Int_t i = 0; i < _data.size(); i++){
			std::string _optName = _data[i][0];
			if(_optName.empty()) continue;
			std::string _optVal = _data[i][1];
			optMap[_optName] = _optVal;
		}
		std::cout<<" parsed!"<<std::endl;
	};

	Float_t getFloat(std::string _opt){
		if(optMap.find(_opt) == optMap.end()){
			std::cout<<"Error! Key "<<_opt<<" not found"<<std::endl;
		}
		return std::stof(optMap.at(_opt));
	};

	Int_t getInt(std::string _opt){
		if(optMap.find(_opt) == optMap.end()){
			std::cout<<"Error! Key "<<_opt<<" not found"<<std::endl;
		}
		return std::stoi(optMap.at(_opt));
	};

	std::string get(std::string _opt){
		if(optMap.find(_opt) == optMap.end()){
			std::cout<<"Error! Key "<<_opt<<" not found"<<std::endl;
		}
		return optMap.at(_opt);
	};
};


Double_t deltaR(Double_t _eta1, Double_t _phi1, Double_t _eta2, Double_t _phi2){
	Double_t _deltaEta = _eta1 - _eta2;
	Double_t _deltaPhi = _phi1 - _phi2;
	Double_t _deltaR = std::sqrt(_deltaEta*_deltaEta + _deltaPhi*_deltaPhi);
	return _deltaR;
};


std::string removeNonAlpha(std::string word) {
	word.erase(std::remove_if(word.begin(), word.end(),
		[](char ch) {
			return !::iswalnum(ch);
		}), word.end());
	return word;
};


template <class any_number>
std::string removeTrailingZeros(any_number number){
	std::string str = std::to_string (number);
	str.erase ( str.find_last_not_of('0') + 1, std::string::npos );
	if(str.length()>0 && !str.substr(str.length()-1,1).compare(".")) str.pop_back();
	return str;
};


Bool_t file_exists(std::string fileName){
	// std::ifstream infile(fileName);
	// return infile.good();
	if(isDirectory(fileName)==1) return 0;
	struct stat buffer;
	return (stat (fileName.c_str(), &buffer) == 0);
};


Int_t mkdir(std::string dir_path) {
	std::string command = "mkdir -p " + dir_path;
	const int dir_err = system(command.c_str());

	// if(checkIfDirectory(dir_path)){
	// 	std::cout<<"Directory "<<dir_path<<" already exists"<<std::endl;
	// 	return 1;
	// }

	if (-1 == dir_err)
	{
		printf("Error creating directory!");
	}
	else std::cout << "[" << __LINE__ << "] " << "Created directory: " << dir_path << std::endl;
	return dir_err;
};


std::map<std::string, Double_t> load_xsecs(std::string filepath){
	std::map<std::string, Double_t> value_map;
	if(!file_exists(filepath)){
		std::cout<<"Cannot load file "<<filepath<<std::endl;
		return value_map;
	}
	CSVReader reader(filepath);
	std::vector<std::vector<std::string>> data_matrix = reader.getData();
	for(auto & row : data_matrix){
		std::string signal_name = row[0];
		Double_t xsec_val = std::stod(row[1]);
		std::string unit_name = row[3];
		value_map[signal_name] = xsec_val * xsec_unit_map.at(unit_name);
	}

	std::cout<<"Xsections [in pb] read from file "<<filepath<<std::endl;
	for(auto & it : value_map){
		std::cout<<"\t "<<it.first<<" \t "<<it.second<<std::endl;
	}
	return value_map;
};


std::vector<std::string> getObjectList(std::string filepath, std::string objtype, std::vector<std::string> exclusion_list){
	std::cout<<"Making object list..."<<std::endl;
	std::vector<std::string> obj_names;
	TFile rootfile(filepath.c_str(), "READ");
	TIter next(rootfile.GetListOfKeys());
	TKey *key;
	while ((key = (TKey*) next())) {
		TClass *cl = gROOT->GetClass(key->GetClassName());
		if (!cl->InheritsFrom(objtype.c_str())) continue;
		TObject * g = key->ReadObj();
		std::string name = g->GetName();
		Bool_t to_exclude = (std::find(exclusion_list.begin(), exclusion_list.end(), name) != exclusion_list.end());
		if(to_exclude){
			std::cout << "\t " << "Excluding "<< objtype<<" : "<< name << std::endl;
			continue;
		}
		std::cout << "\t " << "Added "<< objtype<<" : "<< name << std::endl;
		obj_names.push_back(name);
		g->Delete();
	}
	rootfile.Close();
	std::sort( obj_names.begin(), obj_names.end() );
	obj_names.erase( std::unique( obj_names.begin(), obj_names.end() ), obj_names.end());
	return obj_names;
};


Bool_t match(char const *needle, char const *haystack) {
	for (; *needle != '\0'; ++needle) {
		switch (*needle) {
			case '?':{
				if (*haystack == '\0')	return false;
				++haystack;
				break;
			}
			case '*':{
				if (needle[1] == '\0')	return true;
				size_t max = strlen(haystack);
				for (size_t i = 0; i < max; i++)
					if (match(needle + 1, haystack + i)) return true;
				return false;
			}
			default:
			if (*haystack != *needle) return false;
			++haystack;
		}
	}
	return *haystack == '\0';
};


std::string ReadNthLine(std::string filename, int N){
	std::ifstream in(filename.c_str());
	std::string s;
   //for performance
	s.reserve(200);
   //skip N lines
	for(int i = 0; i < N; ++i){
		std::getline(in, s);
	}
	std::getline(in,s);
	return s;
};


UInt_t countLines(std::string filename){
	std::ifstream myfile(filename);
    // new lines will be skipped unless we stop it from happening:
	myfile.unsetf(std::ios_base::skipws);
    // count the newlines with an algorithm specialized for counting:
	UInt_t line_count = std::count(
		std::istream_iterator<char>(myfile),
		std::istream_iterator<char>(),
		'\n');
	return line_count;
};


std::vector<std::string> split_string(std::string _string, std::string _delimiter){
	std::vector<string> _split_string;
	boost::split(_split_string,_string,boost::is_any_of(_delimiter));
	return _split_string;
};


std::string get_cell(std::string filename, UInt_t row, UInt_t column, std::string _delimiter){
	return split_string(ReadNthLine(filename, row), _delimiter)[column];
};


std::vector<std::string> splitpath(
	const std::string& str
	, const std::set<char> delimiters)
{
	std::vector<std::string> result;

	char const* pch = str.c_str();
	char const* start = pch;
	for(; *pch; ++pch)
	{
		if (delimiters.find(*pch) != delimiters.end())
		{
			if (start != pch)
			{
				std::string str(start, pch);
				result.push_back(str);
			}
			else
			{
				result.push_back("");
			}
			start = pch + 1;
		}
	}
	result.push_back(start);

	return result;
}

std::string getFileName(std::string _filepath){
	constexpr char sep = '/';
	size_t i = _filepath.rfind(sep, _filepath.length());
	if (i != string::npos) {
		return (_filepath.substr(i+1, _filepath.length() - i));
	}
	return(_filepath);
};


std::vector<std::string> getNonemptyLines(std::string filepath){
	std::ifstream infile(filepath);
	std::vector<std::string> lines;
	std::string line;
	while (std::getline(infile, line))
	{
		trim(line);
		if(!line.empty()) lines.push_back(line);
	}
	return lines;
};


std::vector<std::string> getNonemptyLinesWithFilenameKeyword(std::string filepath, std::string keyword, std::vector<std::string> exclude){
	std::ifstream infile(filepath);
	std::vector<std::string> lines;
	std::string line;
	while (std::getline(infile, line))
	{
		std::string filename = getFileName(line);
		if(filename.empty()) continue;
		if(!match(keyword.c_str(), filename.c_str())) continue;
		Bool_t _skip = 0;
		for(std::string _exclude : exclude){
			if(!_exclude.empty() && match(_exclude.c_str(), filename.c_str())) _skip = 1;
		}
		if(_skip) continue;
		lines.push_back(line);
	}
	return lines;
};


std::vector<std::string> getLinesRegex(std::string _filepath, std::string _regexStr){
	regex _regex(_regexStr);
	std::ifstream infile(_filepath);
	std::vector<std::string> lines;
	std::string line;
	while (std::getline(infile, line))
	{
		if(!std::regex_match(line, _regex)) continue;
		lines.push_back(line);
	}
	return lines;
};


TH1* getHistFromFile(std::string _histName, std::string _filename, Bool_t _verbose){
	TFile _file(_filename.c_str(), "READ");
	TH1* _hist = (TH1*) _file.Get(_histName.c_str());
	_hist->SetDirectory(0);
	_file.Close();
	if(_verbose)std::cout<<"\t\tLoaded histogram "<<_histName<<" from file "<<_filename<<std::endl;
	return _hist;
};


TObject *getObjectFromFile(std::string _objectName, std::string _filename){
	TFile _file(_filename.c_str(), "READ");
	TObject* _object = (TObject*) _file.Get(_objectName.c_str());
	// _object->SetDirectory(0);
	_file.Close();
	if(!_object){
		std::cout<<"Error reading "<<_objectName<< " from file "<<_filename<<std::endl;
		return nullptr;
	}
	std::cout<<"\t\tLoaded TObject "<<_objectName<<" from file "<<_filename<<std::endl;
	return _object;
};


TH1* rebinHist(TH1* _hist, Double_t _statUnc){
	std::vector<Double_t> _goodBins = getGoodBins(_hist, _statUnc);
	if(_goodBins.size()<2) return _hist;
	std::string _newname = "rebinned_" + (std::string)_hist->GetName();
	TH1* _rebinnedHist = (TH1*) _hist->Rebin(_goodBins.size()-1, _newname.c_str(), _goodBins.data());
	_rebinnedHist->Scale(1,"width");
	return _rebinnedHist;
};


TH1* rebinHist(TH1* _hist, std::vector<Double_t> _newBins){
	std::string _newname = "rebinned_" + (std::string)_hist->GetName();
	TH1 *_hist_rebinned = (TH1*) _hist->Rebin(_newBins.size()-1, _newname.c_str(), _newBins.data());
	_hist->Delete();
	return _hist_rebinned;
};


std::vector<Double_t> getGoodBins(TH1* _hist, Double_t _statUnc){
	UInt_t _nBins = _hist->GetXaxis()->GetNbins();
	if (_nBins == 0) {
		std::cout<<"\t Hist "<<_hist->GetName()<<" has no bins!"<<std::endl;
		return {};
	}
	_hist->Sumw2();
	std::vector<Double_t> good_bins;
	good_bins.push_back(_hist->GetXaxis()->GetBinLowEdge(1));
	Double_t _runningBinSum = 0.;
	UInt_t _first50pcBins = std::ceil(0.5 *_nBins);
	for(UInt_t i = 1; i < _nBins+1; i++){
		Double_t _bincontent = _hist->GetBinContent(i);
		Double_t _next10bincontent = sumNextNbins(_hist,10,i);
		if(_bincontent != _bincontent) return {};
		Double_t _binUpedge = _hist->GetXaxis()->GetBinUpEdge(i);
		Double_t _binLowedge = _hist->GetXaxis()->GetBinLowEdge(i);
		//(i <=_first50pcBins && _bincontent == 0.)
		if((_next10bincontent == 0. && i < _nBins) || (_bincontent == 0.)){
			if(good_bins.size()>0) {
				Double_t _lastElement = good_bins.back();
				if(_binLowedge -_lastElement > 0.00000001) good_bins.push_back(_binLowedge);
			}
			good_bins.push_back(_binUpedge);
			_runningBinSum = 0.;
			continue;
		}
		_runningBinSum += _bincontent;
		if(1/std::sqrt(_runningBinSum) < _statUnc){
			good_bins.push_back(_binUpedge);
			_runningBinSum =0;
		}
		if(i < _nBins) continue;
		Double_t _lastElement = good_bins.back();
		if(_binUpedge -_lastElement < 0.00000001) continue;
		good_bins.push_back(_binUpedge);
		if(1/std::sqrt(_runningBinSum) > _statUnc) continue;
		if(good_bins.size()==1) continue;
		//erase second last element
		good_bins.erase(good_bins.begin() + good_bins.size()-2);
	};
	return good_bins;
};


Double_t sumNextNbins(TH1* _hist, UInt_t _n, UInt_t _curr){
	Double_t _NbinSum = 0.;
	Int_t _countEnd = (_hist->GetNbinsX() <= _curr + _n) ? _hist->GetNbinsX() : _curr + _n;
	for(Int_t i = _curr; i < _countEnd+1; i++){
		_NbinSum += _hist->GetBinContent(i);
	}
	return _NbinSum;
};


Double_t getSumW(std::string _cutflowfile){
	std::string sumWline = ReadNthLine(_cutflowfile, 3);
	std::string sumWstring = (split_string(sumWline, ",")).at(0);
	Double_t _sumW = std::stod(sumWstring);
	std::cout<<"\tFrom "<<_cutflowfile<<" sumW="<<_sumW<<std::endl;
	return _sumW;
};


// trim from start (in place)
void ltrim(std::string &s) {
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int ch) {
		return !std::isspace(ch);
	}));
}

// trim from end (in place)
void rtrim(std::string &s) {
	s.erase(std::find_if(s.rbegin(), s.rend(), [](int ch) {
		return !std::isspace(ch);
	}).base(), s.end());
}

// trim from both ends (in place)
void trim(std::string &s) {
	ltrim(s);
	rtrim(s);
}

// trim from start (copying)
std::string ltrim_copy(std::string s) {
	ltrim(s);
	return s;
}

// trim from end (copying)
std::string rtrim_copy(std::string s) {
	rtrim(s);
	return s;
}

// trim from both ends (copying)
std::string trim_copy(std::string s) {
	trim(s);
	return s;
};

Double_t ams(Double_t _s, Double_t _b){
	return std::sqrt(2*(1+_s+_b)*std::log(1+_s/_b)-2*_s);
};


template <typename T>
std::string to_string_with_precision(const T a_value, const int n) {
	std::ostringstream out;
	out << std::fixed << std::setprecision(n) << a_value;
	return out.str();
};


std::string getUnit(TH1* _hist){
	std::string ystring = _hist->GetYaxis()->GetTitle();
	return getUnit(ystring);
};


std::string getUnit(std::string ystring){
	size_t lastSlash = ystring.find_last_of("/");
	if(lastSlash == std::string::npos) return "";
	std::string _unit = ystring.substr(lastSlash+1);
	trim(_unit);
	std::string number = first_numberstring(_unit);
	std::string unit_text = _unit;
	boost::replace_all(unit_text, number, "");
	trim(unit_text);
	if(unit_text.empty()) return std::to_string(1);
	else return unit_text;
};


std::string eraseUnit(std::string ystring){
	size_t lastSlash = ystring.find_last_of("/");
	if(lastSlash == std::string::npos) return ystring;
	std::string _unit = ystring.substr(lastSlash);
	boost::replace_all(ystring, _unit, "");
	return ystring;
}


std::string first_numberstring(std::string const & str){
	std::size_t const n = str.find_first_of("0123456789.");
	if (n != std::string::npos)
	{
		std::size_t const m = str.find_first_not_of("0123456789.", n);
		return str.substr(n, m != std::string::npos ? m-n : m);
	}
	return std::string();
};


void closeTChain(TChain *_chain){
	if(!_chain){
		std::cout<<"Error! TChain is null!"<<std::endl;
	}
	TFile *file = _chain->GetCurrentFile();
	_chain->SetDirectory(0);
	if(file) delete file;
};


std::vector<Double_t> getXbins(TH1* hist) {
	UInt_t nbins = hist->GetNbinsX();
	if (nbins == 0) {
		std::cout << "Error : No Bins!" << std::endl;
		return {};
	};
	std::vector<Double_t> bins;
	TAxis* axis = hist->GetXaxis();
	bins.push_back(axis->GetBinLowEdge(1));
	for (UInt_t i = 1; i < nbins + 1; i++) {
		bins.push_back(axis->GetBinUpEdge(i));
	}
	return bins;
};


void setFrameColor(TAxis* _axis, std::string _color){
	Int_t color_val = TColor::GetColor(_color.c_str());
	_axis->SetAxisColor(color_val);
	_axis->SetLabelColor(color_val);
	_axis->SetTitleColor(color_val);
};


void setFrameColor(TH1* _hist, std::string _color){
	setFrameColor(_hist->GetXaxis(), _color);
	setFrameColor(_hist->GetYaxis(), _color);
};


void setFrameColor(THStack* _stack, std::string _color){
	setFrameColor(_stack->GetXaxis(), _color);
	setFrameColor(_stack->GetYaxis(), _color);
};


TTree *loadTreeFromFile(std::string _treeName, std::string _filename){
	TFile *_file = new TFile(_filename.c_str(), "READ");
	if(!_file){
		std::cout<<"Error! Cannot read file "<<_filename<<std::endl;
		return nullptr;
	}

	if(!_file->GetListOfKeys()->Contains(_treeName.c_str())){
		std::cout<<"Error! Object "<<_treeName<<" does not exist in file "<<_filename<<std::endl;
		return nullptr;
	}

	TTree *_tree = (TTree*) _file->Get(_treeName.c_str());
	if(!_tree){
		std::cout<<"Error! Cannot read TTree "<<_file<<" from successfully loaded TFile "<<_filename <<std::endl;
		return nullptr;
	}

	std::cout<<"Successfully loaded TTree "<<_treeName<<" from TFile "<<_filename <<std::endl;
	std::cout<<"Remember to call TTree*->GetDirectory()->Close() once the tree is not needed any more!" <<std::endl;

	return _tree;
};


Char_t isDirectory(std::string filePath, Bool_t _verbose){
	DIR* dir = opendir(filePath.c_str());
	if (dir){
		closedir(dir);
		return 1;
	} else if (ENOENT == errno){
		return 0;
	} else{
		if(_verbose) std::cout<<"Error checking path : "<<filePath<<std::endl;
		return -1;
	}
}


void addPointToGraph(TGraph & _graph, Double_t _x, Double_t _y){
	_graph.SetPoint(_graph.GetN(), _x, _y);
};


void graphStats(TGraphAsymmErrors* graph, Double_t &mean, Double_t &stdev) {
	UInt_t Npoints = graph->GetN();
	std::vector<Double_t> xVals(graph->GetY(), graph->GetY() + Npoints), xErrsL(graph->GetEYlow(), graph->GetEYlow() + Npoints), xErrsH(graph->GetEYhigh(), graph->GetEYhigh() + Npoints);
	Double_t W, sumW = 0, sumW2 = 0, sumXW = 0, sumDev2W = 0;
	for (UInt_t i = 0; i < Npoints; i++) {
		if (xErrsL[i] * xErrsH[i] > 0) {
			W = 1 / (xErrsL[i] * xErrsH[i]);
			sumW += W;
			sumXW += xVals[i] * W;
		}
	}
	if (sumW > 0) {
		mean = sumXW / sumW;
		for (UInt_t i = 0; i < Npoints; i++) {
			if (xErrsL[i] * xErrsH[i] > 0) {
				W = 1 / (xErrsL[i] * xErrsH[i]);
				sumW2 += W * W;
				sumDev2W += (xVals[i] - mean) * (xVals[i] - mean) * W;
			}
		}
		stdev = TMath::Sqrt(sumDev2W / (sumW - sumW2 / sumW));
	} else {
		mean = -999;
		stdev = -999;
	}
};


TH1D* graph2hist(TGraphAsymmErrors* graph, UInt_t ndivs, Double_t ylow, Double_t yhigh) {
	std::string name = graph->GetName();
	name.append("_hist_" + to_string_with_precision(rand() % 1000, 0));
	UInt_t Npoints = graph->GetN();

	std::vector<Double_t> xVals(graph->GetY(), graph->GetY() + Npoints), xErrsL(graph->GetEYlow(), graph->GetEYlow() + Npoints), xErrsH(graph->GetEYhigh(), graph->GetEYhigh() + Npoints);

	TH1D* hist = new TH1D("", "", ndivs, ylow, yhigh);
	hist->SetFillColor(graph->GetLineColor());
	hist->SetLineColor(graph->GetLineColor());
	hist->SetMarkerColor(graph->GetLineColor());

	Double_t w = 1;
	for (UInt_t i = 0; i < Npoints; i++) {
		if (!(xErrsL[i] <= 0  || xErrsH[i] <= 0))w = 1 / (xErrsL[i] * xErrsH[i]);
		else continue;
		hist->Fill(xVals[i], w);
	}
	Npoints = hist->GetEffectiveEntries();
	hist->Scale(Npoints / hist->Integral());
	return hist;
};


Int_t writeToFile(TObject *_object, std::string _filePath, std::string _mode){

	TFile _outfile(_filePath.c_str(), _mode.c_str());

	if(_outfile.IsZombie()){
		std::cout<<"\t\tFailed to open TFile "<<_filePath<<" in the mode "<<_mode<<std::endl;
		return -1;
	}

	_outfile.cd();
	_object->Write(_object->GetName());
	_outfile.Close();
	std::cout<<"\t\tWritten "<< _object->GetName()<<" to file "<<_filePath<<std::endl;
	return 0;
};


std::string findAndReplaceAll(std::string data, std::string toSearch, std::string replaceStr){
	// Get the first occurrence
	size_t pos = data.find(toSearch);

	// Repeat till end is reached
	while( pos != std::string::npos)
	{
		// Replace this occurrence of Sub String
		data.replace(pos, toSearch.size(), replaceStr);
		// Get the next occurrence from the current position
		pos =data.find(toSearch, pos + replaceStr.size());
	}

	return data;
};


TChain *openTChain(std::string _chainListFile, std::string _treeName){
	std::vector<std::string> _ntuples = getNonemptyLines(_chainListFile);
	if(_ntuples.size() == 0){
		std::cout<<"Error! File list "<<_chainListFile<<" is invalid!"<<std::endl;
		return nullptr;
	}

	if(_treeName.empty()){
		TFile _testF(_ntuples[0].c_str(), "READ");
		if (!_testF.GetListOfKeys()) {
			std::cout<<"Error! Cannot open TChain. No key found in file "<<_ntuples[0]<<std::endl;
			return nullptr;
		}
		TIter lNext(_testF.GetListOfKeys()) ;
		TObject* lObj ;
		Char_t treeCounter = 0;
		while((lObj = (TObject*)lNext())) {
			if(treeCounter > 1){
				std::cout<<"Error! No TTree name provided & there are >1 trees in the file "<<_ntuples[0]<<std::endl;
				return nullptr;
			}
			if(lObj->InheritsFrom("TTree")) {
				_treeName = lObj->GetName();
				treeCounter++;
			}
		}
		_testF.Close();
	}

	TChain *_bChain = new TChain(_treeName.c_str());
	std::cout<<"Making TChain from trees "<<_treeName<<std::endl;
	for(auto & _ntuple : _ntuples){
		if(!file_exists(_ntuple)){
			std::cout<<"Error! File does not exist "<<std::endl;
			closeTChain(_bChain);
			return nullptr;
		};
		_bChain->Add(_ntuple.c_str());
		std::cout << "\tAdded file "<< _ntuple <<std::endl;
	}
	std::cout<<"\tBuilt TChain!"<<std::endl;

	return _bChain;
};


TChain *openTChain(std::vector<std::string> _chainList, std::string _treeName){
	if(_treeName.empty()){
		TFile _testF(_chainList[0].c_str(), "READ");
		if (!_testF.GetListOfKeys()) {
			std::cout<<"Error! Cannot open TChain. No key found in file "<<_chainList[0]<<std::endl;
			return nullptr;
		}
		TIter lNext(_testF.GetListOfKeys()) ;
		TObject* lObj ;
		Char_t treeCounter = 0;
		while((lObj = (TObject*)lNext())) {
			if(treeCounter > 1){
				std::cout<<"Error! No TTree name provided & there are >1 trees in the file "<<_chainList[0]<<std::endl;
				return nullptr;
			}
			if(lObj->InheritsFrom(TTree::Class())) {
				_treeName = lObj->GetName();
				treeCounter++;
			}
		}
		_testF.Close();
	}

	if(_treeName.empty()){
		std::cout<<"Error! No TTree name found!"<<std::endl;
		return nullptr;
	}

	TChain *_bChain = new TChain(_treeName.c_str());
	std::cout<<"Making TChain from trees "<<_treeName<<std::endl;
	for(auto & _ntuple : _chainList){
		if(!file_exists(_ntuple)){
			std::cout<<"Error! File does not exist "<<_ntuple<<std::endl;
			closeTChain(_bChain);
			return nullptr;
		};
		_bChain->Add(_ntuple.c_str());
		std::cout << "\tAdded file "<< _ntuple <<std::endl;
	}
	std::cout<<"\tBuilt TChain!"<<std::endl;

	return _bChain;
};


TChain *openTChainWithFilesInDir(std::string _dirPath, std::string _treeName){
	if(isDirectory(_dirPath)!=1){
		std::cout<<"Error! Directory "<<_dirPath<<" doesn't exist"<<std::endl;
		return nullptr;
	}
	std::cout<<"chuw Making TChain from trees "<<_treeName<<" in directory "<<_dirPath<<std::endl;

	std::cout<<"Making TChain from trees "<<_treeName<<" in directory "<<_dirPath<<std::endl;
	std::vector<std::string> _fileList = listFilesInDir(_dirPath, ".*\.root", 1);
	TChain *_bChain = openTChain(_fileList, _treeName);
	return _bChain;
};


std::vector<std::pair<std::string, std::string>> getBranchList(std::string _treePath, std::string _treeName, Bool_t _verbose){
	TChain *bChain = openTChain(std::vector<std::string> {_treePath}, _treeName);
	if(!bChain) {
		std::cout<<"Error! Could no create TChain!"<<std::endl;
		return {};
	}

	TObjArray *bArray = (TObjArray*)bChain->GetListOfBranches()->Clone();
	bArray->SetOwner(kFALSE);
	// bArray->Sort();

	std::vector<std::pair<std::string, std::string>> bList;

	std::cout<<"List of branches in TTree "<<_treeName<<" in file "<<_treePath<<":"<<std::endl;
	TIter iBr(bArray);
	TObject* bObj = nullptr;
	while ((bObj = (TObject*)iBr())){
		std::string bName = bObj->GetName();
		std::string bType = bChain->GetLeaf(bName.c_str())->GetTypeName();
		bList.emplace_back(bType, bName);
		if(_verbose) std::cout<<"\t"<<bType<<",\t"<<bName<<std::endl;
	}

	closeTChain(bChain);

	return bList;
};


std::vector<std::string> listFilesInDir(std::string _dirPath, std::string _regexStr, Bool_t _verb){

	if(!isDirectory(_dirPath)){
		std::cout<<"Error! Directory ("<<_dirPath<<") does not exist!"<<std::endl;
		return {};
	}

	std::vector<std::string> _fileList;

	DIR           *dirp;
	struct dirent *directory;

	regex regex_;

	if(!_regexStr.empty()){
		regex regextmp_(_regexStr);
		regex_ = regextmp_;
	}

	if(_verb) std::cout <<"Files in directory "<< _dirPath<<" matching  \""<<_regexStr<< "\" :" << std::endl;
	dirp = opendir(_dirPath.c_str());
	if (dirp){
		while ((directory = readdir(dirp)) != NULL) {
			if(!_regexStr.empty()){
				if(!std::regex_match(directory->d_name, regex_)) continue;
			}
			if(_verb) std::cout <<"\t\t"<< getFileName(directory->d_name) << std::endl;
			std::string _filePath = _dirPath + "/" + directory->d_name;
			_fileList.push_back(_filePath);
		}
		closedir(dirp);
	}

	return _fileList;
};


Bool_t matchRegex(std::string _str,std::string _regexStr){
	regex regex_(_regexStr);
	return std::regex_match(_str, regex_);
};


std::string getTreeNameInFile(std::string _filePath){
	std::string _treeName="";
	TFile _testF(_filePath.c_str(), "READ");
	if (!_testF.GetListOfKeys()) {
		std::cout<<"Error! Cannot open TChain. No key found in file "<<_filePath<<std::endl;
	}
	TIter lNext(_testF.GetListOfKeys()) ;
	TObject* lObj ;
	Char_t treeCounter = 0;
	while((lObj = (TObject*)lNext())) {
		if(treeCounter > 1){
			std::cout<<"Error! There are >1 trees in the file "<<_filePath<<std::endl;
			return "";
		}
		if(lObj->InheritsFrom(TTree::Class())) {
			_treeName = lObj->GetName();
			treeCounter++;
		}
	}
	_testF.Close();
	return _treeName;
};



// 	mergeBins
// 	Adds histograms for MC samples of the same process produced in different phase space bins
// 	_fileList : list of root files containing histograms
// 	_histName : the histogram to be merged
// 	_xsecMap : CSV file listing samples and cross sections
// 	root file name is used to look up cross section
TH1F *mergeBins(std::string _fileList, std::string _histName, std::string _sumWeightsHistname, std::string _xsecMap, Int_t _nameCol, Int_t _xSecCol, std::string _suffix){
	std::cout<<"Merging TH1F "<<_histName<<" using file list "<< _fileList<<std::endl;
	std::vector<std::string> _inFiles;
	if(!isROOTfile(_fileList))_inFiles = getNonemptyLines(_fileList);
	else _inFiles = {_fileList};

	std::sort(_inFiles.begin(), _inFiles.end());

	TH1F *_mergedHist = (TH1F*) getHistFromFile(_histName, _inFiles[0]);
	_mergedHist->Reset("ICESM");
	_mergedHist->SetDirectory(0);
	// _mergedHist->Sumw2();
	std::string _newName = _mergedHist->GetName();
	_newName += _suffix;
	_mergedHist->SetName(_newName.c_str());


	for(const auto & _file : _inFiles){
		std::string _sampleName = getFileName(_file);
		_sampleName = findAndReplaceAll(_sampleName, ".root", "");

		TH1F *_sumWHist = (TH1F*) getHistFromFile(_sumWeightsHistname, _file);
		Double_t _sumW = _sumWHist->GetBinContent(1);
		_sumWHist->Delete();

		Double_t _xSection = std::stod(vLookup(_sampleName, _xsecMap, _nameCol, _xSecCol));

		TH1F *_binHist = (TH1F*) getHistFromFile(_histName, _file);
		_binHist->Scale(_xSection/_sumW);

		_mergedHist->Add(_binHist);

		_binHist->Delete();

		std::cout<<"\t\t"<<_file<<":\t xSection = "<<_xSection<<"\t\tSumW = "<<_sumW<<std::endl;
	}
	std::cout<<"\t\tMerged all bins! Integral = "<<_mergedHist->Integral()<<std::endl;

	return _mergedHist;
};


std::string vLookup(std::string _lookupKey, std::string _inFile, Int_t _lookupCol, Int_t _valCol, Bool_t _regex){
	CSVReader reader(_inFile);
	std::vector<std::vector<std::string>> data_matrix = reader.getData();

	Int_t _matchedRow = -999;
	for(UInt_t i = 0; i < data_matrix.size(); i++){
		std::string _searchCell = data_matrix[i][_lookupCol];

		if(_regex){
			if(matchRegex(_searchCell, _lookupKey)){
				_matchedRow = i;
				break;
			}
		} else{
			if(_searchCell == _lookupKey) {
				_matchedRow = i;
				break;
			}
		}
		if(_matchedRow>-1) break;
	}
	if(_matchedRow < 0) return "";

	return data_matrix[_matchedRow][_valCol];
};


Bool_t isROOTfile(std::string _filepath){
	if(!file_exists(_filepath)){
		return 0;
	}
	if(_filepath.substr(_filepath.find_last_of(".") + 1) == "root"){
		if(TFile(_filepath.c_str()).GetListOfKeys() == nullptr){
			return 0;
		}
		return 1;
	}
	return 0;
};


std::vector<Float_t> getXlimits(std::vector<TH1*> _hists, Float_t _binThreshold){
	std::vector<Float_t> _limits;
	for(auto _hist: _hists){
		Float_t first = _hist->GetXaxis()->GetBinLowEdge(_hist->FindFirstBinAbove(_binThreshold));
		Float_t last = _hist->GetXaxis()->GetBinUpEdge(_hist->FindLastBinAbove(_binThreshold));
		_limits.push_back(first);
		_limits.push_back(last);
	}

	std::vector<Float_t> _max_min;
	_max_min.push_back(*std::max_element(_limits.begin(), _limits.end()));
	_max_min.push_back(*std::min_element(_limits.begin(), _limits.end()));
	return _max_min;
};


void clearStack(){
	TList* obList = gDirectory->GetList();
	for(auto obj : *obList){
		obj->Delete();
	}
};


Double_t weightedYmean(TH1 *_hist){
	Double_t _weightedSumY = 0.;
	Double_t _weightSum = 0.;
	for(Int_t i = 0; i < _hist->GetNbinsX(); i++){
		if(!(_hist->GetBinContent(i) > 0.)) continue;
		// if(!(_hist->GetBinError(i) > 0.)) continue;
		// Double_t _binWeight = 1./(_hist->GetBinError(i) * _hist->GetBinError(i));
		Double_t _binWeight = 1.;
		_weightSum += _binWeight;
		_weightedSumY += _binWeight * _hist->GetBinContent(i);
	}
	return (_weightedSumY/_weightSum);
};


Double_t weightedYspread(TH1 *_hist){
	Double_t _weightedSumDeltaY2 = 0.;
	Double_t _weightSum = 0.;
	Double_t _weightedYmean = weightedYmean(_hist);

	for(Int_t i = 0; i < _hist->GetNbinsX(); i++){
		if(!(_hist->GetBinContent(i) > 0.)) continue;
		// if(!(_hist->GetBinError(i) > 0.)) continue;
		// Double_t _binWeight = 1./(_hist->GetBinError(i) * _hist->GetBinError(i));
		Double_t _binWeight = 1.;
		_weightSum += _binWeight;
		_weightedSumDeltaY2 += _binWeight * (_hist->GetBinContent(i) - _weightedYmean) * (_hist->GetBinContent(i) - _weightedYmean);
	}
	return (_weightedSumDeltaY2/_weightSum);
};


Bool_t branchExists(std::string _branchName, TTree *_tree){
	TBranch* br = (TBranch*) _tree->GetListOfBranches()->FindObject(_branchName.c_str());
	if(br){
		delete br;
		return 1;
	} else{
		return 0;
	}
};


Float_t getMean(std::vector<Float_t> _set){
	if(_set.empty()) return -9999.;
	Double_t _sum = 0.;
	for(Float_t _num : _set){
		_sum += _num;
	}
	return _sum/((Double_t)_set.size());
};

#endif
