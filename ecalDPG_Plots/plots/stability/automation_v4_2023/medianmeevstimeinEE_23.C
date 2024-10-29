#ifdef __CLING__
#pragma cling optimize(0)
#endif
void medianmeevstimeinEE_23()
{
//=========Macro generated from canvas: medianmeevstimeinEE_canvas/
//=========  (Fri Mar 15 11:16:22 2024) by ROOT version 6.26/10
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
   pad0->Range(1.681255e+09,87.70769,1.689816e+09,92.32308);
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
   
   Double_t medianmeevstimeinEE_fx3001[120] = {
   1.682769e+09,
   1.683103e+09,
   1.683342e+09,
   1.683401e+09,
   1.683442e+09,
   1.683482e+09,
   1.683545e+09,
   1.683598e+09,
   1.683629e+09,
   1.683661e+09,
   1.683687e+09,
   1.683726e+09,
   1.683759e+09,
   1.683791e+09,
   1.683822e+09,
   1.683875e+09,
   1.683927e+09,
   1.684e+09,
   1.684073e+09,
   1.684089e+09,
   1.684119e+09,
   1.684148e+09,
   1.684173e+09,
   1.684197e+09,
   1.684252e+09,
   1.684307e+09,
   1.684341e+09,
   1.684395e+09,
   1.684428e+09,
   1.684443e+09,
   1.684487e+09,
   1.684541e+09,
   1.684606e+09,
   1.684716e+09,
   1.684793e+09,
   1.684812e+09,
   1.684827e+09,
   1.684863e+09,
   1.684898e+09,
   1.684912e+09,
   1.684928e+09,
   1.684951e+09,
   1.684972e+09,
   1.685228e+09,
   1.685558e+09,
   1.68566e+09,
   1.68571e+09,
   1.685752e+09,
   1.685784e+09,
   1.685825e+09,
   1.685862e+09,
   1.685898e+09,
   1.685932e+09,
   1.68596e+09,
   1.685986e+09,
   1.686011e+09,
   1.686035e+09,
   1.686051e+09,
   1.686077e+09,
   1.6861e+09,
   1.686114e+09,
   1.686157e+09,
   1.686199e+09,
   1.686234e+09,
   1.686268e+09,
   1.686301e+09,
   1.686335e+09,
   1.686354e+09,
   1.68638e+09,
   1.686402e+09,
   1.68643e+09,
   1.686457e+09,
   1.686477e+09,
   1.686496e+09,
   1.686516e+09,
   1.686536e+09,
   1.686551e+09,
   1.686598e+09,
   1.686939e+09,
   1.688087e+09,
   1.688383e+09,
   1.688451e+09,
   1.68848e+09,
   1.688505e+09,
   1.688523e+09,
   1.688549e+09,
   1.688573e+09,
   1.688596e+09,
   1.688617e+09,
   1.688631e+09,
   1.688686e+09,
   1.688741e+09,
   1.688754e+09,
   1.688776e+09,
   1.688797e+09,
   1.688811e+09,
   1.688827e+09,
   1.688848e+09,
   1.688866e+09,
   1.688883e+09,
   1.688902e+09,
   1.688925e+09,
   1.688946e+09,
   1.688978e+09,
   1.689035e+09,
   1.689075e+09,
   1.689089e+09,
   1.689131e+09,
   1.689179e+09,
   1.689197e+09,
   1.689211e+09,
   1.689229e+09,
   1.68932e+09,
   1.689425e+09,
   1.689455e+09,
   1.689469e+09,
   1.689489e+09,
   1.689509e+09,
   1.689523e+09,
   1.68954e+09};
   Double_t medianmeevstimeinEE_fy3001[120] = {
   89.07619,
   89.82108,
   89.85316,
   90.02021,
   90.17074,
   90.00269,
   89.70816,
   89.73385,
   89.76141,
   89.82835,
   89.83843,
   90.03646,
   89.93876,
   89.68934,
   89.82427,
   89.76276,
   89.8776,
   89.98485,
   89.69709,
   89.87434,
   90.09318,
   89.93602,
   89.92933,
   89.86768,
   89.744,
   89.79435,
   89.70391,
   89.65977,
   89.80519,
   89.99856,
   89.90388,
   89.77722,
   89.64195,
   89.59268,
   89.70855,
   89.90989,
   90.05459,
   89.81632,
   90.06522,
   90.27099,
   90.20071,
   90.15595,
   90.46327,
   89.94632,
   89.26022,
   89.50408,
   89.79157,
   89.65465,
   89.7285,
   89.52121,
   89.92368,
   89.92289,
   89.8587,
   89.85612,
   90.01354,
   90.09238,
   89.93585,
   89.79607,
   89.63424,
   89.82911,
   90.16022,
   89.78441,
   89.96034,
   89.87959,
   89.84655,
   89.86413,
   89.85529,
   89.83606,
   89.53789,
   89.90747,
   89.98706,
   89.94798,
   90.07857,
   90.08626,
   90.10592,
   90.14,
   90.22706,
   89.95,
   90.22308,
   88.83248,
   89.29231,
   89.52258,
   89.75817,
   89.80671,
   89.975,
   89.94261,
   90.2104,
   89.98349,
   89.92473,
   89.91039,
   89.82071,
   89.74176,
   89.92586,
   89.89375,
   89.96262,
   90.05976,
   89.80598,
   89.83652,
   90.0672,
   90.12947,
   89.94691,
   89.95983,
   89.9625,
   90.07316,
   89.91009,
   89.83642,
   90.19545,
   90.02403,
   89.70893,
   89.86421,
   89.94588,
   90.14714,
   89.51857,
   89.63034,
   89.89457,
   90.11582,
   89.95538,
   90.0745,
   90.1414,
   89.86111};
   Double_t medianmeevstimeinEE_felx3001[120] = {
   134488.5,
   199527.5,
   39210,
   20305.5,
   20925.5,
   18409.5,
   44634.5,
   9109,
   21834.5,
   10221.5,
   15749,
   22725,
   10063.5,
   21730,
   9528,
   43737.5,
   8121.5,
   65440,
   7185,
   8923,
   21207,
   7513.5,
   17300,
   6985.5,
   47400,
   7732,
   27109,
   26447.5,
   6808,
   8052.5,
   35486.5,
   18346,
   46812,
   63558.5,
   13051,
   6738,
   7595,
   28587,
   6490.5,
   7239,
   8930.5,
   13753,
   7347.5,
   249171.5,
   80222.5,
   22364.5,
   26908.5,
   15958,
   15546,
   25929.5,
   10629.5,
   25536.5,
   8846.5,
   18561.5,
   7265,
   17808.5,
   6845.5,
   8959,
   16469.5,
   6442,
   7607.5,
   35616.5,
   7011.5,
   27129,
   6875,
   26161.5,
   7963,
   11696,
   14330,
   7320.5,
   20666.5,
   6524,
   12888,
   6614,
   13530,
   6580.5,
   8121.5,
   38635.5,
   302400.5,
   241203.5,
   54563.5,
   12824,
   16712,
   8705.5,
   9201,
   16636,
   7541.5,
   15105,
   6253.5,
   6923,
   48573.5,
   6256,
   7262,
   14204.5,
   6560.5,
   7402,
   8947,
   11629.5,
   6969.5,
   9443,
   10334,
   12620.5,
   8405,
   23307,
   33613,
   6606.5,
   6951.5,
   35731.5,
   11849.5,
   6365,
   7511,
   10220,
   81052.5,
   23821,
   6321,
   7175.5,
   13703.5,
   6308.5,
   7594.5,
   8722};
   Double_t medianmeevstimeinEE_fely3001[120] = {
   0.1302721,
   0.1032272,
   0.128846,
   0.1074855,
   0.1022923,
   0.09546595,
   0.07732214,
   0.1278542,
   0.123913,
   0.08824063,
   0.08900732,
   0.1220005,
   0.1179775,
   0.07139554,
   0.1140678,
   0.1159369,
   0.09976912,
   0.09734848,
   0.1051575,
   0.1111477,
   0.117035,
   0.1393234,
   0.1177108,
   0.1056515,
   0.09838596,
   0.07535558,
   0.08914032,
   0.1195527,
   0.1367979,
   0.1132636,
   0.09933804,
   0.1151899,
   0.1090175,
   0.1048325,
   0.1017625,
   0.1163417,
   0.1311741,
   0.1213617,
   0.119335,
   0.1183903,
   0.1096429,
   0.1302767,
   0.09905478,
   0.1129825,
   0.1086022,
   0.1188964,
   0.110948,
   0.1146512,
   0.09769192,
   0.1033903,
   0.09820344,
   0.1150484,
   0.1086957,
   0.09231293,
   0.08977929,
   0.08632035,
   0.1125932,
   0.09656247,
   0.1166201,
   0.1022847,
   0.1114346,
   0.1085262,
   0.1154995,
   0.1120705,
   0.1102504,
   0.1068134,
   0.1184829,
   0.1273368,
   0.1045614,
   0.130505,
   0.1265325,
   0.1311431,
   0.1229111,
   0.09662959,
   0.1153805,
   0.1134043,
   0.1270588,
   0.106,
   0.1113886,
   0.1059726,
   0.1030604,
   0.110654,
   0.1166238,
   0.1299032,
   0.1064103,
   0.1200862,
   0.104315,
   0.09093305,
   0.120748,
   0.1191808,
   0.08843434,
   0.1039534,
   0.1002668,
   0.09669118,
   0.1072642,
   0.106347,
   0.08231755,
   0.1020169,
   0.1082757,
   0.09226438,
   0.1004489,
   0.08982906,
   0.1057773,
   0.1062974,
   0.1015203,
   0.1191121,
   0.09798619,
   0.0862987,
   0.1339286,
   0.1263727,
   0.1003707,
   0.09714286,
   0.09302795,
   0.1261117,
   0.09886629,
   0.1104592,
   0.1053763,
   0.09308974,
   0.1056024,
   0.1508838};
   Double_t medianmeevstimeinEE_fehx3001[120] = {
   134488.5,
   199527.5,
   39210,
   20305.5,
   20925.5,
   18409.5,
   44634.5,
   9109,
   21834.5,
   10221.5,
   15749,
   22725,
   10063.5,
   21730,
   9528,
   43737.5,
   8121.5,
   65440,
   7185,
   8923,
   21207,
   7513.5,
   17300,
   6985.5,
   47400,
   7732,
   27109,
   26447.5,
   6808,
   8052.5,
   35486.5,
   18346,
   46812,
   63558.5,
   13051,
   6738,
   7595,
   28587,
   6490.5,
   7239,
   8930.5,
   13753,
   7347.5,
   249171.5,
   80222.5,
   22364.5,
   26908.5,
   15958,
   15546,
   25929.5,
   10629.5,
   25536.5,
   8846.5,
   18561.5,
   7265,
   17808.5,
   6845.5,
   8959,
   16469.5,
   6442,
   7607.5,
   35616.5,
   7011.5,
   27129,
   6875,
   26161.5,
   7963,
   11696,
   14330,
   7320.5,
   20666.5,
   6524,
   12888,
   6614,
   13530,
   6580.5,
   8121.5,
   38635.5,
   302400.5,
   241203.5,
   54563.5,
   12824,
   16712,
   8705.5,
   9201,
   16636,
   7541.5,
   15105,
   6253.5,
   6923,
   48573.5,
   6256,
   7262,
   14204.5,
   6560.5,
   7402,
   8947,
   11629.5,
   6969.5,
   9443,
   10334,
   12620.5,
   8405,
   23307,
   33613,
   6606.5,
   6951.5,
   35731.5,
   11849.5,
   6365,
   7511,
   10220,
   81052.5,
   23821,
   6321,
   7175.5,
   13703.5,
   6308.5,
   7594.5,
   8722};
   Double_t medianmeevstimeinEE_fehy3001[120] = {
   0.108867,
   0.1009157,
   0.09684211,
   0.1067103,
   0.1032749,
   0.1130776,
   0.0962485,
   0.1092309,
   0.09595538,
   0.1034677,
   0.09696733,
   0.09583333,
   0.09371018,
   0.1117196,
   0.07768894,
   0.08265774,
   0.09037336,
   0.1064137,
   0.1193963,
   0.1171579,
   0.09717963,
   0.1077285,
   0.098834,
   0.1005051,
   0.08208696,
   0.110992,
   0.07525362,
   0.1228386,
   0.09431627,
   0.1199423,
   0.09237819,
   0.09970789,
   0.1009808,
   0.1198171,
   0.1273297,
   0.1128822,
   0.09989534,
   0.08675439,
   0.1167826,
   0.1368105,
   0.1230562,
   0.1172871,
   0.1079847,
   0.137468,
   0.1167964,
   0.08740773,
   0.1025759,
   0.08665319,
   0.09011702,
   0.09613482,
   0.1010821,
   0.1110067,
   0.1210796,
   0.09124597,
   0.1009028,
   0.09199405,
   0.08791332,
   0.1227399,
   0.1026927,
   0.1141697,
   0.09390259,
   0.117122,
   0.1241146,
   0.1079082,
   0.1066062,
   0.1054774,
   0.09892206,
   0.1020611,
   0.1079876,
   0.1015764,
   0.1211044,
   0.09480866,
   0.1040373,
   0.1007733,
   0.12256,
   0.09047619,
   0.09764706,
   0.1158228,
   0.08184111,
   0.07661228,
   0.09788839,
   0.09575269,
   0.09130609,
   0.1363778,
   0.1194444,
   0.09912948,
   0.089141,
   0.1056704,
   0.09089973,
   0.1091226,
   0.09531235,
   0.1163063,
   0.1091847,
   0.1089773,
   0.1079342,
   0.1018718,
   0.077185,
   0.115318,
   0.1031082,
   0.1119549,
   0.1047348,
   0.08474925,
   0.1322115,
   0.08034211,
   0.09811721,
   0.1181721,
   0.08267045,
   0.1040693,
   0.118391,
   0.1153813,
   0.09281936,
   0.08399749,
   0.08916667,
   0.1134129,
   0.1443237,
   0.09876701,
   0.09687085,
   0.1061667,
   0.1328669,
   0.1419501};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(120,medianmeevstimeinEE_fx3001,medianmeevstimeinEE_fy3001,medianmeevstimeinEE_felx3001,medianmeevstimeinEE_fehx3001,medianmeevstimeinEE_fely3001,medianmeevstimeinEE_fehy3001);
   grae->SetName("medianmeevstimeinEE");
   grae->SetTitle("EE");
   grae->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#238b45");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#238b45");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_medianmeevstimeinEE3001 = new TH1F("Graph_medianmeevstimeinEE3001","EE",120,1.681943e+09,1.69024e+09);
   Graph_medianmeevstimeinEE3001->SetMinimum(88.54203);
   Graph_medianmeevstimeinEE3001->SetMaximum(90.75572);
   Graph_medianmeevstimeinEE3001->SetDirectory(0);
   Graph_medianmeevstimeinEE3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_medianmeevstimeinEE3001->SetLineColor(ci);
   Graph_medianmeevstimeinEE3001->GetXaxis()->SetTitle("Time");
   Graph_medianmeevstimeinEE3001->GetXaxis()->SetTimeDisplay(1);
   Graph_medianmeevstimeinEE3001->GetXaxis()->SetTimeFormat("#splitline{%d-%b}{%H:%M}%F1970-01-01 00:00:00s0");
   Graph_medianmeevstimeinEE3001->GetXaxis()->SetLabelFont(42);
   Graph_medianmeevstimeinEE3001->GetXaxis()->SetTitleOffset(1);
   Graph_medianmeevstimeinEE3001->GetXaxis()->SetTitleFont(42);
   Graph_medianmeevstimeinEE3001->GetYaxis()->SetTitle("median m_{ee}[GeV]");
   Graph_medianmeevstimeinEE3001->GetYaxis()->SetLabelFont(42);
   Graph_medianmeevstimeinEE3001->GetYaxis()->SetTitleFont(42);
   Graph_medianmeevstimeinEE3001->GetZaxis()->SetLabelFont(42);
   Graph_medianmeevstimeinEE3001->GetZaxis()->SetTitleOffset(1);
   Graph_medianmeevstimeinEE3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_medianmeevstimeinEE3001);
   
   multigraph->Add(grae,"PE");
   multigraph->Draw("A");
   multigraph->GetXaxis()->SetLimits(1.68243e+09, 1.689878e+09);
   multigraph->GetXaxis()->SetTitle("Time (day-month-year)");
   multigraph->GetXaxis()->SetTimeDisplay(1);
   multigraph->GetXaxis()->SetTimeFormat("%d-%b-%Y%F1970-01-01 00:00:00s0");
   multigraph->GetXaxis()->SetRange(0,119);
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetNdivisions(8);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.015);
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
   TLatex *   tex = new TLatex(0,88.4,"0");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   TLine *line = new TLine(0,88.4,0,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.659443e+09,88.4,"356580");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.659443e+09,88.4,1.659443e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.659977e+09,88.4,"357059");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.659977e+09,88.4,1.659977e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.660407e+09,88.4,"357440");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.660407e+09,88.4,1.660407e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.660933e+09,88.4,"357704");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.660933e+09,88.4,1.660933e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.663951e+09,88.4,"359268");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.663951e+09,88.4,1.663951e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.664856e+09,88.4,"359764");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.664856e+09,88.4,1.664856e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.665368e+09,88.4,"360088");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.665368e+09,88.4,1.665368e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.665663e+09,88.4,"360296");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.665663e+09,88.4,1.665663e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.665978e+09,88.4,"360491");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.665978e+09,88.4,1.665978e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.666473e+09,88.4,"360920");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.666473e+09,88.4,1.666473e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.666683e+09,88.4,"361050");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.666683e+09,88.4,1.666683e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.666927e+09,88.4,"361240");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.666927e+09,88.4,1.666927e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.667124e+09,88.4,"361333");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.667124e+09,88.4,1.667124e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.667389e+09,88.4,"361468");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.667389e+09,88.4,1.667389e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.667613e+09,88.4,"361573");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.667613e+09,88.4,1.667613e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.668352e+09,88.4,"361990");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.668352e+09,88.4,1.668352e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.66903e+09,88.4,"362433");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.66903e+09,88.4,1.66903e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.682634e+09,88.4,"366727");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.682634e+09,88.4,1.682634e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.683492e+09,88.4,"367127");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.683492e+09,88.4,1.683492e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.683798e+09,88.4,"367334");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.683798e+09,88.4,1.683798e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.684144e+09,88.4,"367516");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.684144e+09,88.4,1.684144e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.684465e+09,88.4,"367697");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.684465e+09,88.4,1.684465e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.684914e+09,88.4,"367884");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.684914e+09,88.4,1.684914e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.68574e+09,88.4,"368383");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.68574e+09,88.4,1.68574e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.686023e+09,88.4,"368542");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.686023e+09,88.4,1.686023e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.686218e+09,88.4,"368612");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.686218e+09,88.4,1.686218e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.686483e+09,88.4,"368746");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.686483e+09,88.4,1.686483e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.688349e+09,88.4,"369999");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.688349e+09,88.4,1.688349e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.688589e+09,88.4,"370171");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.688589e+09,88.4,1.688589e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.688813e+09,88.4,"370302");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.688813e+09,88.4,1.688813e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.688992e+09,88.4,"370406");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.688992e+09,88.4,1.688992e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
      tex = new TLatex(1.68932e+09,88.4,"370664");
   tex->SetTextSize(0.03);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(1.68932e+09,88.4,1.68932e+09,92.3);
   line->SetLineColor(2);
   line->Draw();
   
   TLegend *leg = new TLegend(0.6,0.85,1,0.98,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   leg->Draw();
   
   TH1F *medianmeevstimeinEE_copy__1 = new TH1F("medianmeevstimeinEE_copy__1","",120,1.68243e+09,1.689878e+09);
   medianmeevstimeinEE_copy__1->SetMinimum(88.4);
   medianmeevstimeinEE_copy__1->SetMaximum(92.3);
   medianmeevstimeinEE_copy__1->SetDirectory(0);
   medianmeevstimeinEE_copy__1->SetStats(0);

   ci = TColor::GetColor("#000099");
   medianmeevstimeinEE_copy__1->SetLineColor(ci);
   medianmeevstimeinEE_copy__1->GetXaxis()->SetTitle("Time (day-month-year)");
   medianmeevstimeinEE_copy__1->GetXaxis()->SetTimeDisplay(1);
   medianmeevstimeinEE_copy__1->GetXaxis()->SetTimeFormat("%d-%b-%Y%F1970-01-01 00:00:00s0");
   medianmeevstimeinEE_copy__1->GetXaxis()->SetRange(0,119);
   medianmeevstimeinEE_copy__1->GetXaxis()->CenterTitle(true);
   medianmeevstimeinEE_copy__1->GetXaxis()->SetNdivisions(8);
   medianmeevstimeinEE_copy__1->GetXaxis()->SetLabelFont(42);
   medianmeevstimeinEE_copy__1->GetXaxis()->SetLabelSize(0.015);
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
   medianmeevstimeinEE_copy__1->GetZaxis()->SetTitleOffset(1);
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
      tex = new TLatex(0.76,0.956,"#bf{Run 3 (13 TeV)}");
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
   pad1->Range(1e-08,87.70769,19.05224,92.32308);
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
   __2->SetBinContent(9,1.121819);
   __2->SetBinContent(14,0.6421953);
   __2->SetBinContent(18,1.620838);
   __2->SetBinContent(23,4.556934);
   __2->SetBinContent(24,0.725104);
   __2->SetBinContent(25,2.224628);
   __2->SetBinContent(26,3.40421);
   __2->SetBinContent(27,7.426615);
   __2->SetBinContent(28,6.738966);
   __2->SetBinContent(29,12.23088);
   __2->SetBinContent(30,9.961694);
   __2->SetBinContent(31,15.08302);
   __2->SetBinContent(32,7.97031);
   __2->SetBinContent(33,4.436281);
   __2->SetBinContent(34,8.588443);
   __2->SetBinContent(35,5.013618);
   __2->SetBinContent(36,3.452951);
   __2->SetBinContent(37,3.387689);
   __2->SetBinContent(38,0.5623146);
   __2->SetBinContent(42,0.8514853);
   __2->SetBinError(9,1.121819);
   __2->SetBinError(14,0.6421953);
   __2->SetBinError(18,1.153528);
   __2->SetBinError(23,2.050087);
   __2->SetBinError(24,0.725104);
   __2->SetBinError(25,1.291646);
   __2->SetBinError(26,1.747895);
   __2->SetBinError(27,2.738621);
   __2->SetBinError(28,2.404305);
   __2->SetBinError(29,3.373537);
   __2->SetBinError(30,2.82423);
   __2->SetBinError(31,3.496214);
   __2->SetBinError(32,2.581024);
   __2->SetBinError(33,1.997115);
   __2->SetBinError(34,2.758268);
   __2->SetBinError(35,2.084328);
   __2->SetBinError(36,1.766444);
   __2->SetBinError(37,1.718169);
   __2->SetBinError(38,0.5623146);
   __2->SetBinError(42,0.8514853);
   __2->SetMinimum(1e-08);
   __2->SetMaximum(18.09963);
   __2->SetEntries(120);
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
   __2->GetXaxis()->SetTitleOffset(1);
   __2->GetXaxis()->SetTitleFont(42);
   __2->GetYaxis()->SetNdivisions(5);
   __2->GetYaxis()->SetLabelFont(42);
   __2->GetYaxis()->SetLabelSize(0);
   __2->GetYaxis()->SetTitleFont(42);
   __2->GetZaxis()->SetLabelFont(42);
   __2->GetZaxis()->SetTitleOffset(1);
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
   text = new TText(0.45,0.84,"89.9 GeV");
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
