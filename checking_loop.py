import ROOT
import sys


file1 = ROOT.TFile(sys.argv[1])
file2 = ROOT.TFile(sys.argv[2])

# Get the histogram names from the first file
file1_keys = file1.GetListOfKeys()
histogram_name1 = file1_keys[0].GetName()

# Get the histogram names from the second file
file2_keys = file2.GetListOfKeys()
histogram_name2 = file2_keys[0].GetName()


hist1 = file1.Get(histogram_name1)
hist2 = file2.Get(histogram_name2)

histogram1 = None
for obj in hist1.GetListOfPrimitives():
    if isinstance(obj, ROOT.TH1):
        histogram1 = obj
        break

# Check if a histogram was found
if histogram1 is None:
    raise ValueError("No histogram found within the canvas.")

histogram2 = None
for obj in hist2.GetListOfPrimitives():
    if isinstance(obj, ROOT.TH1):
        histogram2 = obj
        break

# Check if a histogram was found
if histogram2 is None:
    raise ValueError("No histogram found within the canvas.")

hist_sum = histogram1.Clone()
hist_sum.Add(histogram2)

output_file = ROOT.TFile("Add_2500_2500.root", "RECREATE")
hist_sum.Write()
output_file.Close()
