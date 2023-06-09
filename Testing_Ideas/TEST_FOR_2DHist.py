import ROOT
import sys

file = ROOT.TFile("/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/hist_Et2p0_5eta.root")

hist_eta = file.Get("h_Calo422TopoClusters_eta")
hist_phi = file.Get("h_Calo422TopoClusters_phi")

hist_eta.Rebin(3)
#hist_eta.Scale(1.0 / hist_eta.Integral())


# Normalize hist_phi
hist_phi.Rebin(3)
#hist_phi.Scale(1.0 / hist_phi.Integral())

# Create a canvas to draw the plot
canvas = ROOT.TCanvas("canvas", "2D Plot", 800, 600)

# Create a 2D histogram to combine the data
hist_2d = ROOT.TH2F("hist_2d", "Combined 2D Histogram", hist_eta.GetNbinsX(), hist_eta.GetXaxis().GetXmin(), hist_eta.GetXaxis().GetXmax(), hist_phi.GetNbinsX(), hist_phi.GetXaxis().GetXmin(), hist_phi.GetXaxis().GetXmax())

threshold = 45*10**6
# Fill the 2D histogram using the data from the individual histograms
for bin_eta in range(1, hist_eta.GetNbinsX() + 1):
    eta = hist_eta.GetXaxis().GetBinCenter(bin_eta)
    for bin_phi in range(1, hist_phi.GetNbinsX() + 1):
        phi = hist_phi.GetXaxis().GetBinCenter(bin_phi)
        content = hist_eta.GetBinContent(bin_eta) * hist_phi.GetBinContent(bin_phi)
        if content > threshold:
            hist_2d.Fill(eta, phi, content)

hist_2d.SetContour(256)

# Set the bin color palette
#palette = ROOT.TColorPalette(0)
#palette.SetPalette("white")  # Set white as the color for zero content bins
#hist_2d.SetContourPalette(palette.GetPalette())


# Draw the 2D histogram
hist_2d.Draw("COLZ")


# Set the axis titles
hist_2d.GetXaxis().SetTitle("Eta")
hist_2d.GetYaxis().SetTitle("Phi")

# Update the plot
canvas.Update()

# Save the plot as an image file
canvas.SaveAs("plot_2d.png")