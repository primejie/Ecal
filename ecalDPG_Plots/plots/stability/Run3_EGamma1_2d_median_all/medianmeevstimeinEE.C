void medianmeevstimeinEE()
{
//=========Macro generated from canvas: medianmeevstimeinEE_canvas/
//=========  (Thu Mar  7 12:24:24 2024) by ROOT version6.10/09
   TCanvas *medianmeevstimeinEE_canvas = new TCanvas("medianmeevstimeinEE_canvas", "",0,0,1400,800);
   medianmeevstimeinEE_canvas->Range(0,0,1,1);
   medianmeevstimeinEE_canvas->SetFillColor(0);
   medianmeevstimeinEE_canvas->SetBorderMode(0);
   medianmeevstimeinEE_canvas->SetBorderSize(2);
   medianmeevstimeinEE_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "",0,0,0.85,0.95);
   pad0->Draw();
   pad0->cd();
   pad0->Range(1.681521e+09,87.70769,1.68987e+09,92.32308);
   pad0->SetFillColor(0);
   pad0->SetFillStyle(4000);
   pad0->SetBorderMode(0);
   pad0->SetBorderSize(2);
   pad0->SetGridx();
   pad0->SetGridy();
   pad0->SetTickx(1);
   pad0->SetTicky(1);
   pad0->SetLeftMargin(0.13);
   pad0->SetRightMargin(0);
   pad0->SetTopMargin(0.005);
   pad0->SetBottomMargin(0.15);
   pad0->SetFrameFillStyle(0);
   pad0->SetFrameBorderMode(0);
   pad0->SetFrameFillStyle(0);
   pad0->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("medianmeevstimeinEE");
   multigraph->SetTitle("");
   
   Double_t medianmeevstimeinEE_fx3001[50] = {
   1.682937e+09,
   1.683343e+09,
   1.683517e+09,
   1.683622e+09,
   1.683688e+09,
   1.683766e+09,
   1.68387e+09,
   1.684003e+09,
   1.684112e+09,
   1.684173e+09,
   1.68426e+09,
   1.684375e+09,
   1.684478e+09,
   1.684604e+09,
   1.684752e+09,
   1.684859e+09,
   1.684924e+09,
   1.684968e+09,
   1.68529e+09,
   1.685674e+09,
   1.685802e+09,
   1.685888e+09,
   1.685958e+09,
   1.686016e+09,
   1.686072e+09,
   1.686146e+09,
   1.68623e+09,
   1.686307e+09,
   1.686374e+09,
   1.686435e+09,
   1.686496e+09,
   1.686575e+09,
   1.686928e+09,
   1.688138e+09,
   1.688474e+09,
   1.688537e+09,
   1.688592e+09,
   1.688677e+09,
   1.688755e+09,
   1.688797e+09,
   1.688844e+09,
   1.688891e+09,
   1.688957e+09,
   1.689043e+09,
   1.689138e+09,
   1.689207e+09,
   1.689336e+09,
   1.689471e+09,
   1.689513e+09,
   1.68954e+09};
   Double_t medianmeevstimeinEE_fy3001[50] = {
   89.58582,
   90.14773,
   90.02391,
   89.91449,
   89.99663,
   89.89293,
   89.94485,
   90.04598,
   90.09286,
   89.90739,
   90,
   89.8,
   90.16824,
   89.78438,
   89.85714,
   90.09375,
   90.35234,
   90.39125,
   89.76364,
   89.59062,
   89.69157,
   90.06421,
   89.98,
   90.15423,
   89.86742,
   90.04563,
   90.05631,
   90.02677,
   89.79667,
   90.12989,
   90.2634,
   90.26868,
   90.08421,
   89.31404,
   89.78622,
   90.0599,
   90.19,
   90.02108,
   89.99709,
   90.20109,
   89.9516,
   90.12935,
   90.16744,
   90.04725,
   90.1224,
   90.03415,
   89.9744,
   90.14247,
   90.24902,
   89.85938};
   Double_t medianmeevstimeinEE_felx3001[50] = {
   302400.5,
   104068.5,
   69676.5,
   35743,
   29935,
   48089,
   55970,
   76620.5,
   33115.5,
   27461.5,
   59057.5,
   56266.5,
   46475.5,
   80025,
   67901,
   39289,
   25573.5,
   18768.5,
   302400.5,
   81797,
   46040,
   40231.5,
   29520.5,
   28312,
   27956,
   46169.5,
   38352,
   37705,
   29737.5,
   31245,
   29345,
   50445.5,
   302400.5,
   302400.5,
   34098.5,
   28923,
   26157.5,
   58791,
   18555,
   23736,
   23378,
   23592.5,
   42154.5,
   43596.5,
   51752.5,
   17684,
   110768.5,
   24303,
   18101.5,
   8515};
   Double_t medianmeevstimeinEE_fely3001[50] = {
   0.129667,
   0.1335859,
   0.1174195,
   0.08398598,
   0.1028021,
   0.1021398,
   0.09305965,
   0.1036693,
   0.1131103,
   0.1147393,
   0.119403,
   0.1315217,
   0.09233168,
   0.116375,
   0.09498069,
   0.1069853,
   0.1100818,
   0.1380585,
   0.1969697,
   0.1112772,
   0.09969803,
   0.09482277,
   0.1168421,
   0.1109327,
   0.1262942,
   0.1027739,
   0.102229,
   0.12623,
   0.1094118,
   0.09110955,
   0.09886718,
   0.110045,
   0.1525032,
   0.1402826,
   0.1064948,
   0.09451637,
   0.1091919,
   0.09554086,
   0.08994452,
   0.09434538,
   0.1164472,
   0.1051373,
   0.1047146,
   0.1066277,
   0.1282469,
   0.1086144,
   0.1256096,
   0.1080981,
   0.1082033,
   0.240625};
   Double_t medianmeevstimeinEE_fehx3001[50] = {
   302400.5,
   104068.5,
   69676.5,
   35743,
   29935,
   48089,
   55970,
   76620.5,
   33115.5,
   27461.5,
   59057.5,
   56266.5,
   46475.5,
   80025,
   67901,
   39289,
   25573.5,
   18768.5,
   302400.5,
   81797,
   46040,
   40231.5,
   29520.5,
   28312,
   27956,
   46169.5,
   38352,
   37705,
   29737.5,
   31245,
   29345,
   50445.5,
   302400.5,
   302400.5,
   34098.5,
   28923,
   26157.5,
   58791,
   18555,
   23736,
   23378,
   23592.5,
   42154.5,
   43596.5,
   51752.5,
   17684,
   110768.5,
   24303,
   18101.5,
   8515};
   Double_t medianmeevstimeinEE_fehy3001[50] = {
   0.1036157,
   0.1075668,
   0.1097826,
   0.0775353,
   0.08847717,
   0.102947,
   0.1256366,
   0.104023,
   0.09195298,
   0.1376754,
   0.09333333,
   0.1,
   0.08732026,
   0.09702035,
   0.1146313,
   0.1201389,
   0.1279593,
   0.1363362,
   0.1863636,
   0.08201651,
   0.102427,
   0.1064965,
   0.1091566,
   0.1049701,
   0.1085102,
   0.1077023,
   0.1094788,
   0.1060606,
   0.1247619,
   0.1121439,
   0.1130979,
   0.09815036,
   0.1273837,
   0.104071,
   0.08631649,
   0.09495338,
   0.11,
   0.1096386,
   0.1091073,
   0.1140646,
   0.1217052,
   0.1117481,
   0.1111989,
   0.1079853,
   0.09676305,
   0.1289306,
   0.1026541,
   0.1190023,
   0.09840307,
   0.2447917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(50,medianmeevstimeinEE_fx3001,medianmeevstimeinEE_fy3001,medianmeevstimeinEE_felx3001,medianmeevstimeinEE_fehx3001,medianmeevstimeinEE_fely3001,medianmeevstimeinEE_fehy3001);
   grae->SetName("medianmeevstimeinEE");
   grae->SetTitle("EE");
   grae->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#238b45");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#238b45");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_medianmeevstimeinEE3001 = new TH1F("Graph_medianmeevstimeinEE3001","EE",100,1.681943e+09,1.69024e+09);
   Graph_medianmeevstimeinEE3001->SetMinimum(89.03838);
   Graph_medianmeevstimeinEE3001->SetMaximum(90.66297);
   Graph_medianmeevstimeinEE3001->SetDirectory(0);
   Graph_medianmeevstimeinEE3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_medianmeevstimeinEE3001->SetLineColor(ci);
   Graph_medianmeevstimeinEE3001->GetXaxis()->SetTitle("Time");
   Graph_medianmeevstimeinEE3001->GetXaxis()->SetTimeDisplay(1);
   Graph_medianmeevstimeinEE3001->GetXaxis()->SetTimeFormat("#splitline{%d-%b}{%H:%M}%F1970-01-01 00:00:00s0");
   Graph_medianmeevstimeinEE3001->GetXaxis()->SetLabelFont(42);
   Graph_medianmeevstimeinEE3001->GetXaxis()->SetLabelSize(0.035);
   Graph_medianmeevstimeinEE3001->GetXaxis()->SetTitleSize(0.035);
   Graph_medianmeevstimeinEE3001->GetXaxis()->SetTitleFont(42);
   Graph_medianmeevstimeinEE3001->GetYaxis()->SetTitle("median m_{ee}[GeV]");
   Graph_medianmeevstimeinEE3001->GetYaxis()->SetLabelFont(42);
   Graph_medianmeevstimeinEE3001->GetYaxis()->SetLabelSize(0.035);
   Graph_medianmeevstimeinEE3001->GetYaxis()->SetTitleSize(0.035);
   Graph_medianmeevstimeinEE3001->GetYaxis()->SetTitleOffset(0);
   Graph_medianmeevstimeinEE3001->GetYaxis()->SetTitleFont(42);
   Graph_medianmeevstimeinEE3001->GetZaxis()->SetLabelFont(42);
   Graph_medianmeevstimeinEE3001->GetZaxis()->SetLabelSize(0.035);
   Graph_medianmeevstimeinEE3001->GetZaxis()->SetTitleSize(0.035);
   Graph_medianmeevstimeinEE3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_medianmeevstimeinEE3001);
   
   multigraph->Add(grae,"PE");
   multigraph->Draw("A");
   multigraph->GetXaxis()->SetTitle("Time (day-month)");
   multigraph->GetXaxis()->SetTimeDisplay(1);
   multigraph->GetXaxis()->SetTimeFormat("%d-%b%F1970-01-01 00:00:00s0");
   multigraph->GetXaxis()->SetRange(1,100);
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetNdivisions(8);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleOffset(1.2);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("median m_{ee} (GeV)");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleOffset(1.1);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.6,0.85,1,0.98,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   leg->Draw();
   
   TH1F *medianmeevstimeinEE_copy__1 = new TH1F("medianmeevstimeinEE_copy__1","",100,1.682607e+09,1.68987e+09);
   medianmeevstimeinEE_copy__1->SetMinimum(88.4);
   medianmeevstimeinEE_copy__1->SetMaximum(92.3);
   medianmeevstimeinEE_copy__1->SetDirectory(0);
   medianmeevstimeinEE_copy__1->SetStats(0);

   ci = TColor::GetColor("#000099");
   medianmeevstimeinEE_copy__1->SetLineColor(ci);
   medianmeevstimeinEE_copy__1->GetXaxis()->SetTitle("Time (day-month)");
   medianmeevstimeinEE_copy__1->GetXaxis()->SetTimeDisplay(1);
   medianmeevstimeinEE_copy__1->GetXaxis()->SetTimeFormat("%d-%b%F1970-01-01 00:00:00s0");
   medianmeevstimeinEE_copy__1->GetXaxis()->SetRange(1,100);
   medianmeevstimeinEE_copy__1->GetXaxis()->CenterTitle(true);
   medianmeevstimeinEE_copy__1->GetXaxis()->SetNdivisions(8);
   medianmeevstimeinEE_copy__1->GetXaxis()->SetLabelFont(42);
   medianmeevstimeinEE_copy__1->GetXaxis()->SetLabelSize(0.05);
   medianmeevstimeinEE_copy__1->GetXaxis()->SetTitleSize(0.06);
   medianmeevstimeinEE_copy__1->GetXaxis()->SetTitleOffset(1.2);
   medianmeevstimeinEE_copy__1->GetXaxis()->SetTitleFont(42);
   medianmeevstimeinEE_copy__1->GetYaxis()->SetTitle("median m_{ee} (GeV)");
   medianmeevstimeinEE_copy__1->GetYaxis()->CenterTitle(true);
   medianmeevstimeinEE_copy__1->GetYaxis()->SetLabelFont(42);
   medianmeevstimeinEE_copy__1->GetYaxis()->SetLabelSize(0.05);
   medianmeevstimeinEE_copy__1->GetYaxis()->SetTitleSize(0.06);
   medianmeevstimeinEE_copy__1->GetYaxis()->SetTitleOffset(1.1);
   medianmeevstimeinEE_copy__1->GetYaxis()->SetTitleFont(42);
   medianmeevstimeinEE_copy__1->GetZaxis()->SetLabelFont(42);
   medianmeevstimeinEE_copy__1->GetZaxis()->SetLabelSize(0.035);
   medianmeevstimeinEE_copy__1->GetZaxis()->SetTitleSize(0.035);
   medianmeevstimeinEE_copy__1->GetZaxis()->SetTitleFont(42);
   medianmeevstimeinEE_copy__1->Draw("sameaxis");
   
   leg = new TLegend(0.2,0.88,0.7,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#bf{ECAL Endcaps (|#eta|<2.5)}","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pad0->Modified();
   medianmeevstimeinEE_canvas->cd();
   TLatex *   tex = new TLatex(0.76,0.956,"#bf{Run 3 (13 TeV)}");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.111,0.956,"CMS #bf{#it{Preliminary}}");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.85,0,1,0.95);
   pad1->Draw();
   pad1->cd();
   pad1->Range(1e-08,87.70769,17.59513,92.32308);
   pad1->SetFillColor(0);
   pad1->SetFillStyle(4000);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetGridx();
   pad1->SetGridy();
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0);
   pad1->SetRightMargin(0.05);
   pad1->SetTopMargin(0.005);
   pad1->SetBottomMargin(0.15);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   
   TH1D *__2 = new TH1D("__2","",78,88.4,92.3);
   __2->SetBinContent(19,1.61971);
   __2->SetBinContent(24,4.350987);
   __2->SetBinContent(26,2.315634);
   __2->SetBinContent(28,8.841228);
   __2->SetBinContent(30,6.547677);
   __2->SetBinContent(31,7.150775);
   __2->SetBinContent(32,12.4877);
   __2->SetBinContent(33,13.92948);
   __2->SetBinContent(34,12.41988);
   __2->SetBinContent(35,9.716409);
   __2->SetBinContent(36,8.96317);
   __2->SetBinContent(37,4.418213);
   __2->SetBinContent(38,4.304091);
   __2->SetBinContent(40,2.935048);
   __2->SetBinError(19,1.61971);
   __2->SetBinError(24,3.132219);
   __2->SetBinError(26,2.315634);
   __2->SetBinError(28,4.201458);
   __2->SetBinError(30,3.593449);
   __2->SetBinError(31,4.417905);
   __2->SetBinError(32,5.16255);
   __2->SetBinError(33,5.293566);
   __2->SetBinError(34,5.18895);
   __2->SetBinError(35,4.373248);
   __2->SetBinError(36,4.552576);
   __2->SetBinError(37,3.124193);
   __2->SetBinError(38,3.043908);
   __2->SetBinError(40,2.096778);
   __2->SetMinimum(1e-08);
   __2->SetMaximum(16.71538);
   __2->SetEntries(50);
   __2->SetStats(0);

   ci = 1180;
   color = new TColor(ci, 0.1372549, 0.5450981, 0.2705882, " ", 0.8);
   __2->SetFillColor(ci);

   ci = TColor::GetColor("#238b45");
   __2->SetLineColor(ci);

   ci = TColor::GetColor("#238b45");
   __2->SetMarkerColor(ci);
   __2->GetXaxis()->SetRange(1,78);
   __2->GetXaxis()->SetLabelFont(42);
   __2->GetXaxis()->SetLabelSize(0);
   __2->GetXaxis()->SetTitleSize(0);
   __2->GetXaxis()->SetTickLength(0.16);
   __2->GetXaxis()->SetTitleFont(42);
   __2->GetYaxis()->SetNdivisions(5);
   __2->GetYaxis()->SetLabelFont(42);
   __2->GetYaxis()->SetLabelSize(0);
   __2->GetYaxis()->SetTitleSize(0.035);
   __2->GetYaxis()->SetTitleOffset(0);
   __2->GetYaxis()->SetTitleFont(42);
   __2->GetZaxis()->SetLabelFont(42);
   __2->GetZaxis()->SetLabelSize(0.035);
   __2->GetZaxis()->SetTitleSize(0.035);
   __2->GetZaxis()->SetTitleFont(42);
   __2->Draw("hbar ");
   pad1->Modified();
   medianmeevstimeinEE_canvas->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.85,0,1,0.95);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0,0,1,1);
   pad2->SetFillColor(0);
   pad2->SetFillStyle(4000);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(0);
   pad2->SetLeftMargin(0);
   pad2->SetRightMargin(0.05);
   pad2->SetTopMargin(0.005);
   pad2->SetBottomMargin(0.15);
   pad2->SetFrameFillStyle(0);
   pad2->SetFrameLineWidth(0);
   pad2->SetFrameBorderMode(0);
   TText *text = new TText(0.45,0.9,"Mean");
   text->SetNDC();
   text->SetTextAlign(22);
   text->SetTextSize(0.18);
   text->Draw();
   text = new TText(0.45,0.75,"StdDev");
   text->SetNDC();
   text->SetTextAlign(22);
   text->SetTextSize(0.18);
   text->Draw();
   text = new TText(0.45,0.84,"90.0 GeV");
   text->SetNDC();
   text->SetTextAlign(22);

   ci = TColor::GetColor("#238b45");
   text->SetTextColor(ci);
   text->SetTextSize(0.18);
   text->Draw();
   text = new TText(0.45,0.69,"0.2 GeV");
   text->SetNDC();
   text->SetTextAlign(22);

   ci = TColor::GetColor("#238b45");
   text->SetTextColor(ci);
   text->SetTextSize(0.18);
   text->Draw();
   pad2->Modified();
   medianmeevstimeinEE_canvas->cd();
   medianmeevstimeinEE_canvas->Modified();
   medianmeevstimeinEE_canvas->cd();
   medianmeevstimeinEE_canvas->SetSelected(medianmeevstimeinEE_canvas);
}
