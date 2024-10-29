import ROOT
import sys
ROOT.gROOT.SetBatch(True)
# file1 = ROOT.TFile("/eos/cms/store/group/dpg_ecal/alca_ecalcalib/ecalelf/ntuples/wangchu/2023IC/13.6TeV/133X_dataRun3_Prompt_v2_IC_median/"+sys.argv[1]+"/jsonFilter/ntuple.root", "READ")
# file1 = ROOT.TFile("/eos/cms/store/group/dpg_ecal/alca_ecalcalib/ecalelf/ntuples/wangchu/2023IC/13.6TeV/133X_dataRun3_Prompt_v2_pulse/"+sys.argv[1]+"/jsonFilter/ntuple.root", "READ") #pulse + Timing
file2 = ROOT.TFile("/eos/cms/store/group/dpg_ecal/alca_ecalcalib/automation_repro/rereco202223_repro_v2/ecalelf/zskim/"+sys.argv[1]+"/ntuple_0.root", "READ") #pulse + Timing
# file2 = ROOT.TFile("/eos/cms/store/group/dpg_ecal/alca_ecalcalib/ecalelf/ntuples/wangchu/2023IC/13.6TeV/133X_dataRun3_Prompt_v2_newPulse/"+sys.argv[1]+"/jsonFilter/ntuple.root", "READ") #pulse 
file1 = ROOT.TFile("/eos/cms/store/group/dpg_ecal/alca_ecalcalib/ecalelf/ntuples/wangchu/2023IC/13.6TeV/133X_dataRun3_Prompt_v2_ICv3/2023D.root", "READ") #pulse 
# file2 = ROOT.TFile("/eos/cms/store/group/dpg_ecal/alca_ecalcalib/ecalelf/ntuples/wangchu/13.6TeV/133X_dataRun3_Prompt_v2_pulse/"+sys.argv[1]+"/jsonFilter/ntuple.root", "READ")
# file2 = ROOT.TFile("/eos/cms/store/group/dpg_ecal/alca_ecalcalib/ecalelf/ntuples/wangchu/13.6TeV/132X_dataRun3_Prompt_v4/"+sys.argv[1]+"/jsonFilter/ntuple.root", "READ")

# tree = file1.Get("extraCalibTree")
# tree = file1.Get("selected").CopyTree("runNumber==366727")
original_tree = file1.Get("selected")
# tree.Draw("invMass", "runNumber==366727", "goff")
tree = original_tree.CopyTree("runNumber=="+sys.argv[1])
# tree2 = file2.Get("extraCalibTree")
# tree2 = file2.Get("selected").CopyTree("runNumber==366727")
tree2 = file2.Get("selected")
print("tree1:",tree.GetEntries(),"tree2:",tree2.GetEntries())
canvas = ROOT.TCanvas("canvas", "mee histogram", 800, 600)

var=sys.argv[2]
tree.Draw(var+">>histogram(100, 50, 100)")  
tree2.Draw(var+">>histogram2(100, 50, 100)")  


histogram = ROOT.gDirectory.Get("histogram")
histogram2 = ROOT.gDirectory.Get("histogram2")
histogram.SetTitle(var+" distribution")
histogram.GetXaxis().SetTitle(var)
histogram.GetYaxis().SetTitle("Entries")
histogram.SetMarkerStyle(20)
histogram.SetFillColorAlpha(ROOT.kBlue, 0.5)
histogram.SetLineColor(ROOT.kBlue)
histogram2.SetFillColorAlpha(ROOT.kRed, 0.5)
histogram2.SetLineColor(ROOT.kRed)
legend = ROOT.TLegend(0.1, 0.7, 0.5, 0.9)  
legend.AddEntry(histogram, "ECALELF:"+str(histogram.GetMean()), "f")  
legend.AddEntry(histogram2, "Automation:"+str(histogram2.GetMean()) , "f")  
# histogram.SetLineColor(ROOT.kRed)
histogram2.SetStats(0)
histogram2.Draw()
histogram.Draw("SAME")
legend.Draw("same")
canvas.Draw()
canvas.SaveAs("plots/"+sys.argv[1]+"_"+sys.argv[2]+".png")

values1 = []
branch1 = tree.GetBranch(var) 
branch2 = tree2.GetBranch(var) 
leaf1 = branch1.GetLeaf(var)
if(tree.GetEntries()==tree2.GetEntries()):
	for event in range(tree.GetEntries()):
		branch1.GetEntry(event)
		values1.append(leaf1.GetValue(0))

	values2 = []
	leaf2 = branch2.GetLeaf(var)
	for event in range(tree2.GetEntries()):
		branch2.GetEntry(event)
		values2.append(leaf2.GetValue(0))

	for i in range(len(values1)):
		if values1[i] != values2[i]:
			print("Event "+str(i)+": Value in file1 = ",values1[i],", Value in file2 = ",values2[i])
else:
	print("entries not the same tree1:",tree.GetEntries(),"tree2:",tree2.GetEntries())
