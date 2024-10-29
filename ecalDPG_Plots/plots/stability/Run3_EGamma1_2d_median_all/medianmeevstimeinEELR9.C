void medianmeevstimeinEELR9()
{
//=========Macro generated from canvas: medianmeevstimeinEELR9_canvas/
//=========  (Thu Mar  7 12:24:39 2024) by ROOT version6.10/09
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
   pad0->Range(1.681559e+09,87.70769,1.68969e+09,92.32308);
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
   
   Double_t medianmeevstimeinEELR9_fx3001[10] = {
   1.682937e+09,
   1.683542e+09,
   1.684147e+09,
   1.684752e+09,
   1.685356e+09,
   1.685961e+09,
   1.686566e+09,
   1.68838e+09,
   1.688935e+09,
   1.689368e+09};
   Double_t medianmeevstimeinEELR9_fy3001[10] = {
   89.56154,
   89.6125,
   89.62237,
   89.52712,
   89.13333,
   89.60353,
   89.68657,
   89.47373,
   89.58176,
   89.76228};
   Double_t medianmeevstimeinEELR9_felx3001[10] = {
   302400.5,
   302400.5,
   302400.5,
   302400.5,
   302400.5,
   302400.5,
   302400.5,
   302400.5,
   252550.5,
   180228.5};
   Double_t medianmeevstimeinEELR9_fely3001[10] = {
   0.3901099,
   0.1167373,
   0.1637477,
   0.1544996,
   0.4533333,
   0.09686275,
   0.1404997,
   0.1256156,
   0.1220793,
   0.1679259};
   Double_t medianmeevstimeinEELR9_fehx3001[10] = {
   302400.5,
   302400.5,
   302400.5,
   302400.5,
   302400.5,
   302400.5,
   302400.5,
   302400.5,
   252550.5,
   180228.5};
   Double_t medianmeevstimeinEELR9_fehy3001[10] = {
   0.2684615,
   0.1186321,
   0.1196606,
   0.1489377,
   0.4266667,
   0.1114131,
   0.09676617,
   0.1450212,
   0.1150787,
   0.164315};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,medianmeevstimeinEELR9_fx3001,medianmeevstimeinEELR9_fy3001,medianmeevstimeinEELR9_felx3001,medianmeevstimeinEELR9_fehx3001,medianmeevstimeinEELR9_fely3001,medianmeevstimeinEELR9_fehy3001);
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
   
   TH1F *Graph_medianmeevstimeinEELR93001 = new TH1F("Graph_medianmeevstimeinEELR93001","EELR9",100,1.681943e+09,1.69024e+09);
   Graph_medianmeevstimeinEELR93001->SetMinimum(88.55534);
   Graph_medianmeevstimeinEELR93001->SetMaximum(90.05126);
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
   
   TH1F *medianmeevstimeinEELR9_copy__1 = new TH1F("medianmeevstimeinEELR9_copy__1","",100,1.682616e+09,1.68969e+09);
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
   pad1->Range(1e-08,87.70769,53.48043,92.32308);
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
   __2->SetBinContent(15,1.013826);
   __2->SetBinContent(22,10.76453);
   __2->SetBinContent(23,8.521931);
   __2->SetBinContent(24,15.83072);
   __2->SetBinContent(25,42.33867);
   __2->SetBinContent(26,14.42351);
   __2->SetBinContent(28,7.106816);
   __2->SetBinError(15,1.013826);
   __2->SetBinError(22,10.76453);
   __2->SetBinError(23,8.521931);
   __2->SetBinError(24,14.08334);
   __2->SetBinError(25,25.11656);
   __2->SetBinError(26,14.42351);
   __2->SetBinError(28,7.106816);
   __2->SetMinimum(1e-08);
   __2->SetMaximum(50.80641);
   __2->SetEntries(10);
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
   text = new TText(0.45,0.84,"89.6 GeV");
   text->SetNDC();
   text->SetTextAlign(22);

   ci = TColor::GetColor("#238b45");
   text->SetTextColor(ci);
   text->SetTextSize(0.18);
   text->Draw();
   text = new TText(0.45,0.69,"0.1 GeV");
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
