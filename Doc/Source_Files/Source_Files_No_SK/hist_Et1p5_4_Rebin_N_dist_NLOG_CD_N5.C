#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p5_4_Rebin_N_dist_NLOG_CD_N5()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Fri Jul 21 15:48:34 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,53,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-33.64102,-6.184201,176.6154,1.217058);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetLogy();
   All_GEP_Algo->SetTickx(1);
   All_GEP_Algo->SetTicky(1);
   All_GEP_Algo->SetLeftMargin(0.16);
   All_GEP_Algo->SetRightMargin(0.06);
   All_GEP_Algo->SetTopMargin(0.07);
   All_GEP_Algo->SetBottomMargin(0.16);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   
   TH1F *CalosP422_cumulative__1 = new TH1F("CalosP422_cumulative__1","Cumulative Number of Topoclusters",625,0,2500);
   CalosP422_cumulative__1->SetBinContent(1,1);
   CalosP422_cumulative__1->SetBinContent(2,0.8803279);
   CalosP422_cumulative__1->SetBinContent(3,0.5396721);
   CalosP422_cumulative__1->SetBinContent(4,0.2639344);
   CalosP422_cumulative__1->SetBinContent(5,0.1396721);
   CalosP422_cumulative__1->SetBinContent(6,0.09081967);
   CalosP422_cumulative__1->SetBinContent(7,0.07606557);
   CalosP422_cumulative__1->SetBinContent(8,0.06295082);
   CalosP422_cumulative__1->SetBinContent(9,0.05639344);
   CalosP422_cumulative__1->SetBinContent(10,0.05508197);
   CalosP422_cumulative__1->SetBinContent(11,0.05147541);
   CalosP422_cumulative__1->SetBinContent(12,0.04786885);
   CalosP422_cumulative__1->SetBinContent(13,0.04459016);
   CalosP422_cumulative__1->SetBinContent(14,0.03901639);
   CalosP422_cumulative__1->SetBinContent(15,0.03540984);
   CalosP422_cumulative__1->SetBinContent(16,0.03213115);
   CalosP422_cumulative__1->SetBinContent(17,0.02819672);
   CalosP422_cumulative__1->SetBinContent(18,0.02426229);
   CalosP422_cumulative__1->SetBinContent(19,0.02);
   CalosP422_cumulative__1->SetBinContent(20,0.01442623);
   CalosP422_cumulative__1->SetBinContent(21,0.01081967);
   CalosP422_cumulative__1->SetBinContent(22,0.007213115);
   CalosP422_cumulative__1->SetBinContent(23,0.005901639);
   CalosP422_cumulative__1->SetBinContent(24,0.004918033);
   CalosP422_cumulative__1->SetBinContent(25,0.001311475);
   CalosP422_cumulative__1->SetBinContent(26,0.0006557377);
   CalosP422_cumulative__1->SetMinimum(1e-05);
   CalosP422_cumulative__1->SetMaximum(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   CalosP422_cumulative__1->SetFillColor(ci);
   CalosP422_cumulative__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   CalosP422_cumulative__1->SetLineColor(ci);
   CalosP422_cumulative__1->SetLineWidth(2);
   CalosP422_cumulative__1->GetXaxis()->SetTitle("Number of Topoclusters");
   CalosP422_cumulative__1->GetXaxis()->SetRange(1,41);
   CalosP422_cumulative__1->GetXaxis()->SetLabelFont(42);
   CalosP422_cumulative__1->GetXaxis()->SetTitleSize(0.04);
   CalosP422_cumulative__1->GetXaxis()->SetTitleOffset(1);
   CalosP422_cumulative__1->GetXaxis()->SetTitleFont(42);
   CalosP422_cumulative__1->GetYaxis()->SetTitle("Fraction of Events/4 TC");
   CalosP422_cumulative__1->GetYaxis()->SetLabelFont(42);
   CalosP422_cumulative__1->GetYaxis()->SetTitleSize(0.04);
   CalosP422_cumulative__1->GetYaxis()->SetTitleFont(42);
   CalosP422_cumulative__1->GetZaxis()->SetLabelFont(42);
   CalosP422_cumulative__1->GetZaxis()->SetTitleOffset(1);
   CalosP422_cumulative__1->GetZaxis()->SetTitleFont(42);
   CalosP422_cumulative__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.5049583,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Cumulative Number of Topoclusters");
   pt->Draw();
   
   pt = new TPaveText(0.545,0.85,0.65,0.9,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(72);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("ATLAS");
   pt->Draw();
   
   pt = new TPaveText(0.6505,0.85,0.905,0.9,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("Simulation Internal");
   pt->Draw();
   
   pt = new TPaveText(0.545,0.8,0.782,0.85,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("HL-LHC <#mu>=200");
   pt->Draw();
   
   pt = new TPaveText(0.545,0.76,0.735,0.81,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("Minimum Bias");
   pt->Draw();
   
   pt = new TPaveText(0.545,0.71,0.665,0.76,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("E_{T}^{TC} > 1.5");
   pt->Draw();
   
   TH1F *CalosP420_cumulative__2 = new TH1F("CalosP420_cumulative__2","h_Calo420TopoClusters_N5",625,0,2500);
   CalosP420_cumulative__2->SetBinContent(1,1);
   CalosP420_cumulative__2->SetBinContent(2,0.8567213);
   CalosP420_cumulative__2->SetBinContent(3,0.6321312);
   CalosP420_cumulative__2->SetBinContent(4,0.4439344);
   CalosP420_cumulative__2->SetBinContent(5,0.3163934);
   CalosP420_cumulative__2->SetBinContent(6,0.2377049);
   CalosP420_cumulative__2->SetBinContent(7,0.1855738);
   CalosP420_cumulative__2->SetBinContent(8,0.1478689);
   CalosP420_cumulative__2->SetBinContent(9,0.1236066);
   CalosP420_cumulative__2->SetBinContent(10,0.1088525);
   CalosP420_cumulative__2->SetBinContent(11,0.09803279);
   CalosP420_cumulative__2->SetBinContent(12,0.09016393);
   CalosP420_cumulative__2->SetBinContent(13,0.08459017);
   CalosP420_cumulative__2->SetBinContent(14,0.07770492);
   CalosP420_cumulative__2->SetBinContent(15,0.07442623);
   CalosP420_cumulative__2->SetBinContent(16,0.07245902);
   CalosP420_cumulative__2->SetBinContent(17,0.06983607);
   CalosP420_cumulative__2->SetBinContent(18,0.06459016);
   CalosP420_cumulative__2->SetBinContent(19,0.06196721);
   CalosP420_cumulative__2->SetBinContent(20,0.0590164);
   CalosP420_cumulative__2->SetBinContent(21,0.05606557);
   CalosP420_cumulative__2->SetBinContent(22,0.05245902);
   CalosP420_cumulative__2->SetBinContent(23,0.04918033);
   CalosP420_cumulative__2->SetBinContent(24,0.0452459);
   CalosP420_cumulative__2->SetBinContent(25,0.03639344);
   CalosP420_cumulative__2->SetBinContent(26,0.02852459);
   CalosP420_cumulative__2->SetBinContent(27,0.02393443);
   CalosP420_cumulative__2->SetBinContent(28,0.01868852);
   CalosP420_cumulative__2->SetBinContent(29,0.01114754);
   CalosP420_cumulative__2->SetBinContent(30,0.006229508);
   CalosP420_cumulative__2->SetBinContent(31,0.003606557);
   CalosP420_cumulative__2->SetBinContent(32,0.001967213);
   CalosP420_cumulative__2->SetBinContent(33,0.0009836066);
   CalosP420_cumulative__2->SetBinContent(34,0.0006557377);
   CalosP420_cumulative__2->SetMinimum(1e-05);
   CalosP420_cumulative__2->SetMaximum(5);
   CalosP420_cumulative__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   CalosP420_cumulative__2->SetLineColor(ci);
   CalosP420_cumulative__2->SetLineWidth(2);
   CalosP420_cumulative__2->GetXaxis()->SetRange(1,41);
   CalosP420_cumulative__2->GetXaxis()->SetLabelFont(42);
   CalosP420_cumulative__2->GetXaxis()->SetTitleOffset(1);
   CalosP420_cumulative__2->GetXaxis()->SetTitleFont(42);
   CalosP420_cumulative__2->GetYaxis()->SetLabelFont(42);
   CalosP420_cumulative__2->GetYaxis()->SetTitleFont(42);
   CalosP420_cumulative__2->GetZaxis()->SetLabelFont(42);
   CalosP420_cumulative__2->GetZaxis()->SetTitleOffset(1);
   CalosP420_cumulative__2->GetZaxis()->SetTitleFont(42);
   CalosP420_cumulative__2->Draw("hist same");
   
   TLegend *leg = new TLegend(0.7,0.55,0.83,0.67,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Calo 422_cumulative","Calo 422","lpf");

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
   entry=leg->AddEntry("Calo 420_cumulative","Calo 420","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   All_GEP_Algo->Modified();
   All_GEP_Algo->cd();
   All_GEP_Algo->SetSelected(All_GEP_Algo);
}
