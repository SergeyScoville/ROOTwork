"""
This is for specifically making plots that compare different topoclustering algorithms, namely 422 and 420. This runs from command line with a set of arguments that are documented below. You do need to change the filepath for file1 and file2 to be whereever you are pulling the files from. An example of what a command line prompt to run this looks like:

python3 TEST_COMPARE_SPLIT_NO_SPLIT.py hist_Et0p0.root 4 0.0 0.5 0.25 0.05 0.04 0.55 422

This being that we are running this from the same directory that the .py file lives in. 
"""

import ROOT
import sys
from helper_functions import *

stylistic = apply_atlas_style()
ROOT.gROOT.SetStyle("AtlasStyle")

bins                = int(sys.argv[2])      # Sets the number that we rebin to, initially 2500 bins for these files
cut                 = sys.argv[3]           # Sets the specific E_T cut
legend_adjustment_x = float(sys.argv[4])    # Sets the additional x position where the legend starts, range from 0 to 1
legend_adjustment_y = float(sys.argv[5])    # Sets the additional y position where the legend starts, range from 0 to 1
TPave_textsize      = float(sys.argv[6])    # Sets the size of the ATLAS Simulation and related text, three options built in: 0.03, 0.04, 0.05
legend_fontsize     = sys.argv[7]           # Sets the size of the legend text, two options built in: 0.03, 0.04
TPave_start         = float(sys.argv[8])    # Sets the starting position of the ATLAS Simulation and related test, range from 0 to 1
algorithm           = sys.argv[9]           # Sets the algorithm that you will be plotting. Options: 422, 420
esection            = sys.argv[10]          # Can be used to set a specific eta region that you are plotting. Options: [N1, N2, N3, N4, N5, N, --all]

# These two flags are for the front-summed cumulative distribution, generally do --log and --cd at the same time
logarithm = False
cum = False
if "--log" in sys.argv:
    logarithm = True
if "--cd" in sys.argv:
    cum = True

# These are the eta regions that are outlined in some of the files
regions = ["N1", "N2", "N3", "N4", "N5", "N"]

# This just creates the name of the file that is named in this convention: Et cut, rebin, feature we are graphing, algorithm we are comparing, if we applied SK or not, what the plot is comparing. Saves both png and pdf, but pdf is much higher quality
def save_files(canvas, esection):
    filepaths = "/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Doc/Splitting_Vs_NoSplitting_Aug7/"
    extensions = ""
    extensions += get_save_file_name(sys.argv[1], bins, "N")
    extensions += "_"+algorithm
    extensions += "_SK"
    if logarithm:
        extensions += "_NLOG"
    if cum:
        extensions += "_CD"
    extensions += "_NoSplittingVsSplitting"
    canvas.SaveAs(filepaths+"Plots/"+extensions+"_"+esection+".png")
    canvas.SaveAs(filepaths+"Plots_PDFs/"+extensions+"_"+esection+".pdf")
    return


#This does the plotting full script, has some checks to see what algorithm we are plotting
def plot_algorithm(histograms, canvas, esection):
    hist1 = histograms[0]
    hist2 = histograms[1]

    if algorithm == "422":
        hist1.SetName("Global Calo 422")
        hist2.SetName("Offline Calo 422")
        hist1.SetTitle("Offline vs. Global SK Calo 422")
    elif algorithm == "420":
        hist1.SetName("Global Calo 420")
        hist2.SetName("Offline Calo 420")
        hist1.SetTitle("Offline vs. Global SK Calo 420")        

    # These block of functions originate in helper_functions.py
    set_y_axis_to_bin_ratio(histograms)
    xmax = get_histograms_xmax(histograms)
    ymax = get_histograms_ymax(histograms, bins)
    N_dist_axis_set([hist1, hist2], xmax, ymax, logarithm = logarithm)
    overflow_bin_set([hist1, hist2])

    if logarithm:
        canvas.SetLogy()
    hist1.GetXaxis().SetTitle("Number of Topoclusters")
    if bins != 0:
        hist1.GetYaxis().SetTitle("Fraction of Events/"+str(bins)+ " TC")
    else:
        hist1.GetYaxis().SetTitle("Fraction of Events/TC")
    hist1.SetFillColorAlpha(ROOT.kBlue, 0.1)
    hist1.SetFillStyle(3144)
    hist1.SetLineWidth(2)
    hist1.Sumw2()
    # This will make the plot into a cumulative distribution, ROOT.kFALSE sets it so it sums in front, i.e. maximum at first bin, minimum at last volumed bin.
    if cum:
        hist1 = hist1.GetCumulative(ROOT.kFALSE)
    hist1.Draw("hist")
    canvas.Update()

    # This is writing the ATLAS Simulation and E_t cut and other information, comment it out if you don't want it
    atlas, sim_internal, hl, min_bia = write_all_but_ETC(TPave_start, TPave_textsize)
    etcut = write_ET_cut(TPave_start, TPave_textsize, cut)
    atlas.Draw()
    sim_internal.Draw()
    hl.Draw()
    min_bia.Draw()
    etcut.Draw()
    canvas.Update()

    hist2.Sumw2(0)
    hist2.SetLineColor(ROOT.kRed)
    hist2.SetLineWidth(2)
    if cum:
        hist2 = hist2.GetCumulative(ROOT.kFALSE)
    hist2.Draw("same")
    canvas.Update()

    legend_sizes = {"0.03": ROOT.TLegend(legend_adjustment_x + 0.2, legend_adjustment_y + 0.3,legend_adjustment_x + 0.3, legend_adjustment_y + 0.42), "0.04": ROOT.TLegend(legend_adjustment_x + 0.2, legend_adjustment_y + 0.3,legend_adjustment_x + 0.33, legend_adjustment_y + 0.42)}
    legend = legend_sizes[legend_fontsize]
    if algorithm == "422":
        legend.AddEntry(hist1, "Offline Calo 422")
        legend.AddEntry(hist2, "Global Calo 422")
    elif algorithm == "420":
        legend.AddEntry(hist1, "Offline Calo 420")
        legend.AddEntry(hist2, "Global Calo 420")
    legend.SetTextSize(legend_fontsize)
    legend.Draw("same")
    canvas.Update()
    save_files(canvas, esection)
    return


# Need to change the filepath for your own place that you are putting these files
file1 = ROOT.TFile("/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/27Jul_NoSplitting/"+sys.argv[1])
file2 = ROOT.TFile("/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/18Jul_splitting/"+sys.argv[1])

canvas = ROOT.TCanvas("canvas", "Histograms", 1200, 800)
canvas.Update()

if esection == "--all":
    for i in regions:
        histogram1 = file1.Get("h_Calo422GlSKTopoClusters_"+i)
        histogram2 = file2.Get("h_Calo422SKclusters_"+i)
        plot_algorithm([histogram1, histogram2], canvas, i)
else:
    histogram1 = file1.Get("h_Calo422GlSKTopoClusters_"+esection)
    histogram2 = file2.Get("h_Calo422SKclusters_"+esection)
    plot_algorithm([histogram1, histogram2], canvas, esection) 