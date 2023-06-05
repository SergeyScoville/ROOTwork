import ROOT
import sys

try:
    bins = int(sys.argv[3])
except IndexError:
    bins = 0

# Open the ROOT files
file1 = ROOT.TFile(sys.argv[1])
file2 = ROOT.TFile(sys.argv[2])

histogram1_name = file1.GetListOfKeys()[0].GetName()
histogram2_name = file2.GetListOfKeys()[0].GetName()

hist1 = file1.Get(histogram1_name)
hist2 = file2.Get(histogram2_name)

new_histogram1 = ROOT.TH1F("new_hist", "Variable Binning", 2500, 0, 2500)

new_histogram1.Sumw2()
new_histogram1.Add(hist1)

canvas = ROOT.TCanvas("All_GEP_Algo_Testing", "Number of Topoclusters measured with offline GEP algorithms", 800, 600)

new_histogram1.GetXaxis().SetTitle("Number of Topoclusters")
new_histogram1.GetXaxis().CenterTitle()
new_histogram1.GetXaxis().SetTitleOffset(1.2)
new_histogram1.GetYaxis().SetTitle("Ratio of events/total events")
new_histogram1.GetYaxis().CenterTitle()
new_histogram1.GetYaxis().SetNdivisions(-6, ROOT.kFALSE)

new_histogram1.Draw()
canvas.Update()

new_histogram2 = ROOT.TH1F("new_hist1", "Variable Binning", 2500, 0, 2500)
new_histogram2.Sumw2()
new_histogram2.Add(hist2)


new_histogram2.SetLineColor(ROOT.kRed)
new_histogram2.Draw("same")
canvas.Update()

output_file = ROOT.TFile("trying_new_combination.root", "RECREATE")
canvas.Write()

output_file.Close()
file1.Close()