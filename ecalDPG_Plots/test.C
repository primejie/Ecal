#include "TFile.h"
#include "TH1D.h"
#include "TF1.h"

void fit_function(double *x, double *par) {
    double gauss_part = par[0] * TMath::Gaus(x[0], par[1], par[2]);
    double breit_wigner_part = par[3] / ((x[0] - par[4])*(x[0] - par[4]) + par[5]*par[5]);
    return gauss_part + breit_wigner_part;
}
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
  return (par[2] * TMath::Voigt(x[0] - par[0], par[1], 2.4952));
};
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
    double fG = sqrt( pow(fV,2) - pow(fL,2) ); ///nmEBd to check if fit estimated reso formula is fine
}

cout<<"fG is "<<fG<<endl;

if(useFit) 
	reso_gaus = fG;
else
	reso_gaus = fG /(2*sqrt(2*log(2)));

  /// back to gaussian resolution
return ftest;
}
TF1* callBWGaus(TH1 *hmass_data, double &reso, double xmin, double xmax) {

	xmin = hmass_data->GetMean() - 0.2 * hmass_data->GetStdDev();
	xmax = hmass_data->GetMean() +  1 * hmass_data->GetStdDev();
	TF1* f1 = new TF1("f1",breitgausfun, xmin, xmax, 3);
	f1->SetParNames("BW mean", "Gauss Width", "Integral");
	Double_t par[3];
	//BW mean
	par[0] = hmass_data->GetMean();	

    cout<<"chuw:"<<par[0]<<" "<<xmin<<" "<<xmax<<endl;
	//BW Width
	// par[1] = Zwidth;	
  	//Gauss width
	par[1] = 2.;

	//Integral
	par[2] = hmass_data->Integral(1, hmass_data->GetNbinsX())*99.9829 ;
    cout<<"inte:"<<hmass_data->Integral(1, hmass_data->GetNbinsX())*99.9829 <<endl;
	f1->SetParameters(par[0], par[1], par[2]);
    f1->SetParLimits(0, 88, 92);
	hmass_data->Fit(f1,"mlre 0");
	reso = f1->GetParameter(1);
    cout<<reso<<endl;
	return f1;
};
void test() {
    TFile *file1 = new TFile("data/automationMedian2023_medianGraph.root");
    TFile *file2 = new TFile("data/automation_v4_2023_medianGraph.root");
    TH1D *h1 = (TH1D*)file1->Get("mee_in_EB");
    TH1D *h2 = (TH1D*)file2->Get("mee_in_EB");
    h1->Scale(1/h1->Integral());
    h2->Scale(1/h2->Integral());
    
    // TF1* f1 = new TF1("f1",breitgausfun, 78, 104, 4);
    // f1->SetParNames("BW width", "BW mean", "Integral", "Gauss width");
	// Double_t par[3];
	// //BW mean
	// par[0] = h1->GetMean();			
    // cout<<par[0]<<endl;
	// par[1] = 2.;
	// //Integral
	// par[2] = h1->Integral(1, h1->GetNbinsX()) ;

	// f1->SetParameters(par[0], par[1], par[2]);
	// h1->Fit(f1,"mlre 0");
    // cout<<f1->GetParameter(3)<<endl;
    // Double_t frabriceGaus;
    cout<<"fit h1"<<endl;
    // getFittedParams(h1, 0, frabriceGaus);
    // cout<<"fit h2"<<endl;
    // getFittedParams(h1, 0, frabriceGaus);
    Double_t sigma60_v3;
    Double_t sigma60_v4;
	Float_t meanHist_v3 = h1->GetMean();
	Float_t meanHist_v4 = h2->GetMean();
    callBWGaus(h1, sigma60_v3, 87., 94.);
    callBWGaus(h2, sigma60_v4, 87., 94.);
    cout<<"fit h1"<<endl;
    cout<<sigma60_v3*100/meanHist_v3<<endl;
    cout<<"fit h2"<<endl;
    cout<<sigma60_v4*100/meanHist_v4<<endl;
    // cout<<frabriceGaus*100./meanHist<<endl;
    TCanvas *c1 = new TCanvas("c1", "c1", 800, 600);
    h1->SetStats(0);
    h1->Draw();
    h1->GetXaxis()->SetRangeUser(78,104);
    h2->Draw("same");
    h1->SetLineColor(2);
    // h1->SetLineColor(2);
    TLegend *legend = new TLegend(0.7, 0.7, 0.9, 0.9);
    legend->AddEntry(h1, ("automation v3 "+to_string(sigma60_v3*100/meanHist_v3)).c_str(), "l");
    legend->AddEntry(h2, ("automation v4 "+to_string(sigma60_v4*100/meanHist_v4)).c_str(), "l");
    legend->Draw("same");
    c1->SaveAs("2023EB.png");
    c1->SaveAs("2023EB.pdf");
}
