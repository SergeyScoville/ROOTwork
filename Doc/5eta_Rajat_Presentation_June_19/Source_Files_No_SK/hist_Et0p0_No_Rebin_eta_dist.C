#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0p0_No_Rebin_eta_dist()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 15 17:24:25 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-22.80828,5.653846,119.7435);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetTickx(1);
   All_GEP_Algo->SetTicky(1);
   All_GEP_Algo->SetLeftMargin(0.16);
   All_GEP_Algo->SetRightMargin(0.06);
   All_GEP_Algo->SetTopMargin(0.07);
   All_GEP_Algo->SetBottomMargin(0.16);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Average number of topoclusters as function of #eta",16,-4.9,4.9);
   Calo_422__1->SetBinContent(1,1.691803);
   Calo_422__1->SetBinContent(2,2.815738);
   Calo_422__1->SetBinContent(3,5.677049);
   Calo_422__1->SetBinContent(4,9.494754);
   Calo_422__1->SetBinContent(5,68.30033);
   Calo_422__1->SetBinContent(6,93.56951);
   Calo_422__1->SetBinContent(7,93.24525);
   Calo_422__1->SetBinContent(8,99.06853);
   Calo_422__1->SetBinContent(9,98.21935);
   Calo_422__1->SetBinContent(10,94.11607);
   Calo_422__1->SetBinContent(11,93.44984);
   Calo_422__1->SetBinContent(12,69.03541);
   Calo_422__1->SetBinContent(13,9.570164);
   Calo_422__1->SetBinContent(14,5.677705);
   Calo_422__1->SetBinContent(15,2.876721);
   Calo_422__1->SetBinContent(16,1.69082);
   Calo_422__1->SetBinError(1,0.02355185);
   Calo_422__1->SetBinError(2,0.03038409);
   Calo_422__1->SetBinError(3,0.04314311);
   Calo_422__1->SetBinError(4,0.05579457);
   Calo_422__1->SetBinError(5,0.1496447);
   Calo_422__1->SetBinError(6,0.1751529);
   Calo_422__1->SetBinError(7,0.1748491);
   Calo_422__1->SetBinError(8,0.1802262);
   Calo_422__1->SetBinError(9,0.1794521);
   Calo_422__1->SetBinError(10,0.1756637);
   Calo_422__1->SetBinError(11,0.1750408);
   Calo_422__1->SetBinError(12,0.1504479);
   Calo_422__1->SetBinError(13,0.0560157);
   Calo_422__1->SetBinError(14,0.0431456);
   Calo_422__1->SetBinError(15,0.03071135);
   Calo_422__1->SetBinError(16,0.023545);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(109.7649);
   Calo_422__1->SetEntries(2282922);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   Calo_422__1->SetFillColor(ci);
   Calo_422__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   Calo_422__1->SetLineColor(ci);
   Calo_422__1->SetLineWidth(2);
   Calo_422__1->GetXaxis()->SetTitle("#eta");
   Calo_422__1->GetXaxis()->SetRange(1,16);
   Calo_422__1->GetXaxis()->SetLabelFont(42);
   Calo_422__1->GetXaxis()->SetTickLength(0.02);
   Calo_422__1->GetXaxis()->SetTitleOffset(1);
   Calo_422__1->GetXaxis()->SetTitleFont(42);
   Calo_422__1->GetYaxis()->SetTitle("Number of topoclusters/# events");
   Calo_422__1->GetYaxis()->SetLabelFont(42);
   Calo_422__1->GetYaxis()->SetTitleFont(42);
   Calo_422__1->GetZaxis()->SetLabelFont(42);
   Calo_422__1->GetZaxis()->SetTitleOffset(1);
   Calo_422__1->GetZaxis()->SetTitleFont(42);
   Calo_422__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.6677295,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Average number of topoclusters as function of #eta");
   pt->Draw();
   TLine *line = new TLine(-4.9,0,-4.9,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,109.7649);
   line->SetLineStyle(2);
   line->Draw();
   
   pt = new TPaveText(0.195,0.87,0.265,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(72);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("ATLAS");
   pt->Draw();
   
   pt = new TPaveText(0.265,0.87,0.42,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("Simulation Internal");
   pt->Draw();
   
   pt = new TPaveText(0.19,0.83,0.35,0.87,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("HL-LHC <#mu>=200");
   pt->Draw();
   
   pt = new TPaveText(0.19,0.79,0.323,0.83,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("Minimum Bias");
   pt->Draw();
   
   pt = new TPaveText(0.19,0.75,0.284,0.79,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("E_{T}^{TC} > 0.0");
   pt->Draw();
   line = new TLine(-4.9,2.707869,-4.2875,2.707869);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-4.2875,4.862623,-3.675,4.862623);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.675,9.178033,-3.0625,9.178033);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.0625,13.38393,-2.45,13.38393);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-2.45,85.66295,-1.8375,85.66295);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.8375,99.31082,-1.225,99.31082);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.225,95.89246,-0.6125,95.89246);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-0.6125,99.78623,0,99.78623);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0,98.76263,0.6125,98.76263);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0.6125,96.91672,1.225,96.91672);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.225,98.95541,1.8375,98.95541);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.8375,86.63836,2.45,86.63836);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(2.45,13.39869,3.0625,13.39869);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.0625,9.177705,3.675,9.177705);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.675,5.001967,4.2875,5.001967);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(4.2875,2.699672,4.9,2.699672);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420TopoClusters_eta",16,-4.9,4.9);
   Calo_420__2->SetBinContent(1,2.707869);
   Calo_420__2->SetBinContent(2,4.862623);
   Calo_420__2->SetBinContent(3,9.178033);
   Calo_420__2->SetBinContent(4,13.38393);
   Calo_420__2->SetBinContent(5,85.66295);
   Calo_420__2->SetBinContent(6,99.31082);
   Calo_420__2->SetBinContent(7,95.89246);
   Calo_420__2->SetBinContent(8,99.78623);
   Calo_420__2->SetBinContent(9,98.76263);
   Calo_420__2->SetBinContent(10,96.91672);
   Calo_420__2->SetBinContent(11,98.95541);
   Calo_420__2->SetBinContent(12,86.63836);
   Calo_420__2->SetBinContent(13,13.39869);
   Calo_420__2->SetBinContent(14,9.177705);
   Calo_420__2->SetBinContent(15,5.001967);
   Calo_420__2->SetBinContent(16,2.699672);
   Calo_420__2->SetBinError(1,0.02979641);
   Calo_420__2->SetBinError(2,0.03992872);
   Calo_420__2->SetBinError(3,0.05485609);
   Calo_420__2->SetBinError(4,0.0662433);
   Calo_420__2->SetBinError(5,0.1675894);
   Calo_420__2->SetBinError(6,0.1804465);
   Calo_420__2->SetBinError(7,0.1773137);
   Calo_420__2->SetBinError(8,0.1808778);
   Calo_420__2->SetBinError(9,0.1799477);
   Calo_420__2->SetBinError(10,0.1782582);
   Calo_420__2->SetBinError(11,0.1801233);
   Calo_420__2->SetBinError(12,0.1685409);
   Calo_420__2->SetBinError(13,0.06627981);
   Calo_420__2->SetBinError(14,0.05485511);
   Calo_420__2->SetBinError(15,0.04049678);
   Calo_420__2->SetBinError(16,0.02975128);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(109.7649);
   Calo_420__2->SetEntries(2508125);

   ci = TColor::GetColor("#000099");
   Calo_420__2->SetLineColor(ci);
   Calo_420__2->SetLineWidth(0);

   ci = TColor::GetColor("#ff0000");
   Calo_420__2->SetMarkerColor(ci);
   Calo_420__2->SetMarkerSize(0);
   Calo_420__2->GetXaxis()->SetRange(1,16);
   Calo_420__2->GetXaxis()->SetLabelFont(42);
   Calo_420__2->GetXaxis()->SetTitleOffset(1);
   Calo_420__2->GetXaxis()->SetTitleFont(42);
   Calo_420__2->GetYaxis()->SetLabelFont(42);
   Calo_420__2->GetYaxis()->SetTitleFont(42);
   Calo_420__2->GetZaxis()->SetLabelFont(42);
   Calo_420__2->GetZaxis()->SetTitleOffset(1);
   Calo_420__2->GetZaxis()->SetTitleFont(42);
   Calo_420__2->Draw("P same");
   
   TLegend *leg = new TLegend(0.8,0.5,0.92,0.62,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Calo_422","Calo_422","lpf");

   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TLine","Calo_420","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   All_GEP_Algo->Modified();
   All_GEP_Algo->cd();
   All_GEP_Algo->SetSelected(All_GEP_Algo);
}
