import ROOT
import sys

file1 = ROOT.TFile(sys.argv[1])

algorithms = ["h_Calo422TopoClusters_N1", "h_Calo420TopoClusters_N1", "h_CaloCalTopoClusters_N1"]
algorithms_eta = ["h_Calo422TopoClusters_eta", "h_Calo420TopoClusters_eta", "h_CaloCalTopoClusters_eta"]
algorithms_phi = ["h_Calo422TopoClusters_phi", "h_Calo420TopoClusters_phi", "h_CaloCalTopoClusters_phi"]


hist1 = file1.Get(algorithms[0])
hist2 = file1.Get(algorithms[1])
hist3 = file1.Get(algorithms[2])

hist_sum = hist1.Clone()
hist_sum.Add(hist2)
hist_sum.Add(hist3)

output_file = ROOT.TFile("Sum_"+"422_420_Cal"+"_.root", "RECREATE")
hist_sum.Write()
output_file.Close()




