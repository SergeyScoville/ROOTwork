import ROOT

# Create a 2D histogram with random values
hist = ROOT.TH2F("hist", "2D Histogram", 10, 0, 10, 10, 0, 10)
random = ROOT.TRandom3()
for i in range(1000):
    x = random.Uniform(0, 10)
    y = random.Uniform(0, 10)
    hist.Fill(x, y)

# Create a TGraph to visualize the histogram
graph = ROOT.TGraph()

# Loop over the bins of the histogram and add points to the graph
nx = hist.GetNbinsX()
ny = hist.GetNbinsY()
for i in range(1, nx + 1):
    for j in range(1, ny + 1):
        binContent = hist.GetBinContent(i, j)
        binSize = binContent ** 0.5  # Use square root for size
        x = hist.GetXaxis().GetBinCenter(i)
        y = hist.GetYaxis().GetBinCenter(j)
        graph.SetPoint(graph.GetN(), x, y)
        graph.SetMarkerSize(binSize)

# Create a canvas and draw the graph
canvas = ROOT.TCanvas("canvas", "2D Histogram", 800, 800)
hist.Draw("COLZ")
graph.Draw("P")


canvas.Update()
ROOT.gApplication.Run()


# Cleanup
del hist
del graph

