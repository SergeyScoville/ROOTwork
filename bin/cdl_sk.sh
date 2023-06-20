#!/bin/sh
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_EtNoCut.root N 4 NoCut Cumulative_Number_of_Topoclusters_post_SK --log --sk
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et0p0.root N 4 0.0 Cumulative_Number_of_Topoclusters_post_SK --log --sk
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et0p5.root N 4 0.5 Cumulative_Number_of_Topoclusters_post_SK --log --sk
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et1p0.root N 4 1.0 Cumulative_Number_of_Topoclusters_post_SK --log --sk
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et1p5.root N 4 1.5 Cumulative_Number_of_Topoclusters_post_SK --log --sk
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et2p0.root N 4 2.0 Cumulative_Number_of_Topoclusters_post_SK --log --sk
