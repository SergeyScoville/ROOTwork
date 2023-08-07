import ROOT
import sys
from array import array
from helper_functions import *

stylistic = apply_atlas_style()
ROOT.gROOT.SetStyle("AtlasStyle")

bins                = int(sys.argv[2])      # Sets the number that we rebin to, initially 2500 bins for these files
cut                 = sys.argv[3]           # Sets the specific E_T cut
legend_adjustment_x = float(sys.argv[4])    # Sets the additional x position where the legend starts, range from 0 to 1
legend_adjustment_y = float(sys.argv[5])    # Sets the additional y position where the legend starts, range from 0 to 1
TPave_textsize      = float(sys.argv[6])    # Sets the size of the ATLAS Simulation and related text, three options built in: 0.03, 0.04, 0.05
legend_fontsize     = float(sys.argv[7])    # Sets the size of the legend text, two options built in: 0.03, 0.04
TPave_start         = float(sys.argv[8])    # Sets the starting position of the ATLAS Simulation and related test, range from 0 to 1

logarithm = False
cum = False
if "--log" in sys.argv:
    logarithm = True
if "--cd" in sys.argv:
    cum = True

regions = ["N1", "N2", "N3", "N4", "N5", "N"]

def save_files(canvas, esection):
    filepaths = "/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Doc/Splitting_Vs_NoSplitting_Aug7"
    extensions = "_SK"
    if logarithm:
        extensions += "_NLOG"
    if cum:
        extensions += "_CD"
    extensions += "_NoSplittingVsSplitting"
    canvas.SaveAs(filepaths+"Plots/Plots_w_SK/"+extensions+esection+".png")
    canvas.SaveAs(filepaths+"Plots_PDFs/Plots_PDFs_w_SK/"+extensions+esection+".pdf")
    return


def set_legend(hist1, hist2, canvas):
    legend_sizes = {"0.03": ROOT.TLegend(legend_adjustment_x + 0.2, legend_adjustment_y + 0.3,legend_adjustment_x + 0.3, legend_adjustment_y + 0.42), "0.04": ROOT.TLegend(legend_adjustment_x + 0.2, legend_adjustment_y + 0.3,legend_adjustment_x + 0.33, legend_adjustment_y + 0.42)}
    legend = legend_sizes[legend_fontsize]
    legend.AddEntry(hist1)
    legend.AddEntry(hist2)
    legend.SetTextSize(float(sys.argv[7]))
    legend.Draw("same")
    canvas.Update()
    return


def plot_422(histograms, canvas, esection):
    hist1 = histograms[0]
    hist2 = histograms[1]

    hist1.SetName("Global Calo 422")
    hist2.SetName("Offline Calo 422")

    set_y_axis_to_bin_ratio(histograms)
    xmax = get_histograms_xmax(histograms)
    ymax = get_histograms_ymax(histograms)
    hist_title = "Offline vs. Global SK on Calo 422"
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
    if cum:
        hist1 = hist1.GetCumulative(ROOT.kFALSE)
    hist1.Draw("hist")
    canvas.Update()


    starting = float(sys.argv[8])

    atlas, sim_internal, hl, min_bia = write_all_but_ETC(starting, sys.argv[6])
    atlas.Draw()
    sim_internal.Draw()
    hl.Draw()
    min_bia.Draw()
    canvas.Update()


    if "NoCut" not in get_save_file_name(sys.argv[1], bins, "N"):
        etcut = write_ET_cut(starting, sys.argv[6], cut)
        etcut.Draw()
        canvas.Update()

    hist2.Sumw2(0)
    hist2.SetLineColor(ROOT.kRed)
    #hist2.SetFillColorAlpha(ROOT.kRed, 0.1)
    #hist2.SetFillStyle(3490)
    hist2.SetLineWidth(2)
    if cum:
        hist2 = hist2.GetCumulative(ROOT.kFALSE)
    hist2.Draw("hist same")
    canvas.Update()

    set_legend(hist1, hist2, canvas)
    save_files(canvas, esection)
    return

# Need to change the filepath for your own place that you are putting these files
file1 = ROOT.TFile("/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/27Jul_NoSplitting/hist_Et0p0.root")
file2 = ROOT.TFile("/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/18Jul_splitting/hist_Et0p0.root")


histogram1 = file1.Get("h_Calo422GlSKTopoClusters_N1")
histogram2 = file2.Get("h_Calo422SKclusters_N1")

canvas = ROOT.TCanvas("canvas", "Histograms", 1200, 800)
canvas.Update()

plot_422([histogram1, histogram2], canvas, "_N1")
