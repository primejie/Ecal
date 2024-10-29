import ROOT
from ctypes import c_double
import pandas as pd
ROOT.gROOT.SetBatch(True)
# df=pd.read_csv("../inputs/Run3.dat")
# df['run'] = df['#run:fill'].str.split(':', expand=True)[0].astype(int)
# iov=pd.read_csv("iov_list.csv")
# # print(iov["run"])
# # print(type(df['run']))
# merged_df = iov.merge(df, on='run')
# merged_df=merged_df[["run","time"]]
# merged_df.to_csv("iov_time.csv")

# import ROOT
# import ctypes
# timeval = 1656657079

# def convert_timestamp_to_real_time(timeval):
#     timestamp = ROOT.TTimeStamp(timeval)  

#     real_time = ROOT.TDatime(timestamp.GetSec())

#     print("Real time:", real_time.AsSQLString())

# convert_timestamp_to_real_time(timeval)

def fit_function(x, par):
    gauss_part = par[0] * ROOT.TMath.Gaus(x[0], par[1], par[2])
    breit_wigner_part = par[3] / ((x[0] - par[4])**2 + par[5]**2)
    return gauss_part + breit_wigner_part
fit_function = ROOT.TF1("fit_function", fit_function, 78., 104., 6)
fit_function.SetParameters(1, 90, 1, 1, 3, 0.5) 


f1=ROOT.TFile.Open("data/automationMedian2022_medianGraph.root")
f2=ROOT.TFile.Open("data/automation_v4_2022_medianGraph.root")
h1=f1.Get("mee_in_EB")
h2=f2.Get("mee_in_EB")
print(h1.GetEntries())
h1.Scale(1/h1.Integral())
h2.Scale(1/h2.Integral())
h1.Fit(fit_function, "", "", 78., 104.)
# graph=f.Get("medianmeevstimeinEB")
# n_points = graph.GetN()
# # i=h2.
# h1=h2.ProjectionY("projY", -100, 2000, "e")
# print(h2.GetNbinsX())
# print(h2.GetEntries())
# print(h2.GetXaxis().FindBin(1672444270))
# print(h1.GetMean())
# h2022=h2.ProjectionY("2022projY", 0, h2.GetXaxis().FindBin(1672444270), "e")
# h2023=h2.ProjectionY("2023projY", h2.GetXaxis().FindBin(1681944670),h2.GetNbinsX()+1, "e")
# print(h1.GetEntries(),h2022.GetEntries(),h2023.GetEntries())
canvas = ROOT.TCanvas("canvas", "Canvas Title", 800, 600)
h1.GetXaxis().SetRangeUser(78.,104.)
h1.SetMarkerColor(2)
h1.SetLineColor(2)
h1.Draw()
h2.Draw("same")
canvas.Draw()
canvas.SaveAs("test.png")
# median = c_double(0.0)
# h1.GetQuantiles(1, median,  c_double(0.5))
# print(median)
# for i in range(n_points):
    # x = graph.GetX()[i]
    # y = graph.GetY()[i]
    # print(x,y)