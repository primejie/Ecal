#include "extra_tools.cc"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
// #include "statistic.cc"
struct Time_IOV {
    std::vector<int> run;
    std::vector<int> time;
};

Time_IOV readCSV() {
    FILE *file = fopen("iov_time.csv", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    Time_IOV dict;

    char line[100];
    while (fgets(line, sizeof(line), file)) {
        char *token = strtok(line, ",");
        if (token != NULL) {
            dict.run.push_back(atoi(token));
        }
        token = strtok(NULL, ",");
        if (token != NULL) {
            dict.time.push_back(atoi(token));
        }
    }

    fclose(file);

    return dict;
}
void plotStability(std::string histOptionsFile){
	gROOT->SetBatch();

	std::vector<TObject*> toDelete;

	parseOptions pltOpt(histOptionsFile);

        std::string graphName = pltOpt.get("graphName");
        TString varName = graphName;
        TString m_category, m_yTitle;

        if (varName.Contains("medianmee")) m_yTitle = "median m_{ee} (GeV)";
        else if (varName.Contains("medianR9")) m_yTitle = "median R_{9}";

        if (varName.Contains("inEB")) {
                if (varName.Contains("LowR9")) {
                  m_category = "#splitline{#bf{ECAL Barrel}}{#bf{High Bremsstrahlung}}";
                }
                else if (varName.Contains("HighR9")) {
                  m_category = "#splitline{#bf{ECAL Barrel}}{#bf{Low Bremsstrahlung}}";
                }
                else m_category = "#bf{ECAL Barrel}";
        }
        else if (varName.Contains("inEE")) {
                if (varName.Contains("LowR9")) {
                  m_category = "#splitline{#bf{ECAL Endcaps (|#eta|<2.5)}}{#bf{High Bremsstrahlung}}";
                }
                else if (varName.Contains("HighR9")) {
                  m_category = "#splitline{#bf{ECAL Endcaps (|#eta|<2.5)}}{#bf{Low Bremsstrahlung}}";
                }
                else m_category = "#bf{ECAL Endcaps (|#eta|<2.5)}";
        }

        TString m_year = pltOpt.get("inYear");

	std::string writeDir = "plots/stability/"+pltOpt.get("inYear");
	mkdir(writeDir);

	std::vector<sample> samples = {
		{"data/"+pltOpt.get("inYear")+"_medianGraph.root", "", 20, "#238b45"}
	};

	TCanvas * canvas = new TCanvas((graphName + "_canvas").c_str(), "", pltOpt.getFloat("canvasW"), pltOpt.getFloat("canvasH"));
	TPad pad0("pad0", "", pltOpt.getFloat("pad0X1"), pltOpt.getFloat("pad0Y1"), pltOpt.getFloat("pad0X2"), pltOpt.getFloat("pad0Y2"));
	TPad pad1("pad1", "", pltOpt.getFloat("pad1X1"), pltOpt.getFloat("pad1Y1"), pltOpt.getFloat("pad1X2"), pltOpt.getFloat("pad1Y2"));
	TPad pad2("pad2", "", pltOpt.getFloat("pad1X1"), pltOpt.getFloat("pad1Y1"), pltOpt.getFloat("pad1X2"), pltOpt.getFloat("pad1Y2"));

	TLegend legend(pltOpt.getFloat("legendX1"), pltOpt.getFloat("legendY1"), pltOpt.getFloat("legendX2"), pltOpt.getFloat("legendY2"));
	legend.SetBorderSize(0.0);
	legend.SetNColumns(pltOpt.getInt("legendNcolumns"));
	legend.SetFillStyle(0);
	legend.SetTextSize(pltOpt.getFloat("legendTextSize"));

	TMultiGraph mg(graphName.c_str(), "");
	std::vector<TGraphAsymmErrors*> allGraphs;

	Double_t maxTime = std::numeric_limits<Double_t>::min();
	Double_t minTime = std::numeric_limits<Double_t>::max();


	for(UChar_t i = 0; i < samples.size(); i++){
		sample * _sample = &samples[i];

		TGraphAsymmErrors* _sampleGraph = nullptr;
		_sampleGraph = (TGraphAsymmErrors*) getObjectFromFile(graphName, _sample->ntuple);

		// _sampleGraph->SetName((graphName+"_"+_sample->ntuple).c_str());

		_sample->assignAtt(_sampleGraph, pltOpt.getFloat("markerSize"), pltOpt.getFloat("lineWidth"));
		mg.Add(_sampleGraph, "PE");
		if (!_sample->legend.empty()) {
			TLegendEntry* legendEntry = legend.AddEntry(_sampleGraph, _sample->legend.c_str(), "lpe");
			legendEntry->SetTextColor(TColor::GetColor(_sample->color.c_str()));
		}

		allGraphs.push_back(_sampleGraph);



		Double_t tempTime = TMath::MaxElement(_sampleGraph->GetN(), _sampleGraph->GetX());
		if(tempTime > maxTime) maxTime = tempTime;

		tempTime = TMath::MinElement(_sampleGraph->GetN(), _sampleGraph->GetX());
		if(tempTime < minTime) minTime = tempTime;
		toDelete.push_back(_sampleGraph);
	}

	Double_t gutterX = (maxTime-minTime) * pltOpt.getFloat("xGutter");
	maxTime = maxTime + gutterX;
	minTime = minTime - gutterX;

	canvas->Draw();
	canvas->cd();

	pad0.Draw();
	pad0.cd();
	pad0.SetFillStyle(0);
	pad0.SetFillColor(0);
	pad0.SetFrameFillStyle(0);
	pad0.SetMargin(pltOpt.getFloat("pad0marginL"), pltOpt.getFloat("pad0marginR"), pltOpt.getFloat("pad0marginB"), pltOpt.getFloat("pad0marginT"));
	pad0.SetTicks(1, 1);
	pad0.SetGrid(1, 1);
//        gStyle->SetGridColor(17);

	mg.Draw("A");

        std::cout<<"min and max time is "<<minTime<<", "<<maxTime<<"."<<std::endl;
	mg.GetXaxis()->SetLimits(minTime, maxTime);
	mg.GetXaxis()->SetRangeUser(minTime, maxTime);
	mg.GetXaxis()->SetTimeDisplay(1);
	// mg.GetXaxis()->SetLabelSize(pltOpt.getFloat("pad0LabelSize"));
	mg.GetXaxis()->SetLabelSize(0.015);
	// mg.LabelsOption("v");
	mg.GetXaxis()->SetTitleSize(pltOpt.getFloat("pad0TitleSize"));
	mg.GetXaxis()->SetTitleOffset(pltOpt.getFloat("pad0XtitleOffset"));
        // mg.GetXaxis()->SetTimeFormat("%d-%b%F1970-01-01 00:00:00s0");
        mg.GetXaxis()->SetTimeFormat("%d-%b-%Y%F1970-01-01 00:00:00s0");
        mg.GetXaxis()->SetTitle("Time (day-month-year)");
        mg.GetXaxis()->SetNdivisions(010);
        mg.GetXaxis()->CenterTitle();

	if(m_year.Contains("3years")) {
	        mg.GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
		TDatime tmin(2016,04,01,00,00,00);
                TDatime tmax(2018,12,31,23,59,59);
	        mg.GetXaxis()->SetRangeUser(tmin.Convert(), tmax.Convert());
	        mg.GetXaxis()->SetTitle("Time (month/year)");
		mg.GetXaxis()->SetNdivisions(311);
	        mg.GetXaxis()->SetLabelSize(0.04);
	        mg.GetXaxis()->SetLabelOffset(0.02);
		Double_t m_angle=345;
                mg.GetXaxis()->ChangeLabel(1,m_angle,-1,-1,-1,-1,"04/2016");
                mg.GetXaxis()->ChangeLabel(2,m_angle,-1,-1,-1,-1,"07/2016");
                mg.GetXaxis()->ChangeLabel(3,m_angle,-1,-1,-1,-1,"10/2016");
                mg.GetXaxis()->ChangeLabel(4,m_angle,-1,-1,-1,-1,"01/2017");
                mg.GetXaxis()->ChangeLabel(5,m_angle,-1,-1,-1,-1,"04/2017");
                mg.GetXaxis()->ChangeLabel(6,m_angle,-1,-1,-1,-1,"07/2017");
                mg.GetXaxis()->ChangeLabel(7,m_angle,-1,-1,-1,-1,"10/2017");
                mg.GetXaxis()->ChangeLabel(8,m_angle,-1,-1,-1,-1,"01/2018");
                mg.GetXaxis()->ChangeLabel(9,m_angle,-1,-1,-1,-1,"04/2018");
		mg.GetXaxis()->ChangeLabel(10,m_angle,-1,-1,-1,-1,"07/2018");
                mg.GetXaxis()->ChangeLabel(11,m_angle,-1,-1,-1,-1,"10/2018");
	}

//	if(m_year.Contains("3years")) {
//	        mg.GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
//		TDatime tmin(2016,04,01,00,00,00);
//                TDatime tmax(2018,12,31,23,59,59);
//	        mg.GetXaxis()->SetRangeUser(tmin.Convert(), tmax.Convert());
//	        mg.GetXaxis()->SetTitle("Time (month/year)");
//		mg.GetXaxis()->SetNdivisions(311);
//	        mg.GetXaxis()->SetLabelSize(0.032);
//		Double_t m_angle=-1;
//                mg.GetXaxis()->ChangeLabel(1,m_angle,-1,-1,-1,-1,"04/2016");
//                mg.GetXaxis()->ChangeLabel(2,m_angle,-1,-1,-1,-1,"07/2016");
//                mg.GetXaxis()->ChangeLabel(3,m_angle,-1,-1,-1,-1,"10/2016");
//                mg.GetXaxis()->ChangeLabel(4,m_angle,-1,-1,-1,-1,"01/2017");
//                mg.GetXaxis()->ChangeLabel(5,m_angle,-1,-1,-1,-1,"04/2017");
//                mg.GetXaxis()->ChangeLabel(6,m_angle,-1,-1,-1,-1,"07/2017");
//                mg.GetXaxis()->ChangeLabel(7,m_angle,-1,-1,-1,-1,"10/2017");
//                mg.GetXaxis()->ChangeLabel(8,m_angle,-1,-1,-1,-1,"01/2018");
//                mg.GetXaxis()->ChangeLabel(9,m_angle,-1,-1,-1,-1,"04/2018");
//		mg.GetXaxis()->ChangeLabel(10,m_angle,-1,-1,-1,-1,"07/2018");
//                mg.GetXaxis()->ChangeLabel(11,m_angle,-1,-1,-1,-1,"10/2018");
//	}


//	if(m_year.Contains("3years")) {
//	        mg.GetXaxis()->SetTimeFormat("%m/%Y%F1970-01-01 00:00:00s0");
//	        mg.GetXaxis()->SetTitle("Time (month/year)");
//	        mg.GetXaxis()->SetNdivisions(-506);
//        }
//		Double_t m_angle=-1;
//                mg.GetXaxis()->ChangeLabel(1,m_angle,-1,-1,-1,-1,"04/2016");
//                mg.GetXaxis()->ChangeLabel(2,m_angle,-1,-1,-1,-1,"07/2016");
//                mg.GetXaxis()->ChangeLabel(3,m_angle,-1,-1,-1,-1,"10/2016");
//                mg.GetXaxis()->ChangeLabel(4,m_angle,-1,-1,-1,-1,"01/2017");
//                mg.GetXaxis()->ChangeLabel(5,m_angle,-1,-1,-1,-1,"04/2017");
//                mg.GetXaxis()->ChangeLabel(6,m_angle,-1,-1,-1,-1,"07/2017");
//                mg.GetXaxis()->ChangeLabel(7,m_angle,-1,-1,-1,-1,"10/2017");
//                mg.GetXaxis()->ChangeLabel(8,m_angle,-1,-1,-1,-1,"01/2018");
//                mg.GetXaxis()->ChangeLabel(9,m_angle,-1,-1,-1,-1,"04/2018");
//		mg.GetXaxis()->ChangeLabel(10,m_angle,-1,-1,-1,-1,"07/2018");
//                mg.GetXaxis()->ChangeLabel(11,m_angle,-1,-1,-1,-1,"10/2018");
//	}


	mg.GetYaxis()->SetLabelSize(pltOpt.getFloat("pad0LabelSize"));
	mg.GetYaxis()->SetTitle(m_yTitle);
	mg.GetYaxis()->SetTitleSize(pltOpt.getFloat("pad0TitleSize"));
	mg.GetYaxis()->SetTitleOffset(pltOpt.getFloat("pad0YtitleOffset"));
	mg.GetYaxis()->SetLimits(pltOpt.getFloat("graphYmin"), pltOpt.getFloat("graphYmax"));
	mg.GetYaxis()->SetRangeUser(pltOpt.getFloat("graphYmin"), pltOpt.getFloat("graphYmax"));
	if(pltOpt.getInt("is22"))	mg.GetXaxis()->SetRangeUser(1656111070, 1672444270);//2022-06-25	-2022-12-31
	else mg.GetXaxis()->SetRangeUser(1681944670, 1689807070);//2023-04-20	-2023-07-20;
	mg.GetYaxis()->CenterTitle();
	Time_IOV data = readCSV();
	for (size_t i = 0; i < data.run.size(); i++) {
        printf("Draw TLine run: %d, time: %d\n", data.run[i], data.time[i]);
		TLine *line = new TLine(data.time[i], pltOpt.getFloat("graphYmin"),data.time[i] , pltOpt.getFloat("graphYmax"));
		std::string runString = std::to_string(data.run[i]);
        const char* runChar = runString.c_str();
		TLatex *text = new TLatex(data.time[i], pltOpt.getFloat("graphYmin"), runChar);
		text->SetTextAngle(90);
    	text->SetTextAlign(11); // 11 aligns the text to the top left
    	text->SetTextSize(0.03);
    	text->Draw();
		line->SetLineColor(2);
		line->Draw("same");
    }
	
	legend.Draw();

	gPad->RedrawAxis();

	canvas->cd();
	TLatex infoText;
	infoText.SetNDC();
	infoText.SetTextSize(pltOpt.getFloat("infoTextSize"));

        TString m_infoYear = "CMS #bf{#it{Preliminary}}", m_runInfo = "#bf{Run 3 (13 TeV)}";
        if(m_year.Contains("2016")) { m_infoYear = "CMS #bf{#it{Preliminary 2016}}"; m_runInfo = "#bf{(13 TeV)}"; }
        else if(m_year.Contains("2017")) { m_infoYear = "CMS #bf{#it{Preliminary 2017}}"; m_runInfo = "#bf{(13 TeV)}"; }
        else if(m_year.Contains("2018")) { m_infoYear = "CMS #bf{#it{Preliminary 2018}}"; m_runInfo = "#bf{(13 TeV)}"; }
        if(m_year.Contains("3years")) infoText.DrawLatex(0.69, pltOpt.getFloat("infoY"), m_runInfo);
        else infoText.DrawLatex(pltOpt.getFloat("infoRunX"), pltOpt.getFloat("infoY"), m_runInfo);
        infoText.DrawLatex(pltOpt.getFloat("infoYearX"), pltOpt.getFloat("infoY"), m_infoYear);



	pad0.cd();
//	infoText.SetTextSize(pltOpt.getFloat("categoryTextSize"));
//	infoText.DrawLatex(pltOpt.getFloat("categoryX"), pltOpt.getFloat("categoryY"), pltOpt.get("category").c_str());

        TLegend legend_cat(0.2, 0.88, 0.7, 0.95);
        legend_cat.SetBorderSize(0.0);
        legend_cat.SetFillColor(0);
        legend_cat.SetTextSize(pltOpt.getFloat("categoryTextSize"));
        legend_cat.AddEntry((TObject*)0, m_category, "");
        legend_cat.Draw();

	canvas->cd();
	pad1.Draw();
	pad1.cd();
	pad1.SetFillStyle(0);
	pad1.SetFillColor(0);
	pad1.SetFrameFillStyle(0);
	pad1.SetMargin(pltOpt.getFloat("pad1marginL"), pltOpt.getFloat("pad1marginR"), pltOpt.getFloat("pad1marginB"), pltOpt.getFloat("pad1marginT"));
	pad1.SetTicks(1, 1);
	pad1.SetGrid(1, 1);

	UInt_t summaryNbins = std::round((pltOpt.getFloat("graphYmax") - pltOpt.getFloat("graphYmin"))/pltOpt.getFloat("binWidth"));
	for(UChar_t i = 0; i < allGraphs.size(); i++){
		TH1D* _summaryHist = graph2hist(allGraphs[i], summaryNbins, pltOpt.getFloat("graphYmin"), pltOpt.getFloat("graphYmax"));
		_summaryHist->Scale(100. / _summaryHist->Integral(0,_summaryHist->GetNbinsX()+1));
		_summaryHist->SetStats(0);
		_summaryHist->GetXaxis()->SetTickSize(pltOpt.getFloat("summaryHistTickSize"));
		_summaryHist->GetXaxis()->SetLabelSize(0.);
		_summaryHist->GetXaxis()->SetTitleSize(0.);
		_summaryHist->GetYaxis()->SetLabelSize(0.);
		_summaryHist->GetYaxis()->SetNdivisions(010);
		_summaryHist->SetFillColorAlpha(_summaryHist->GetFillColor(), pltOpt.getFloat("summaryHistTransparency"));
		_summaryHist->SetMinimum(0.00000001);
		_summaryHist->GetXaxis()->SetRangeUser(pltOpt.getFloat("graphYmin"), pltOpt.getFloat("graphYmax"));
		_summaryHist->GetXaxis()->SetLimits(pltOpt.getFloat("graphYmin"), pltOpt.getFloat("graphYmax"));
		_summaryHist->GetYaxis()->SetRangeUser(0.00000001, _summaryHist->GetMaximum()* pltOpt.getFloat("summaryHistMaxScale"));
		_summaryHist->GetYaxis()->SetLimits(pltOpt.getFloat("graphYmin"), pltOpt.getFloat("graphYmax"));
		_summaryHist->GetYaxis()->SetNdivisions(pltOpt.getInt("NdivsSummary"));
		_summaryHist->Draw("hbar same");
		toDelete.push_back(_summaryHist);
	}

	pad1.GetFrame()->Draw();

	// TLine *newLine = 

	canvas->cd();
	pad2.Draw();
	pad2.cd();
	pad2.SetFillStyle(0);
	pad2.SetFillColor(0);
	pad2.SetFillColor(0);
	pad2.SetBorderSize(0);
	pad2.SetFrameLineWidth(0);
	pad2.SetFrameFillStyle(0);
	pad2.SetMargin(pltOpt.getFloat("pad1marginL"), pltOpt.getFloat("pad1marginR"), pltOpt.getFloat("pad1marginB"), pltOpt.getFloat("pad1marginT"));

	TText stats;
	stats.SetNDC();
	stats.SetTextSize(pltOpt.getFloat("summaryTextSize"));
	stats.SetTextAlign(22);
	stats.SetTextAngle(0);
	stats.DrawText(pltOpt.getFloat("summaryTextX0"), pltOpt.getFloat("summaryTextY00"), "Mean");
	stats.DrawText(pltOpt.getFloat("summaryTextX0"), pltOpt.getFloat("summaryTextY10"), "StdDev");

	TMarker	marker;
	marker.SetNDC();
	marker.SetMarkerSize(pltOpt.getFloat("summaryMarkerSize"));

	// statistic st;

	UInt_t summaryNfinebins = std::round((pltOpt.getFloat("graphYmax") - pltOpt.getFloat("graphYmin"))/pltOpt.getFloat("fineBinWidth"));

	for(UChar_t i = 0; i < allGraphs.size(); i++){
		Double_t _tmpMean, _tmpStdDev;
		graphStats(allGraphs[i], _tmpMean, _tmpStdDev);

		// TH1D* _summaryHist = graph2hist(allGraphs[i], summaryNfinebins, pltOpt.getFloat("graphYmin"), pltOpt.getFloat("graphYmax"));
		// errors* _meanErr = st.getHistStatistic(_summaryHist, "mean", 100., pltOpt.getInt("resamplings"), 95.);
		// errors* _sigmaErr = st.getHistStatistic(_summaryHist, "stdev", 100., pltOpt.getInt("resamplings"), 95.);
		// _summaryHist->Delete();
		// std::cout<<"Mean: "<<std::setprecision(6)<<_meanErr->x<<" + "<<_meanErr->errHigh<<" - "<<_meanErr->errLow<<std::endl;
		// std::cout<<"Sigma: "<<std::setprecision(6)<<_sigmaErr->x<<" + "<<_sigmaErr->errHigh<<" - "<<_sigmaErr->errLow<<std::endl;
		// delete _meanErr;
		// delete _sigmaErr;

		stats.SetTextColor(allGraphs[i]->GetLineColor());
		std::string sunit=" GeV";
                std::string meanStr = to_string_with_precision(_tmpMean, pltOpt.getInt("sfMean"));
                std::string stddevStr = to_string_with_precision(_tmpStdDev, pltOpt.getInt("sfStdDev"));
		if(varName.Contains("medianmee")) {
			meanStr = to_string_with_precision(_tmpMean, pltOpt.getInt("sfMean")) + sunit;
		 	stddevStr = to_string_with_precision(_tmpStdDev, pltOpt.getInt("sfStdDev")) + sunit;
		}
		stats.DrawText(pltOpt.getFloat("summaryTextX0"), pltOpt.getFloat("summaryTextY00") - (i + 2) * pltOpt.getFloat("summaryTextYstep"), meanStr.c_str());


		stats.SetTextColor(allGraphs[i]->GetLineColor());
		stats.DrawText(pltOpt.getFloat("summaryTextX0"), pltOpt.getFloat("summaryTextY10") - (i + 2) * pltOpt.getFloat("summaryTextYstep"), stddevStr.c_str());

		marker.SetMarkerStyle(allGraphs[i]->GetMarkerStyle());
		marker.SetMarkerColor(allGraphs[i]->GetLineColor());
//		marker.DrawMarker(pltOpt.getFloat("markerX"), pltOpt.getFloat("summaryTextY00") - (i + 1) * pltOpt.getFloat("summaryTextYstep"));
	}
	canvas->RedrawAxis("sameaxis");
//        canvas->cd();
//        pad0.cd();
//	mg.GetXaxis()->Draw("sameaxis");
//        gPad->Update();
//	pad0.SetRightMargin(0.1);
//        gPad->RedrawAxis();
	if(pltOpt.getInt("is22")) graphName=graphName+"_22";
	else  graphName=graphName+"_23"; 
	canvas->Update();
	canvas->SaveAs((writeDir+"/"+graphName+".png").c_str());
	canvas->SaveAs((writeDir+"/"+graphName+".pdf").c_str());
	canvas->SaveAs((writeDir+"/"+graphName+".C").c_str());

	for(auto & tObject : toDelete){
		tObject->Delete();
	}
}
