import ROOT
import sys

canvas = ROOT.TCanvas("canvas", "Histogram", 800, 600)

histogram = ROOT.TH1D("histogram", "Number of Topoclusters", 2500, 0, 2500)

file1 = ROOT.TFile(sys.argv[2], "READ")

histogram1_name = file1.GetListOfKeys()[0].GetName()

hist1 = file1.Get(histogram1_name)

for bin in range(1, hist1.GetNbinsX()+1):
    bin_content = hist1.GetBinContent(bin)
    histogram.SetBinContent(bin, bin_content)

file1.Close()

histogram.SetLineColor(ROOT.kBlue)    # Set line color
histogram.SetLineWidth(2)              # Set line width
histogram.SetFillStyle(3004)           # Set fill style

histogram.Draw()

canvas.Update()

stats_box1 = histogram.GetListOfFunctions().FindObject("stats")
stats_box1.SetX1NDC(0.85)  # Set X-coordinate of the lower-left corner
stats_box1.SetY1NDC(0.85)  # Set Y-coordinate of the lower-left corner
stats_box1.SetX2NDC(1)  # Set X-coordinate of the upper-right corner
stats_box1.SetY2NDC(1)  # Set Y-coordinate of the upper-right corner

histogram2 = ROOT.TH1D("histogram", "Number of Topoclusters", 2500, 0, 2500)

file2 = ROOT.TFile(sys.argv[1], "READ")

histogram2_name = file2.GetListOfKeys()[0].GetName()

hist2 = file2.Get(histogram2_name)

for bin in range(1, hist2.GetNbinsX()+1):
    bin_content = hist2.GetBinContent(bin)
    histogram2.SetBinContent(bin, bin_content)

file2.Close()

histogram2.SetLineColor(ROOT.kRed)    # Set line color
histogram2.SetLineWidth(2)              # Set line width
histogram2.SetFillStyle(3004)           # Set fill style

histogram2.Draw("sames")

canvas.Update()

stats_box = histogram2.GetListOfFunctions().FindObject("stats")
stats_box.SetX1NDC(0.65)  # Set X-coordinate of the lower-left corner
stats_box.SetY1NDC(0.65)  # Set Y-coordinate of the lower-left corner
stats_box.SetX2NDC(0.85)  # Set X-coordinate of the upper-right corner
stats_box.SetY2NDC(0.85)  # Set Y-coordinate of the upper-right corner


canvas.Update()

output_file = ROOT.TFile("TEST_MAKING_NEW_HISTOGRAM.root", "RECREATE")
canvas.Write()

output_file.Close()



