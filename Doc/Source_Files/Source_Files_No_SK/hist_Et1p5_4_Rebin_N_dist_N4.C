#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p5_4_Rebin_N_dist_N4()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Fri Jul 21 18:49:45 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,53,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-45.94872,-0.08550819,241.2308,0.448918);
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
   
   TH1F *CalosP422__1 = new TH1F("CalosP422__1","Number of Topoclusters",625,0,2500);
   CalosP422__1->SetBinContent(1,0.1383607);
   CalosP422__1->SetBinContent(2,0.3740984);
   CalosP422__1->SetBinContent(3,0.2465574);
   CalosP422__1->SetBinContent(4,0.1091803);
   CalosP422__1->SetBinContent(5,0.04262295);
   CalosP422__1->SetBinContent(6,0.01967213);
   CalosP422__1->SetBinContent(7,0.01245902);
   CalosP422__1->SetBinContent(8,0.01016393);
   CalosP422__1->SetBinContent(9,0.005245902);
   CalosP422__1->SetBinContent(10,0.006885246);
   CalosP422__1->SetBinContent(11,0.006229508);
   CalosP422__1->SetBinContent(12,0.003278689);
   CalosP422__1->SetBinContent(13,0.003278689);
   CalosP422__1->SetBinContent(14,0.002295082);
   CalosP422__1->SetBinContent(15,0.002622951);
   CalosP422__1->SetBinContent(16,0.001639344);
   CalosP422__1->SetBinContent(17,0.0003278689);
   CalosP422__1->SetBinContent(18,0.0009836066);
   CalosP422__1->SetBinContent(19,0.001639344);
   CalosP422__1->SetBinContent(20,0.002295082);
   CalosP422__1->SetBinContent(21,0.0003278689);
   CalosP422__1->SetBinContent(22,0.001311475);
   CalosP422__1->SetBinContent(23,0.0006557377);
   CalosP422__1->SetBinContent(24,0.0006557377);
   CalosP422__1->SetBinContent(25,0.0003278689);
   CalosP422__1->SetBinContent(26,0.0006557377);
   CalosP422__1->SetBinContent(27,0.0009836066);
   CalosP422__1->SetBinContent(29,0.0009836066);
   CalosP422__1->SetBinContent(30,0.0006557377);
   CalosP422__1->SetBinContent(31,0.001967213);
   CalosP422__1->SetBinContent(32,0.0003278689);
   CalosP422__1->SetBinContent(33,0.0006557377);
   CalosP422__1->SetBinContent(35,0.0003278689);
   CalosP422__1->SetBinContent(38,0.0003278689);
   CalosP422__1->SetMinimum(0);
   CalosP422__1->SetMaximum(0.4115082);
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
   CalosP422__1->GetXaxis()->SetRange(1,56);
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
   pt_LaTex = pt->AddText("E_{T}^{TC} > 1.5");
   pt->Draw();
   
   TH1F *CalosP420__2 = new TH1F("CalosP420__2","h_Calo420TopoClusters_N4",625,0,2500);
   CalosP420__2->SetBinContent(1,0.08393443);
   CalosP420__2->SetBinContent(2,0.2213115);
   CalosP420__2->SetBinContent(3,0.2314754);
   CalosP420__2->SetBinContent(4,0.1383606);
   CalosP420__2->SetBinContent(5,0.09540984);
   CalosP420__2->SetBinContent(6,0.05213115);
   CalosP420__2->SetBinContent(7,0.03442623);
   CalosP420__2->SetBinContent(8,0.02262295);
   CalosP420__2->SetBinContent(9,0.01180328);
   CalosP420__2->SetBinContent(10,0.01180328);
   CalosP420__2->SetBinContent(11,0.01016393);
   CalosP420__2->SetBinContent(12,0.006885246);
   CalosP420__2->SetBinContent(13,0.006885246);
   CalosP420__2->SetBinContent(14,0.006229508);
   CalosP420__2->SetBinContent(15,0.003606557);
   CalosP420__2->SetBinContent(16,0.005245902);
   CalosP420__2->SetBinContent(17,0.003606557);
   CalosP420__2->SetBinContent(18,0.004262295);
   CalosP420__2->SetBinContent(19,0.00557377);
   CalosP420__2->SetBinContent(20,0.001967213);
   CalosP420__2->SetBinContent(21,0.004590164);
   CalosP420__2->SetBinContent(22,0.002295082);
   CalosP420__2->SetBinContent(23,0.00295082);
   CalosP420__2->SetBinContent(24,0.00295082);
   CalosP420__2->SetBinContent(25,0.002622951);
   CalosP420__2->SetBinContent(26,0.002295082);
   CalosP420__2->SetBinContent(27,0.001311475);
   CalosP420__2->SetBinContent(28,0.0009836066);
   CalosP420__2->SetBinContent(29,0.001639344);
   CalosP420__2->SetBinContent(30,0.001311475);
   CalosP420__2->SetBinContent(31,0.001311475);
   CalosP420__2->SetBinContent(32,0.001967213);
   CalosP420__2->SetBinContent(33,0.001967213);
   CalosP420__2->SetBinContent(34,0.0003278689);
   CalosP420__2->SetBinContent(35,0.001311475);
   CalosP420__2->SetBinContent(36,0.002295082);
   CalosP420__2->SetBinContent(37,0.001639344);
   CalosP420__2->SetBinContent(38,0.001639344);
   CalosP420__2->SetBinContent(39,0.001311475);
   CalosP420__2->SetBinContent(40,0.001639344);
   CalosP420__2->SetBinContent(41,0.001639344);
   CalosP420__2->SetBinContent(42,0.0009836066);
   CalosP420__2->SetBinContent(43,0.0006557377);
   CalosP420__2->SetBinContent(45,0.0003278689);
   CalosP420__2->SetBinContent(47,0.0003278689);
   CalosP420__2->SetMinimum(0);
   CalosP420__2->SetMaximum(0.4115082);
   CalosP420__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   CalosP420__2->SetLineColor(ci);
   CalosP420__2->SetLineWidth(2);
   CalosP420__2->GetXaxis()->SetRange(1,56);
   CalosP420__2->GetXaxis()->SetLabelFont(42);
   CalosP420__2->GetXaxis()->SetTitleOffset(1);
   CalosP420__2->GetXaxis()->SetTitleFont(42);
   CalosP420__2->GetYaxis()->SetLabelFont(42);
   CalosP420__2->GetYaxis()->SetTitleFont(42);
   CalosP420__2->GetZaxis()->SetLabelFont(42);
   CalosP420__2->GetZaxis()->SetTitleOffset(1);
   CalosP420__2->GetZaxis()->SetTitleFont(42);
   CalosP420__2->Draw("hist same");
   
   TLegend *leg = new TLegend(0.7,0.55,0.83,0.67,NULL,"brNDC");
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
