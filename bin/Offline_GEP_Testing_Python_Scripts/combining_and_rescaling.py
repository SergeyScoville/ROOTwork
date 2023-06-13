"""
This is a Python script that is going to take in three root files and grab histograms from each, and then display them together on a new histogram. It is also going to scale them, by making the y axis be the ratio of events per bin/ total events, and move the x axis so that it is taking a good range. To run the file there are a few things to be careful of. The general format needs to be "python3 /path/to/combining_and_rescaling.py /path/to/file(s).root variable_to_plot integer_bins histogram_title --multifile --log". If you are taking from separate files that have Calo_422, Calo_420, and Calo_Cal each in them, you put three filepaths in the /path/to/file(s).root section and make sure to put --multifile in after the histogram_title. For variable to plot, your choices are N, eta, phi, et
"""

import ROOT
import sys
from array import array


if "--multifile" in sys.argv:
    try:
        bins = int(sys.argv[5])
    except IndexError:
        bins = 0
else:
    try:
        bins = int(sys.argv[3])
    except (IndexError, ValueError) as e:
        bins = 0

ROOT.gROOT.LoadMacro("AtlasStyle.C") 
SetAtlasStyle()
ATLASLabel(0.2, 0.87, "Internal")


if "--multifile" in sys.argv:
    plotting = sys.argv[4]
    file1 = ROOT.TFile(sys.argv[1]) 
    file2 = ROOT.TFile(sys.argv[2])
    file3 = ROOT.TFile(sys.argv[3])

    # Get the histogram names from each file
    histogram1_name = file1.GetListOfKeys()[0].GetName()
    histogram2_name = file2.GetListOfKeys()[0].GetName()
    histogram3_name = file3.GetListOfKeys()[0].GetName()

    hists1 = [histogram1_name, histogram2_name, histogram3_name]

    # Get the histograms from each file
    hist1 = file1.Get(histogram1_name)
    hist2 = file2.Get(histogram2_name)
    hist3 = file3.Get(histogram3_name)
else:
    file = ROOT.TFile(sys.argv[1])
    plotting = sys.argv[2]
    hist1 = file.Get("h_Calo422TopoClusters_"+sys.argv[2]) # Change for pre versus post sk: Calo422TopoClusters_N -> Calo422SKclusters_N
    hist2 = file.Get("h_Calo420TopoClusters_"+sys.argv[2]) # Change for pre versus post sk: Calo420TopoClusters_N -> Calo420SKclusters_N
    hist3 = file.Get("h_CaloCalTopoClusters_"+sys.argv[2]) # Change for pre versus post sk: CaloCalTopoClusters_N -> CaloCalSKclusters_N
    hist_legend_names = ["", "", ""]
    hists = ["h_Calo422TopoClusters_"+sys.argv[2], "h_Calo420TopoClusters_"+sys.argv[2], "h_CaloCalTopoClusters_"+sys.argv[2]]

for i in range(len(hists)):
    if "Calo422" in hists[i]:
        hist_legend_names[i] = "Calo_422"
    elif "Calo420" in hists[i]:
        hist_legend_names[i] = "Calo_420"
    elif "CaloCal" in hists[i]:
        hist_legend_names[i] = "Calo_Cal"

hist1.SetName(hist_legend_names[0])
hist2.SetName(hist_legend_names[1])
hist3.SetName(hist_legend_names[2])

canvas = ROOT.TCanvas("canvas", "Histograms", 1200, 800)
if "--log" in sys.argv:
    canvas.SetLogy()
canvas.Update()

def get_save_file_name(filepath, bins, plotting):
    full_filename = filepath.split("/")[-1]
    filename = full_filename.split(".")[0]
    if bins == 0:
        return(filename+"_No_Rebin_"+plotting+"_dist")
    else: 
        return(filename+"_"+str(bins)+"_Rebin_"+plotting+"_dist")


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
        if "eta" in sys.argv:
            #i.GetXaxis().SetRangeUser(-4.9, 4.9)
            i.GetXaxis().SetRange(1, 16)
        elif "phi" in sys.argv:
            i.GetXaxis().SetRangeUser(-1.1*xmax, 1.1*xmax)
        else:
            i.GetXaxis().SetRangeUser(0, 1.1*xmax)
        if "--log" in sys.argv:
            i.GetYaxis().SetRangeUser(1, 1.1*ymax)
        else:
            i.GetYaxis().SetRangeUser(0, 1.1*ymax)
        i.SetLineWidth(3)
    return


def get_histograms_ymax(individual_histograms, bins):
    histograms = individual_histograms
    if bins != 0 and "eta" not in sys.argv:
        for i in histograms:
            i.Rebin(bins)
    y_max = 0
    for i in histograms:
        if i.GetMaximum() > y_max:
            y_max = i.GetMaximum()
    return y_max


def get_eta_maximum(histograms):
    max_bin_height = 0
    for i in histograms:
        for bin in range(1, i.GetNbinsX() + 1):
            bin_height = i.GetBinContent(bin)
            if bin_height > max_bin_height:
                max_bin_height = bin_height 
    return max_bin_height


def change_to_sixteen_bins(histograms, bin_edges):
    new_histograms = []
    num_bins_new = 14
    for original_hist in histograms:
        new_hist = ROOT.TH1F(original_hist.GetName(), original_hist.GetTitle(), 16, array("f", bin_edges))
        # Loop over the new histogram bins
        # Loop over the bins in the original histogram
        for i in range(1, original_hist.GetNbinsX() + 1):
            new_bin = new_hist.FindBin(original_hist.GetBinCenter(i))
            new_hist.SetBinContent(new_bin, new_hist.GetBinContent(new_bin) + original_hist.GetBinContent(i))
        new_hist.SetCanExtend(ROOT.TH1.kAllAxes)
        new_histograms.append(new_hist)
    return new_histograms


def set_y_axis_to_event_fraction(histograms):
    hists = histograms
    hist_names = ["h_Calo422TopoClusters_N", "h_Calo420TopoClusters_N", "h_CaloCalTopoClusters_N"] # Change for pre versus post sk: Calo422TopoClusters_N -> Calo422SKclusters_N
    for i in range(len(hists)):
        hist1_n = file.Get(hist_names[i])
        print(hist1_n.GetEntries(), hist_names[i])
        hists[i].Scale(1/hist1_n.GetEntries())
    return hists[0], hists[1], hists[2]


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

histogram_total = []
for i in [hist1, hist2, hist3]:
    histogram_total.append(i.GetEntries())
print(histogram_total)

bin_options = find_divisors(hist1.GetNbinsX())
if bins == 0:
    print("The options available to rebin your dataset are", str(bin_options), ". To rebin your dataset, add the integer you wish to end of command line prompt and it will divide the number of bins by this integer to give new binning.")

bin_edges = [-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9 ]


"""
hist1.SetBinContent(hist1.GetNbinsX() + 1, 0)
hist2.SetBinContent(hist2.GetNbinsX() + 1, 0)
hist3.SetBinContent(hist3.GetNbinsX() + 1, 0)"""

if "eta" in sys.argv:
    #set_y_axis_to_bin_ratio([hist1, hist2, hist3])
    hist1, hist2, hist3 = set_y_axis_to_event_fraction([hist1, hist2, hist3])
else:
    set_y_axis_to_bin_ratio([hist1, hist2, hist3])

x_max = get_histograms_xmax([hist1, hist2, hist3])
y_max = get_histograms_ymax([hist1, hist2, hist3], bins)



histogram_modifiers([hist1, hist2, hist3], x_max, y_max, bins)

if "eta" in sys.argv:
    # hist1, hist2, hist3 = change_to_sixteen_bins([hist1, hist2, hist3], bin_edges) ##
    x_max = get_histograms_xmax([hist1, hist2, hist3])
    y_max = get_histograms_ymax([hist1, hist2, hist3], bins)
    if "NoCut" in get_save_file_name(sys.argv[1], bins, plotting):
        real_maximum = get_eta_maximum([hist1, hist2, hist3])
    else:
        real_maximum = get_eta_maximum([hist1, hist2])
    histogram_modifiers([hist1, hist2, hist3], x_max, real_maximum, 16)
    hist1.GetXaxis().SetTitle("#eta")
    hist1.GetYaxis().SetTitle("Number of topoclusters/# events")
    bin_width = 0.6125
    num_ticks = int(hist1.GetXaxis().GetXmax() / bin_width)
    hist1.GetXaxis().SetNdivisions(16, False)
    hist1.GetXaxis().SetTickLength(0.02)
elif "N" in sys.argv:
    hist1.GetXaxis().SetTitle("Number of Topoclusters")
    hist1.GetYaxis().SetTitle("Fraction of Events")
elif "et" in sys.argv:
    hist1.GetXaxis().SetTitle("E_{t} [MeV]")
    hist1.GetYaxis().SetTitle("Fraction of Topoclusters")
hist1.SetEntries(histogram_total[0])
hist1.GetXaxis().CenterTitle()
hist1.GetXaxis().SetTitleOffset(1.2)
hist1.GetYaxis().CenterTitle()
hist1.GetYaxis().SetTitleOffset(1.4)
hist1.GetYaxis().SetLabelSize(0.03)
hist1.GetXaxis().SetLabelSize(0.02)
#hist1.GetYaxis().SetNdivisions(-6, ROOT.kFALSE) # Removing minor tickmarks
hist1.SetFillColorAlpha(ROOT.kBlue, 0.1)
hist1.SetFillStyle(3144)
hist1.SetLineWidth(3)
hist1.Sumw2()
hist1.SetStats(0)

hist1.Draw("hist")
canvas.Update()

if "eta" in sys.argv:
    for i in range(len(bin_edges)-1):
        TEST_line = ROOT.TLine()
        TEST_line.SetLineStyle(2)
        if i == 15:
            TEST_line.DrawLine(bin_edges[i], 0, bin_edges[i], real_maximum*.85)
        else:
            TEST_line.DrawLine(bin_edges[i], 0, bin_edges[i], real_maximum*1.1)
        canvas.Update()


stats_box1 = hist1.GetListOfFunctions().FindObject("stats")
stats_box1.SetFillStyle(1001)  # Solid fill style
stats_box1.SetTextSize(0.025)
stats_box1.SetX1NDC(0.8)  # Set X-coordinate of the lower-left corner
stats_box1.SetY1NDC(0.8)  # Set Y-coordinate of the lower-left corner
stats_box1.SetX2NDC(0.95)  # Set X-coordinate of the upper-right corner
stats_box1.SetY2NDC(0.95)  # Set Y-coordinate of the upper-right corner


#line = ROOT.TLine()
#line.DrawLine(bin_edges[0], hist2.GetBinContent(1), bin_edges[1], hist2.GetBinContent(1))
#canvas.Update()

if "eta" in sys.argv:
    for i in range(0, hist2.GetNbinsX()):
        bin_height = hist2.GetBinContent(i+1)
        line = ROOT.TLine()
        line.SetLineWidth(2)  # Set the line thickness
        line.SetLineColor(ROOT.kRed) 
        line.DrawLine(bin_edges[i], bin_height, bin_edges[i+1], bin_height)
        canvas.Update()
    hist2.Draw("same")
    hist2.SetEntries(histogram_total[1])
    hist2.SetLineWidth(0)
    canvas.Update()
else:
    hist2.Sumw2(0)
    hist2.SetLineColor(ROOT.kRed)
    hist2.SetFillColorAlpha(ROOT.kRed, 0.1)
    hist2.SetFillStyle(3490)
    hist2.SetLineWidth(3)
    hist2.SetEntries(histogram_total[1])
    hist2.Draw("hist same")
    canvas.Update()

stats_box2 = hist2.GetListOfFunctions().FindObject("stats")
stats_box2.SetTextSize(0.025)
stats_box2.SetX1NDC(0.8)  # Set X-coordinate of the lower-left corner
stats_box2.SetY1NDC(0.65)  # Set Y-coordinate of the lower-left corner
stats_box2.SetX2NDC(0.95)  # Set X-coordinate of the upper-right corner
stats_box2.SetY2NDC(0.8)

hist3.SetLineColor(ROOT.kGreen+2)

hist3.Sumw2()
third_histogram = False
if "NoCut" in get_save_file_name(sys.argv[1], bins, plotting):
    if "eta" in sys.argv:
        for i in range(0, hist3.GetNbinsX()):
            bin_height3 = hist3.GetBinContent(i+1)
            line3 = ROOT.TLine()
            line3.SetLineWidth(2)  # Set the line thickness
            line3.SetLineColor(ROOT.kGreen) 
            line3.DrawLine(bin_edges[i], bin_height3, bin_edges[i+1], bin_height3)
            canvas.Update()
        hist3.Draw("same")
        hist3.SetEntries(histogram_total[2])
        hist3.SetLineWidth(0)
        canvas.Update()
        third_histogram = True
    else:
        third_histogram = True
        hist3.Draw("hist SAME")
        hist3.SetFillColorAlpha(ROOT.kGreen+2, 0.1)
        hist3.SetEntries(histogram_total[2])
        hist3.SetLineWidth(3)

        canvas.Update()

    stats_box3 = hist3.GetListOfFunctions().FindObject("stats")
    stats_box3.SetTextSize(0.025)
    stats_box3.SetX1NDC(0.8)  # Set X-coordinate of the lower-left corner
    stats_box3.SetY1NDC(0.5)  # Set Y-coordinate of the lower-left corner
    stats_box3.SetX2NDC(0.95)  # Set X-coordinate of the upper-right corner
    stats_box3.SetY2NDC(0.65)

if "--multifile" in sys.argv:
    if bins == 0:
        hist1.SetTitle(sys.argv[5].replace("_", " "))
    else:
        hist1.SetTitle(sys.argv[6].replace("_", " "))
else:
    if bins == 0:
        hist1.SetTitle(sys.argv[3].replace("_", " "))
    else:
        hist1.SetTitle(sys.argv[4].replace("_", " "))

canvas.SetName("All_GEP_Algo")
canvas.Update()


if third_histogram:
    legend = ROOT.TLegend(0.8, 0.3, 0.92, 0.42)
else:
    legend = ROOT.TLegend(0.8,0.5,0.92,0.62)    # Add a legend near the top right corner
legend.AddEntry(hist1,hist_legend_names[0]) 
if "eta" in sys.argv:              # Add the MC histogram, labelled as "MC"
    legend.AddEntry(line,hist_legend_names[1], "l")
else:
    legend.AddEntry(hist2,hist_legend_names[1],)            # Add the data points, labelled as "Data"
if third_histogram and "eta" in sys.argv:
    legend.AddEntry(line3, hist_legend_names[2], "l")
elif third_histogram:
    legend.AddEntry(hist3, hist_legend_names[2])
legend.SetTextSize(0.03)
#legend.SetLineWidth(0)                      # Remove the boundary on the legend
legend.Draw("same")  


canvas.Update()
ROOT.gEnv.SetValue("Hist.PictureCompress", 1)

# Change the saveas and SaveSource for pre SK: /Plots_No_SK, .png/.C/.root, then for after SK: /Plots_w_SK, _SK.png/_SK.C/_SK.root
canvas.SaveAs("/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Doc/Plots/Plots_No_SK/"+get_save_file_name(sys.argv[1], bins, plotting)+".png")
canvas.SaveSource("/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Doc/Source_Files/Source_Files_No_SK/"+get_save_file_name(sys.argv[1], bins, plotting)+".C")


output_file = ROOT.TFile("/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Doc/ROOT_files/ROOT_Files_No_SK/"+get_save_file_name(sys.argv[1], bins, plotting)+".root", "RECREATE")
canvas.Write()

output_file.Close()



if "--multifile" in sys.argv:
    file1.Close()
    file2.Close()
    file3.Close()

else:
    file.Close()