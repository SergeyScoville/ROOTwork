"""
Format for entry:
python3 filename filepath bins Etcut legend_adjustment_x legend_adjustment_y (both of these for only 2 histograms) TPave_textsize legend_start legendfont TPave_start --test eta

python3 Singlefile_Eta_distributions.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et0p0.root 0 0.0 0.0 0.0 0.04 .7 0.03 0.19 --test --cd eta

"""


import ROOT
import sys
from array import array
from helper_functions import *

stylistic = apply_atlas_style()
ROOT.gROOT.SetStyle("AtlasStyle")

bins = int(sys.argv[2])

softie = False
testing = False
if "--sk" in sys.argv:
    softie = True
if "--test" in sys.argv:
    testing = True

file = ROOT.TFile(sys.argv[1])
plotting = sys.argv[2]
if "--sk" in sys.argv:
    hist1 = file.Get("h_Calo422SKclusters_eta")
    hist2 = file.Get("h_Calo420SKclusters_eta")
    hist3 = file.Get("h_CaloCalSKclusters_eta")
elif "--onvoff" in sys.argv:
    hist1 = file.Get("h_Calo"+sys.argv[-1]+"SKclusters_eta")
    hist2 = file.Get("h_Calo"+sys.argv[-1]+"SKTopoClusters_eta")
    hist3 = file.Get("h_CaloCalSKclusters_eta")
else:
    hist1 = file.Get("h_Calo422TopoClusters_eta") # Change for pre versus post sk: Calo422TopoClusters_N -> Calo422SKclusters_N
    hist2 = file.Get("h_Calo420TopoClusters_eta") # Change for pre versus post sk: Calo420TopoClusters_N -> Calo420SKclusters_N
    hist3 = file.Get("h_CaloCalTopoClusters_eta") # Change for pre versus post sk: CaloCalTopoClusters_N -> CaloCalSKclusters_N


if "--onvoff" in sys.argv:
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

hist1, hist2, hist3, histogram_numbers = set_y_axis_to_event_fraction(file, [hist1, hist2, hist3])

hist_titles = ["Average number of topoclusters as function of #eta", "Average number of topoclusters as function of #eta post SK"]
if softie:
    hist1.SetTitle(hist_titles[1])
else:
    hist1.SetTitle(hist_titles[0])

cut = sys.argv[3]

# hist1, hist2, hist3 = change_to_sixteen_bins([hist1, hist2, hist3], bin_edges) ##
x_max = get_histograms_xmax([hist1, hist2, hist3])
y_max = get_histograms_ymax([hist1, hist2, hist3], bins)
if "NoCut" in get_save_file_name(sys.argv[1], bins, plotting):
    real_maximum = get_eta_maximum([hist1, hist2, hist3])
else:
    real_maximum = get_eta_maximum([hist1, hist2])
histogram_modifiers([hist1, hist2, hist3], x_max, real_maximum, 16, cut)
hist1.GetXaxis().SetTitle("#eta")
hist1.GetYaxis().SetTitle("Number of topoclusters/# events")
bin_width = 0.6125
num_ticks = int(hist1.GetXaxis().GetXmax() / bin_width)
#hist1.GetXaxis().SetNdivisions(16, False)
hist1.GetXaxis().SetTickLength(0.02)
overflow_bin_set([hist1, hist2, hist3])

bin_edges = [-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9 ]




hist1.SetFillColorAlpha(ROOT.kBlue, 0.1)
hist1.SetFillStyle(3144)
hist1.SetLineWidth(2)
hist1.Sumw2()
hist1.Draw("hist")
canvas.Update()

for i in range(len(bin_edges)-1):
    TEST_line = ROOT.TLine()
    TEST_line.SetLineStyle(3)
    TEST_line.DrawLine(bin_edges[i], 0, bin_edges[i], real_maximum*1.1)
    canvas.Update()

starting = float(sys.argv[9])

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

for i in range(0, hist2.GetNbinsX()):
    bin_height = hist2.GetBinContent(i+1)
    line = ROOT.TLine()
    line.SetLineWidth(2)  # Set the line thickness
    line.SetLineColor(ROOT.kRed) 
    line.DrawLine(bin_edges[i], bin_height, bin_edges[i+1], bin_height)
    canvas.Update()
hist2.Draw("P same")
hist2.SetEntries(histogram_total[1])
hist2.SetLineWidth(0)
hist2.SetMarkerSize(0)
hist2.SetMarkerColor(ROOT.kRed)
canvas.Update()

hist3.SetLineColor(ROOT.kGreen+2)

hist3.Sumw2()
third_histogram = False
if "NoCut" in get_save_file_name(sys.argv[1], bins, plotting):
    for i in range(0, hist3.GetNbinsX()):
        bin_height3 = hist3.GetBinContent(i+1)
        line3 = ROOT.TLine()
        line3.SetLineWidth(2)  # Set the line thickness
        line3.SetLineColor(ROOT.kGreen-2) 
        line3.DrawLine(bin_edges[i], bin_height3, bin_edges[i+1], bin_height3)
        canvas.Update()
    hist3.Draw("same")
    hist3.SetEntries(histogram_total[2])
    hist3.SetLineWidth(0)
    canvas.Update()
    third_histogram = True

canvas.SetName("All_GEP_Algo")
canvas.Update()

legend_font = sys.argv[8]
legend_start = float(sys.argv[7])
legend_adjustment_x = float(sys.argv[4])
legend_adjustment_y = float(sys.argv[5])
legend_sizes_third = {"0.03": ROOT.TLegend(legend_start, 0.5, legend_start + 0.12, 0.62), "0.04": ROOT.TLegend(legend_start, 0.5, legend_start + 0.15, 0.62)}
legend_sizes = {"0.03": ROOT.TLegend(legend_adjustment_x + 0.2, legend_adjustment_y + 0.3,legend_adjustment_x + 0.3, legend_adjustment_y + 0.42), "0.04": ROOT.TLegend(legend_adjustment_x + 0.2, legend_adjustment_y + 0.3,legend_adjustment_x + 0.33, legend_adjustment_y + 0.42)}
if third_histogram:
    legend = legend_sizes_third[legend_font]
else:
    legend = legend_sizes[legend_font]


legend.AddEntry(hist1,hist_legend_names[0].replace("_", " ")) 
legend.AddEntry(line,hist_legend_names[1].replace("_", " "), "l") 
#legend.SetFillColor(ROOT.kRed)
if third_histogram:
    legend.AddEntry(line3, hist_legend_names[2].replace("_", " "), "l") 
hist1.GetXaxis().SetTitleSize(0.04)
hist1.GetYaxis().SetTitleSize(0.04)
legend.SetTextSize(float(sys.argv[8]))
#legend.SetLineWidth(0)                      # Remove the boundary on the legend
legend.Draw("same")  

canvas.Update()

filepaths = "/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Doc/"
extensions = ""
if softie:
    extensions += get_save_file_name(sys.argv[1], bins, "eta")+"_SK"
else:
    extensions += get_save_file_name(sys.argv[1], bins, "eta")
if testing:
    extensions += "_TESTING"
if "--test" in sys.argv:
    if "--sk" in sys.argv:
        canvas.SaveAs(filepaths+"Plots_PDFs/Plots_PDFs_w_SK/"+extensions+".pdf")
    else:
        canvas.SaveAs(filepaths+"Plots_PDFs/Plots_PDFs_No_SK/"+extensions+".pdf")
elif "--sk" in sys.argv:
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

if not testing:
    output_file.Close()