import ROOT
import numpy as np

# Open the input ROOT file
input_file = ROOT.TFile("~/Desktop/Projects/ROOTwork/Data/Sum_h_CaloCalTopoClusters_N_.root", "READ")

histogram1_name = input_file.GetListOfKeys()[0].GetName()

histogram = input_file.Get(histogram1_name)

# Extract bin contents and bin edges
bin_contents = np.array([histogram.GetBinContent(i) for i in range(1, histogram.GetNbinsX() + 2)])
bin_edges = np.array([histogram.GetBinLowEdge(i) for i in range(1, histogram.GetNbinsX() + 2)])

# Save the data to a text file
output_filename = "output_Cal.txt"
np.savetxt(output_filename, np.column_stack((bin_edges, bin_contents)), fmt='%g')

# Close the input file
input_file.Close()
