import ROOT
import sys
from array import array
from helper_functions import *


def set_custom_ticks(histogram):
    x_axis = histogram.GetXaxis()
    y_axis = histogram.GetYaxis()

    # Set custom tick marks for X-axis
    x_min = -4.9
    x_max = 4.9
    x_increment = 0.6125
    n_bins_x = histogram.GetNbinsX()

    x_axis.SetTickLength(0.02)  # Adjust the length of the tick marks
    x_axis.SetNdivisions(n_bins_x, False)  # Set the number of divisions to match the number of bins

    for i in range(n_bins_x):
        x_bin = i + 1
        x_value = x_min + (x_bin - 1) * x_increment
        x_axis.SetBinLabel(x_bin, "{:.2f}".format(x_value))  # Set the tick labels

    # Set custom tick marks for Y-axis
    y_min = -3.14
    y_max = 3.14
    y_increment = 0.628
    n_bins_y = histogram.GetNbinsY()

    y_axis.SetTickLength(0.02)  # Adjust the length of the tick marks
    y_axis.SetNdivisions(n_bins_y, False)  # Set the number of divisions to match the number of bins

    for i in range(n_bins_y):
        y_bin = i + 1
        y_value = y_min + (y_bin - 1) * y_increment
        y_axis.SetBinLabel(y_bin, "{:.2f}".format(y_value))  # Set the tick labels





canvas = ROOT.TCanvas("canvas", "Histogram Canvas")
ROOT.gStyle.SetPaintTextFormat(".3f")
file = ROOT.TFile(sys.argv[1])
histogram1 = file.Get("h_Calo420TopoClusters_eta_phi")
histogram2 = file.Get("h_Calo420TopoClusters_N")

histogram1.Scale(1 / histogram2.GetEntries())
histogram1.SetStats(0)
# Draw the histogram on the canvas

x_ticks = bin_edges = [-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9 ]
y_ticks = [-3.14, -2.512, -1.884, -1.256, -0.628, 0, 0.628, 1.256, 1.884, 2.512, 3.14]
#set_custom_ticks(histogram1)
#for i in range(len(x_ticks)):
    #histogram1.GetXaxis().SetBinLabel(i+1, str(x_ticks[i]))

histogram1.GetXaxis().SetTitle("#eta")
histogram1.GetYaxis().SetTitleOffset(1.25)
histogram1.GetYaxis().SetTitle("#phi")
histogram1.SetTitle("Average number of topoclusters in #eta-#phi bins")
histogram1.GetXaxis().SetNdivisions(16, False)
histogram1.GetYaxis().SetNdivisions(10, False)
histogram1.GetYaxis().SetLabelSize(0.03)
histogram1.GetXaxis().SetLabelSize(0.023)
histogram1.Draw("COLZ0 TEXT")


# Update the canvas and display it
canvas.Update()
bins = 0

filepaths = "/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Doc/"
extensions = ""
if "--sk" in sys.argv:
    extensions += get_save_file_name(sys.argv[1], bins, "etavphi")+"_SK"
else:
    extensions += get_save_file_name(sys.argv[1], bins, "etavphi")
if "--test" in sys.argv:
    extensions += "_TESTING"
extensions += "420"
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

if "--test" not in sys.argv:
    output_file.Close()
