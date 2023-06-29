#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0p0_10_Rebin_N_dist_SK_NLOG_CD()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 29 14:11:57 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-92.30769,-6.184201,484.6154,1.217058);
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
   
   TH1F *CalosP422_cumulative__1 = new TH1F("CalosP422_cumulative__1","Cumulative Number of Topoclusters post SK",250,0,2500);
   CalosP422_cumulative__1->SetBinContent(1,1);
   CalosP422_cumulative__1->SetBinContent(2,1);
   CalosP422_cumulative__1->SetBinContent(3,1);
   CalosP422_cumulative__1->SetBinContent(4,1);
   CalosP422_cumulative__1->SetBinContent(5,1);
   CalosP422_cumulative__1->SetBinContent(6,1);
   CalosP422_cumulative__1->SetBinContent(7,1);
   CalosP422_cumulative__1->SetBinContent(8,1);
   CalosP422_cumulative__1->SetBinContent(9,1);
   CalosP422_cumulative__1->SetBinContent(10,1);
   CalosP422_cumulative__1->SetBinContent(11,0.9990163);
   CalosP422_cumulative__1->SetBinContent(12,0.9780328);
   CalosP422_cumulative__1->SetBinContent(13,0.9370492);
   CalosP422_cumulative__1->SetBinContent(14,0.8731147);
   CalosP422_cumulative__1->SetBinContent(15,0.7754098);
   CalosP422_cumulative__1->SetBinContent(16,0.6593443);
   CalosP422_cumulative__1->SetBinContent(17,0.5177049);
   CalosP422_cumulative__1->SetBinContent(18,0.3763934);
   CalosP422_cumulative__1->SetBinContent(19,0.2731147);
   CalosP422_cumulative__1->SetBinContent(20,0.1878688);
   CalosP422_cumulative__1->SetBinContent(21,0.1173771);
   CalosP422_cumulative__1->SetBinContent(22,0.06983607);
   CalosP422_cumulative__1->SetBinContent(23,0.04229508);
   CalosP422_cumulative__1->SetBinContent(24,0.02327869);
   CalosP422_cumulative__1->SetBinContent(25,0.01540984);
   CalosP422_cumulative__1->SetBinContent(26,0.01016393);
   CalosP422_cumulative__1->SetBinContent(27,0.003934426);
   CalosP422_cumulative__1->SetBinContent(28,0.002622951);
   CalosP422_cumulative__1->SetBinContent(29,0.001311475);
   CalosP422_cumulative__1->SetBinContent(30,0.0009836066);
   CalosP422_cumulative__1->SetBinContent(31,0.0009836066);
   CalosP422_cumulative__1->SetBinContent(32,0.0003278689);
   CalosP422_cumulative__1->SetBinContent(33,0.0003278689);
   CalosP422_cumulative__1->SetBinContent(34,0.0003278689);
   CalosP422_cumulative__1->SetBinContent(35,0.0003278689);
   CalosP422_cumulative__1->SetBinContent(36,0.0003278689);
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
   CalosP422_cumulative__1->GetXaxis()->SetRange(1,45);
   CalosP422_cumulative__1->GetXaxis()->SetLabelFont(42);
   CalosP422_cumulative__1->GetXaxis()->SetTitleSize(0.04);
   CalosP422_cumulative__1->GetXaxis()->SetTitleOffset(1);
   CalosP422_cumulative__1->GetXaxis()->SetTitleFont(42);
   CalosP422_cumulative__1->GetYaxis()->SetTitle("Fraction of Events/10 TC");
   CalosP422_cumulative__1->GetYaxis()->SetLabelFont(42);
   CalosP422_cumulative__1->GetYaxis()->SetTitleSize(0.04);
   CalosP422_cumulative__1->GetYaxis()->SetTitleFont(42);
   CalosP422_cumulative__1->GetZaxis()->SetLabelFont(42);
   CalosP422_cumulative__1->GetZaxis()->SetTitleOffset(1);
   CalosP422_cumulative__1->GetZaxis()->SetTitleFont(42);
   CalosP422_cumulative__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.6184808,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Cumulative Number of Topoclusters post SK");
   pt->Draw();
   
   pt = new TPaveText(0.565,0.85,0.67,0.9,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(72);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("ATLAS");
   pt->Draw();
   
   pt = new TPaveText(0.6705,0.85,0.925,0.9,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("Simulation Internal");
   pt->Draw();
   
   pt = new TPaveText(0.565,0.8,0.802,0.85,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("HL-LHC <#mu>=200");
   pt->Draw();
   
   pt = new TPaveText(0.565,0.76,0.755,0.81,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("Minimum Bias");
   pt->Draw();
   
   pt = new TPaveText(0.565,0.71,0.685,0.76,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("E_{T}^{TC} > 0.0");
   pt->Draw();
   
   TH1F *CalosP420_cumulative__2 = new TH1F("CalosP420_cumulative__2","h_Calo420SKclusters_N",250,0,2500);
   CalosP420_cumulative__2->SetBinContent(1,1);
   CalosP420_cumulative__2->SetBinContent(2,1);
   CalosP420_cumulative__2->SetBinContent(3,1);
   CalosP420_cumulative__2->SetBinContent(4,1);
   CalosP420_cumulative__2->SetBinContent(5,1);
   CalosP420_cumulative__2->SetBinContent(6,1);
   CalosP420_cumulative__2->SetBinContent(7,1);
   CalosP420_cumulative__2->SetBinContent(8,1);
   CalosP420_cumulative__2->SetBinContent(9,1);
   CalosP420_cumulative__2->SetBinContent(10,1);
   CalosP420_cumulative__2->SetBinContent(11,1);
   CalosP420_cumulative__2->SetBinContent(12,0.9967213);
   CalosP420_cumulative__2->SetBinContent(13,0.9754098);
   CalosP420_cumulative__2->SetBinContent(14,0.9088525);
   CalosP420_cumulative__2->SetBinContent(15,0.8111475);
   CalosP420_cumulative__2->SetBinContent(16,0.6986885);
   CalosP420_cumulative__2->SetBinContent(17,0.5960656);
   CalosP420_cumulative__2->SetBinContent(18,0.4780328);
   CalosP420_cumulative__2->SetBinContent(19,0.3681967);
   CalosP420_cumulative__2->SetBinContent(20,0.2826229);
   CalosP420_cumulative__2->SetBinContent(21,0.204918);
   CalosP420_cumulative__2->SetBinContent(22,0.1377049);
   CalosP420_cumulative__2->SetBinContent(23,0.09344262);
   CalosP420_cumulative__2->SetBinContent(24,0.06131148);
   CalosP420_cumulative__2->SetBinContent(25,0.04163934);
   CalosP420_cumulative__2->SetBinContent(26,0.0252459);
   CalosP420_cumulative__2->SetBinContent(27,0.01344262);
   CalosP420_cumulative__2->SetBinContent(28,0.01081967);
   CalosP420_cumulative__2->SetBinContent(29,0.005901639);
   CalosP420_cumulative__2->SetBinContent(30,0.003278689);
   CalosP420_cumulative__2->SetBinContent(31,0.00295082);
   CalosP420_cumulative__2->SetBinContent(32,0.001967213);
   CalosP420_cumulative__2->SetBinContent(33,0.001311475);
   CalosP420_cumulative__2->SetBinContent(34,0.0009836066);
   CalosP420_cumulative__2->SetBinContent(35,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(36,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(37,0.0003278689);
   CalosP420_cumulative__2->SetMinimum(1e-05);
   CalosP420_cumulative__2->SetMaximum(5);
   CalosP420_cumulative__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   CalosP420_cumulative__2->SetLineColor(ci);
   CalosP420_cumulative__2->SetLineWidth(2);
   CalosP420_cumulative__2->GetXaxis()->SetRange(1,45);
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
