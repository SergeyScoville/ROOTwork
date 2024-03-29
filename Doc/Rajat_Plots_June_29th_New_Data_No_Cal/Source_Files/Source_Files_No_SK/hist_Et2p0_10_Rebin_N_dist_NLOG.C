#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et2p0_10_Rebin_N_dist_NLOG()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 29 14:08:16 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-412.3077,-6.184201,2164.615,1.217058);
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
   
   TH1F *CalosP422__1 = new TH1F("CalosP422__1","Number of Topoclusters",250,0,2500);
   CalosP422__1->SetBinContent(2,0.0009836066);
   CalosP422__1->SetBinContent(3,0.02065574);
   CalosP422__1->SetBinContent(4,0.08098361);
   CalosP422__1->SetBinContent(5,0.1511475);
   CalosP422__1->SetBinContent(6,0.1862295);
   CalosP422__1->SetBinContent(7,0.1540984);
   CalosP422__1->SetBinContent(8,0.1173771);
   CalosP422__1->SetBinContent(9,0.07803278);
   CalosP422__1->SetBinContent(10,0.05311475);
   CalosP422__1->SetBinContent(11,0.03409836);
   CalosP422__1->SetBinContent(12,0.02262295);
   CalosP422__1->SetBinContent(13,0.02065574);
   CalosP422__1->SetBinContent(14,0.009180328);
   CalosP422__1->SetBinContent(15,0.008852459);
   CalosP422__1->SetBinContent(16,0.009180328);
   CalosP422__1->SetBinContent(17,0.005245902);
   CalosP422__1->SetBinContent(18,0.00557377);
   CalosP422__1->SetBinContent(19,0.005245902);
   CalosP422__1->SetBinContent(20,0.004590164);
   CalosP422__1->SetBinContent(21,0.003606557);
   CalosP422__1->SetBinContent(22,0.004590164);
   CalosP422__1->SetBinContent(23,0.002295082);
   CalosP422__1->SetBinContent(24,0.003606557);
   CalosP422__1->SetBinContent(25,0.002622951);
   CalosP422__1->SetBinContent(26,0.001311475);
   CalosP422__1->SetBinContent(27,0.001967213);
   CalosP422__1->SetBinContent(28,0.001311475);
   CalosP422__1->SetBinContent(29,0.0009836066);
   CalosP422__1->SetBinContent(30,0.001311475);
   CalosP422__1->SetBinContent(31,0.0006557377);
   CalosP422__1->SetBinContent(32,0.0009836066);
   CalosP422__1->SetBinContent(33,0.0006557377);
   CalosP422__1->SetBinContent(34,0.0006557377);
   CalosP422__1->SetBinContent(35,0.0003278689);
   CalosP422__1->SetBinContent(36,0.0006557377);
   CalosP422__1->SetBinContent(37,0.0003278689);
   CalosP422__1->SetBinContent(38,0.0009836066);
   CalosP422__1->SetBinContent(39,0.0009836066);
   CalosP422__1->SetBinContent(42,0.0003278689);
   CalosP422__1->SetBinContent(43,0.0003278689);
   CalosP422__1->SetBinContent(45,0.0003278689);
   CalosP422__1->SetBinContent(46,0.0003278689);
   CalosP422__1->SetBinContent(47,0.0003278689);
   CalosP422__1->SetBinContent(48,0.0003278689);
   CalosP422__1->SetBinContent(55,0.0003278689);
   CalosP422__1->SetMinimum(1e-05);
   CalosP422__1->SetMaximum(5);
   CalosP422__1->SetEntries(5550);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   CalosP422__1->SetFillColor(ci);
   CalosP422__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   CalosP422__1->SetLineColor(ci);
   CalosP422__1->SetLineWidth(2);
   CalosP422__1->GetXaxis()->SetTitle("Number of Topoclusters");
   CalosP422__1->GetXaxis()->SetRange(1,201);
   CalosP422__1->GetXaxis()->SetLabelFont(42);
   CalosP422__1->GetXaxis()->SetTitleSize(0.04);
   CalosP422__1->GetXaxis()->SetTitleOffset(1);
   CalosP422__1->GetXaxis()->SetTitleFont(42);
   CalosP422__1->GetYaxis()->SetTitle("Fraction of Events/10 TC");
   CalosP422__1->GetYaxis()->SetLabelFont(42);
   CalosP422__1->GetYaxis()->SetTitleSize(0.04);
   CalosP422__1->GetYaxis()->SetTitleFont(42);
   CalosP422__1->GetZaxis()->SetLabelFont(42);
   CalosP422__1->GetZaxis()->SetTitleOffset(1);
   CalosP422__1->GetZaxis()->SetTitleFont(42);
   CalosP422__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9423548,0.3463606,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Number of Topoclusters");
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
   
   TH1F *CalosP420__2 = new TH1F("CalosP420__2","h_Calo420TopoClusters_N",250,0,2500);
   CalosP420__2->SetBinContent(3,0.003934426);
   CalosP420__2->SetBinContent(4,0.01442623);
   CalosP420__2->SetBinContent(5,0.03901639);
   CalosP420__2->SetBinContent(6,0.06655738);
   CalosP420__2->SetBinContent(7,0.0862295);
   CalosP420__2->SetBinContent(8,0.09868852);
   CalosP420__2->SetBinContent(9,0.1009836);
   CalosP420__2->SetBinContent(10,0.09213115);
   CalosP420__2->SetBinContent(11,0.07213115);
   CalosP420__2->SetBinContent(12,0.06786885);
   CalosP420__2->SetBinContent(13,0.04983607);
   CalosP420__2->SetBinContent(14,0.04622951);
   CalosP420__2->SetBinContent(15,0.03180328);
   CalosP420__2->SetBinContent(16,0.02590164);
   CalosP420__2->SetBinContent(17,0.02);
   CalosP420__2->SetBinContent(18,0.02032787);
   CalosP420__2->SetBinContent(19,0.01344262);
   CalosP420__2->SetBinContent(20,0.01377049);
   CalosP420__2->SetBinContent(21,0.01016393);
   CalosP420__2->SetBinContent(22,0.009836066);
   CalosP420__2->SetBinContent(23,0.006557377);
   CalosP420__2->SetBinContent(24,0.008196721);
   CalosP420__2->SetBinContent(25,0.00557377);
   CalosP420__2->SetBinContent(26,0.004262295);
   CalosP420__2->SetBinContent(27,0.006557377);
   CalosP420__2->SetBinContent(28,0.003606557);
   CalosP420__2->SetBinContent(29,0.004262295);
   CalosP420__2->SetBinContent(30,0.004918033);
   CalosP420__2->SetBinContent(31,0.003278689);
   CalosP420__2->SetBinContent(32,0.004590164);
   CalosP420__2->SetBinContent(33,0.002295082);
   CalosP420__2->SetBinContent(34,0.002295082);
   CalosP420__2->SetBinContent(35,0.001967213);
   CalosP420__2->SetBinContent(36,0.003934426);
   CalosP420__2->SetBinContent(37,0.004262295);
   CalosP420__2->SetBinContent(38,0.003278689);
   CalosP420__2->SetBinContent(39,0.00295082);
   CalosP420__2->SetBinContent(40,0.002622951);
   CalosP420__2->SetBinContent(41,0.002295082);
   CalosP420__2->SetBinContent(42,0.003278689);
   CalosP420__2->SetBinContent(43,0.001967213);
   CalosP420__2->SetBinContent(44,0.003606557);
   CalosP420__2->SetBinContent(45,0.0003278689);
   CalosP420__2->SetBinContent(46,0.001967213);
   CalosP420__2->SetBinContent(47,0.0006557377);
   CalosP420__2->SetBinContent(48,0.002622951);
   CalosP420__2->SetBinContent(49,0.001967213);
   CalosP420__2->SetBinContent(50,0.001967213);
   CalosP420__2->SetBinContent(51,0.002295082);
   CalosP420__2->SetBinContent(52,0.001311475);
   CalosP420__2->SetBinContent(53,0.001639344);
   CalosP420__2->SetBinContent(54,0.0003278689);
   CalosP420__2->SetBinContent(55,0.0009836066);
   CalosP420__2->SetBinContent(56,0.0009836066);
   CalosP420__2->SetBinContent(57,0.0006557377);
   CalosP420__2->SetBinContent(58,0.0009836066);
   CalosP420__2->SetBinContent(60,0.0009836066);
   CalosP420__2->SetBinContent(62,0.001639344);
   CalosP420__2->SetBinContent(64,0.0009836066);
   CalosP420__2->SetBinContent(65,0.0006557377);
   CalosP420__2->SetBinContent(68,0.0006557377);
   CalosP420__2->SetBinContent(70,0.0009836066);
   CalosP420__2->SetBinContent(71,0.0006557377);
   CalosP420__2->SetBinContent(72,0.0003278689);
   CalosP420__2->SetBinContent(73,0.0003278689);
   CalosP420__2->SetBinContent(74,0.0009836066);
   CalosP420__2->SetBinContent(75,0.0003278689);
   CalosP420__2->SetBinContent(78,0.0003278689);
   CalosP420__2->SetBinContent(79,0.0003278689);
   CalosP420__2->SetBinContent(82,0.0006557377);
   CalosP420__2->SetBinContent(87,0.0006557377);
   CalosP420__2->SetBinContent(88,0.0003278689);
   CalosP420__2->SetBinContent(90,0.0003278689);
   CalosP420__2->SetBinContent(98,0.0003278689);
   CalosP420__2->SetMinimum(1e-05);
   CalosP420__2->SetMaximum(5);
   CalosP420__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   CalosP420__2->SetLineColor(ci);
   CalosP420__2->SetLineWidth(2);
   CalosP420__2->GetXaxis()->SetRange(1,201);
   CalosP420__2->GetXaxis()->SetLabelFont(42);
   CalosP420__2->GetXaxis()->SetTitleOffset(1);
   CalosP420__2->GetXaxis()->SetTitleFont(42);
   CalosP420__2->GetYaxis()->SetLabelFont(42);
   CalosP420__2->GetYaxis()->SetTitleFont(42);
   CalosP420__2->GetZaxis()->SetLabelFont(42);
   CalosP420__2->GetZaxis()->SetTitleOffset(1);
   CalosP420__2->GetZaxis()->SetTitleFont(42);
   CalosP420__2->Draw("hist same");
   
   TLegend *leg = new TLegend(0.7,0.3,0.83,0.42,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Calo 422","Calo 422","lpf");

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
   entry=leg->AddEntry("Calo 420","Calo 420","l");

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
