import ROOT
import sys
from array import array

esection = sys.argv[10]

# This is a manual setting of the AtlasStyle that also allows titles
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
    tsize=0.1
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

    return AtlasStyle


# This takes in the full filepath that you pass in and returns a string with the name of the source file, the number of bins if you are rebinning, and what variable you are plotting
def get_save_file_name(filepath, bins, plotting):
    full_filename = filepath.split("/")[-1]
    filename = full_filename.split(".")[0]
    if bins == 0:
        return(filename+"_No_Rebin_"+plotting+"_dist")
    else: 
        return(filename+"_"+str(bins)+"_Rebin_"+plotting+"_dist")


# This takes in the number of bins and returns all of the options there are to rebin your data
def find_divisors(number):
    divisors = []
    
    # Iterate from 1 to the given number
    for i in range(1, number + 1):
        if number % i == 0:
            divisors.append(i)
    
    return divisors


# This is a helper function to find out where the last bin is with information in it so you can constraint your x-axis
def get_last_bin(histogram):
    x_axis = histogram.GetXaxis()
    last_nonempty_bin = None
    for bin in range(histogram.GetNbinsX(), 0, -1):
        if histogram.GetBinContent(bin) > 0:
            last_nonempty_bin = bin
            break

    if last_nonempty_bin is not None:
        return(x_axis.GetBinCenter(last_nonempty_bin))
    

# This is a function specifically for N distributions to set the x and y axis maxima and minima
def N_dist_axis_set(individual_histograms, xmax, ymax, logarithm=False):
    for i in individual_histograms:
        #if "--sk" in sys.argv:
            # Change this line for the maximum that you need of your datatset, check to make sure that it is displaying constant accross multiple cuts
        xmax = 500
        i.GetXaxis().SetRangeUser(0, 1.2*xmax)
        if logarithm:
            i.GetYaxis().SetRangeUser(1*10**(-5), 5)
        else:
            i.GetYaxis().SetRangeUser(0, 1.1*ymax)
    return


# This is a utility to set the x and y axis of Et distributions
def ET_dist_axis_set(individual_histograms, xmax, ymax, logarithm=False):
    for i in individual_histograms:
        i.GetXaxis().SetRangeUser(0, xmax)
        if logarithm:
            if "--sk" in sys.argv:
                i.GetYaxis().SetRangeUser(2*10**(-4), 1.25*ymax)
            else:
                i.GetYaxis().SetRangeUser(5*10**(-5), 1.25*ymax)
        else:
            i.GetYaxis().SetRangeUser(0, 1.1*ymax)
    return


# This is an overall modifier, currently really only used for Eta distributions but was built a while ago so I am not certain about dependencies in it
def histogram_modifiers(individual_histograms, xmax, ymax, bins, etcut):
    for i in individual_histograms:
        if "eta" in sys.argv:
            i.GetXaxis().SetRangeUser(-4.9, 4.9)
            #i.GetXaxis().SetRange(1, 16)
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


# This is a function to find the maximum y-value the histogram takes so that we do not display a bunch of overhead
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


# This is a function that is used while making the markers for the Eta distributions so that the second distributions are just shown as lines instead of a full distribution
def get_eta_maximum(histograms):
    max_bin_height = 0
    for i in histograms:
        for bin in range(1, i.GetNbinsX() + 1):
            bin_height = i.GetBinContent(bin)
            if bin_height > max_bin_height:
                max_bin_height = bin_height 
    return max_bin_height


# This is an outdated function that turns an Eta distribution into 16 bins from its original, it is BROKEN!!!
# FIXME
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


# This function sets the y axis to event fractions rather that histogram total fraction, used for Eta distributions
# TODO modify this so that it is used everywhere rather than just for eta?
def set_y_axis_to_event_fraction(file, histograms):
    hists = histograms
    histogram_entries = []
    if "--sk" in sys.argv:
        hist_names = ["h_Calo422SKclusters"+esection, "h_Calo422SKTopoClusters"+esection, "h_CaloCalSKclusters"+esection] # Change for Rajat temp graphs
        #hist_names = ["h_Calo422SKclusters_N1", "h_Calo422SKTopoClusters_N1", "h_CaloCalSKclusters_N1"] # Change for Rajat temp graphs
    else:
        hist_names = ["h_Calo422TopoClusters"+esection, "h_Calo420TopoClusters"+esection, "h_CaloCalTopoClusters"+esection] # Change for pre versus post sk: Calo422TopoClusters_N -> Calo422SKclusters_N
        #hist_names = ["h_Calo422TopoClusters_N1", "h_Calo420TopoClusters_N1", "h_CaloCalTopoClusters_N1"] # Change for pre versus post sk: Calo422TopoClusters_N -> Calo422SKclusters_N
    for i in range(len(hists)):
        hist1_n = file.Get(hist_names[i])
        hists[i].Scale(1/hist1_n.GetEntries())
        histogram_entries.append(hist1_n.GetEntries())
    return hists[0], hists[1], hists[2], histogram_entries


# Self-explainatory, this gets the total number of entries in the histogram
def get_histogram_num_entries(file, histograms):
    if "--sk" in sys.argv:
        hist_names = ["h_Calo422SKclusters"+esection, "h_Calo420SKclusters"+esection, "h_CaloCalSKclusters"+esection] # Change for pre versus post sk: Calo422TopoClusters_N -> Calo422SKclusters_N
        #hist_names = ["h_Calo422SKclusters_N1", "h_Calo422SKTopoClusters_N1", "h_CaloCalSKclusters_N1"]
    else:
        hist_names = ["h_Calo422TopoClusters"+esection, "h_Calo420TopoClusters"+esection, "h_CaloCalTopoClusters"+esection] # Change for pre versus post sk: Calo422TopoClusters_N -> Calo422SKclusters_N
        #hist_names = ["h_Calo422TopoClusters_N1", "h_Calo420TopoClusters_N1", "h_CaloCalTopoClusters_N1"]
    histogram_entries = []
    for i in range(len(histograms)):
        hist1_n = file.Get(hist_names[i])
        histogram_entries.append(hist1_n.GetEntries())
    return histogram_entries


# This is the main running file that uses get_last_bin(histogram) to find the xmax of histograms
def get_histograms_xmax(individuals_histograms):
    x_max = 0
    for histogram in individuals_histograms:
        if get_last_bin(histogram) > x_max:
            x_max = get_last_bin(histogram)
    return x_max


# This does all of the others that are not Eta dist to normalize it
# TODO check to see if this is actually done correctly?
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


# This sets the last bin to be the overflow bin
def overflow_bin_set(all_histograms):
    for histogram in all_histograms:
        last_bin1 = histogram.GetNbinsX()
        overflow_bin_content = histogram.GetBinContent(last_bin1 + 1)
        if histogram.GetBinContent(last_bin1+1) != 0:
            histogram.SetBinContent(last_bin1, histogram.GetBinContent(last_bin1)/ histogram.GetEntries() + overflow_bin_content / histogram.GetEntries())
            histogram.SetBinContent(last_bin1+1, 0)
    return


# This specifically wirtes the ET_cut part of the TPave object, can set the size, cut and starting point and has dictionary for three text sizees
def write_ET_cut(starting, textsize, cut):
    y = 0
    pave4_locations = {"0.03": ROOT.TPaveText(starting-0.003, 0.75-y, starting + 0.0725, 0.79-y, "NDC"), "0.04": ROOT.TPaveText(starting-0.003, 0.75-y, starting + 0.09, 0.79-y, "NDC"), "0.05": ROOT.TPaveText(starting-.003, 0.71-y, starting+0.115, 0.76-y, "NDC")}
    pave4 = pave4_locations[textsize]
    pave4.SetFillColor(ROOT.kWhite)
    pave4.SetFillStyle(1001)
    pave4.SetTextFont(42)
    pave4.SetBorderSize(0)
    pave4.SetShadowColor(ROOT.kWhite)
    pave4.SetTextSize(float(textsize))
    pave4.AddText("E_{T}^{TC} > "+cut)
    return pave4


# This writes the rest of the Atlas stuf that isnt the Et cut
def write_all_but_ETC(starting, textsize):
    y = 0
    pave_locations = {"0.03": ROOT.TPaveText(starting-.005, 0.87-y, starting+0.065, 0.91-y, "NDC"), "0.04": ROOT.TPaveText(starting-.005, 0.87-y, starting+0.08, 0.91-y, "NDC"), "0.05": ROOT.TPaveText(starting-.005, 0.85-y, starting+0.1, 0.9-y, "NDC")}
    pave = pave_locations[textsize]
    pave.SetFillColor(ROOT.kWhite)
    pave.SetFillStyle(1001)  # Solid fill style
    pave.SetTextFont(72)
    pave.SetBorderSize(0)
    pave.SetShadowColor(ROOT.kWhite)
    pave.SetTextSize(float(textsize))
    pave.AddText("ATLAS")

    #pave1 = ROOT.TPaveText(starting+0.075, 0.87, starting+0.23, 0.91, "NDC")
    pave1_locations = {"0.03": ROOT.TPaveText(starting+0.065, 0.87-y, starting+0.225, 0.91-y, "NDC"), "0.04": ROOT.TPaveText(starting+0.08, 0.87-y, starting+0.285, 0.91-y, "NDC"), "0.05": ROOT.TPaveText(starting+.1005, 0.85-y, starting+0.355, 0.9-y, "NDC") }
    pave1 = pave1_locations[textsize]
    pave1.SetFillColor(ROOT.kWhite)
    pave1.SetFillStyle(1001)
    pave1.SetTextFont(42)
    pave1.SetBorderSize(0)
    pave1.SetShadowColor(ROOT.kWhite)
    pave1.SetTextSize(float(textsize))
    pave1.AddText("Simulation Internal")

    pave2_locations = {"0.03": ROOT.TPaveText(starting-.0045, 0.83-y, starting+.145, 0.87-y, "NDC"), "0.04": ROOT.TPaveText(starting-.0045, 0.83-y, starting+.185, 0.87-y, "NDC"), "0.05": ROOT.TPaveText(starting-.0045, 0.8-y, starting+.232, 0.85-y, "NDC")}
    pave2 = pave2_locations[textsize]
    pave2.SetFillColor(ROOT.kWhite)
    pave2.SetFillStyle(1001)
    pave2.SetTextFont(42)
    pave2.SetBorderSize(0)
    pave2.SetShadowColor(ROOT.kWhite)
    pave2.SetTextSize(float(textsize))
    pave2.AddText("HL-LHC <#mu>=200")

    pave3_locations = {"0.03": ROOT.TPaveText(starting-.005, 0.79-y, starting+.115, 0.83-y, "NDC"), "0.04": ROOT.TPaveText(starting-.005, 0.79-y, starting+.145, 0.83-y, "NDC"), "0.05" : ROOT.TPaveText(starting-.005, 0.76-y, starting+.185, 0.81-y, "NDC")}
    pave3 = pave3_locations[textsize]
    pave3.SetFillColor(ROOT.kWhite)
    pave3.SetFillStyle(1001)
    pave3.SetTextFont(42)
    pave3.SetBorderSize(0)
    pave3.SetShadowColor(ROOT.kWhite)
    pave3.SetTextSize(float(textsize))
    pave3.AddText("Minimum Bias")

    return pave, pave1, pave2, pave3  
