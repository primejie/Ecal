void medianmeevstimeinEE()
{
//=========Macro generated from canvas: medianmeevstimeinEE_canvas/
//=========  (Thu Mar  7 10:34:01 2024) by ROOT version6.10/09
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
   pad0->Range(1.680893e+09,87.70769,1.689893e+09,92.32308);
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
   
   Double_t medianmeevstimeinEE_fx3001[52] = {
   1.682419e+09,
   1.6829e+09,
   1.683241e+09,
   1.68345e+09,
   1.683555e+09,
   1.683654e+09,
   1.683733e+09,
   1.683839e+09,
   1.683985e+09,
   1.684082e+09,
   1.684134e+09,
   1.684233e+09,
   1.684338e+09,
   1.684413e+09,
   1.684546e+09,
   1.684723e+09,
   1.68482e+09,
   1.684877e+09,
   1.684941e+09,
   1.68527e+09,
   1.68565e+09,
   1.685763e+09,
   1.685846e+09,
   1.685935e+09,
   1.686003e+09,
   1.686052e+09,
   1.686098e+09,
   1.686169e+09,
   1.686271e+09,
   1.686358e+09,
   1.68642e+09,
   1.686474e+09,
   1.68652e+09,
   1.686594e+09,
   1.686947e+09,
   1.688153e+09,
   1.688482e+09,
   1.68854e+09,
   1.688595e+09,
   1.688679e+09,
   1.688756e+09,
   1.688798e+09,
   1.688845e+09,
   1.688891e+09,
   1.688955e+09,
   1.689038e+09,
   1.689134e+09,
   1.689202e+09,
   1.689314e+09,
   1.689443e+09,
   1.689502e+09,
   1.689537e+09};
   Double_t medianmeevstimeinEE_fy3001[52] = {
   87.10417,
   89.62765,
   90.059,
   90.27011,
   89.8899,
   89.92737,
   90.011,
   89.83542,
   90.08989,
   89.92158,
   90.09286,
   89.96047,
   89.93284,
   89.99593,
   89.96125,
   89.75098,
   90.00064,
   90.14535,
   90.38224,
   90.1519,
   89.5699,
   89.84943,
   89.89222,
   90.04653,
   90.09286,
   89.92452,
   90.02178,
   90.05991,
   90.02806,
   89.89483,
   90.00638,
   90.17584,
   90.26931,
   90.17135,
   90.36,
   89.29815,
   89.80818,
   90.0835,
   90.21011,
   89.99728,
   90.00526,
   90.1875,
   89.9586,
   90.13085,
   90.20632,
   90.0133,
   90.20341,
   89.95682,
   90.01875,
   90.12767,
   90.22336,
   89.98793};
   Double_t medianmeevstimeinEE_felx3001[52] = {
   302400.5,
   178057.5,
   163186,
   46216,
   58124.5,
   41656.5,
   36743.5,
   69066,
   77384,
   19684.5,
   32020,
   66915,
   38321.5,
   36582.5,
   96750,
   79785,
   17793,
   38497.5,
   26199.5,
   302400.5,
   77369,
   35621,
   47703.5,
   40824,
   27509,
   21229,
   24628,
   46452.5,
   56293,
   30480.5,
   31183,
   22901.5,
   23611,
   50175.5,
   302400.5,
   299157,
   29685.5,
   28745,
   25611.5,
   58266,
   18736.5,
   23590,
   23149.5,
   23519.5,
   39918.5,
   43696,
   51527,
   17206.5,
   93917,
   35465.5,
   23450.5,
   11578.5};
   Double_t medianmeevstimeinEE_fely3001[52] = {
   0.2450758,
   0.1115359,
   0.09637374,
   0.1054808,
   0.1056133,
   0.103126,
   0.07802128,
   0.09916667,
   0.09378251,
   0.1366831,
   0.08958611,
   0.1263742,
   0.1019608,
   0.1169447,
   0.1107995,
   0.1105958,
   0.105641,
   0.1164829,
   0.1088724,
   0.1134372,
   0.1052912,
   0.09448023,
   0.09335859,
   0.102498,
   0.1486043,
   0.1013049,
   0.1138276,
   0.1109583,
   0.1263946,
   0.1366084,
   0.09574468,
   0.1166036,
   0.1036504,
   0.1008413,
   0.46,
   0.1073587,
   0.0999344,
   0.09926087,
   0.1079146,
   0.1203163,
   0.09055728,
   0.1016026,
   0.1178805,
   0.1075952,
   0.1183848,
   0.1250903,
   0.1253269,
   0.132087,
   0.1314167,
   0.1204331,
   0.09104125,
   0.1934866};
   Double_t medianmeevstimeinEE_fehx3001[52] = {
   302400.5,
   178057.5,
   163186,
   46216,
   58124.5,
   41656.5,
   36743.5,
   69066,
   77384,
   19684.5,
   32020,
   66915,
   38321.5,
   36582.5,
   96750,
   79785,
   17793,
   38497.5,
   26199.5,
   302400.5,
   77369,
   35621,
   47703.5,
   40824,
   27509,
   21229,
   24628,
   46452.5,
   56293,
   30480.5,
   31183,
   22901.5,
   23611,
   50175.5,
   302400.5,
   299157,
   29685.5,
   28745,
   25611.5,
   58266,
   18736.5,
   23590,
   23149.5,
   23519.5,
   39918.5,
   43696,
   51527,
   17206.5,
   93917,
   35465.5,
   23450.5,
   11578.5};
   Double_t medianmeevstimeinEE_fehy3001[52] = {
   0.2569444,
   0.1007183,
   0.1040952,
   0.09342672,
   0.08787879,
   0.0986056,
   0.09222581,
   0.09963488,
   0.06911539,
   0.09717105,
   0.07961477,
   0.111274,
   0.09322069,
   0.1046871,
   0.112244,
   0.09254902,
   0.1292609,
   0.1153253,
   0.1172368,
   0.1011877,
   0.08478954,
   0.1246488,
   0.1119444,
   0.1025038,
   0.1217446,
   0.09197013,
   0.1029237,
   0.09937269,
   0.1035425,
   0.08798491,
   0.1191489,
   0.1151212,
   0.1044795,
   0.09114583,
   0.54,
   0.08215488,
   0.07854385,
   0.1472229,
   0.09105043,
   0.1235507,
   0.121541,
   0.1136494,
   0.09702285,
   0.136796,
   0.09906055,
   0.1093337,
   0.1087121,
   0.1226999,
   0.102278,
   0.09941343,
   0.08763551,
   0.1959975};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(52,medianmeevstimeinEE_fx3001,medianmeevstimeinEE_fy3001,medianmeevstimeinEE_felx3001,medianmeevstimeinEE_fehx3001,medianmeevstimeinEE_fely3001,medianmeevstimeinEE_fehy3001);
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
   
   TH1F *Graph_medianmeevstimeinEE3001 = new TH1F("Graph_medianmeevstimeinEE3001","EE",100,1.681374e+09,1.690292e+09);
   Graph_medianmeevstimeinEE3001->SetMinimum(86.455);
   Graph_medianmeevstimeinEE3001->SetMaximum(91.30409);
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
   
   TH1F *medianmeevstimeinEE_copy__1 = new TH1F("medianmeevstimeinEE_copy__1","",100,1.682063e+09,1.689893e+09);
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
   pad1->Range(1e-08,87.70769,22.12954,92.32308);
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
   __2->SetBinContent(0,0.3498705);
   __2->SetBinContent(18,2.497907);
   __2->SetBinContent(24,2.467814);
   __2->SetBinContent(25,1.961207);
   __2->SetBinContent(28,2.152467);
   __2->SetBinContent(29,6.907432);
   __2->SetBinContent(30,6.31489);
   __2->SetBinContent(31,8.507995);
   __2->SetBinContent(32,10.48661);
   __2->SetBinContent(33,17.51922);
   __2->SetBinContent(34,13.40759);
   __2->SetBinContent(35,4.977081);
   __2->SetBinContent(36,7.865665);
   __2->SetBinContent(37,8.499372);
   __2->SetBinContent(38,4.270083);
   __2->SetBinContent(40,1.814791);
   __2->SetBinError(0,0.3498705);
   __2->SetBinError(18,2.497907);
   __2->SetBinError(24,2.467814);
   __2->SetBinError(25,1.961207);
   __2->SetBinError(28,2.152467);
   __2->SetBinError(29,4.043546);
   __2->SetBinError(30,3.665905);
   __2->SetBinError(31,4.290712);
   __2->SetBinError(32,4.11391);
   __2->SetBinError(33,5.980304);
   __2->SetBinError(34,5.802255);
   __2->SetBinError(35,2.883848);
   __2->SetBinError(36,3.970382);
   __2->SetBinError(37,4.335582);
   __2->SetBinError(38,3.022755);
   __2->SetBinError(40,1.728374);
   __2->SetMinimum(1e-08);
   __2->SetMaximum(21.02306);
   __2->SetEntries(52);
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
   text = new TText(0.45,0.69,"0.3 GeV");
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
