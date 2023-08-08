"""
Making N distribution graphs. Command line prompt: python3 Singlefile_N_distributions.py filepath bins ETcut legend_adjustment_x legend_adjustment_y TPave_textsize TPave_start legendfont etasection --log --cd --sk --test 

example command line prompt:

python3 TESTING_log_errors.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/18Jul_splitting/hist_Et0p0.root 4 0.0 0.55 0.25 0.05 .55 0.04 --all
"""

import ROOT
import sys
from array import array
from helper_functions import *

stylistic = apply_atlas_style()
ROOT.gROOT.SetStyle("AtlasStyle")

root_file                   = sys.argv[1]           # This is the input ROOT file that we are plotting
bins                        = int(sys.argv[2])      # Sets the number that we rebin to, initially 2500 bins for these files
cut                         = sys.argv[3]           # Sets the specific E_T cut
legend_adjustment_x         = float(sys.argv[4])    # Sets the additional x position where the legend starts, range from 0 to 1
legend_adjustment_y         = float(sys.argv[5])    # Sets the additional y position where the legend starts, range from 0 to 1
TPave_fontsize              = sys.argv[6]           # Sets the size of the ATLAS Simulation and related text, three options built in: 0.03, 0.04, 0.05
TPave_start                 = float(sys.argv[7])    # Sets the starting position of the ATLAS Simulation and related test, range from 0 to 1
legend_font                 = float(sys.argv[8])    # Sets the size of the legend text, two options built in: 0.03, 0.04
esection                    = sys.argv[9]           # Can be used to set a specific eta region that you are plotting. Options: [N1, N2, N3, N4, N5, N, --all]

# These are the eta regions that are outlined in some of the files
regions = ["N1", "N2", "N3", "N4", "N5"]


cum             = False
logarithm       = False
softie          = False
testing         = False
splitting       = True
if "--sk" in sys.argv:
    softie      = True
if "--cd" in sys.argv:
    cum         = True
if "--log" in sys.argv:
    logarithm   = True
if "--test" in sys.argv:
    testing     = True
if "--nosplitting" in sys.argv:
    splitting   = False


def plot_N_dist(root_file, esection, fileName):
    file = root_file
    if "--sk" in sys.argv:
        hist1 = file.Get("h_Calo422GlSKTopoClusters_"+esection)
        hist2 = file.Get("h_Calo420GlSKTopoClusters_"+esection)
    else:
        hist1 = file.Get("h_Calo422TopoClusters_"+esection) # Change for pre versus post sk: Calo422TopoClusters_N -> Calo422SKclusters_N
        hist2 = file.Get("h_Calo420TopoClusters_"+esection) # Change for pre versus post sk: Calo420TopoClusters_N -> Calo420SKclusters_N
    hist_legend_names = ["Calo 422", "Calo 420"]

    hist1.SetName(hist_legend_names[0])
    hist2.SetName(hist_legend_names[1])

    canvas = ROOT.TCanvas("canvas", "Histograms", 1200, 800)
    canvas.Update()

    bin_options = find_divisors(hist1.GetNbinsX())
    if bins == 0 and "--suppressbins" not in sys.argv:
        print("The options available to rebin your dataset are", str(bin_options), ". To rebin your dataset, add the integer you wish to end of command line prompt and it will divide the number of bins by this integer to give new binning.")


    histogram_total = []
    for i in [hist1, hist2]:
        histogram_total.append(i.GetEntries())

    # These are all functions from helper_functions.py
    set_y_axis_to_bin_ratio([hist1, hist2])
    x_max = get_histograms_xmax([hist1, hist2])
    y_max = get_histograms_ymax([hist1, hist2], bins)
    N_dist_axis_set([hist1, hist2], x_max, y_max, logarithm=logarithm)
    overflow_bin_set([hist1, hist2])

    # There are a few options for different titles so this tries to cover all the common variations, was easier than making it a command line prompt
    hist_titles = ["Number of Topoclusters", "Number of Topoclusters post SK", "Cumulative Number of Topoclusters", "Cumulative Number of Topoclusters post SK"]

    if "--sk" in sys.argv and "--cd" in sys.argv:
        hist1.SetTitle(hist_titles[3])
    elif "--cd" in sys.argv and "--sk" not in sys.argv:
        hist1.SetTitle(hist_titles[2])
    elif "--cd" not in sys.argv and "--sk" in sys.argv:
        hist1.SetTitle(hist_titles[1])
    else:
        hist1.SetTitle(hist_titles[0])   

    if "--log" in sys.argv:
        canvas.SetLogy()

    hist1.GetXaxis().SetTitle("Number of Topoclusters")
    if bins != 0:
        hist1.GetYaxis().SetTitle("Fraction of Events/"+str(bins)+ " TC")
    else:
        hist1.GetYaxis().SetTitle("Fraction of Events/TC")

    # This is just setting a few specifics of the color, and fill style of the first histogram, usually Calo 422
    hist1.SetFillColorAlpha(ROOT.kBlue, 0.1)
    hist1.SetFillStyle(3144)
    hist1.SetLineWidth(3)
    hist1.Sumw2()
    if cum:
        hist1 = hist1.GetCumulative(ROOT.kFALSE)
    hist1.Draw("hist")
    canvas.Update()

    # This section writes the text on the histograms such as the ATLAS, Simulation Internal, etc
    atlas, sim_internal, hl, min_bia = write_all_but_ETC(TPave_start, TPave_fontsize)
    etcut = write_ET_cut(TPave_start, TPave_fontsize, cut)
    atlas.Draw()
    sim_internal.Draw()
    hl.Draw()
    min_bia.Draw()
    etcut.Draw()
    canvas.Update()

    # This is setting plotting options for the second histogram, .Draw("same") plots it on the same canvas as the other one. 
    hist2.Sumw2(0)
    hist2.SetLineColor(ROOT.kRed)
    hist2.SetLineWidth(3)
    if cum:
        hist2 = hist2.GetCumulative(ROOT.kFALSE)
    hist2.SetEntries(histogram_total[1])
    hist2.Draw("hist same")
    canvas.Update()

    canvas.SetName("All_GEP_Algo")
    canvas.Update()

    # This creates the legend
    legend_sizes = {"0.03": ROOT.TLegend(legend_adjustment_x + 0.2, legend_adjustment_y + 0.3,legend_adjustment_x + 0.3, legend_adjustment_y + 0.42), "0.04": ROOT.TLegend(legend_adjustment_x + 0.2, legend_adjustment_y + 0.3,legend_adjustment_x + 0.33, legend_adjustment_y + 0.42)}
    legend = legend_sizes[str(legend_font)]
    legend.AddEntry(hist1,hist_legend_names[0].replace("_", " ")) 
    legend.AddEntry(hist2,hist_legend_names[1].replace("_", " "), "l") 
    hist1.GetXaxis().SetTitleSize(0.04)
    hist1.GetYaxis().SetTitleSize(0.04)
    legend.SetTextSize(legend_font)

    legend.Draw("same")  
    canvas.Update()
    plotting_histogram(canvas, fileName, esection)


def plotting_histogram(canvas, input_file, esection):
    filepaths = "/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Doc/" # Change this for wherever you are going to end up placing these files, as well as farther down
    extensions = ""
    if softie:
        extensions += get_save_file_name(input_file, bins, "N")+"_SK"
    else:
        extensions += get_save_file_name(input_file, bins, "N")
    if logarithm:
        extensions += "_NLOG"
    if cum:
        extensions += "_CD"
    if testing:
        extensions += "_TESTING"
    extensions += "_NoSplitting"
    if "--sk" in sys.argv:
        canvas.SaveAs(filepaths+"Plots/Plots_w_SK/"+extensions+"_"+esection+".png") # Need to change these to whatever directory structure you are saving them in
        canvas.SaveAs(filepaths+"Plots_PDFs/Plots_PDFs_w_SK/"+extensions+"_"+esection+".pdf")   # Need to change these to whatever directory structure you are saving them in
        #canvas.SaveSource(filepaths+"Source_Files/Source_Files_w_SK/"+extensions+esection+".C")
        #output_file = ROOT.TFile(filepaths+"ROOT_files/ROOT_files_w_SK/"+extensions+esection+".root", "RECREATE")
        #canvas.Write()
    else:
        canvas.SaveAs(filepaths+"Plots/Plots_No_SK/"+extensions+"_"+esection+".png")
        canvas.SaveAs(filepaths+"Plots_PDFs/Plots_PDFs_No_SK/"+"_"+extensions+esection+".pdf")
        #canvas.SaveSource(filepaths+"Source_Files/Source_Files_No_SK/"+extensions+esection+".C")
        #output_file = ROOT.TFile(filepaths+"ROOT_files/ROOT_files_No_SK/"+extensions+esection+".root", "RECREATE")
        #canvas.Write()

    #if not testing:
        #output_file.Close()

file = ROOT.TFile(root_file)
if esection == "--all":
    for i in regions:
        plot_N_dist(file, i, root_file)
else:
    plot_N_dist(file, esection, root_file)


