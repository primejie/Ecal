#ifdef __CLING__
#pragma cling optimize(0)
#endif
void medianmeevstimeinEE_22()
{
//=========Macro generated from canvas: medianmeevstimeinEE_canvas/
//=========  (Fri Mar 15 11:15:53 2024) by ROOT version 6.26/10
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
   pad0->Range(1.655105e+09,87.70769,1.670286e+09,92.32308);
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
   
   Double_t medianmeevstimeinEE_fx3001[149] = {
   1.657758e+09,
   1.658329e+09,
   1.658822e+09,
   1.659082e+09,
   1.659211e+09,
   1.659363e+09,
   1.659445e+09,
   1.659486e+09,
   1.659595e+09,
   1.659756e+09,
   1.659838e+09,
   1.659869e+09,
   1.659957e+09,
   1.660039e+09,
   1.660068e+09,
   1.660131e+09,
   1.660186e+09,
   1.66023e+09,
   1.660298e+09,
   1.660369e+09,
   1.660415e+09,
   1.660437e+09,
   1.6605e+09,
   1.660576e+09,
   1.660667e+09,
   1.660804e+09,
   1.66089e+09,
   1.660913e+09,
   1.660958e+09,
   1.661002e+09,
   1.661025e+09,
   1.661055e+09,
   1.661096e+09,
   1.661132e+09,
   1.661152e+09,
   1.661198e+09,
   1.661243e+09,
   1.661555e+09,
   1.664452e+09,
   1.664638e+09,
   1.664667e+09,
   1.664697e+09,
   1.664753e+09,
   1.664806e+09,
   1.664831e+09,
   1.664856e+09,
   1.664897e+09,
   1.664937e+09,
   1.665055e+09,
   1.665171e+09,
   1.665188e+09,
   1.665219e+09,
   1.66525e+09,
   1.665309e+09,
   1.665372e+09,
   1.665403e+09,
   1.66543e+09,
   1.665454e+09,
   1.665504e+09,
   1.665584e+09,
   1.665639e+09,
   1.665655e+09,
   1.665689e+09,
   1.665779e+09,
   1.665861e+09,
   1.665886e+09,
   1.665905e+09,
   1.665932e+09,
   1.665957e+09,
   1.666097e+09,
   1.666234e+09,
   1.666261e+09,
   1.66629e+09,
   1.666348e+09,
   1.666405e+09,
   1.666424e+09,
   1.666449e+09,
   1.666477e+09,
   1.666496e+09,
   1.666511e+09,
   1.666532e+09,
   1.666553e+09,
   1.666571e+09,
   1.666622e+09,
   1.66667e+09,
   1.666698e+09,
   1.666737e+09,
   1.666788e+09,
   1.666828e+09,
   1.666846e+09,
   1.666871e+09,
   1.666898e+09,
   1.666917e+09,
   1.666934e+09,
   1.666957e+09,
   1.666986e+09,
   1.667014e+09,
   1.667036e+09,
   1.667051e+09,
   1.667074e+09,
   1.667096e+09,
   1.667145e+09,
   1.667196e+09,
   1.667243e+09,
   1.667287e+09,
   1.667302e+09,
   1.667323e+09,
   1.667344e+09,
   1.667359e+09,
   1.667382e+09,
   1.667404e+09,
   1.667419e+09,
   1.667439e+09,
   1.667459e+09,
   1.667492e+09,
   1.667526e+09,
   1.667569e+09,
   1.667612e+09,
   1.667636e+09,
   1.667945e+09,
   1.668249e+09,
   1.668272e+09,
   1.668293e+09,
   1.668309e+09,
   1.668337e+09,
   1.668404e+09,
   1.668461e+09,
   1.668479e+09,
   1.668509e+09,
   1.668536e+09,
   1.668559e+09,
   1.66858e+09,
   1.668602e+09,
   1.668625e+09,
   1.668646e+09,
   1.668666e+09,
   1.668861e+09,
   1.669055e+09,
   1.669169e+09,
   1.669282e+09,
   1.669329e+09,
   1.669376e+09,
   1.669411e+09,
   1.669446e+09,
   1.669464e+09,
   1.669495e+09,
   1.669524e+09,
   1.669566e+09,
   1.669606e+09};
   Double_t medianmeevstimeinEE_fy3001[149] = {
   89.22571,
   89.30412,
   89.38842,
   89.61373,
   89.66436,
   89.80781,
   89.72381,
   89.43438,
   89.53922,
   89.53462,
   89.81158,
   89.74185,
   89.64227,
   89.50056,
   89.62784,
   89.45474,
   89.57791,
   89.68524,
   89.70982,
   89.55756,
   89.43778,
   89.5949,
   89.34753,
   89.77273,
   89.36465,
   89.46743,
   89.4648,
   89.5935,
   89.22,
   89.44667,
   89.52442,
   89.72304,
   89.61143,
   89.63876,
   89.64461,
   89.55319,
   89.54567,
   89.44375,
   88.84435,
   89.49703,
   89.41573,
   89.53458,
   89.73798,
   89.79,
   89.96379,
   89.87792,
   89.62071,
   89.62342,
   89.31975,
   89.1233,
   89.27989,
   89.49072,
   89.85206,
   89.48594,
   89.62157,
   89.44888,
   89.68204,
   89.42182,
   89.55755,
   89.40124,
   89.39792,
   89.72582,
   89.43621,
   88.97,
   89.51452,
   89.78315,
   89.66443,
   89.55762,
   89.70815,
   89.5256,
   89.20612,
   89.32468,
   89.79717,
   89.5592,
   89.65364,
   89.74752,
   89.71132,
   89.66136,
   89.29056,
   89.57871,
   89.69471,
   89.675,
   89.53269,
   89.209,
   89.42389,
   89.39157,
   89.29059,
   89.30573,
   89.55123,
   89.64011,
   89.50284,
   89.56131,
   89.75511,
   89.454,
   89.51392,
   89.41959,
   89.5558,
   89.4092,
   89.50625,
   89.60412,
   89.58619,
   89.19897,
   89.58952,
   89.30161,
   89.33462,
   89.71382,
   89.32476,
   89.41024,
   89.73972,
   89.479,
   89.47581,
   89.63226,
   89.4165,
   89.56964,
   89.33854,
   89.47262,
   89.30407,
   89.61076,
   89.7527,
   90.0019,
   89.07802,
   89.26198,
   89.4358,
   89.65,
   89.475,
   89.25227,
   89.40825,
   89.44494,
   89.44286,
   89.62978,
   89.45161,
   89.58556,
   89.67238,
   89.68889,
   89.67222,
   89.75889,
   89.20991,
   88.64206,
   89.26458,
   89.6372,
   89.52745,
   89.72105,
   89.58404,
   89.65057,
   89.85714,
   89.68095,
   89.85485,
   89.68333,
   89.83889};
   Double_t medianmeevstimeinEE_felx3001[149] = {
   302400.5,
   268019,
   225363.5,
   34620.5,
   94159,
   57717.5,
   24870,
   15542.5,
   93351.5,
   68205.5,
   13574,
   16946.5,
   71767.5,
   10418,
   18517,
   43878.5,
   11121.5,
   33040.5,
   34896.5,
   36277.5,
   9563.5,
   12173,
   51082.5,
   25415.5,
   65511,
   71502.5,
   13933,
   9208.5,
   36126,
   8047,
   14576.5,
   15194,
   26149.5,
   9304.5,
   11318,
   34941,
   9802.5,
   302400.5,
   175038.5,
   10773.5,
   18345.5,
   11611,
   44681.5,
   8595.5,
   15870,
   9266.5,
   31504,
   9092,
   108321,
   7529.5,
   9850,
   21244.5,
   9124,
   49931.5,
   13212.5,
   18173,
   8296,
   15943,
   33804,
   46987,
   7293.5,
   8673.5,
   25287,
   65217.5,
   16928.5,
   8132.5,
   10739,
   16244.5,
   8876,
   130337,
   7149.5,
   19806.5,
   8839,
   49578.5,
   7894,
   10183,
   15498,
   11958,
   6999.5,
   7913.5,
   13349,
   8101,
   9363,
   41485,
   7124.5,
   20436.5,
   18474.5,
   32741.5,
   7661,
   9918,
   15069,
   12036,
   7312.5,
   8883.5,
   14391.5,
   14459.5,
   14185,
   7154,
   8001,
   14885,
   7710.5,
   41206.5,
   9560,
   37122.5,
   7040,
   7815.5,
   13606,
   7050,
   8679,
   14327,
   7071.5,
   7808,
   12468.5,
   7210.5,
   26293,
   7248,
   35922.5,
   7555,
   15847.5,
   293752.5,
   9940,
   13471,
   7070,
   8805.5,
   18899,
   48860.5,
   8252.5,
   9676.5,
   19487.5,
   8397.5,
   13817,
   7200,
   15130,
   7823.5,
   12865.5,
   7246,
   187510.5,
   7318,
   106220.5,
   7363,
   38938.5,
   8174.5,
   27120.5,
   7767.5,
   10491.5,
   20296,
   8492.5,
   34053.5,
   5518.5};
   Double_t medianmeevstimeinEE_fely3001[149] = {
   0.1949451,
   0.09844189,
   0.08933848,
   0.1303922,
   0.1184854,
   0.1072378,
   0.0965368,
   0.09151786,
   0.09395253,
   0.1057919,
   0.113502,
   0.1276503,
   0.08815039,
   0.1021747,
   0.1044034,
   0.1082722,
   0.115407,
   0.08370748,
   0.09982143,
   0.110213,
   0.09694444,
   0.1201505,
   0.1084958,
   0.08980044,
   0.1129981,
   0.08434849,
   0.1081293,
   0.1252204,
   0.1230303,
   0.1247917,
   0.09828224,
   0.09834042,
   0.118797,
   0.1182879,
   0.08829205,
   0.1208683,
   0.1125745,
   0.2304167,
   0.09667341,
   0.09586691,
   0.0963755,
   0.1126282,
   0.09388986,
   0.1273494,
   0.1044473,
   0.08658333,
   0.08862374,
   0.08320603,
   0.09880071,
   0.08580097,
   0.1304948,
   0.1044471,
   0.1037664,
   0.09649306,
   0.1215686,
   0.1160193,
   0.07976611,
   0.12,
   0.08657943,
   0.084573,
   0.1432292,
   0.1052979,
   0.1099182,
   0.07757576,
   0.1129697,
   0.09998891,
   0.09533187,
   0.1002506,
   0.104999,
   0.08527266,
   0.1088747,
   0.09992626,
   0.08036309,
   0.101856,
   0.1080808,
   0.1121589,
   0.1279874,
   0.09654882,
   0.1040171,
   0.113523,
   0.1278454,
   0.09471154,
   0.1106685,
   0.0967551,
   0.08852304,
   0.1261475,
   0.09496299,
   0.1004013,
   0.1211064,
   0.1180669,
   0.1541396,
   0.1108095,
   0.09719697,
   0.1430244,
   0.1003881,
   0.1043702,
   0.09396147,
   0.1072723,
   0.1155093,
   0.09776007,
   0.09425499,
   0.09519549,
   0.1145238,
   0.1149792,
   0.1166542,
   0.08650097,
   0.09413127,
   0.08417713,
   0.1150361,
   0.1025294,
   0.1301075,
   0.1296265,
   0.1139625,
   0.1471154,
   0.1109906,
   0.1232363,
   0.08944713,
   0.1285014,
   0.0904934,
   0.1114493,
   0.1124664,
   0.1202145,
   0.1352141,
   0.1094737,
   0.1204023,
   0.109664,
   0.1153176,
   0.1170957,
   0.1024077,
   0.1166174,
   0.1167292,
   0.1163248,
   0.1049111,
   0.0930126,
   0.09030733,
   0.1035697,
   0.1082203,
   0.09518107,
   0.1127761,
   0.1004304,
   0.08663465,
   0.1032308,
   0.1097568,
   0.09647635,
   0.1248512,
   0.1150433,
   0.07985437,
   0.1039583,
   0.1273504};
   Double_t medianmeevstimeinEE_fehx3001[149] = {
   302400.5,
   268019,
   225363.5,
   34620.5,
   94159,
   57717.5,
   24870,
   15542.5,
   93351.5,
   68205.5,
   13574,
   16946.5,
   71767.5,
   10418,
   18517,
   43878.5,
   11121.5,
   33040.5,
   34896.5,
   36277.5,
   9563.5,
   12173,
   51082.5,
   25415.5,
   65511,
   71502.5,
   13933,
   9208.5,
   36126,
   8047,
   14576.5,
   15194,
   26149.5,
   9304.5,
   11318,
   34941,
   9802.5,
   302400.5,
   175038.5,
   10773.5,
   18345.5,
   11611,
   44681.5,
   8595.5,
   15870,
   9266.5,
   31504,
   9092,
   108321,
   7529.5,
   9850,
   21244.5,
   9124,
   49931.5,
   13212.5,
   18173,
   8296,
   15943,
   33804,
   46987,
   7293.5,
   8673.5,
   25287,
   65217.5,
   16928.5,
   8132.5,
   10739,
   16244.5,
   8876,
   130337,
   7149.5,
   19806.5,
   8839,
   49578.5,
   7894,
   10183,
   15498,
   11958,
   6999.5,
   7913.5,
   13349,
   8101,
   9363,
   41485,
   7124.5,
   20436.5,
   18474.5,
   32741.5,
   7661,
   9918,
   15069,
   12036,
   7312.5,
   8883.5,
   14391.5,
   14459.5,
   14185,
   7154,
   8001,
   14885,
   7710.5,
   41206.5,
   9560,
   37122.5,
   7040,
   7815.5,
   13606,
   7050,
   8679,
   14327,
   7071.5,
   7808,
   12468.5,
   7210.5,
   26293,
   7248,
   35922.5,
   7555,
   15847.5,
   293752.5,
   9940,
   13471,
   7070,
   8805.5,
   18899,
   48860.5,
   8252.5,
   9676.5,
   19487.5,
   8397.5,
   13817,
   7200,
   15130,
   7823.5,
   12865.5,
   7246,
   187510.5,
   7318,
   106220.5,
   7363,
   38938.5,
   8174.5,
   27120.5,
   7767.5,
   10491.5,
   20296,
   8492.5,
   34053.5,
   5518.5};
   Double_t medianmeevstimeinEE_fehy3001[149] = {
   0.1915271,
   0.09275129,
   0.1127284,
   0.09695412,
   0.1031383,
   0.09266827,
   0.09047619,
   0.08019454,
   0.0964986,
   0.102772,
   0.09899798,
   0.0967236,
   0.1091883,
   0.1195362,
   0.10446,
   0.09691151,
   0.108691,
   0.08921843,
   0.07796483,
   0.1086035,
   0.1035266,
   0.08367347,
   0.09459877,
   0.1301853,
   0.1163059,
   0.1011858,
   0.113294,
   0.1142273,
   0.1058065,
   0.1245977,
   0.1093163,
   0.09212472,
   0.08380952,
   0.1094968,
   0.09806457,
   0.1068085,
   0.09405907,
   0.2395833,
   0.09636014,
   0.09679746,
   0.097603,
   0.08240169,
   0.100849,
   0.09415842,
   0.0984618,
   0.0996875,
   0.09384517,
   0.07477477,
   0.1405033,
   0.08603236,
   0.11096,
   0.08027835,
   0.09275296,
   0.1174279,
   0.09495311,
   0.1039645,
   0.09908361,
   0.09030303,
   0.09180348,
   0.07939096,
   0.1094697,
   0.1158425,
   0.0985492,
   0.09866667,
   0.1013493,
   0.1153915,
   0.1239232,
   0.1132601,
   0.1006714,
   0.1095238,
   0.09892806,
   0.1228473,
   0.0942936,
   0.09492831,
   0.08884151,
   0.0870207,
   0.07966285,
   0.09825175,
   0.1372222,
   0.09978713,
   0.1284124,
   0.08529412,
   0.1044364,
   0.07959649,
   0.1088492,
   0.08165929,
   0.08542635,
   0.1205085,
   0.09689627,
   0.09909466,
   0.08994755,
   0.1019648,
   0.1443913,
   0.09411321,
   0.1041237,
   0.08411607,
   0.1071376,
   0.1132536,
   0.1152616,
   0.09587629,
   0.1018626,
   0.08978093,
   0.09847619,
   0.09882569,
   0.1180513,
   0.1197069,
   0.1036785,
   0.1111132,
   0.09621787,
   0.1086543,
   0.07534739,
   0.1054469,
   0.08643632,
   0.104533,
   0.09636399,
   0.1040043,
   0.09100066,
   0.1224181,
   0.0903666,
   0.1384074,
   0.08954559,
   0.09427083,
   0.1003157,
   0.09427083,
   0.1266484,
   0.109632,
   0.08589172,
   0.1055716,
   0.1175595,
   0.1083435,
   0.1009123,
   0.08325178,
   0.1020635,
   0.1011111,
   0.08440428,
   0.1034873,
   0.0808023,
   0.09261059,
   0.1037711,
   0.1159628,
   0.09654902,
   0.1053842,
   0.1170101,
   0.1195745,
   0.1028571,
   0.09320492,
   0.08650927,
   0.1274621,
   0.1243464};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(149,medianmeevstimeinEE_fx3001,medianmeevstimeinEE_fy3001,medianmeevstimeinEE_felx3001,medianmeevstimeinEE_fehx3001,medianmeevstimeinEE_fely3001,medianmeevstimeinEE_fehy3001);
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
   
   TH1F *Graph_medianmeevstimeinEE3001 = new TH1F("Graph_medianmeevstimeinEE3001","EE",149,1.65624e+09,1.670827e+09);
   Graph_medianmeevstimeinEE3001->SetMinimum(88.38753);
   Graph_medianmeevstimeinEE3001->SetMaximum(90.29965);
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
   multigraph->GetXaxis()->SetLimits(1.657166e+09, 1.670198e+09);
   multigraph->GetXaxis()->SetTitle("Time (day-month-year)");
   multigraph->GetXaxis()->SetTimeDisplay(1);
   multigraph->GetXaxis()->SetTimeFormat("%d-%b-%Y%F1970-01-01 00:00:00s0");
   multigraph->GetXaxis()->SetRange(0,150);
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
   
   TH1F *medianmeevstimeinEE_copy__1 = new TH1F("medianmeevstimeinEE_copy__1","",149,1.657166e+09,1.670198e+09);
   medianmeevstimeinEE_copy__1->SetMinimum(88.4);
   medianmeevstimeinEE_copy__1->SetMaximum(92.3);
   medianmeevstimeinEE_copy__1->SetDirectory(0);
   medianmeevstimeinEE_copy__1->SetStats(0);

   ci = TColor::GetColor("#000099");
   medianmeevstimeinEE_copy__1->SetLineColor(ci);
   medianmeevstimeinEE_copy__1->GetXaxis()->SetTitle("Time (day-month-year)");
   medianmeevstimeinEE_copy__1->GetXaxis()->SetTimeDisplay(1);
   medianmeevstimeinEE_copy__1->GetXaxis()->SetTimeFormat("%d-%b-%Y%F1970-01-01 00:00:00s0");
   medianmeevstimeinEE_copy__1->GetXaxis()->SetRange(0,150);
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
   pad1->Range(1e-08,87.70769,15.0957,92.32308);
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
   __2->SetBinContent(5,0.8031109);
   __2->SetBinContent(9,0.7599453);
   __2->SetBinContent(12,0.9248905);
   __2->SetBinContent(14,0.7029424);
   __2->SetBinContent(15,0.9590312);
   __2->SetBinContent(16,0.8282975);
   __2->SetBinContent(17,3.119486);
   __2->SetBinContent(18,3.675941);
   __2->SetBinContent(19,6.530885);
   __2->SetBinContent(20,2.380328);
   __2->SetBinContent(21,11.95076);
   __2->SetBinContent(22,7.815024);
   __2->SetBinContent(23,8.656579);
   __2->SetBinContent(24,10.81516);
   __2->SetBinContent(25,10.80453);
   __2->SetBinContent(26,9.963994);
   __2->SetBinContent(27,8.466283);
   __2->SetBinContent(28,4.774307);
   __2->SetBinContent(29,1.789444);
   __2->SetBinContent(30,3.13175);
   __2->SetBinContent(32,0.6883698);
   __2->SetBinContent(33,0.458934);
   __2->SetBinError(5,0.8031109);
   __2->SetBinError(9,0.7599453);
   __2->SetBinError(12,0.9248905);
   __2->SetBinError(14,0.7029424);
   __2->SetBinError(15,0.9590312);
   __2->SetBinError(16,0.8282975);
   __2->SetBinError(17,1.50468);
   __2->SetBinError(18,1.532772);
   __2->SetBinError(19,2.094024);
   __2->SetBinError(20,1.208475);
   __2->SetBinError(21,2.933239);
   __2->SetBinError(22,2.290398);
   __2->SetBinError(23,2.425502);
   __2->SetBinError(24,2.656551);
   __2->SetBinError(25,2.77584);
   __2->SetBinError(26,2.722879);
   __2->SetBinError(27,2.464982);
   __2->SetBinError(28,1.845146);
   __2->SetBinError(29,1.050836);
   __2->SetBinError(30,1.602421);
   __2->SetBinError(32,0.6883698);
   __2->SetBinError(33,0.458934);
   __2->SetMinimum(1e-08);
   __2->SetMaximum(14.34091);
   __2->SetEntries(149);
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
   text = new TText(0.45,0.84,"89.5 GeV");
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
