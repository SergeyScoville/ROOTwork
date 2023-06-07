import ROOT
import numpy as np

# Create a canvas
canvas = ROOT.TCanvas("canvas", "Histograms", 800, 600)

# Define the number of bins and range for the histograms
nbins = 50
xmin = 0
xmax = 100

# Generate random data for the histograms
data1 = np.random.normal(50, 10, 1000)  # Example: Generate 1000 random numbers with mean=50 and standard deviation=10
data2 = np.random.normal(70, 15, 1500)  # Example: Generate 1500 random numbers with mean=70 and standard deviation=15

# Create the first histogram and fill it with data1
hist1 = ROOT.TH1F("hist1", "Dataset 1", nbins, xmin, xmax)
for value in data1:
    hist1.Fill(value)

# Create the second histogram and fill it with data2
hist2 = ROOT.TH1F("hist2", "Dataset 2", nbins, xmin, xmax)
for value in data2:
    hist2.Fill(value)

# Set the fill color of the histograms
hist1.SetFillColor(ROOT.kBlue)
hist2.SetFillColor(ROOT.kRed)

# Draw the first histogram
hist1.Draw()

canvas.Update()

stats_box1 = hist1.GetListOfFunctions().FindObject("stats")
stats_box1.SetX1NDC(0.8)  # Set X-coordinate of the lower-left corner
stats_box1.SetY1NDC(0.8)  # Set Y-coordinate of the lower-left corner
stats_box1.SetX2NDC(0.95)  # Set X-coordinate of the upper-right corner
stats_box1.SetY2NDC(0.95)  # Set Y-coordinate of the upper-right corner


# Draw the second histogram on the same canvas with "SAME" option
hist2.Draw("SAMES")

canvas.Update()

stats_box2 = hist2.GetListOfFunctions().FindObject("stats")
stats_box2.SetX1NDC(0.8)  # Set X-coordinate of the lower-left corner
stats_box2.SetY1NDC(0.65)  # Set Y-coordinate of the lower-left corner
stats_box2.SetX2NDC(0.95)  # Set X-coordinate of the upper-right corner
stats_box2.SetY2NDC(0.8)

# Create a legend
legend = ROOT.TLegend(0.1, 0.7, 0.3, 0.9)
legend.AddEntry(hist1, "Dataset 1", "f")   # Add entry for hist1 with a solid fill
legend.AddEntry(hist2, "Dataset 2", "f")   # Add entry for hist2 with a solid fill
legend.Draw()

canvas.Update()
# Save the canvas as an image file
canvas.SaveAs("histograms_1.png")

# Save the histograms to a ROOT file
output_file = ROOT.TFile("TEST_EASY_EXAMPLE.root", "RECREATE")
canvas.Write()
output_file.Close()

