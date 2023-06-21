"""
Making N distribution graphs. Command line prompt: python3 Singlefile_N_distributions.py filepath bins title ETcut --log --CD --sk --test
"""

import ROOT
import sys
from array import array
from helper_functions import *

apply_atlas_style()

bins = int(sys.argv[2])

cum = False
logarithm = False
softie = False
testing = False
if "--sk" in sys.argv:
    softie = True
if "--CD" in sys.argv:
    cum = True
if "--log" in sys.argv:
    logarithm = True
if "--test" in sys.argv:
    testing = True

file = ROOT.TFile(sys.argv[1])
plotting = sys.argv[2]
if "--sk" in sys.argv:
    hist1 = file.Get("h_Calo422SKclusters_N")
    hist2 = file.Get("h_Calo420SKclusters_N")
    hist3 = file.Get("h_CaloCalSKclusters_N")
elif "--onvoff" in sys.argv:
    hist1 = file.Get"h
else:
    hist1 = file.Get("h_Calo422TopoClusters_N") # Change for pre versus post sk: Calo422TopoClusters_N -> Calo422SKclusters_N
    hist2 = file.Get("h_Calo420TopoClusters_N") # Change for pre versus post sk: Calo420TopoClusters_N -> Calo420SKclusters_N
    hist3 = file.Get("h_CaloCalTopoClusters_N") # Change for pre versus post sk: CaloCalTopoClusters_N -> CaloCalSKclusters_N

hist_legend_names = ["Calo 422", "Calo 420", "Calo Cal"]

hist1.SetName(hist_legend_names[0])
hist2.SetName(hist_legend_names[1])
hist3.SetName(hist_legend_names[2])

canvas = ROOT.TCanvas("canvas", "Histograms", 1200, 800)
if "--log" in sys.argv:
    canvas.SetLogy()
canvas.Update()

bin_options = find_divisors(hist1.GetNbinsX())
if bins == 0 and "--suppressbins" not in sys.argv:
    print("The options available to rebin your dataset are", str(bin_options), ". To rebin your dataset, add the integer you wish to end of command line prompt and it will divide the number of bins by this integer to give new binning.")


histogram_total = []
for i in [hist1, hist2, hist3]:
    histogram_total.append(i.GetEntries())

set_y_axis_to_bin_ratio([hist1, hist2, hist3])

x_max = get_histograms_xmax([hist1, hist2, hist3])
y_max = get_histograms_ymax([hist1, hist2, hist3], bins)


hist1.SetTitle(sys.argv[3].replace("_", " "))
cut = sys.argv[4]
N_dist_axis_set([hist1, hist2, hist3], x_max, y_max, logarithm=logarithm)


overflow_bin_set([hist1, hist2, hist3])

hist1.GetXaxis().SetTitle("Number of Topoclusters")
hist1.GetYaxis().SetTitle("Fraction of Events/"+str(bins)+ " TC")

hist1.SetFillColorAlpha(ROOT.kBlue, 0.1)
hist1.SetFillStyle(3144)
hist1.SetLineWidth(2)
hist1.Sumw2()
if cum:
    hist1 = hist1.GetCumulative(ROOT.kFALSE)
hist1.Draw("hist")
canvas.Update()

starting = 0.6

write_ATLAS(starting).Draw()
write_sim_internal(starting).Draw()
write_HL(starting).Draw()
write_min_bias(starting).Draw()

if "NoCut" not in get_save_file_name(sys.argv[1], bins, "N"):
    write_ET_cut(starting, cut).Draw()

hist2.Sumw2(0)
hist2.SetLineColor(ROOT.kRed)
#hist2.SetFillColorAlpha(ROOT.kRed, 0.1)
#hist2.SetFillStyle(3490)
hist2.SetLineWidth(2)
if cum:
    hist2 = hist2.GetCumulative(ROOT.kFALSE)
hist2.SetEntries(histogram_total[1])
hist2.Draw("hist same")
canvas.Update()

hist3.SetLineColor(ROOT.kGreen+2)

hist3.Sumw2()
third_histogram = False
if "NoCut" in get_save_file_name(sys.argv[1], bins, plotting):
    third_histogram = True
    hist3.SetLineWidth(2)
    if cum:
        hist3 = hist3.GetCumulative(ROOT.kFALSE)
    hist3.SetEntries(histogram_total[2])
    hist3.Draw("hist SAME")
    #hist3.SetFillColorAlpha(ROOT.kGreen-2, 0.1)
    canvas.Update()

canvas.SetName("All_GEP_Algo")
canvas.Update()

legend_start = 0.8
legend_adjustment = 0
if third_histogram:
    legend = ROOT.TLegend(legend_start, 0.5, legend_start + 0.11, 0.62)
#elif "2.0" in sys.argv or "1.5" in sys.argv:
    #legend = ROOT.TLegend(.7, 0.5, 0.81, 0.62)
#elif "1.0" in sys.argv:
    #legend = ROOT.TLegend(.7, 0.5, 0.81, 0.62)
    #legend = ROOT.TLegend(0.2, 0.3, 0.31, 0.42)
else:
    legend = ROOT.TLegend(legend_adjustment + 0.2,0.5,legend_adjustment + 0.31,0.62)

legend.AddEntry(hist1,hist_legend_names[0].replace("_", " ")) 
legend.AddEntry(hist2,hist_legend_names[1].replace("_", " "), "l") 
if third_histogram:
    legend.AddEntry(hist3, hist_legend_names[2].replace("_", " "), "l") 

legend.SetTextSize(0.03)
#legend.SetLineWidth(0)                      # Remove the boundary on the legend
legend.Draw("same")  

canvas.Update()

filepaths = "/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Doc/Plots/"
if softie:
    filepaths += "Plots_w_SK/"+get_save_file_name(sys.argv[1], bins, "N")+"_SK"
else:
    filepaths += "Plots_No_SK/"+get_save_file_name(sys.argv[1], bins, "N")
if logarithm:
    filepaths += "_NLOG"
if cum:
    filepaths += "_CD"
if testing:
    filepaths += "_TESTING"


if "--sk" in sys.argv:
    canvas.SaveAs(filepaths+".png")
    canvas.SaveAs(filepaths+".pdf")
    canvas.SaveSource(filepaths+".C")
    output_file = ROOT.TFile(filepaths+".root", "RECREATE")
    canvas.Write()
else:
    canvas.SaveAs(filepaths+".png")
    canvas.SaveAs(filepaths+".pdf") 
    canvas.SaveSource(filepaths+".C")
    output_file = ROOT.TFile(filepaths+".root", "RECREATE")
    canvas.Write()

output_file.Close()