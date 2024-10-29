#include "extra_tools.cc"
#include "statistic.cc"
#include "TStyle.h"
#include "TROOT.h"
#include "THStack.h"
#include <TLegend.h>
#include <TPad.h>
#include <TCanvas.h>
#include <TF1.h>
#include "TText.h"
#include "TLegendEntry.h"
#include "TPaveText.h"
#include "TBox.h"
#include "TGaxis.h"
#include "TLatex.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
parseOptions histOpts;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
statistic st;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define Zwidth 2.4952

Double_t np = 10000.0; 
Double_t sc = 10.;
Double_t integralScale = 1.2;


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///1. From Fabrice
TF1* voigtResoEstimateFit(TH1 *hmass_data, double &resoV) {
	double max = hmass_data->GetXaxis()->GetBinCenter(hmass_data->GetMaximumBin());
	double rms = hmass_data->GetRMS();
	TF1 *fTest = new TF1("ff","[0]*TMath::Voigt(x-[1],[2],2.4952)",max-0.5*rms,max+1.5*rms);
	fTest->SetParameters(10000,max,0.8*rms);
	fTest->SetParLimits(0,0,10000);
	fTest->SetParLimits(1,max-0.2*rms,max+2*rms);
	fTest->SetParLimits(2,0.05*rms,1.5*rms);
  //TCanvas *c = new TCanvas("canvasFitAutoAdjust","fit autoadjust range",800,600);
  //c->cd();
	hmass_data->Fit( fTest, "mlhe r 0");
  //hmass_data->DrawCopy("e");
  //fTest->Draw("same");
  //hmass_data->DrawCopy("e same");
  //c->Update();


	resoV = fTest->GetParameter(2);
	return fTest;
}


TF1* getFittedParams(TH1 *h, bool useFit, double &reso_gaus){

	double fV = -99;
	TF1 *ftest = new TF1();  
	if(useFit){
		ftest = voigtResoEstimateFit(h, fV);
	}
	else{
    /// rough estimate of the FWHM of the Z peak
		int bin1 = h->FindFirstBinAbove(h->GetMaximum()/2);
		int bin2 = h->FindLastBinAbove(h->GetMaximum()/2);
		fV = h->GetBinCenter(bin2) - h->GetBinCenter(bin1); 

	}

	cout<<"fV "<<fV<<endl;

  /// Z natural width
	double fL = 2.4952;
  /// resolution Fit using
  /// Voigtian approximation from https://en.wikipedia.org/wiki/Voigt_profile 
	double fG = sqrt( (fV-0.5346*fL)*(fV-0.5346*fL) - 0.2166*fL*fL);
	if(useFit){
    double fG = sqrt( pow(fV,2) - pow(fL,2) ); ///nmeed to check if fit estimated reso formula is fine
}

cout<<"fG is "<<fG<<endl;

if(useFit) 
	reso_gaus = fG;
else
	reso_gaus = fG /(2*sqrt(2*log(2)));

  /// back to gaussian resolution
return ftest;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Double_t breitgausfun(Double_t *x, Double_t *par){
  // Double_t invsq2pi = 0.3989422804014; // (2 pi)^(-1/2)
  // Double_t twoPi = 6.2831853071795;//2Pi    
  // // // Variables
  // Double_t xx;
  // Double_t fland;
  // Double_t sum = 0.0;
  // Double_t xlow,xupp;
  // Double_t step;
  // Double_t i;
  // // Range of convolution integral 
  // xlow = x[0] - sc * par[1];
  // xupp = x[0] + sc * par[1];
  // step = (xupp-xlow) / np;
  // // Convolution integral of Breit and Gaussian by sum   
  // // for(i=1.0; i<=np/2.; i++) {
  // // 	xx = xlow + (i-.5) * step;
  // // 	fland = TMath::BreitWigner(xx, par[0], Zwidth);
  // // 	sum += fland * TMath::Gaus(x[0], xx, par[1]);
  // // 	xx = xupp - (i-.5) * step;
  // // 	fland = TMath::BreitWigner(xx, par[0], Zwidth);
  // // 	sum += fland * TMath::Gaus(x[0], xx, par[1]);
  // // }
  // // return (par[2] * step * sum * invsq2pi / par[1]);
  return (par[2] * TMath::Voigt(x[0] - par[0], par[1], Zwidth));
};

Double_t fitNsigmaR = 1.;
Double_t fitNsigmaL = 1.;
TF1* callBWGaus(TH1 *hmass_data, double &reso, double xmin, double xmax) {

	xmin = hmass_data->GetMean() - fitNsigmaL * hmass_data->GetStdDev();
	xmax = hmass_data->GetMean() + fitNsigmaR * hmass_data->GetStdDev();

	TF1* f1 = new TF1("f1",breitgausfun, xmin, xmax, 3);
	f1->SetParNames("BW mean", "Gauss Width", "Integral");
	Double_t par[3];
	//BW mean
	par[0] = hmass_data->GetMean();			
	    cout<<"chuw:"<<par[0]<<" "<<fitNsigmaL<<" "<<fitNsigmaR<<endl;
	    cout<<"chuw:"<<par[0]<<" "<<xmin<<" "<<xmax<<" "<<integralScale<<endl;
	//BW Width
	// par[1] = Zwidth;	
  	//Gauss width
	par[1] = 2.;
	//Integral
	par[2] = hmass_data->Integral(1, hmass_data->GetNbinsX()) * integralScale;
	cout<<"inte:"<<hmass_data->Integral(1, hmass_data->GetNbinsX()) * integralScale<<endl;;
	f1->SetParameters(par[0], par[1], par[2]);
	hmass_data->Fit(f1,"mlre 0");
	reso = f1->GetParameter(1);
	cout<<reso<<endl;
	return f1;
};


Double_t getResolution(TH1 *hmass_data, Double_t xMin, Double_t xMax){
	Double_t reso;
	callBWGaus(hmass_data, reso, xMin, xMax);
	return reso;
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////SJ: self defined convolution
/*--------------------------------------------------------------------*/
Double_t breitgausfunS(Double_t *x, Double_t *par)
/*--------------------------------------------------------------------*/

{

  //Fit parameters:
  //par[0]=Width (scale) Breit-Wigner
  //par[1]=Most Probable (MP, location) Breit mean
  //par[2]=Total area (integral -inf to inf, normalization constant)
  //par[3]=Width (sigma) of convoluted Gaussian function

  Double_t invsq2pi = 0.3989422804014; // (2 pi)^(-1/2)
  Double_t twoPi = 6.2831853071795;//2Pi  

  // Variables
  Double_t xx;
  Double_t fland;
  Double_t sum = 0.0;
  Double_t xlow,xupp;
  Double_t step;
  Double_t i;


  // Range of convolution integral 
  xlow = x[0] - sc * par[3];
  xupp = x[0] + sc * par[3];

  step = (xupp-xlow) / np;

  // Convolution integral of Breit and Gaussian by sum                                 
  for(i=1.0; i<=np/2; i++) {
  	xx = xlow + (i-.5) * step;
  	fland = TMath::BreitWigner(xx,par[1],par[0]);
  	sum += fland * TMath::Gaus(x[0]-xx,xx,par[3]);

  	xx = xupp - (i-.5) * step;
  	fland = TMath::BreitWigner(xx,par[1],par[0]);
  	sum += fland * TMath::Gaus(x[0]-xx,xx,par[3]);
  }

  xx = x[0]-par[1];

  return (par[2] * step * sum * invsq2pi / par[3]);
}


TF1* callBWGausS(TH1 *hmass_data, double &reso, double xmin, double xmax){


	TF1* f1 = new TF1("f1",breitgausfun, xmin, xmax, 4);
  //gStyle->SetOptFit(111);
	f1->SetParNames("BW width", "BW mean", "Integral", "Gauss width");

	Double_t par[4];
  par[0] = 2.4952;       //BW width = 2.5 * bin width
  par[1] = hmass_data->GetMean();  //BW mean
  par[2] = hmass_data->Integral();  //integral 
  par[3] = 2;  //Gauss width

  f1->SetParameters(par[0], par[1], par[2], par[3]);
  hmass_data->Fit(f1,"mlre 0");
  reso = f1->GetParameter(3);
  return f1;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void plotDataHistsDPG(std::string histOptionsFile) {
	gStyle->SetOptTitle(0);
	gStyle->SetOptStat(0);

	gROOT->SetBatch();

	histOpts.parseIt(histOptionsFile);

	mkdir(histOpts.get("writeDir"));

        TString m_year = histOpts.get("cmsYear").c_str();
        std::string _histName = histOpts.get("histName");
        TString varName=_histName;

	sample _data0(histOpts.get("data0"),histOpts.get("data0Legend"), histOpts.getInt("data0Marker"), histOpts.get("data0Color"));
	sample _data1(histOpts.get("data1"),histOpts.get("data1Legend"), histOpts.getInt("data1Marker"), histOpts.get("data1Color"));

	np = histOpts.getFloat("np"); 
	sc = histOpts.getFloat("sc");
	integralScale = histOpts.getFloat("integralScale");

	std::vector<sample*> data = {&_data0, &_data1};

	std::vector<TObject*> _deleteThese;

	TString m_category, m_xTitle;

        if (varName.Contains("mee")) m_xTitle = "m_{ee} (GeV)";

	if (varName.Contains("in_EB")) {
		if (varName.Contains("LowR9")) {
                  m_category = "#splitline{#bf{ECAL Barrel}}{#bf{High Bremsstrahlung}}";
		}
                else if (varName.Contains("HighR9")) {
                  m_category = "#splitline{#bf{ECAL Barrel}}{#bf{Low Bremsstrahlung}}";
                }
                else m_category = "#bf{ECAL Barrel}";
	}
        else if (varName.Contains("in_EE")) {
                if (varName.Contains("LowR9")) {
                  m_category = "#splitline{#bf{ECAL Endcaps (|#eta|<2.5)}}{#bf{High Bremsstrahlung}}";
                }
                else if (varName.Contains("HighR9")) {
                  m_category = "#splitline{#bf{ECAL Endcaps (|#eta|<2.5)}}{#bf{Low Bremsstrahlung}}";
                }
                else m_category = "#bf{ECAL Endcaps (|#eta|<2.5)}"; 
        }

	std::cout<<"Plotting "<<_histName<<std::endl;

	TCanvas canvas((_histName + "_canvas").c_str(), "", histOpts.getFloat("canvasW"), histOpts.getFloat("canvasH"));
	canvas.Draw();

	TPad pad2("pad2", "", histOpts.getFloat("pad2x1"), histOpts.getFloat("pad2y1"), histOpts.getFloat("pad2x2"), histOpts.getFloat("pad2y2"));
	pad2.SetMargin(histOpts.getFloat("pad2marginL"), histOpts.getFloat("pad2marginR"), histOpts.getFloat("pad2marginB"), histOpts.getFloat("pad2marginT"));
	pad2.SetFillStyle(0);
	pad2.SetFillColor(0);
	pad2.SetFrameFillStyle(0);

	canvas.cd();

	TLegend legend(histOpts.getFloat("legendX1"), histOpts.getFloat("legendY1"), histOpts.getFloat("legendX2"), histOpts.getFloat("legendY2"));
	legend.SetTextSize(histOpts.getFloat("legendTextSize"));
	legend.SetNColumns(histOpts.getInt("legendNcols"));
	legend.SetFillStyle(0);
	legend.SetBorderSize(0);



	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	THStack mainStack("mainStack","");

	TF1* fits[data.size()];
	TF1* fitsShilpi[data.size()];

	fitNsigmaR = histOpts.getFloat("fitNsigmaR");
	fitNsigmaL = histOpts.getFloat("fitNsigmaL");

	//Add data
	for(Int_t index = 0; index < data.size(); index++){
		sample * _data = data[index];

		TH1D * hist_data = nullptr;

		std::string _tmpName = _histName;
                if (varName.Contains("LowR9")&&index==0) { 
			_tmpName=_histName.substr(0,15); 
			cout<<"Modify preliminary histname from "<<_histName<<" to "<<_tmpName<<endl;
		}
		else if (varName.Contains("HighR9")&&index==0) { 
                        _tmpName=_histName.substr(0,16);                      
                        cout<<"Modify preliminary histname from "<<_histName<<" to "<<_tmpName<<endl;
		} 

		hist_data = (TH1D*) getHistFromFile(_tmpName, _data->ntuple, 1);

		hist_data->Scale(-1.);

		hist_data->Scale(histOpts.getFloat("scale")/hist_data->Integral(0,hist_data->GetNbinsX()+1));
		if(_histName.find("mee") != std::string::npos) hist_data->Rebin(5);

		
		// Float_t sigma60 = st.getHistStatistic(hist_data, "stdev", 60.);
		Double_t sigma60;
		Float_t meanHist = hist_data->GetMean();

		cout<<"/////////////////////////////////////////////Floating Z width////////////////////////////////////////////////////////"<<endl;

		// Double_t shilpiGaus;
		// fitsShilpi[index] = callBWGausS(hist_data, shilpiGaus, histOpts.getFloat("fitXmin"), histOpts.getFloat("fitXmax"));
		// fitsShilpi[index]->SetLineColor(TColor::GetColor(_data->color.c_str()));
		// fitsShilpi[index]->SetLineWidth(histOpts.getFloat("lineWidth"));
		// fitsShilpi[index]->SetLineStyle(7);
		// _deleteThese.push_back(fitsShilpi[index]);

		Double_t frabriceGaus;
		cout<<"/////////////////////////////////////////////Approximated width////////////////////////////////////////////////////////"<<endl;
		getFittedParams(hist_data, 0, frabriceGaus);
		std::cout<<"fabrice approx : "<<frabriceGaus*100./meanHist<<" %"<<std::endl;

		cout<<"/////////////////////////////////////////////Fixed Z width////////////////////////////////////////////////////////"<<endl;
		fits[index] = callBWGaus(hist_data, sigma60, histOpts.getFloat("fitXmin"), histOpts.getFloat("fitXmax"));
		fits[index]->SetLineColor(TColor::GetColor(_data->color.c_str()));
		fits[index]->SetLineWidth(histOpts.getFloat("lineWidth"));
		_deleteThese.push_back(fits[index]);

		meanHist = fits[index]->GetParameter(0);
		
		// Float_t sigma60 = getResolution(hist_data, histOpts.getFloat("fitXmin"), histOpts.getFloat("fitXmax"));

		// 

		_data->assignAtt(hist_data, histOpts.getFloat("markerSize"), histOpts.getFloat("lineWidth"));
		hist_data->SetFillStyle(histOpts.getInt("errorFillStyle"));
		hist_data->SetFillColor(TColor::GetColor(_data->color.c_str()));
		
		mainStack.Add(hist_data, "PE");
		mainStack.Add(hist_data, "E2");

		_deleteThese.push_back(hist_data);		
		cout<<"chuw"<<sigma60*100/meanHist<<histOpts.getInt("statPrecision")<<endl;
		std::string legend_text = _data->legend + " (#sigma/#mu=" + to_string_with_precision(sigma60*100/meanHist, histOpts.getInt("statPrecision")) + "%)";
		TString mType;
		if(index==0) mType="Preliminary"; else mType="Ultra Legacy";
		std::cout<<mType<<" "<<m_year<<" "<<varName<<" mean is "<<meanHist<<std::endl;
                std::cout<<mType<<" "<<m_year<<" "<<varName<<" sigma60 is "<<sigma60<<std::endl<<std::endl;
		TLegendEntry* legendEntry =  legend.AddEntry(hist_data, legend_text.c_str(), "LFPE");
		legendEntry->SetTextColor(TColor::GetColor(_data->color.c_str()));
	}

	std::vector<Float_t> xLimits = {histOpts.getFloat("xMax"), histOpts.getFloat("xMin")};

	canvas.cd();
	pad2.Draw();
	pad2.cd();
	pad2.SetGrid(1,1);

	mainStack.Draw("NOSTACK");
	mainStack.GetXaxis()->CenterTitle();
	mainStack.GetXaxis()->SetRangeUser(xLimits[1], xLimits[0]);
	mainStack.GetXaxis()->SetLabelSize(histOpts.getFloat("pad2axislabelsize"));
	mainStack.GetXaxis()->SetTitleSize(histOpts.getFloat("pad2axisTitleSize"));
	mainStack.GetXaxis()->SetTitleOffset(histOpts.getFloat("pad2xtitleoffset"));
	mainStack.GetXaxis()->SetTitle(m_xTitle);
	mainStack.GetXaxis()->CenterTitle();
	((TGaxis*)mainStack.GetYaxis())->SetMaxDigits(histOpts.getInt("pad2yMaxDigits"));
	mainStack.GetYaxis()->CenterTitle();
	mainStack.GetYaxis()->SetLabelSize(histOpts.getFloat("pad2axislabelsize"));
	mainStack.GetYaxis()->SetTitle(histOpts.get("histYtitle").c_str());
	mainStack.GetYaxis()->SetTitleSize(histOpts.getFloat("pad2axisTitleSize"));
	mainStack.GetYaxis()->SetTitleOffset(histOpts.getFloat("pad2ytitleoffset"));

	mainStack.GetYaxis()->SetNdivisions(histOpts.getInt("nDivsPad2Y"), kTRUE);
	mainStack.GetXaxis()->SetNdivisions(histOpts.getInt("nDivsPad2X"), kTRUE);
	mainStack.GetYaxis()->SetRangeUser(histOpts.getFloat("yMin"),histOpts.getFloat("yMax"));
	mainStack.SetMaximum(histOpts.getFloat("yMax"));
	mainStack.SetMinimum(histOpts.getFloat("yMin"));

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	legend.Draw();


	TLatex cat;
	cat.SetNDC();
	cat.SetTextSize(histOpts.getFloat("categoryTextSize"));
	cat.SetTextAlign(13);  //align at top
	cat.DrawLatex(histOpts.getFloat("categoryX"), histOpts.getFloat("categoryY"), m_category);

	canvas.cd();
	cat.SetTextSize(histOpts.getFloat("titleSize"));

	TString m_infoYear = "CMS #bf{#it{Preliminary}}", m_runInfo = "#bf{Run 3 (13 TeV)}";
	if(m_year.Contains("2016")) { m_infoYear = "CMS #bf{#it{Preliminary 2016}}"; m_runInfo = "#bf{(13 TeV)}"; }
        else if(m_year.Contains("2017")) { m_infoYear = "CMS #bf{#it{Preliminary 2017}}"; m_runInfo = "#bf{(13 TeV)}"; }
        else if(m_year.Contains("2018")) { m_infoYear = "CMS #bf{#it{Preliminary 2018}}"; m_runInfo = "#bf{(13 TeV)}"; }

	cat.DrawLatex(histOpts.getFloat("infoYearX"), histOpts.getFloat("yearY"), m_infoYear);
	cat.DrawLatex(histOpts.getFloat("infoRunX"), histOpts.getFloat("runY"), m_runInfo);
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	gPad->RedrawAxis();
	gPad->RedrawAxis("g");
	gPad->Update();

	canvas.RedrawAxis();
	canvas.Update();
	canvas.Modified();

	canvas.SaveAs((histOpts.get("writeDir") + _histName + "_fixedWidthNoFitLine.png").c_str());
	canvas.SaveAs((histOpts.get("writeDir") + _histName + "_fixedWidthNoFitLine.C").c_str());
	canvas.SaveAs((histOpts.get("writeDir") + _histName + "_fixedWidthNoFitLine.pdf").c_str());

//        pad2.cd();
//        for(auto _fit : fits){
//                _fit->Draw("sames");
//        }
//
//        gPad->Modified();
//        gPad->Update();
//        canvas.Update();
//        canvas.Modified();
//
//        canvas.SaveAs((histOpts.get("writeDir") + _histName + "_fixedWidth.png").c_str());
//        canvas.SaveAs((histOpts.get("writeDir") + _histName + "_fixedWidth.C").c_str());
//        canvas.SaveAs((histOpts.get("writeDir") + _histName + "_fixedWidth.pdf").c_str());

	for(auto & toDelete: _deleteThese){
		toDelete->Delete();
	}
};

// 
