import ROOT
import sys

file1 = ROOT.TFile(sys.argv[1])
file2 = ROOT.TFile(sys.argv[2])

histogram1_name = file1.GetListOfKeys()[0].GetName()
histogram2_name = file2.GetListOfKeys()[0].GetName()

hist_phi = file1.Get(histogram1_name)
hist_eta = file2.Get(histogram2_name)

hist_eta.Rebin(4)
hist_eta.Scale(1.0 / hist_eta.Integral())


# Normalize hist_phi
hist_phi.Rebin(4)
hist_phi.Scale(1.0 / hist_phi.Integral())



# Create a 2D histogram
hist_2d = ROOT.TH2F("hist_2d", "Eta vs. Phi", hist_phi.GetNbinsX(), hist_phi.GetXaxis().GetXmin(), hist_phi.GetXaxis().GetXmax(), hist_eta.GetNbinsX(), hist_eta.GetXaxis().GetXmin(), hist_eta.GetXaxis().GetXmax())

# Fill the 2D histogram with data from the existing histograms
for i in range(1, hist_2d.GetNbinsX() + 1):
    for j in range(1, hist_2d.GetNbinsY() + 1):
        content = hist_eta.GetBinContent(j) * hist_phi.GetBinContent(i)
        hist_2d.SetBinContent(i, j, content)

# Create a canvas to draw the plot
canvas = ROOT.TCanvas("canvas", "2D Plot", 800, 600)

# Draw the 2D histogram
hist_2d.Draw("COLZ")

hist_2d.SetStats(0)

# Set the axis titles
hist_2d.GetXaxis().SetTitle("Phi")
hist_2d.GetYaxis().SetTitle("Eta")

# Update the plot
canvas.Update()

# Save the plot as an image file
canvas.SaveAs("plot_2d.png")