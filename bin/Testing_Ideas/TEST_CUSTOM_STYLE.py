import ROOT

AtlasStyle=ROOT.TStyle("AtlasStyle","MyCustomStyle")


icol = ROOT.kWhite
AtlasStyle.SetFrameBorderMode(icol)
AtlasStyle.SetFrameFillColor(icol)
AtlasStyle.SetCanvasBorderMode(icol)
AtlasStyle.SetCanvasColor(icol)
AtlasStyle.SetPadBorderMode(icol)
AtlasStyle.SetPadColor(icol)
AtlasStyle.SetStatColor(icol)
# AtlasStyle.SetFillColor(icol)#don'tuse:whitefillcolorfor*all*objects
#setthepaper&marginsizes
AtlasStyle.SetPaperSize(20,26)
#setmarginsizes
AtlasStyle.SetPadTopMargin(0.05)
AtlasStyle.SetPadRightMargin(0.05)
AtlasStyle.SetPadBottomMargin(0.16)
AtlasStyle.SetPadLeftMargin(0.16)
#settitleoffsets(foraxislabel)
AtlasStyle.SetTitleXOffset(1.4)
AtlasStyle.SetTitleYOffset(1.4)
#uselargefonts
#Int_tfont=72#Helveticaitalics
font=42 #Helvetica
tsize=0.05
AtlasStyle.SetTextFont(font)
AtlasStyle.SetTextSize(tsize)
AtlasStyle.SetLabelFont(font,"x")
AtlasStyle.SetTitleFont(font,"x")
AtlasStyle.SetLabelFont(font,"y")
AtlasStyle.SetTitleFont(font,"y")
AtlasStyle.SetLabelFont(font,"z")
AtlasStyle.SetTitleFont(font,"z")
AtlasStyle.SetLabelSize(tsize,"x")
AtlasStyle.SetTitleSize(tsize,"x")
AtlasStyle.SetLabelSize(tsize,"y")
AtlasStyle.SetTitleSize(tsize,"y")
AtlasStyle.SetLabelSize(tsize,"z")
AtlasStyle.SetTitleSize(tsize,"z")
#useboldlinesandmarkers
AtlasStyle.SetMarkerStyle(20)
AtlasStyle.SetMarkerSize(1.2)
AtlasStyle.SetHistLineWidth(2.)
AtlasStyle.SetLineStyleString(2,"[1212]")#postscriptdashes
#getridofXerrorbars(asrecommendedinATLASfigureguidelines)
AtlasStyle.SetErrorX(0.0001)
#getridoferrorbarcaps
AtlasStyle.SetEndErrorSize(0.)
#donotdisplayanyofthestandardhistogramdecorations
AtlasStyle.SetOptTitle(0)
#AtlasStyle.SetOptStat(1111)
AtlasStyle.SetOptStat(0)
#AtlasStyle.SetOptFit(1111)
AtlasStyle.SetOptFit(0)
#puttickmarksontopandRHSofplots
AtlasStyle.SetPadTickX(1)
AtlasStyle.SetPadTickY(1)

