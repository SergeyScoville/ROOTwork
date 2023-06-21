"""
Making N distribution graphs. Command line prompt: python3 Singlefile_N_distributions.py filepath bins ETcut --log --CD --sk --test --onoff algorithm (if you do --onoff)
"""

import ROOT
import sys
from array import array
from helper_functions import *

stylistic = apply_atlas_style()
ROOT.gROOT.SetStyle("AtlasStyle")

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
    hist1 = file.Get("h_Calo"+sys.argv[-1]+"SKclusters_N")
    hist2 = file.Get("h_Calo"+sys.argv[-1]+"SKTopoClusters_N")
    hist3 = file.Get("h_CaloCalSKclusters_N")
else:
    hist1 = file.Get("h_Calo422TopoClusters_N") # Change for pre versus post sk: Calo422TopoClusters_N -> Calo422SKclusters_N
    hist2 = file.Get("h_Calo420TopoClusters_N") # Change for pre versus post sk: Calo420TopoClusters_N -> Calo420SKclusters_N
    hist3 = file.Get("h_CaloCalTopoClusters_N") # Change for pre versus post sk: CaloCalTopoClusters_N -> CaloCalSKclusters_N
if "--onoff" in sys.argv:
    hist_legend_names = [sys.argv[-1]+"-Global SK", sys.argv[-1]+"-Offline SK", "Calo Cal"]
else:
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

hist_titles = ["Number of Topoclusters", "Number of Topoclusters post SK", "Cumulative Number of Topoclusters", "Cumulative Number of Topoclusters post SK"]

if "--sk" in sys.argv and "--cd" in sys.argv:
    hist1.SetTitle(hist_titles[3])
elif "--cd" in sys.argv and "--sk" not in sys.argv:
    hist1.SetTitle(hist_titles[2])
elif "--cd" not in sys.argv and "--sk" in sys.argv:
    hist1.SetTitle(hist_titles[1])
else:
    hist1.SetTitle(hist_titles[0])   
cut = sys.argv[3]
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

starting = 0.55

atlas = write_ATLAS(starting)
sim_internal = write_sim_internal(starting)
hl = write_HL(starting)
min_bia = write_min_bias(starting)
atlas.Draw()
sim_internal.Draw()
hl.Draw()
min_bia.Draw()
canvas.Update()

if "NoCut" not in get_save_file_name(sys.argv[1], bins, "N"):
    etcut = write_ET_cut(starting, cut)
    etcut.Draw()
    canvas.Update()

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
if "NoCut" in get_save_file_name(sys.argv[1], bins, plotting) and "--onoff" not in sys.argv:
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
    legend = ROOT.TLegend(legend_start, 0.5, legend_start + 0.165, 0.62)
#elif "2.0" in sys.argv or "1.5" in sys.argv:
    #legend = ROOT.TLegend(.7, 0.5, 0.81, 0.62)
#elif "1.0" in sys.argv:
    #legend = ROOT.TLegend(.7, 0.5, 0.81, 0.62)
    #legend = ROOT.TLegend(0.2, 0.3, 0.31, 0.42)
else:
    legend = ROOT.TLegend(legend_adjustment + 0.2,0.3,legend_adjustment + 0.365,0.42)

legend.AddEntry(hist1,hist_legend_names[0].replace("_", " ")) 
legend.AddEntry(hist2,hist_legend_names[1].replace("_", " "), "l") 
if third_histogram:
    legend.AddEntry(hist3, hist_legend_names[2].replace("_", " "), "l") 
hist1.GetXaxis().SetTitleSize(0.04)
hist1.GetYaxis().SetTitleSize(0.04)
legend.SetTextSize(0.05)
#legend.SetLineWidth(0)                      # Remove the boundary on the legend
legend.Draw("same")  

canvas.Update()

filepaths = "/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Doc/"
extensions = ""
if softie:
    extensions += get_save_file_name(sys.argv[1], bins, "N")+"_SK"
else:
    extensions += get_save_file_name(sys.argv[1], bins, "N")
if logarithm:
    extensions += "_NLOG"
if cum:
    extensions += "_CD"
if testing:
    extensions += "_TESTING"


if "--sk" in sys.argv:
    canvas.SaveAs(filepaths+"Plots/Plots_w_SK/"+extensions+".png")
    canvas.SaveAs(filepaths+"Plots_PDFs/Plots_PDFs_w_SK/"+extensions+".pdf")
    canvas.SaveSource(filepaths+"Source_Files/Source_Files_w_SK/"+extensions+".C")
    output_file = ROOT.TFile(filepaths+"ROOT_files/ROOT_files_w_SK/"+extensions+".root", "RECREATE")
    canvas.Write()
else:
    canvas.SaveAs(filepaths+"Plots/Plots_No_SK/"+extensions+".png")
    canvas.SaveAs(filepaths+"Plots_PDFs/Plots_PDFs_No_SK/"+extensions+".pdf")
    canvas.SaveSource(filepaths+"Source_Files/Source_Files_No_SK/"+extensions+".C")
    output_file = ROOT.TFile(filepaths+"ROOT_files/ROOT_files_No_SK/"+extensions+".root", "RECREATE")
    canvas.Write()

output_file.Close()