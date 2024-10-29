void medianmeevstimeinEELR9()
{
//=========Macro generated from canvas: medianmeevstimeinEELR9_canvas/
//=========  (Fri Mar  8 12:57:04 2024) by ROOT version6.10/09
   TCanvas *medianmeevstimeinEELR9_canvas = new TCanvas("medianmeevstimeinEELR9_canvas", "",0,0,1400,800);
   medianmeevstimeinEELR9_canvas->Range(0,0,1,1);
   medianmeevstimeinEELR9_canvas->SetFillColor(0);
   medianmeevstimeinEELR9_canvas->SetBorderMode(0);
   medianmeevstimeinEELR9_canvas->SetBorderSize(2);
   medianmeevstimeinEELR9_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "",0,0,0.85,0.95);
   pad0->Draw();
   pad0->cd();
   pad0->Range(1.650968e+09,87.70769,1.691101e+09,92.32308);
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
   multigraph->SetName("medianmeevstimeinEELR9");
   multigraph->SetTitle("");
   
   Double_t medianmeevstimeinEELR9_fx3001[38] = {
   1.657773e+09,
   1.658377e+09,
   1.658982e+09,
   1.659587e+09,
   1.660163e+09,
   1.660739e+09,
   1.661343e+09,
   1.664367e+09,
   1.664929e+09,
   1.665416e+09,
   1.665942e+09,
   1.666385e+09,
   1.666704e+09,
   1.666984e+09,
   1.667242e+09,
   1.667526e+09,
   1.66796e+09,
   1.668418e+09,
   1.668876e+09,
   1.669389e+09,
   1.669903e+09,
   1.682603e+09,
   1.683208e+09,
   1.683713e+09,
   1.684107e+09,
   1.684541e+09,
   1.684883e+09,
   1.685285e+09,
   1.685784e+09,
   1.686098e+09,
   1.686349e+09,
   1.686785e+09,
   1.687995e+09,
   1.68846e+09,
   1.688741e+09,
   1.688978e+09,
   1.689288e+09,
   1.689514e+09};
   Double_t medianmeevstimeinEELR9_fy3001[38] = {
   89.475,
   89.36071,
   89.13158,
   89.28696,
   89.19884,
   89.14265,
   89.21,
   89.06905,
   89.15658,
   89.165,
   89.15761,
   89.33125,
   89.22042,
   89.16761,
   89.04941,
   89.2253,
   89.12059,
   89.07528,
   89.145,
   89.50316,
   89.36,
   89.39,
   89.71087,
   89.48,
   89.63871,
   89.44205,
   89.59562,
   89.55385,
   89.43333,
   89.6954,
   89.70899,
   89.7175,
   88.7125,
   89.41942,
   89.5493,
   89.60964,
   89.57895,
   89.66304};
   Double_t medianmeevstimeinEELR9_felx3001[38] = {
   302400.5,
   302400.5,
   302400.5,
   302400.5,
   274001.5,
   301391,
   302400.5,
   302400.5,
   259913.5,
   227447.5,
   297817.5,
   145949.5,
   172901,
   107071.5,
   151294.5,
   131905,
   302400.5,
   155666,
   302400.5,
   210822,
   302400.5,
   302400.5,
   302400.5,
   202435,
   191752,
   241937.5,
   99912.5,
   302400.5,
   196747,
   116629,
   134430,
   302400.5,
   302400.5,
   162363,
   118453,
   118570.5,
   191697.5,
   34349.5};
   Double_t medianmeevstimeinEELR9_fely3001[38] = {
   0.525,
   0.3882143,
   0.2431174,
   0.1339262,
   0.108249,
   0.149876,
   0.1369231,
   0.2169643,
   0.1494361,
   0.1119388,
   0.08993193,
   0.1079942,
   0.1447975,
   0.1139214,
   0.1111139,
   0.1306345,
   0.2305882,
   0.1183042,
   0.1676027,
   0.1084912,
   0.46,
   0.3275,
   0.1382889,
   0.1034694,
   0.1187097,
   0.1057955,
   0.1542187,
   0.3230769,
   0.104386,
   0.1266523,
   0.107826,
   0.147161,
   0.6075,
   0.1168534,
   0.1351781,
   0.1371111,
   0.09609023,
   0.2130435};
   Double_t medianmeevstimeinEELR9_fehx3001[38] = {
   302400.5,
   302400.5,
   302400.5,
   302400.5,
   274001.5,
   301391,
   302400.5,
   302400.5,
   259913.5,
   227447.5,
   297817.5,
   145949.5,
   172901,
   107071.5,
   151294.5,
   131905,
   302400.5,
   155666,
   302400.5,
   210822,
   302400.5,
   302400.5,
   302400.5,
   202435,
   191752,
   241937.5,
   99912.5,
   302400.5,
   196747,
   116629,
   134430,
   302400.5,
   302400.5,
   162363,
   118453,
   118570.5,
   191697.5,
   34349.5};
   Double_t medianmeevstimeinEELR9_fehy3001[38] = {
   0.775,
   0.2366541,
   0.2373866,
   0.143599,
   0.131751,
   0.1222178,
   0.1186765,
   0.2328042,
   0.1027234,
   0.1054225,
   0.124319,
   0.106681,
   0.1289961,
   0.1144456,
   0.1103584,
   0.08930554,
   0.2950368,
   0.1013425,
   0.1172449,
   0.1080921,
   0.6025,
   0.2957143,
   0.158622,
   0.12,
   0.08986175,
   0.08522727,
   0.1444849,
   0.2747253,
   0.09929825,
   0.1300522,
   0.1114932,
   0.1685294,
   0.5175,
   0.09004198,
   0.1139954,
   0.1008376,
   0.1258145,
   0.2112808};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(38,medianmeevstimeinEELR9_fx3001,medianmeevstimeinEELR9_fy3001,medianmeevstimeinEELR9_felx3001,medianmeevstimeinEELR9_fehx3001,medianmeevstimeinEELR9_fely3001,medianmeevstimeinEELR9_fehy3001);
   grae->SetName("medianmeevstimeinEELR9");
   grae->SetTitle("EELR9");
   grae->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#238b45");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#238b45");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_medianmeevstimeinEELR93001 = new TH1F("Graph_medianmeevstimeinEELR93001","EELR9",100,1.654262e+09,1.692756e+09);
   Graph_medianmeevstimeinEELR93001->SetMinimum(87.8905);
   Graph_medianmeevstimeinEELR93001->SetMaximum(90.4645);
   Graph_medianmeevstimeinEELR93001->SetDirectory(0);
   Graph_medianmeevstimeinEELR93001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_medianmeevstimeinEELR93001->SetLineColor(ci);
   Graph_medianmeevstimeinEELR93001->GetXaxis()->SetTitle("Time");
   Graph_medianmeevstimeinEELR93001->GetXaxis()->SetTimeDisplay(1);
   Graph_medianmeevstimeinEELR93001->GetXaxis()->SetTimeFormat("#splitline{%d-%b}{%H:%M}%F1970-01-01 00:00:00s0");
   Graph_medianmeevstimeinEELR93001->GetXaxis()->SetLabelFont(42);
   Graph_medianmeevstimeinEELR93001->GetXaxis()->SetLabelSize(0.035);
   Graph_medianmeevstimeinEELR93001->GetXaxis()->SetTitleSize(0.035);
   Graph_medianmeevstimeinEELR93001->GetXaxis()->SetTitleFont(42);
   Graph_medianmeevstimeinEELR93001->GetYaxis()->SetTitle("median m_{ee}[GeV]");
   Graph_medianmeevstimeinEELR93001->GetYaxis()->SetLabelFont(42);
   Graph_medianmeevstimeinEELR93001->GetYaxis()->SetLabelSize(0.035);
   Graph_medianmeevstimeinEELR93001->GetYaxis()->SetTitleSize(0.035);
   Graph_medianmeevstimeinEELR93001->GetYaxis()->SetTitleOffset(0);
   Graph_medianmeevstimeinEELR93001->GetYaxis()->SetTitleFont(42);
   Graph_medianmeevstimeinEELR93001->GetZaxis()->SetLabelFont(42);
   Graph_medianmeevstimeinEELR93001->GetZaxis()->SetLabelSize(0.035);
   Graph_medianmeevstimeinEELR93001->GetZaxis()->SetTitleSize(0.035);
   Graph_medianmeevstimeinEELR93001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_medianmeevstimeinEELR93001);
   
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
   
   TH1F *medianmeevstimeinEELR9_copy__1 = new TH1F("medianmeevstimeinEELR9_copy__1","",100,1.656186e+09,1.691101e+09);
   medianmeevstimeinEELR9_copy__1->SetMinimum(88.4);
   medianmeevstimeinEELR9_copy__1->SetMaximum(92.3);
   medianmeevstimeinEELR9_copy__1->SetDirectory(0);
   medianmeevstimeinEELR9_copy__1->SetStats(0);

   ci = TColor::GetColor("#000099");
   medianmeevstimeinEELR9_copy__1->SetLineColor(ci);
   medianmeevstimeinEELR9_copy__1->GetXaxis()->SetTitle("Time (day-month)");
   medianmeevstimeinEELR9_copy__1->GetXaxis()->SetTimeDisplay(1);
   medianmeevstimeinEELR9_copy__1->GetXaxis()->SetTimeFormat("%d-%b%F1970-01-01 00:00:00s0");
   medianmeevstimeinEELR9_copy__1->GetXaxis()->SetRange(1,100);
   medianmeevstimeinEELR9_copy__1->GetXaxis()->CenterTitle(true);
   medianmeevstimeinEELR9_copy__1->GetXaxis()->SetNdivisions(8);
   medianmeevstimeinEELR9_copy__1->GetXaxis()->SetLabelFont(42);
   medianmeevstimeinEELR9_copy__1->GetXaxis()->SetLabelSize(0.05);
   medianmeevstimeinEELR9_copy__1->GetXaxis()->SetTitleSize(0.06);
   medianmeevstimeinEELR9_copy__1->GetXaxis()->SetTitleOffset(1.2);
   medianmeevstimeinEELR9_copy__1->GetXaxis()->SetTitleFont(42);
   medianmeevstimeinEELR9_copy__1->GetYaxis()->SetTitle("median m_{ee} (GeV)");
   medianmeevstimeinEELR9_copy__1->GetYaxis()->CenterTitle(true);
   medianmeevstimeinEELR9_copy__1->GetYaxis()->SetLabelFont(42);
   medianmeevstimeinEELR9_copy__1->GetYaxis()->SetLabelSize(0.05);
   medianmeevstimeinEELR9_copy__1->GetYaxis()->SetTitleSize(0.06);
   medianmeevstimeinEELR9_copy__1->GetYaxis()->SetTitleOffset(1.1);
   medianmeevstimeinEELR9_copy__1->GetYaxis()->SetTitleFont(42);
   medianmeevstimeinEELR9_copy__1->GetZaxis()->SetLabelFont(42);
   medianmeevstimeinEELR9_copy__1->GetZaxis()->SetLabelSize(0.035);
   medianmeevstimeinEELR9_copy__1->GetZaxis()->SetTitleSize(0.035);
   medianmeevstimeinEELR9_copy__1->GetZaxis()->SetTitleFont(42);
   medianmeevstimeinEELR9_copy__1->Draw("sameaxis");
   
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
   medianmeevstimeinEELR9_canvas->cd();
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
   pad1->Range(1e-08,87.70769,22.49263,92.32308);
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
   __2->SetBinContent(7,0.146682);
   __2->SetBinContent(13,3.760624);
   __2->SetBinContent(14,4.759255);
   __2->SetBinContent(15,6.341045);
   __2->SetBinContent(16,17.80667);
   __2->SetBinContent(17,9.259453);
   __2->SetBinContent(18,2.397819);
   __2->SetBinContent(19,4.002634);
   __2->SetBinContent(20,1.144479);
   __2->SetBinContent(21,13.94594);
   __2->SetBinContent(22,3.827324);
   __2->SetBinContent(23,6.924823);
   __2->SetBinContent(24,6.403467);
   __2->SetBinContent(25,7.658198);
   __2->SetBinContent(26,3.824126);
   __2->SetBinContent(27,7.79746);
   __2->SetBinError(7,0.146682);
   __2->SetBinError(13,3.760624);
   __2->SetBinError(14,3.953157);
   __2->SetBinError(15,3.597589);
   __2->SetBinError(16,8.016945);
   __2->SetBinError(17,5.456447);
   __2->SetBinError(18,2.397819);
   __2->SetBinError(19,4.002634);
   __2->SetBinError(20,0.7115819);
   __2->SetBinError(21,8.072004);
   __2->SetBinError(22,3.715715);
   __2->SetBinError(23,4.941472);
   __2->SetBinError(24,4.370628);
   __2->SetBinError(25,5.460002);
   __2->SetBinError(26,2.981202);
   __2->SetBinError(27,4.752939);
   __2->SetMinimum(1e-08);
   __2->SetMaximum(21.368);
   __2->SetEntries(38);
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
   medianmeevstimeinEELR9_canvas->cd();
  
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
   text = new TText(0.45,0.84,"89.4 GeV");
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
   medianmeevstimeinEELR9_canvas->cd();
   medianmeevstimeinEELR9_canvas->Modified();
   medianmeevstimeinEELR9_canvas->cd();
   medianmeevstimeinEELR9_canvas->SetSelected(medianmeevstimeinEELR9_canvas);
}
