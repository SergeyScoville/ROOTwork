#!/bin/sh
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_EtNoCut.root N 4 NoCut Cumulative_Number_of_Topoclusters --log --sk
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et0p0.root N 4 0.0 Cumulative_Number_of_Topoclusters --log --sk
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et0p5.root N 4 0.5 Cumulative_Number_of_Topoclusters --log --sk
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et1p0.root N 4 1.0 Cumulative_Number_of_Topoclusters --log --sk
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et1p5.root N 4 1.5 Cumulative_Number_of_Topoclusters --log --sk
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et2p0.root N 4 2.0 Cumulative_Number_of_Topoclusters --log --sk
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_EtNoCut.root eta NoCut Average_number_of_topoclusters_as_function_of_#eta
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et0p0.root eta 0.0 Average_number_of_topoclusters_as_function_of_#eta
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et0p5.root eta 0.5 Average_number_of_topoclusters_as_function_of_#eta
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et1p0.root eta 1.0 Average_number_of_topoclusters_as_function_of_#eta
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et1p5.root eta 1.5 Average_number_of_topoclusters_as_function_of_#eta
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et2p0.root eta 2.0 Average_number_of_topoclusters_as_function_of_#eta
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_EtNoCut.root et NoCut Et_of_Topoclusters --log  
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et0p0.root et 0.0 Et_of_Topoclusters --log  
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et0p5.root et 0.5 Et_of_Topoclusters --log  
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et1p0.root et 1.0 Et_of_Topoclusters --log  
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et1p5.root et 1.5 Et_of_Topoclusters --log  
python3 Offline_GEP_Testing_Python_Scripts/combining_and_rescaling.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et2p0.root et 2.0 Et_of_Topoclusters --log  