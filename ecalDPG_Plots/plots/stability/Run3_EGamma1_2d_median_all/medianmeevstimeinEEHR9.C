void medianmeevstimeinEEHR9()
{
//=========Macro generated from canvas: medianmeevstimeinEEHR9_canvas/
//=========  (Thu Mar  7 12:24:32 2024) by ROOT version6.10/09
   TCanvas *medianmeevstimeinEEHR9_canvas = new TCanvas("medianmeevstimeinEEHR9_canvas", "",0,0,1400,800);
   medianmeevstimeinEEHR9_canvas->Range(0,0,1,1);
   medianmeevstimeinEEHR9_canvas->SetFillColor(0);
   medianmeevstimeinEEHR9_canvas->SetBorderMode(0);
   medianmeevstimeinEEHR9_canvas->SetBorderSize(2);
   medianmeevstimeinEEHR9_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "",0,0,0.85,0.95);
   pad0->Draw();
   pad0->cd();
   pad0->Range(1.681523e+09,87.70769,1.689862e+09,92.32308);
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
   multigraph->SetName("medianmeevstimeinEEHR9");
   multigraph->SetTitle("");
   
   Double_t medianmeevstimeinEEHR9_fx3001[23] = {
   1.682937e+09,
   1.683423e+09,
   1.683706e+09,
   1.683947e+09,
   1.684194e+09,
   1.684413e+09,
   1.684681e+09,
   1.684911e+09,
   1.685287e+09,
   1.685729e+09,
   1.685953e+09,
   1.686121e+09,
   1.6863e+09,
   1.686466e+09,
   1.686838e+09,
   1.688047e+09,
   1.688461e+09,
   1.688665e+09,
   1.688816e+09,
   1.688974e+09,
   1.689152e+09,
   1.689373e+09,
   1.689532e+09};
   Double_t medianmeevstimeinEEHR9_fy3001[23] = {
   89.61094,
   90.30761,
   90.26606,
   90.1832,
   90.20474,
   90.25632,
   90.15297,
   90.63495,
   90.0625,
   89.91728,
   90.27935,
   90.20737,
   90.08455,
   90.43827,
   90.52195,
   89.1875,
   90.12903,
   90.2404,
   90.25,
   90.44333,
   90.42065,
   90.37315,
   90.468};
   Double_t medianmeevstimeinEEHR9_felx3001[23] = {
   302400.5,
   183374,
   100076.5,
   140390.5,
   107275,
   111428,
   156835,
   73442,
   302400.5,
   139171.5,
   85125,
   82258,
   96679,
   69451.5,
   302400.5,
   302400.5,
   111095,
   93444,
   57072.5,
   100765.5,
   78224.5,
   142256.5,
   16573};
   Double_t medianmeevstimeinEEHR9_fely3001[23] = {
   0.2178819,
   0.1299388,
   0.1040985,
   0.07704918,
   0.1,
   0.08600329,
   0.09993999,
   0.1004462,
   0.196371,
   0.1143993,
   0.1346876,
   0.1063684,
   0.08566905,
   0.1337781,
   0.1351588,
   0.2098684,
   0.09968443,
   0.1073852,
   0.09158416,
   0.1175908,
   0.1299305,
   0.1138458,
   0.2026154};
   Double_t medianmeevstimeinEEHR9_fehx3001[23] = {
   302400.5,
   183374,
   100076.5,
   140390.5,
   107275,
   111428,
   156835,
   73442,
   302400.5,
   139171.5,
   85125,
   82258,
   96679,
   69451.5,
   302400.5,
   302400.5,
   111095,
   93444,
   57072.5,
   100765.5,
   78224.5,
   142256.5,
   16573};
   Double_t medianmeevstimeinEEHR9_fehy3001[23] = {
   0.1661458,
   0.1032021,
   0.09747437,
   0.08108899,
   0.09353902,
   0.0846752,
   0.0905362,
   0.1022489,
   0.1982143,
   0.1104938,
   0.1063665,
   0.1007397,
   0.1036898,
   0.1007972,
   0.1567722,
   0.2203947,
   0.1031106,
   0.09525487,
   0.1071429,
   0.09766667,
   0.1067063,
   0.08510428,
   0.2462857};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,medianmeevstimeinEEHR9_fx3001,medianmeevstimeinEEHR9_fy3001,medianmeevstimeinEEHR9_felx3001,medianmeevstimeinEEHR9_fehx3001,medianmeevstimeinEEHR9_fely3001,medianmeevstimeinEEHR9_fehy3001);
   grae->SetName("medianmeevstimeinEEHR9");
   grae->SetTitle("EEHR9");
   grae->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#238b45");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#238b45");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_medianmeevstimeinEEHR93001 = new TH1F("Graph_medianmeevstimeinEEHR93001","EEHR9",100,1.681943e+09,1.69024e+09);
   Graph_medianmeevstimeinEEHR93001->SetMinimum(88.80168);
   Graph_medianmeevstimeinEEHR93001->SetMaximum(90.91315);
   Graph_medianmeevstimeinEEHR93001->SetDirectory(0);
   Graph_medianmeevstimeinEEHR93001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_medianmeevstimeinEEHR93001->SetLineColor(ci);
   Graph_medianmeevstimeinEEHR93001->GetXaxis()->SetTitle("Time");
   Graph_medianmeevstimeinEEHR93001->GetXaxis()->SetTimeDisplay(1);
   Graph_medianmeevstimeinEEHR93001->GetXaxis()->SetTimeFormat("#splitline{%d-%b}{%H:%M}%F1970-01-01 00:00:00s0");
   Graph_medianmeevstimeinEEHR93001->GetXaxis()->SetLabelFont(42);
   Graph_medianmeevstimeinEEHR93001->GetXaxis()->SetLabelSize(0.035);
   Graph_medianmeevstimeinEEHR93001->GetXaxis()->SetTitleSize(0.035);
   Graph_medianmeevstimeinEEHR93001->GetXaxis()->SetTitleFont(42);
   Graph_medianmeevstimeinEEHR93001->GetYaxis()->SetTitle("median m_{ee}[GeV]");
   Graph_medianmeevstimeinEEHR93001->GetYaxis()->SetLabelFont(42);
   Graph_medianmeevstimeinEEHR93001->GetYaxis()->SetLabelSize(0.035);
   Graph_medianmeevstimeinEEHR93001->GetYaxis()->SetTitleSize(0.035);
   Graph_medianmeevstimeinEEHR93001->GetYaxis()->SetTitleOffset(0);
   Graph_medianmeevstimeinEEHR93001->GetYaxis()->SetTitleFont(42);
   Graph_medianmeevstimeinEEHR93001->GetZaxis()->SetLabelFont(42);
   Graph_medianmeevstimeinEEHR93001->GetZaxis()->SetLabelSize(0.035);
   Graph_medianmeevstimeinEEHR93001->GetZaxis()->SetTitleSize(0.035);
   Graph_medianmeevstimeinEEHR93001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_medianmeevstimeinEEHR93001);
   
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
   
   TH1F *medianmeevstimeinEEHR9_copy__1 = new TH1F("medianmeevstimeinEEHR9_copy__1","",100,1.682607e+09,1.689862e+09);
   medianmeevstimeinEEHR9_copy__1->SetMinimum(88.4);
   medianmeevstimeinEEHR9_copy__1->SetMaximum(92.3);
   medianmeevstimeinEEHR9_copy__1->SetDirectory(0);
   medianmeevstimeinEEHR9_copy__1->SetStats(0);

   ci = TColor::GetColor("#000099");
   medianmeevstimeinEEHR9_copy__1->SetLineColor(ci);
   medianmeevstimeinEEHR9_copy__1->GetXaxis()->SetTitle("Time (day-month)");
   medianmeevstimeinEEHR9_copy__1->GetXaxis()->SetTimeDisplay(1);
   medianmeevstimeinEEHR9_copy__1->GetXaxis()->SetTimeFormat("%d-%b%F1970-01-01 00:00:00s0");
   medianmeevstimeinEEHR9_copy__1->GetXaxis()->SetRange(1,100);
   medianmeevstimeinEEHR9_copy__1->GetXaxis()->CenterTitle(true);
   medianmeevstimeinEEHR9_copy__1->GetXaxis()->SetNdivisions(8);
   medianmeevstimeinEEHR9_copy__1->GetXaxis()->SetLabelFont(42);
   medianmeevstimeinEEHR9_copy__1->GetXaxis()->SetLabelSize(0.05);
   medianmeevstimeinEEHR9_copy__1->GetXaxis()->SetTitleSize(0.06);
   medianmeevstimeinEEHR9_copy__1->GetXaxis()->SetTitleOffset(1.2);
   medianmeevstimeinEEHR9_copy__1->GetXaxis()->SetTitleFont(42);
   medianmeevstimeinEEHR9_copy__1->GetYaxis()->SetTitle("median m_{ee} (GeV)");
   medianmeevstimeinEEHR9_copy__1->GetYaxis()->CenterTitle(true);
   medianmeevstimeinEEHR9_copy__1->GetYaxis()->SetLabelFont(42);
   medianmeevstimeinEEHR9_copy__1->GetYaxis()->SetLabelSize(0.05);
   medianmeevstimeinEEHR9_copy__1->GetYaxis()->SetTitleSize(0.06);
   medianmeevstimeinEEHR9_copy__1->GetYaxis()->SetTitleOffset(1.1);
   medianmeevstimeinEEHR9_copy__1->GetYaxis()->SetTitleFont(42);
   medianmeevstimeinEEHR9_copy__1->GetZaxis()->SetLabelFont(42);
   medianmeevstimeinEEHR9_copy__1->GetZaxis()->SetLabelSize(0.035);
   medianmeevstimeinEEHR9_copy__1->GetZaxis()->SetTitleSize(0.035);
   medianmeevstimeinEEHR9_copy__1->GetZaxis()->SetTitleFont(42);
   medianmeevstimeinEEHR9_copy__1->Draw("sameaxis");
   
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
   medianmeevstimeinEEHR9_canvas->cd();
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
   pad1->Range(1e-08,87.70769,26.36695,92.32308);
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
   __2->SetBinContent(16,1.128499);
   __2->SetBinContent(25,1.441912);
   __2->SetBinContent(31,4.129408);
   __2->SetBinContent(34,7.217126);
   __2->SetBinContent(35,5.078304);
   __2->SetBinContent(36,14.12331);
   __2->SetBinContent(37,20.87384);
   __2->SetBinContent(38,15.95531);
   __2->SetBinContent(39,3.89244);
   __2->SetBinContent(40,5.38742);
   __2->SetBinContent(41,12.18074);
   __2->SetBinContent(42,1.046015);
   __2->SetBinContent(43,2.463407);
   __2->SetBinContent(45,5.082263);
   __2->SetBinError(16,1.128499);
   __2->SetBinError(25,1.441912);
   __2->SetBinError(31,4.129408);
   __2->SetBinError(34,6.027181);
   __2->SetBinError(35,5.078304);
   __2->SetBinError(36,10.15267);
   __2->SetBinError(37,10.45009);
   __2->SetBinError(38,9.545306);
   __2->SetBinError(39,3.89244);
   __2->SetBinError(40,5.38742);
   __2->SetBinError(41,7.057966);
   __2->SetBinError(42,1.046015);
   __2->SetBinError(43,2.463407);
   __2->SetBinError(45,5.082263);
   __2->SetMinimum(1e-08);
   __2->SetMaximum(25.0486);
   __2->SetEntries(23);
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
   medianmeevstimeinEEHR9_canvas->cd();
  
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
   text = new TText(0.45,0.84,"90.2 GeV");
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
   medianmeevstimeinEEHR9_canvas->cd();
   medianmeevstimeinEEHR9_canvas->Modified();
   medianmeevstimeinEEHR9_canvas->cd();
   medianmeevstimeinEEHR9_canvas->SetSelected(medianmeevstimeinEEHR9_canvas);
}
