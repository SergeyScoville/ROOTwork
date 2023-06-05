import ROOT

file = ROOT.TFile("myfile_hist.root")
histogram = file.Get("h_Calo422TopoClusters_N")

histogram.Rebin(5)

x_max = 500
new_histogram = ROOT.TH1F("new_hist", "Variable Binning", 500, 0, 2500)

new_histogram.Sumw2()
new_histogram.Add(histogram)

canvas = ROOT.TCanvas("canvas", "Histograms", 800, 600)

new_histogram.GetXaxis().SetRangeUser(0, x_max+50)
new_histogram.Draw()

output_file = ROOT.TFile("testing.root", "RECREATE")
canvas.Write()

output_file.Close()

file.Close()


