#!/bin/sh
python3 ../Offline_GEP_Testing_Python_Scripts/TESTING_log_errors.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/18Jul_splitting/hist_Et0p0.root 4 0.0 0.0 0.25 0.05 .75 0.04 0.2 --log --test 
python3 ../Offline_GEP_Testing_Python_Scripts/TESTING_log_errors.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/18Jul_splitting/hist_Et0p5.root 10 0.5 0.55 0.25 0.05 .75 0.04 0.55 --log --test
python3 ../Offline_GEP_Testing_Python_Scripts/TESTING_log_errors.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/18Jul_splitting/hist_Et1p0.root 10 1.0 0.5 0.25 0.05 .75 0.04 0.55 --log --test
python3 ../Offline_GEP_Testing_Python_Scripts/TESTING_log_errors.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/18Jul_splitting/hist_Et1p5.root 10 1.5 0.5 0.0 0.05 .75 0.04 0.55 --log --test
python3 ../Offline_GEP_Testing_Python_Scripts/TESTING_log_errors.py /Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/18Jul_splitting/hist_Et2p0.root 10 2.0 0.5 0.0 0.05 .75 0.04 0.55 --log --test
