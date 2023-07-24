#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et2p0_4_Rebin_N_dist_NLOG_CD_N2()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Fri Jul 21 15:47:54 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,53,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-63.17948,-6.184201,331.6923,1.217058);
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
   CalosP422_cumulative__1->SetBinContent(2,0.9963934);
   CalosP422_cumulative__1->SetBinContent(3,0.9383606);
   CalosP422_cumulative__1->SetBinContent(4,0.7731147);
   CalosP422_cumulative__1->SetBinContent(5,0.5331147);
   CalosP422_cumulative__1->SetBinContent(6,0.3265574);
   CalosP422_cumulative__1->SetBinContent(7,0.192459);
   CalosP422_cumulative__1->SetBinContent(8,0.1193443);
   CalosP422_cumulative__1->SetBinContent(9,0.07967213);
   CalosP422_cumulative__1->SetBinContent(10,0.05442623);
   CalosP422_cumulative__1->SetBinContent(11,0.03836066);
   CalosP422_cumulative__1->SetBinContent(12,0.02622951);
   CalosP422_cumulative__1->SetBinContent(13,0.01901639);
   CalosP422_cumulative__1->SetBinContent(14,0.01377049);
   CalosP422_cumulative__1->SetBinContent(15,0.01081967);
   CalosP422_cumulative__1->SetBinContent(16,0.01016393);
   CalosP422_cumulative__1->SetBinContent(17,0.008852459);
   CalosP422_cumulative__1->SetBinContent(18,0.006885246);
   CalosP422_cumulative__1->SetBinContent(19,0.003934426);
   CalosP422_cumulative__1->SetBinContent(20,0.00295082);
   CalosP422_cumulative__1->SetBinContent(21,0.002295082);
   CalosP422_cumulative__1->SetBinContent(22,0.001639344);
   CalosP422_cumulative__1->SetBinContent(23,0.001639344);
   CalosP422_cumulative__1->SetBinContent(24,0.001639344);
   CalosP422_cumulative__1->SetBinContent(25,0.0009836066);
   CalosP422_cumulative__1->SetBinContent(26,0.0006557377);
   CalosP422_cumulative__1->SetBinContent(27,0.0006557377);
   CalosP422_cumulative__1->SetBinContent(28,0.0003278689);
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
   CalosP422_cumulative__1->GetXaxis()->SetRange(1,77);
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
   pt_LaTex = pt->AddText("E_{T}^{TC} > 2.0");
   pt->Draw();
   
   TH1F *CalosP420_cumulative__2 = new TH1F("CalosP420_cumulative__2","h_Calo420TopoClusters_N2",625,0,2500);
   CalosP420_cumulative__2->SetBinContent(1,1);
   CalosP420_cumulative__2->SetBinContent(2,1);
   CalosP420_cumulative__2->SetBinContent(3,0.992459);
   CalosP420_cumulative__2->SetBinContent(4,0.9508197);
   CalosP420_cumulative__2->SetBinContent(5,0.8681967);
   CalosP420_cumulative__2->SetBinContent(6,0.7413115);
   CalosP420_cumulative__2->SetBinContent(7,0.5996721);
   CalosP420_cumulative__2->SetBinContent(8,0.4718033);
   CalosP420_cumulative__2->SetBinContent(9,0.3691803);
   CalosP420_cumulative__2->SetBinContent(10,0.287541);
   CalosP420_cumulative__2->SetBinContent(11,0.2272131);
   CalosP420_cumulative__2->SetBinContent(12,0.1855738);
   CalosP420_cumulative__2->SetBinContent(13,0.1580328);
   CalosP420_cumulative__2->SetBinContent(14,0.1363934);
   CalosP420_cumulative__2->SetBinContent(15,0.1203279);
   CalosP420_cumulative__2->SetBinContent(16,0.1088525);
   CalosP420_cumulative__2->SetBinContent(17,0.09409836);
   CalosP420_cumulative__2->SetBinContent(18,0.0842623);
   CalosP420_cumulative__2->SetBinContent(19,0.07245902);
   CalosP420_cumulative__2->SetBinContent(20,0.06098361);
   CalosP420_cumulative__2->SetBinContent(21,0.05377049);
   CalosP420_cumulative__2->SetBinContent(22,0.04885246);
   CalosP420_cumulative__2->SetBinContent(23,0.04459016);
   CalosP420_cumulative__2->SetBinContent(24,0.03934426);
   CalosP420_cumulative__2->SetBinContent(25,0.03508197);
   CalosP420_cumulative__2->SetBinContent(26,0.03081967);
   CalosP420_cumulative__2->SetBinContent(27,0.02655738);
   CalosP420_cumulative__2->SetBinContent(28,0.02229508);
   CalosP420_cumulative__2->SetBinContent(29,0.01967213);
   CalosP420_cumulative__2->SetBinContent(30,0.01639344);
   CalosP420_cumulative__2->SetBinContent(31,0.01540984);
   CalosP420_cumulative__2->SetBinContent(32,0.0147541);
   CalosP420_cumulative__2->SetBinContent(33,0.01311475);
   CalosP420_cumulative__2->SetBinContent(34,0.01213115);
   CalosP420_cumulative__2->SetBinContent(35,0.01081967);
   CalosP420_cumulative__2->SetBinContent(36,0.0104918);
   CalosP420_cumulative__2->SetBinContent(37,0.009180328);
   CalosP420_cumulative__2->SetBinContent(38,0.00852459);
   CalosP420_cumulative__2->SetBinContent(39,0.008196721);
   CalosP420_cumulative__2->SetBinContent(40,0.007868852);
   CalosP420_cumulative__2->SetBinContent(41,0.006229508);
   CalosP420_cumulative__2->SetBinContent(42,0.006229508);
   CalosP420_cumulative__2->SetBinContent(43,0.004590164);
   CalosP420_cumulative__2->SetBinContent(44,0.003934426);
   CalosP420_cumulative__2->SetBinContent(45,0.003278689);
   CalosP420_cumulative__2->SetBinContent(46,0.003278689);
   CalosP420_cumulative__2->SetBinContent(47,0.002622951);
   CalosP420_cumulative__2->SetBinContent(48,0.002295082);
   CalosP420_cumulative__2->SetBinContent(49,0.002295082);
   CalosP420_cumulative__2->SetBinContent(50,0.001639344);
   CalosP420_cumulative__2->SetBinContent(51,0.001639344);
   CalosP420_cumulative__2->SetBinContent(52,0.001639344);
   CalosP420_cumulative__2->SetBinContent(53,0.001639344);
   CalosP420_cumulative__2->SetBinContent(54,0.001311475);
   CalosP420_cumulative__2->SetBinContent(55,0.001311475);
   CalosP420_cumulative__2->SetBinContent(56,0.001311475);
   CalosP420_cumulative__2->SetBinContent(57,0.0009836066);
   CalosP420_cumulative__2->SetBinContent(58,0.0006557377);
   CalosP420_cumulative__2->SetBinContent(59,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(60,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(61,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(62,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(63,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(64,0.0003278689);
   CalosP420_cumulative__2->SetMinimum(1e-05);
   CalosP420_cumulative__2->SetMaximum(5);
   CalosP420_cumulative__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   CalosP420_cumulative__2->SetLineColor(ci);
   CalosP420_cumulative__2->SetLineWidth(2);
   CalosP420_cumulative__2->GetXaxis()->SetRange(1,77);
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
