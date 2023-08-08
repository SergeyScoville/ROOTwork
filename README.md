# ROOTwork

This is where my active development with ROOT happens. This includes stuff such as making histograms, learning C++ ROOT usage, tyring out different options within ROOT and finding out new algorithm implementations.

## Installation
Your easiest option will be to clone this into your local or remote machine but there are not a ton of dependencies so you can also just grab the files that you need, there are just some differences in the directory structure that you will have to accomodate.

## Requirements
You will need a recent installation of ROOT, it does not need to be the most up to date version but I would hesitate going before 6.10.

## Main file running
Most of the main plotting scripts follow the same format. It uses the command line to run and uses a set of arguments that do everything from set the input .root file to use, to dictating where to arrange the legend and words printed upon the histograms. An important note, these plotting scripts make use of a built in rebinning method. This method only works for divisors of the current number of bins in the histogram so if you are uncertain about what you could put for the rebinning, default it to zero and it will print out options for you. The format to devise the running of the specific scripts is located within each of the files in a docstring at the top of the file along with an example command line prompt. 

## Contributions
Changes and updates are welcome, however changes are requested to be made on a new dev branch and merged later after I can take a look at it. 
