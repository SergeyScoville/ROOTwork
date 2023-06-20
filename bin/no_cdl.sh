#!/bin/sh
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_EtNoCut.root N 10 NoCut Number_of_Topoclusters --log
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et0p0.root N 10 0.0 Number_of_Topoclusters --log
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et0p5.root N 10 0.5 Number_of_Topoclusters --log
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et1p0.root N 10 1.0 Number_of_Topoclusters --log
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et1p5.root N 10 1.5 Number_of_Topoclusters --log
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et2p0.root N 10 2.0 Number_of_Topoclusters --log
