import ROOT
import numpy as np

# Read the data from the text file
data = np.loadtxt("/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/output_Cal.txt")

# Extract bin edges and bin contents from the data
bin_edges = data[:, 0]
bin_contents = data[:, 1]

bin_edges_list = bin_edges.tolist()

# Create a new ROOT file for output
output_file = ROOT.TFile("TEST_MAKING_NEW_HIST_FROM_RIPPED_Cal.root", "RECREATE")

# Create a new histogram using the bin edges
num_bins = len(bin_edges) - 1
histogram = ROOT.TH1F("histogram_name", "Histogram Title", num_bins, np.array(bin_edges_list, dtype=np.float32))

# Fill the histogram with the bin contents
for i, content in enumerate(bin_contents):
    histogram.SetBinContent(i + 1, content)

# Save the histogram to the output file
output_file.cd()
histogram.Write()

# Close the output file
output_file.Close()
