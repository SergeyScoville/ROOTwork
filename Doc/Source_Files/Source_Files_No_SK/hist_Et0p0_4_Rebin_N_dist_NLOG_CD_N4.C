#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0p0_4_Rebin_N_dist_NLOG_CD_N4()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Fri Jul 21 16:19:20 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,53,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-54.15384,-6.184201,284.3077,1.217058);
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
   CalosP422_cumulative__1->SetBinContent(2,1);
   CalosP422_cumulative__1->SetBinContent(3,0.9996721);
   CalosP422_cumulative__1->SetBinContent(4,0.9862295);
   CalosP422_cumulative__1->SetBinContent(5,0.9285246);
   CalosP422_cumulative__1->SetBinContent(6,0.7885246);
   CalosP422_cumulative__1->SetBinContent(7,0.5842623);
   CalosP422_cumulative__1->SetBinContent(8,0.3954099);
   CalosP422_cumulative__1->SetBinContent(9,0.2436066);
   CalosP422_cumulative__1->SetBinContent(10,0.1439344);
   CalosP422_cumulative__1->SetBinContent(11,0.09213115);
   CalosP422_cumulative__1->SetBinContent(12,0.06754098);
   CalosP422_cumulative__1->SetBinContent(13,0.0547541);
   CalosP422_cumulative__1->SetBinContent(14,0.04426229);
   CalosP422_cumulative__1->SetBinContent(15,0.03606557);
   CalosP422_cumulative__1->SetBinContent(16,0.03081967);
   CalosP422_cumulative__1->SetBinContent(17,0.02590164);
   CalosP422_cumulative__1->SetBinContent(18,0.02229508);
   CalosP422_cumulative__1->SetBinContent(19,0.02065574);
   CalosP422_cumulative__1->SetBinContent(20,0.01704918);
   CalosP422_cumulative__1->SetBinContent(21,0.01639344);
   CalosP422_cumulative__1->SetBinContent(22,0.01508197);
   CalosP422_cumulative__1->SetBinContent(23,0.01245902);
   CalosP422_cumulative__1->SetBinContent(24,0.01147541);
   CalosP422_cumulative__1->SetBinContent(25,0.009508196);
   CalosP422_cumulative__1->SetBinContent(26,0.009508196);
   CalosP422_cumulative__1->SetBinContent(27,0.007868852);
   CalosP422_cumulative__1->SetBinContent(28,0.007213115);
   CalosP422_cumulative__1->SetBinContent(29,0.006557377);
   CalosP422_cumulative__1->SetBinContent(30,0.00557377);
   CalosP422_cumulative__1->SetBinContent(31,0.00557377);
   CalosP422_cumulative__1->SetBinContent(32,0.005245902);
   CalosP422_cumulative__1->SetBinContent(33,0.004918033);
   CalosP422_cumulative__1->SetBinContent(34,0.004262295);
   CalosP422_cumulative__1->SetBinContent(35,0.001967213);
   CalosP422_cumulative__1->SetBinContent(36,0.001311475);
   CalosP422_cumulative__1->SetBinContent(37,0.001311475);
   CalosP422_cumulative__1->SetBinContent(38,0.0006557377);
   CalosP422_cumulative__1->SetBinContent(39,0.0006557377);
   CalosP422_cumulative__1->SetBinContent(40,0.0003278689);
   CalosP422_cumulative__1->SetBinContent(41,0.0003278689);
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
   CalosP422_cumulative__1->GetXaxis()->SetRange(1,66);
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
   
   pt = new TPaveText(0.195,0.35,0.3,0.4,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(72);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("ATLAS");
   pt->Draw();
   
   pt = new TPaveText(0.3005,0.35,0.555,0.4,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("Simulation Internal");
   pt->Draw();
   
   pt = new TPaveText(0.195,0.3,0.432,0.35,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("HL-LHC <#mu>=200");
   pt->Draw();
   
   pt = new TPaveText(0.195,0.26,0.385,0.31,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("Minimum Bias");
   pt->Draw();
   
   pt = new TPaveText(0.195,0.21,0.315,0.26,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("E_{T}^{TC} > 0.0");
   pt->Draw();
   
   TH1F *CalosP420_cumulative__2 = new TH1F("CalosP420_cumulative__2","h_Calo420TopoClusters_N4",625,0,2500);
   CalosP420_cumulative__2->SetBinContent(1,1);
   CalosP420_cumulative__2->SetBinContent(2,1);
   CalosP420_cumulative__2->SetBinContent(3,0.9993442);
   CalosP420_cumulative__2->SetBinContent(4,0.9859016);
   CalosP420_cumulative__2->SetBinContent(5,0.9468852);
   CalosP420_cumulative__2->SetBinContent(6,0.8652459);
   CalosP420_cumulative__2->SetBinContent(7,0.7396721);
   CalosP420_cumulative__2->SetBinContent(8,0.6039344);
   CalosP420_cumulative__2->SetBinContent(9,0.4780328);
   CalosP420_cumulative__2->SetBinContent(10,0.3691803);
   CalosP420_cumulative__2->SetBinContent(11,0.2878689);
   CalosP420_cumulative__2->SetBinContent(12,0.2222951);
   CalosP420_cumulative__2->SetBinContent(13,0.1763934);
   CalosP420_cumulative__2->SetBinContent(14,0.1396721);
   CalosP420_cumulative__2->SetBinContent(15,0.1154098);
   CalosP420_cumulative__2->SetBinContent(16,0.1042623);
   CalosP420_cumulative__2->SetBinContent(17,0.09311476);
   CalosP420_cumulative__2->SetBinContent(18,0.08590164);
   CalosP420_cumulative__2->SetBinContent(19,0.07606557);
   CalosP420_cumulative__2->SetBinContent(20,0.07344262);
   CalosP420_cumulative__2->SetBinContent(21,0.06786885);
   CalosP420_cumulative__2->SetBinContent(22,0.06557377);
   CalosP420_cumulative__2->SetBinContent(23,0.06229508);
   CalosP420_cumulative__2->SetBinContent(24,0.05836065);
   CalosP420_cumulative__2->SetBinContent(25,0.05508197);
   CalosP420_cumulative__2->SetBinContent(26,0.04983607);
   CalosP420_cumulative__2->SetBinContent(27,0.04491803);
   CalosP420_cumulative__2->SetBinContent(28,0.04032787);
   CalosP420_cumulative__2->SetBinContent(29,0.03868853);
   CalosP420_cumulative__2->SetBinContent(30,0.03704918);
   CalosP420_cumulative__2->SetBinContent(31,0.03311475);
   CalosP420_cumulative__2->SetBinContent(32,0.03016393);
   CalosP420_cumulative__2->SetBinContent(33,0.02786885);
   CalosP420_cumulative__2->SetBinContent(34,0.02590164);
   CalosP420_cumulative__2->SetBinContent(35,0.02557377);
   CalosP420_cumulative__2->SetBinContent(36,0.02393443);
   CalosP420_cumulative__2->SetBinContent(37,0.02295082);
   CalosP420_cumulative__2->SetBinContent(38,0.01934426);
   CalosP420_cumulative__2->SetBinContent(39,0.01901639);
   CalosP420_cumulative__2->SetBinContent(40,0.01737705);
   CalosP420_cumulative__2->SetBinContent(41,0.01606557);
   CalosP420_cumulative__2->SetBinContent(42,0.01409836);
   CalosP420_cumulative__2->SetBinContent(43,0.01278689);
   CalosP420_cumulative__2->SetBinContent(44,0.01081967);
   CalosP420_cumulative__2->SetBinContent(45,0.009508196);
   CalosP420_cumulative__2->SetBinContent(46,0.008196721);
   CalosP420_cumulative__2->SetBinContent(47,0.005901639);
   CalosP420_cumulative__2->SetBinContent(48,0.005245902);
   CalosP420_cumulative__2->SetBinContent(49,0.003278689);
   CalosP420_cumulative__2->SetBinContent(50,0.002622951);
   CalosP420_cumulative__2->SetBinContent(51,0.001639344);
   CalosP420_cumulative__2->SetBinContent(52,0.0009836066);
   CalosP420_cumulative__2->SetBinContent(53,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(54,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(55,0.0003278689);
   CalosP420_cumulative__2->SetMinimum(1e-05);
   CalosP420_cumulative__2->SetMaximum(5);
   CalosP420_cumulative__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   CalosP420_cumulative__2->SetLineColor(ci);
   CalosP420_cumulative__2->SetLineWidth(2);
   CalosP420_cumulative__2->GetXaxis()->SetRange(1,66);
   CalosP420_cumulative__2->GetXaxis()->SetLabelFont(42);
   CalosP420_cumulative__2->GetXaxis()->SetTitleOffset(1);
   CalosP420_cumulative__2->GetXaxis()->SetTitleFont(42);
   CalosP420_cumulative__2->GetYaxis()->SetLabelFont(42);
   CalosP420_cumulative__2->GetYaxis()->SetTitleFont(42);
   CalosP420_cumulative__2->GetZaxis()->SetLabelFont(42);
   CalosP420_cumulative__2->GetZaxis()->SetTitleOffset(1);
   CalosP420_cumulative__2->GetZaxis()->SetTitleFont(42);
   CalosP420_cumulative__2->Draw("hist same");
   
   TLegend *leg = new TLegend(0.2,0.425,0.33,0.545,NULL,"brNDC");
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
