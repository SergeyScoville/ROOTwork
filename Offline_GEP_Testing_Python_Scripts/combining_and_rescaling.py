"""
This is a Python script that is going to take in three root files and grab histograms from each, and then display them together on a new histogram. It is also going to scale them, by making the y axis be the ratio of events per bin/ total events, and move the x axis so that it is taking a good range.
"""

import ROOT
import sys
from PIL import Image

try:
    bins = int(sys.argv[4])
except IndexError:
    bins = 0

# Open the ROOT files
file1 = ROOT.TFile(sys.argv[1])
file2 = ROOT.TFile(sys.argv[2])
file3 = ROOT.TFile(sys.argv[3])

# Get the histogram names from each file
histogram1_name = file1.GetListOfKeys()[0].GetName()
histogram2_name = file2.GetListOfKeys()[0].GetName()
histogram3_name = file3.GetListOfKeys()[0].GetName()

hists = [histogram1_name, histogram2_name, histogram3_name]
hist_legend_names = ["", "", ""]

for i in range(len(hists)):
    if "Calo422" in hists[i]:
        hist_legend_names[i] = "Calo_422"
    elif "Calo420" in hists[i]:
        hist_legend_names[i] = "Calo_420"
    elif "CaloCal" in hists[i]:
        hist_legend_names[i] = "Calo_Cal"

# Get the histograms from each file
hist1 = file1.Get(histogram1_name)
hist2 = file2.Get(histogram2_name)
hist3 = file3.Get(histogram3_name)

hist1.SetName(hist_legend_names[0])
hist2.SetName(hist_legend_names[1])
hist3.SetName(hist_legend_names[2])

canvas = ROOT.TCanvas("canvas", "Histograms", 1200, 800)

def find_divisors(number):
    divisors = []
    
    # Iterate from 1 to the given number
    for i in range(1, number + 1):
        if number % i == 0:
            divisors.append(i)
    
    return divisors


def get_last_bin(histogram):
    x_axis = histogram.GetXaxis()
    last_nonempty_bin = None
    for bin in range(histogram.GetNbinsX(), 0, -1):
        if histogram.GetBinContent(bin) > 0:
            last_nonempty_bin = bin
            break

    if last_nonempty_bin is not None:
        return(x_axis.GetBinCenter(last_nonempty_bin))
    

def histogram_modifiers(individual_histograms, xmax, ymax, bins):
    for i in individual_histograms:
        i.GetXaxis().SetRangeUser(0, xmax+50)
        i.GetYaxis().SetRangeUser(0, ymax+0.01)
    return


def get_histograms_ymax(individual_histograms, bins):
    histograms = individual_histograms
    if bins != 0:
        for i in histograms:
            i.Rebin(bins)
    y_max = 0
    for i in histograms:
        if i.GetMaximum() > y_max:
            y_max = i.GetMaximum()
    return y_max


def get_histograms_xmax(individuals_histograms):
    x_max = 0
    for histogram in individuals_histograms:
        if get_last_bin(histogram) > x_max:
            x_max = get_last_bin(histogram)
    return x_max


def set_y_axis_to_bin_ratio(all_histograms):
    for histogram in all_histograms:
        total_events = histogram.GetEntries()
        # Loop over the bins and calculate the ratio
        for i in range(1, histogram.GetNbinsX() + 1):
            bin_content = histogram.GetBinContent(i)
            ratio = bin_content / total_events
    
            histogram.SetBinContent(i, ratio)  # Update the bin content
            histogram.SetBinError(i, 0)  # Set the bin error to zero



bin_options = find_divisors(hist1.GetNbinsX())
if bins == 0:
    print("The options available to rebin your dataset are", str(bin_options), ". To rebin your dataset, add the integer you wish to end of command line prompt and it will divide the number of bins by this integer to give new binning.")




set_y_axis_to_bin_ratio([hist1, hist2, hist3])

x_max = get_histograms_xmax([hist1, hist2, hist3])
y_max = get_histograms_ymax([hist1, hist2, hist3], bins)



histogram_modifiers([hist1, hist2, hist3], x_max, y_max, bins)

#hist1.SetEntries(50)

# Add the overflow to the last visible bin for each histogram
last_bin1 = hist1.GetNbinsX()
overflow_bin_content = hist1.GetBinContent(last_bin1 + 1)
hist1.SetBinContent(last_bin1, hist1.GetBinContent(last_bin1) + overflow_bin_content)

last_bin2 = hist2.GetNbinsX()
overflow_bin_content = hist2.GetBinContent(last_bin2 + 1)
hist2.SetBinContent(last_bin2, hist2.GetBinContent(last_bin2) + overflow_bin_content)

last_bin3 = hist3.GetNbinsX()
overflow_bin_content = hist3.GetBinContent(last_bin3 + 1)
hist3.SetBinContent(last_bin3, hist3.GetBinContent(last_bin3) + overflow_bin_content)

hist1.GetXaxis().SetTitle("Number of Topoclusters")
hist1.GetXaxis().CenterTitle()
hist1.GetXaxis().SetTitleOffset(1.2)
hist1.GetYaxis().SetTitle("Fraction of events")
hist1.GetYaxis().CenterTitle()
hist1.GetYaxis().SetTitleOffset(1.6)
hist1.GetYaxis().SetNdivisions(-6, ROOT.kFALSE) # Removing minor tickmarks


hist1.Draw()
canvas.Update()

stats_box1 = hist1.GetListOfFunctions().FindObject("stats")
stats_box1.SetTextSize(0.025)
stats_box1.SetX1NDC(0.8)  # Set X-coordinate of the lower-left corner
stats_box1.SetY1NDC(0.8)  # Set Y-coordinate of the lower-left corner
stats_box1.SetX2NDC(0.95)  # Set X-coordinate of the upper-right corner
stats_box1.SetY2NDC(0.95)  # Set Y-coordinate of the upper-right corner


hist2.SetLineColor(ROOT.kRed)
hist2.Draw("SAMES")

canvas.Update()

stats_box2 = hist2.GetListOfFunctions().FindObject("stats")
stats_box2.SetTextSize(0.025)
stats_box2.SetX1NDC(0.8)  # Set X-coordinate of the lower-left corner
stats_box2.SetY1NDC(0.65)  # Set Y-coordinate of the lower-left corner
stats_box2.SetX2NDC(0.95)  # Set X-coordinate of the upper-right corner
stats_box2.SetY2NDC(0.8)


hist3.SetLineColor(ROOT.kGreen)
hist3.Draw("SAMES")

canvas.Update()

stats_box3 = hist3.GetListOfFunctions().FindObject("stats")
stats_box3.SetTextSize(0.025)
stats_box3.SetX1NDC(0.8)  # Set X-coordinate of the lower-left corner
stats_box3.SetY1NDC(0.5)  # Set Y-coordinate of the lower-left corner
stats_box3.SetX2NDC(0.95)  # Set X-coordinate of the upper-right corner
stats_box3.SetY2NDC(0.65)

hist1.SetTitle("Number of Topoclusters measured with offline GEP algorithms")
canvas.SetName("All_GEP_Algo")
canvas.Update()

legend = ROOT.TLegend(0.6,0.6,0.75,0.75)    # Add a legend near the top right corner
legend.AddEntry(hist1,hist_legend_names[0])               # Add the MC histogram, labelled as "MC"
legend.AddEntry(hist2,hist_legend_names[1])           # Add the data points, labelled as "Data"
legend.AddEntry(hist3, hist_legend_names[2])
legend.SetTextSize(0.03)
#legend.SetLineWidth(0)                      # Remove the boundary on the legend
legend.Draw("same")  

canvas.Update()
ROOT.gEnv.SetValue("Hist.PictureCompress", 1)

canvas.SaveAs("combining_and_rescaling_TESTING.png")
canvas.SaveSource("combining_and_rescaling_10_rebin_TESTING.C")

output_file = ROOT.TFile("combined_histograms_"+str(bins)+"_rebin.root", "RECREATE")
canvas.Write()

output_file.Close()

file1.Close()
file2.Close()
file3.Close()