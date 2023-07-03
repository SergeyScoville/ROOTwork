#!/bin/sh
#python3 ../Offline_GEP_Testing_Python_Scripts/Singlefile_N_distributions.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_EtNoCut.root 10 NoCut 0.5 0.0 0.05 .75 0.04 0.55 --log &
python3 ../Offline_GEP_Testing_Python_Scripts/Singlefile_N_distributions.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et0p0.root 10 0.0 0.5 0.25 0.05 .75 0.04 0.57 --log &
python3 ../Offline_GEP_Testing_Python_Scripts/Singlefile_N_distributions.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et0p5.root 10 0.5 0.55 0.25 0.05 .75 0.04 0.55 --log &
python3 ../Offline_GEP_Testing_Python_Scripts/Singlefile_N_distributions.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et1p0.root 10 1.0 0.5 0.25 0.05 .75 0.04 0.55 --log &
python3 ../Offline_GEP_Testing_Python_Scripts/Singlefile_N_distributions.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et1p5.root 10 1.5 0.5 0.0 0.05 .75 0.04 0.55 --log &
python3 ../Offline_GEP_Testing_Python_Scripts/Singlefile_N_distributions.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/16eta_bins/hist_Et2p0.root 10 2.0 0.5 0.0 0.05 .75 0.04 0.55 --log


#python3 Singlefile_N_distributions.py filepath bins ETcut legend_adjustment_x legend_adjustment_y TPave_textsize legend_start legendfont TPave_start --log --cd --sk  --onoff algorithm (if you do --onvoff)