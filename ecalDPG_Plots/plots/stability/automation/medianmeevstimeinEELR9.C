void medianmeevstimeinEELR9()
{
//=========Macro generated from canvas: medianmeevstimeinEELR9_canvas/
//=========  (Fri Mar  8 15:38:18 2024) by ROOT version6.10/09
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
   pad0->Range(1.650976e+09,87.70769,1.690977e+09,92.32308);
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
   
   Double_t medianmeevstimeinEELR9_fx3001[41] = {
   1.657758e+09,
   1.658363e+09,
   1.658968e+09,
   1.659573e+09,
   1.660118e+09,
   1.660644e+09,
   1.661085e+09,
   1.661547e+09,
   1.664571e+09,
   1.665132e+09,
   1.665615e+09,
   1.666063e+09,
   1.666415e+09,
   1.666692e+09,
   1.666941e+09,
   1.667176e+09,
   1.667411e+09,
   1.667814e+09,
   1.668318e+09,
   1.668783e+09,
   1.669263e+09,
   1.669781e+09,
   1.682482e+09,
   1.683087e+09,
   1.683548e+09,
   1.683897e+09,
   1.684231e+09,
   1.684593e+09,
   1.684896e+09,
   1.685285e+09,
   1.685759e+09,
   1.686022e+09,
   1.686251e+09,
   1.686468e+09,
   1.686849e+09,
   1.688059e+09,
   1.68849e+09,
   1.688721e+09,
   1.688914e+09,
   1.689123e+09,
   1.689395e+09};
   Double_t medianmeevstimeinEELR9_fy3001[41] = {
   89.375,
   89.43,
   89.03261,
   89.22846,
   89.15345,
   89.14155,
   88.9955,
   89.22778,
   89.13239,
   89.08916,
   89.05455,
   89.10303,
   89.3027,
   89.08481,
   89.14744,
   88.92903,
   89.08315,
   89.2339,
   88.92824,
   89.16226,
   89.22344,
   89.32333,
   89.225,
   89.5561,
   89.50233,
   89.49512,
   89.55217,
   89.34111,
   89.51159,
   89.46923,
   89.34556,
   89.63101,
   89.63038,
   89.55647,
   89.79079,
   88.89545,
   89.37927,
   89.59375,
   89.54062,
   89.53883,
   89.52284};
   Double_t medianmeevstimeinEELR9_felx3001[41] = {
   302400.5,
   302400.5,
   302400.5,
   302400.5,
   243265.5,
   282050,
   159645,
   302400.5,
   302400.5,
   258522.5,
   224484,
   223107.5,
   128464.5,
   149397,
   99271.5,
   135490,
   99990,
   302400.5,
   201879.5,
   263282.5,
   216327,
   302400.5,
   302400.5,
   302400.5,
   158489.5,
   190053.5,
   144543.5,
   217470,
   85771.5,
   302400.5,
   172121,
   91219.5,
   137604.5,
   79082,
   302400.5,
   302400.5,
   128363,
   103072,
   90045.5,
   118780.5,
   153239};
   Double_t medianmeevstimeinEELR9_fely3001[41] = {
   0.645,
   0.4133333,
   0.222192,
   0.1277766,
   0.1548634,
   0.1115493,
   0.09196465,
   0.4577778,
   0.1293641,
   0.1239392,
   0.1045455,
   0.1059429,
   0.1221471,
   0.1248101,
   0.1652441,
   0.1059553,
   0.1244305,
   0.1635279,
   0.1035162,
   0.1469864,
   0.1116728,
   0.2233333,
   0.65,
   0.21127,
   0.1278811,
   0.1230066,
   0.1295072,
   0.1411111,
   0.1192133,
   0.3158974,
   0.146732,
   0.1022248,
   0.1162621,
   0.1115268,
   0.1811741,
   0.3561688,
   0.1214905,
   0.1349265,
   0.1420536,
   0.1302328,
   0.1093101};
   Double_t medianmeevstimeinEELR9_fehx3001[41] = {
   302400.5,
   302400.5,
   302400.5,
   302400.5,
   243265.5,
   282050,
   159645,
   302400.5,
   302400.5,
   258522.5,
   224484,
   223107.5,
   128464.5,
   149397,
   99271.5,
   135490,
   99990,
   302400.5,
   201879.5,
   263282.5,
   216327,
   302400.5,
   302400.5,
   302400.5,
   158489.5,
   190053.5,
   144543.5,
   217470,
   85771.5,
   302400.5,
   172121,
   91219.5,
   137604.5,
   79082,
   302400.5,
   302400.5,
   128363,
   103072,
   90045.5,
   118780.5,
   153239};
   Double_t medianmeevstimeinEELR9_fehy3001[41] = {
   0.7416667,
   0.2977778,
   0.1898913,
   0.1369231,
   0.1459188,
   0.1009741,
   0.1288056,
   0.3284722,
   0.1252527,
   0.1118638,
   0.1096336,
   0.09835859,
   0.1433499,
   0.119086,
   0.1282398,
   0.07896774,
   0.1087144,
   0.1108778,
   0.116343,
   0.1525507,
   0.1170688,
   0.2068992,
   0.535,
   0.2007206,
   0.1118049,
   0.1092259,
   0.09582609,
   0.1383409,
   0.1171558,
   0.2762238,
   0.09464052,
   0.1406741,
   0.1201821,
   0.1259618,
   0.2192105,
   0.2670455,
   0.1141897,
   0.133277,
   0.1179957,
   0.111165,
   0.1190723};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(41,medianmeevstimeinEELR9_fx3001,medianmeevstimeinEELR9_fy3001,medianmeevstimeinEELR9_felx3001,medianmeevstimeinEELR9_fehx3001,medianmeevstimeinEELR9_fely3001,medianmeevstimeinEELR9_fehy3001);
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
   
   TH1F *Graph_medianmeevstimeinEELR93001 = new TH1F("Graph_medianmeevstimeinEELR93001","EELR9",100,1.654247e+09,1.692758e+09);
   Graph_medianmeevstimeinEELR93001->SetMinimum(88.38155);
   Graph_medianmeevstimeinEELR93001->SetMaximum(90.2744);
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
   
   TH1F *medianmeevstimeinEELR9_copy__1 = new TH1F("medianmeevstimeinEELR9_copy__1","",100,1.656176e+09,1.690977e+09);
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
   pad1->Range(1e-08,87.70769,18.92211,92.32308);
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
   __2->SetBinContent(10,0.4537444);
   __2->SetBinContent(11,8.741451);
   __2->SetBinContent(12,3.643316);
   __2->SetBinContent(13,1.022866);
   __2->SetBinContent(14,12.97214);
   __2->SetBinContent(15,12.67324);
   __2->SetBinContent(16,3.834511);
   __2->SetBinContent(17,8.559211);
   __2->SetBinContent(19,8.717262);
   __2->SetBinContent(20,3.201096);
   __2->SetBinContent(21,0.3506385);
   __2->SetBinContent(22,3.70676);
   __2->SetBinContent(23,14.98);
   __2->SetBinContent(24,9.967295);
   __2->SetBinContent(25,6.089803);
   __2->SetBinContent(28,1.086663);
   __2->SetBinError(10,0.4537444);
   __2->SetBinError(11,6.280607);
   __2->SetBinError(12,3.643316);
   __2->SetBinError(13,1.022866);
   __2->SetBinError(14,6.517424);
   __2->SetBinError(15,6.5632);
   __2->SetBinError(16,2.711429);
   __2->SetBinError(17,4.769228);
   __2->SetBinError(19,4.636056);
   __2->SetBinError(20,3.112188);
   __2->SetBinError(21,0.3506385);
   __2->SetBinError(22,3.250024);
   __2->SetBinError(23,6.720815);
   __2->SetBinError(24,5.322273);
   __2->SetBinError(25,4.306586);
   __2->SetBinError(28,1.086663);
   __2->SetMinimum(1e-08);
   __2->SetMaximum(17.976);
   __2->SetEntries(41);
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
   text = new TText(0.45,0.84,"89.3 GeV");
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
