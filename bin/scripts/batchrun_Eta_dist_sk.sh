#!/bin/sh
python3 ../Offline_GEP_Testing_Python_Scripts/Singlefile_Eta_distributions.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_EtNoCut.root 0 NoCut 0.0 0.0 0.04 .78 0.03 0.19 --sk eta
python3 ../Offline_GEP_Testing_Python_Scripts/Singlefile_Eta_distributions.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et0p0.root 0 0.0 0.0 0.0 0.04 .78 0.03 0.19 --sk eta
python3 ../Offline_GEP_Testing_Python_Scripts/Singlefile_Eta_distributions.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et0p5.root 0 0.5 0.0 0.0 0.04 .78 0.03 0.19 --sk eta
python3 ../Offline_GEP_Testing_Python_Scripts/Singlefile_Eta_distributions.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et1p0.root 0 1.0 0.0 0.3 0.04 .78 0.03 0.19 --sk eta
python3 ../Offline_GEP_Testing_Python_Scripts/Singlefile_Eta_distributions.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et1p5.root 0 1.5 0.0 0.3 0.04 .78 0.03 0.19 --sk eta
python3 ../Offline_GEP_Testing_Python_Scripts/Singlefile_Eta_distributions.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et2p0.root 0 2.0 0.0 0.3 0.04 .78 0.03 0.19 --sk eta