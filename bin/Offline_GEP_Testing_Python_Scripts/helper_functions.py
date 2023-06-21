import ROOT
import sys
from array import array



def apply_atlas_style():
    AtlasStyle=ROOT.TStyle("AtlasStyle","MyCustomStyle")
    icol = ROOT.kWhite
    AtlasStyle.SetFrameBorderMode(icol)
    AtlasStyle.SetFrameFillColor(icol)
    AtlasStyle.SetCanvasBorderMode(icol)
    AtlasStyle.SetCanvasColor(icol)
    AtlasStyle.SetPadBorderMode(icol)
    AtlasStyle.SetPadColor(icol)
    AtlasStyle.SetStatColor(icol)
    # AtlasStyle.SetFillColor(icol)#don't use: white fill color for *all* objects
    # set the paper & margin sizes
    AtlasStyle.SetPaperSize(20,26)
    #set margin sizes
    AtlasStyle.SetPadTopMargin(0.07)
    AtlasStyle.SetPadRightMargin(0.06)
    AtlasStyle.SetPadBottomMargin(0.16)
    AtlasStyle.SetPadLeftMargin(0.16)
    #set title offsets (for axis label)
    AtlasStyle.SetTitleXOffset(1.4)
    AtlasStyle.SetTitleYOffset(1.4)
    #use large fonts
    #Int_tfont=72#Helveticaitalics
    font=42 #Helvetica
    tsize=0.05
    AtlasStyle.SetTextFont(font)
    AtlasStyle.SetTextSize(tsize)
    AtlasStyle.SetLabelFont(font,"x")
    AtlasStyle.SetTitleFont(font,"x")
    AtlasStyle.SetLabelFont(font,"y")
    AtlasStyle.SetTitleFont(font,"y")
    AtlasStyle.SetLabelFont(font,"z")
    AtlasStyle.SetTitleFont(font,"z")
    AtlasStyle.SetLabelSize(tsize,"x")
    AtlasStyle.SetTitleSize(tsize,"x")
    AtlasStyle.SetLabelSize(tsize,"y")
    AtlasStyle.SetTitleSize(tsize,"y")
    AtlasStyle.SetLabelSize(tsize,"z")
    AtlasStyle.SetTitleSize(tsize,"z")
    #use bold lines and markers
    AtlasStyle.SetMarkerStyle(20)
    AtlasStyle.SetMarkerSize(1.2)
    AtlasStyle.SetHistLineWidth(2)
    AtlasStyle.SetLineStyleString(2,"[1212]")#post script dashes
    #get rid of X error bars (as recommended in ATLAS figure guidelines)
    AtlasStyle.SetErrorX(0.0001)
    #get rid of error bar caps
    AtlasStyle.SetEndErrorSize(0.)
    #do not display any of the standard histogram decorations
    #AtlasStyle.SetOptTitle(0)
    #AtlasStyle.SetOptStat(1111)
    AtlasStyle.SetOptStat(0)
    #AtlasStyle.SetOptFit(1111)
    AtlasStyle.SetOptFit(0)
    #put tick marks on top and RHS of plots
    AtlasStyle.SetPadTickX(1)
    AtlasStyle.SetPadTickY(1)

    ROOT.gROOT.SetStyle("AtlasStyle")


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
    

def N_dist_axis_set(individual_histograms, xmax, ymax, logarithm=False):
    for i in individual_histograms:
        i.GetXaxis().SetRangeUser(0, 1.1*xmax)
        if logarithm:
            i.GetYaxis().SetRangeUser(1*10**(-5), 2)
        else:
            i.GetYaxis().SetRangeUser(0, 1.1*ymax)
    return


def histogram_modifiers(individual_histograms, xmax, ymax, bins, etcut):
    for i in individual_histograms:
        if "eta" in sys.argv:
            #i.GetXaxis().SetRangeUser(-4.9, 4.9)
            i.GetXaxis().SetRange(1, 16)
        elif "phi" in sys.argv:
            i.GetXaxis().SetRangeUser(-1.1*xmax, 1.1*xmax)
        else:
            i.GetXaxis().SetRangeUser(0, 1.1*xmax)
        if "--log" in sys.argv:
            if "--ski" in sys.argv:
                i.GetYaxis().SetRangeUser(2*10**(-4), 1.25*ymax)
            #elif etcut == "NoCUT"or etcut == "0.5":
                #i.GetYaxis().SetRangeUser(1*10**(-4), 1.25*ymax)
            #elif etcut == "2.0":
                #i.GetYaxis().SetRangeUser(1*10**(-4), 1.25*ymax)
            elif "N" in sys.argv and "--sk" not in sys.argv:
                i.GetYaxis().SetRangeUser(1*10**(-5), 2)
            else:
                i.GetYaxis().SetRangeUser(5*10**(-5), 1.25*ymax)
        else:
            i.GetYaxis().SetRangeUser(0, 1.1*ymax)
        #i.SetLineWidth(3)
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
    histogram_entries = []
    if "--sk" in sys.argv:
        hist_names = ["h_Calo422SKclusters_N", "h_Calo422SKTopoClusters_N", "h_CaloCalSKclusters_N"] # Change for Rajat temp graphs
    else:
        hist_names = ["h_Calo422TopoClusters_N", "h_Calo420TopoClusters_N", "h_CaloCalTopoClusters_N"] # Change for pre versus post sk: Calo422TopoClusters_N -> Calo422SKclusters_N
    for i in range(len(hists)):
        hist1_n = file.Get(hist_names[i])
        print(hist1_n.GetEntries(), hist_names[i])
        hists[i].Scale(1/hist1_n.GetEntries())
        histogram_entries.append(hist1_n.GetEntries())
    return hists[0], hists[1], hists[2], histogram_entries


def get_histogram_num_entries(histograms):
    if "--sk" in sys.argv:
        hist_names = ["h_Calo422SKclusters_N", "h_Calo420SKclusters_N", "h_CaloCalSKclusters_N"] # Change for pre versus post sk: Calo422TopoClusters_N -> Calo422SKclusters_N
    else:
        hist_names = ["h_Calo422TopoClusters_N", "h_Calo420TopoClusters_N", "h_CaloCalTopoClusters_N"] # Change for pre versus post sk: Calo422TopoClusters_N -> Calo422SKclusters_N
    histogram_entries = []
    for i in range(len(histograms)):
        hist1_n = file.Get(hist_names[i])
        histogram_entries.append(hist1_n.GetEntries())
    return histogram_entries


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
    return 


def overflow_bin_set(all_histograms):
    for histogram in all_histograms:
        last_bin1 = histogram.GetNbinsX()
        overflow_bin_content = histogram.GetBinContent(last_bin1 + 1)
        if histogram.GetBinContent(last_bin1+1) != 0:
            histogram.SetBinContent(last_bin1, histogram.GetBinContent(last_bin1)/ histogram.GetEntries() + overflow_bin_content / histogram.GetEntries())
            histogram.SetBinContent(last_bin1+1, 0)
    return


def write_ATLAS(starting):
    pave = ROOT.TPaveText(starting+0.005, 0.87, starting+0.075, 0.91, "NDC")
    pave.SetFillColor(ROOT.kWhite)
    pave.SetFillStyle(1001)  # Solid fill style
    pave.SetTextFont(72)
    pave.SetBorderSize(0)
    pave.SetShadowColor(ROOT.kWhite)
    pave.SetTextSize(0.03)
    pave.AddText("ATLAS")
    return pave


def write_sim_internal(starting):
    pave1 = ROOT.TPaveText(starting+0.075, 0.87, starting+0.23, 0.91, "NDC")
    pave1.SetFillColor(ROOT.kWhite)
    pave1.SetFillStyle(1001)
    pave1.SetTextFont(42)
    pave1.SetBorderSize(0)
    pave1.SetShadowColor(ROOT.kWhite)
    pave1.SetTextSize(0.03)
    pave1.AddText("Simulation Internal")
    return pave1


def write_HL(starting):
    pave2 = ROOT.TPaveText(starting, 0.83, starting+.16, 0.87, "NDC")
    pave2.SetFillColor(ROOT.kWhite)
    pave2.SetFillStyle(1001)
    pave2.SetTextFont(42)
    pave2.SetBorderSize(0)
    pave2.SetShadowColor(ROOT.kWhite)
    pave2.SetTextSize(0.03)
    pave2.AddText("HL-LHC <#mu>=200")
    return pave2


def write_min_bias(starting):
    pave3 = ROOT.TPaveText(starting, 0.79, starting+.133, 0.83, "NDC")
    pave3.SetFillColor(ROOT.kWhite)
    pave3.SetFillStyle(1001)
    pave3.SetTextFont(42)
    pave3.SetBorderSize(0)
    pave3.SetShadowColor(ROOT.kWhite)
    pave3.SetTextSize(0.03)
    pave3.AddText("Minimum Bias")
    return pave3


def write_ET_cut(starting, cut):
    pave4 = ROOT.TPaveText(starting, 0.75, starting+0.094, 0.79, "NDC")
    pave4.SetFillColor(ROOT.kWhite)
    pave4.SetFillStyle(1001)
    pave4.SetTextFont(42)
    pave4.SetBorderSize(0)
    pave4.SetShadowColor(ROOT.kWhite)
    pave4.SetTextSize(0.03)
    pave4.AddText("E_{T}^{TC} > "+cut)
    return pave4