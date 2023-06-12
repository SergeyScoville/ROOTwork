import ROOT
import sys

file1 = ROOT.TFile(sys.argv[1])
file2 = ROOT.TFile(sys.argv[2])
file3 = ROOT.TFile(sys.argv[3])

algorithms = ["h_Calo422TopoClusters_N", "h_Calo420TopoClusters_N", "h_CaloCalTopoClusters_N"]
algorithms_eta = ["h_Calo422TopoClusters_eta", "h_Calo420TopoClusters_eta", "h_CaloCalTopoClusters_eta"]
algorithms_phi = ["h_Calo422TopoClusters_phi", "h_Calo420TopoClusters_phi", "h_CaloCalTopoClusters_phi"]



for entry in algorithms_phi:
    hist1 = file1.Get(entry)
    hist2 = file2.Get(entry)
    hist3 = file3.Get(entry)

    hist_sum = hist1.Clone()
    hist_sum.Add(hist2)
    hist_sum.Add(hist3)

    output_file = ROOT.TFile("Sum_"+entry+"_.root", "RECREATE")
    hist_sum.Write()
    output_file.Close()




