import ROOT
import sys

try:
    bins = int(sys.argv[2])
except IndexError:
    bins = 0
file = ROOT.TFile(sys.argv[1])

hist1 = file.Get("h_Calo422TopoClusters_N")
hist2 = file.Get("h_Calo420TopoClusters_N")
hist3 = file.Get("h_CaloCalTopoClusters_N")

canvas = ROOT.TCanvas("canvas", "Histograms", 800, 600)

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
        i.GetXaxis().SetRangeUser(0, xmax+50)
        i.GetYaxis().SetRangeUser(0, ymax+0.01)
    return


def get_histograms_ymax(individual_histograms, bins):
    histograms = individual_histograms
    if bins != 0:
        for i in histograms:
            i.Rebin(bins)
    y_max = 0
    for i in histograms:
        if i.GetMaximum() > y_max:
            y_max = i.GetMaximum()
    return y_max


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



bin_options = find_divisors(hist1.GetNbinsX())
if bins == 0:
    print("The options available to rebin your dataset are", str(bin_options), ". To rebin your dataset, add the integer you wish to end of command line prompt and it will divide the number of bins by this integer to give new binning.")




set_y_axis_to_bin_ratio([hist1, hist2, hist3])

x_max = get_histograms_xmax([hist1, hist2, hist3])
y_max = get_histograms_ymax([hist1, hist2, hist3], bins)



histogram_modifiers([hist1, hist2, hist3], x_max, y_max, bins)

#hist1.SetEntries(50)

hist1.GetXaxis().SetTitle("Number of Topoclusters")
hist1.GetXaxis().CenterTitle()
hist1.GetXaxis().SetTitleOffset(1.2)
hist1.GetYaxis().SetTitle("Ratio of events/total events ")
hist1.GetYaxis().CenterTitle()
hist1.GetYaxis().SetNdivisions(-6, ROOT.kFALSE) # Removing minor tickmarks

#hist1.SetStats(0)
hist1.Draw()

hist2.SetLineColor(ROOT.kRed)
hist2.Draw("sames")

canvas.Update()
st = hist2.FindObject("stats")
st.SetY1NDC(0.65)
st.SetY2NDC(0.50)
canvas.Update()


hist3.SetLineColor(ROOT.kGreen)
hist3.Draw("sames")
canvas.Update()



# Update the canvas to display the changes
canvas.Update()

hist1.SetTitle("Number of Topoclusters measured with offline GEP algorithms")
canvas.SetName("All_GEP_Algo")
canvas.Update()

legend = ROOT.TLegend(0.7,0.6,0.85,0.75)    # Add a legend near the top right corner
legend.AddEntry(hist1,"Calo 422")               # Add the MC histogram, labelled as "MC"
legend.AddEntry(hist2,"Calo 420")           # Add the data points, labelled as "Data"
legend.AddEntry(hist3, "Calo Cal")
legend.SetTextSize(0.03)
#legend.SetLineWidth(0)                      # Remove the boundary on the legend
legend.Draw("same")  

canvas.Update()

output_file = ROOT.TFile("GEP_422_420_Cal_"+str(bins)+"_rebin.root", "RECREATE")
canvas.Write()

output_file.Close()

file.Close()
