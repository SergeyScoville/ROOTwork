#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p5_4_Rebin_N_dist_SKNoAtlas()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Mon Jul  3 11:22:17 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-91.07692,-0.01746136,478.1538,0.09167213);
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
   
   TH1F *CalosP422__1 = new TH1F("CalosP422__1","Number of Topoclusters post SK",625,0,2500);
   CalosP422__1->SetBinContent(20,0.0003278689);
   CalosP422__1->SetBinContent(21,0.0003278689);
   CalosP422__1->SetBinContent(22,0.0003278689);
   CalosP422__1->SetBinContent(23,0.001967213);
   CalosP422__1->SetBinContent(24,0.0006557377);
   CalosP422__1->SetBinContent(25,0.003606557);
   CalosP422__1->SetBinContent(26,0.007540984);
   CalosP422__1->SetBinContent(27,0.01278689);
   CalosP422__1->SetBinContent(28,0.01770492);
   CalosP422__1->SetBinContent(29,0.01868852);
   CalosP422__1->SetBinContent(30,0.02721312);
   CalosP422__1->SetBinContent(31,0.02754098);
   CalosP422__1->SetBinContent(32,0.03836066);
   CalosP422__1->SetBinContent(33,0.04852459);
   CalosP422__1->SetBinContent(34,0.05114754);
   CalosP422__1->SetBinContent(35,0.05770492);
   CalosP422__1->SetBinContent(36,0.06262295);
   CalosP422__1->SetBinContent(37,0.06852458);
   CalosP422__1->SetBinContent(38,0.07639344);
   CalosP422__1->SetBinContent(39,0.06819672);
   CalosP422__1->SetBinContent(40,0.07016394);
   CalosP422__1->SetBinContent(41,0.06819672);
   CalosP422__1->SetBinContent(42,0.06131148);
   CalosP422__1->SetBinContent(43,0.04295082);
   CalosP422__1->SetBinContent(44,0.03901639);
   CalosP422__1->SetBinContent(45,0.03278688);
   CalosP422__1->SetBinContent(46,0.02393443);
   CalosP422__1->SetBinContent(47,0.02032787);
   CalosP422__1->SetBinContent(48,0.0157377);
   CalosP422__1->SetBinContent(49,0.01344262);
   CalosP422__1->SetBinContent(50,0.007540984);
   CalosP422__1->SetBinContent(51,0.00557377);
   CalosP422__1->SetBinContent(52,0.002295082);
   CalosP422__1->SetBinContent(53,0.001967213);
   CalosP422__1->SetBinContent(54,0.002622951);
   CalosP422__1->SetBinContent(55,0.0006557377);
   CalosP422__1->SetBinContent(57,0.0003278689);
   CalosP422__1->SetBinContent(58,0.0009836066);
   CalosP422__1->SetMinimum(0);
   CalosP422__1->SetMaximum(0.08403278);
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
   CalosP422__1->GetXaxis()->SetRange(1,111);
   CalosP422__1->GetXaxis()->SetLabelFont(42);
   CalosP422__1->GetXaxis()->SetTitleSize(0.04);
   CalosP422__1->GetXaxis()->SetTitleOffset(1);
   CalosP422__1->GetXaxis()->SetTitleFont(42);
   CalosP422__1->GetYaxis()->SetTitle("Fraction of Events/4 TC");
   CalosP422__1->GetYaxis()->SetLabelFont(42);
   CalosP422__1->GetYaxis()->SetTitleSize(0.04);
   CalosP422__1->GetYaxis()->SetTitleFont(42);
   CalosP422__1->GetZaxis()->SetLabelFont(42);
   CalosP422__1->GetZaxis()->SetTitleOffset(1);
   CalosP422__1->GetZaxis()->SetTitleFont(42);
   CalosP422__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.4598831,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Number of Topoclusters post SK");
   pt->Draw();
   
   TH1F *CalosP420__2 = new TH1F("CalosP420__2","h_Calo420SKclusters_N",625,0,2500);
   CalosP420__2->SetBinContent(24,0.0003278689);
   CalosP420__2->SetBinContent(25,0.0003278689);
   CalosP420__2->SetBinContent(26,0.001311475);
   CalosP420__2->SetBinContent(27,0.00295082);
   CalosP420__2->SetBinContent(28,0.002622951);
   CalosP420__2->SetBinContent(29,0.007540984);
   CalosP420__2->SetBinContent(30,0.01344262);
   CalosP420__2->SetBinContent(31,0.02262295);
   CalosP420__2->SetBinContent(32,0.03016393);
   CalosP420__2->SetBinContent(33,0.03016393);
   CalosP420__2->SetBinContent(34,0.04590164);
   CalosP420__2->SetBinContent(35,0.04491803);
   CalosP420__2->SetBinContent(36,0.05245902);
   CalosP420__2->SetBinContent(37,0.04229508);
   CalosP420__2->SetBinContent(38,0.05278689);
   CalosP420__2->SetBinContent(39,0.04229508);
   CalosP420__2->SetBinContent(40,0.04622951);
   CalosP420__2->SetBinContent(41,0.05737705);
   CalosP420__2->SetBinContent(42,0.04786885);
   CalosP420__2->SetBinContent(43,0.05278688);
   CalosP420__2->SetBinContent(44,0.0495082);
   CalosP420__2->SetBinContent(45,0.04819672);
   CalosP420__2->SetBinContent(46,0.03737705);
   CalosP420__2->SetBinContent(47,0.03868853);
   CalosP420__2->SetBinContent(48,0.03672131);
   CalosP420__2->SetBinContent(49,0.03114754);
   CalosP420__2->SetBinContent(50,0.03245902);
   CalosP420__2->SetBinContent(51,0.02786885);
   CalosP420__2->SetBinContent(52,0.02491803);
   CalosP420__2->SetBinContent(53,0.01672131);
   CalosP420__2->SetBinContent(54,0.01540984);
   CalosP420__2->SetBinContent(55,0.01114754);
   CalosP420__2->SetBinContent(56,0.01016393);
   CalosP420__2->SetBinContent(57,0.005901639);
   CalosP420__2->SetBinContent(58,0.00295082);
   CalosP420__2->SetBinContent(59,0.003606557);
   CalosP420__2->SetBinContent(60,0.003934426);
   CalosP420__2->SetBinContent(61,0.002622951);
   CalosP420__2->SetBinContent(62,0.002295082);
   CalosP420__2->SetBinContent(63,0.0006557377);
   CalosP420__2->SetBinContent(64,0.0006557377);
   CalosP420__2->SetBinContent(66,0.0003278689);
   CalosP420__2->SetBinContent(67,0.0003278689);
   CalosP420__2->SetMinimum(0);
   CalosP420__2->SetMaximum(0.08403278);
   CalosP420__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   CalosP420__2->SetLineColor(ci);
   CalosP420__2->SetLineWidth(2);
   CalosP420__2->GetXaxis()->SetRange(1,111);
   CalosP420__2->GetXaxis()->SetLabelFont(42);
   CalosP420__2->GetXaxis()->SetTitleOffset(1);
   CalosP420__2->GetXaxis()->SetTitleFont(42);
   CalosP420__2->GetYaxis()->SetLabelFont(42);
   CalosP420__2->GetYaxis()->SetTitleFont(42);
   CalosP420__2->GetZaxis()->SetLabelFont(42);
   CalosP420__2->GetZaxis()->SetTitleOffset(1);
   CalosP420__2->GetZaxis()->SetTitleFont(42);
   CalosP420__2->Draw("hist same");
   
   TLegend *leg = new TLegend(0.75,0.3,0.88,0.42,NULL,"brNDC");
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
