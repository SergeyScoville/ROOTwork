#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0p5_4_Rebin_N_dist_N5()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Fri Jul 21 18:49:53 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,53,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-34.46154,-0.06804683,180.9231,0.3572459);
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
   CalosP422__1->SetBinContent(1,0.02163934);
   CalosP422__1->SetBinContent(2,0.1681967);
   CalosP422__1->SetBinContent(3,0.2977049);
   CalosP422__1->SetBinContent(4,0.2406557);
   CalosP422__1->SetBinContent(5,0.1239344);
   CalosP422__1->SetBinContent(6,0.05245902);
   CalosP422__1->SetBinContent(7,0.02131147);
   CalosP422__1->SetBinContent(8,0.01245902);
   CalosP422__1->SetBinContent(9,0.005245902);
   CalosP422__1->SetBinContent(10,0.002622951);
   CalosP422__1->SetBinContent(11,0.003606557);
   CalosP422__1->SetBinContent(12,0.003278689);
   CalosP422__1->SetBinContent(13,0.004918033);
   CalosP422__1->SetBinContent(14,0.005901639);
   CalosP422__1->SetBinContent(15,0.002295082);
   CalosP422__1->SetBinContent(16,0.003606557);
   CalosP422__1->SetBinContent(17,0.004590164);
   CalosP422__1->SetBinContent(18,0.003606557);
   CalosP422__1->SetBinContent(19,0.006229508);
   CalosP422__1->SetBinContent(20,0.004262295);
   CalosP422__1->SetBinContent(21,0.003934426);
   CalosP422__1->SetBinContent(22,0.001311475);
   CalosP422__1->SetBinContent(23,0.001311475);
   CalosP422__1->SetBinContent(24,0.003606557);
   CalosP422__1->SetBinContent(25,0.0006557377);
   CalosP422__1->SetBinContent(26,0.0006557377);
   CalosP422__1->SetMinimum(0);
   CalosP422__1->SetMaximum(0.3274754);
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
   CalosP422__1->GetXaxis()->SetRange(1,42);
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
   pt_LaTex = pt->AddText("E_{T}^{TC} > 0.5");
   pt->Draw();
   
   TH1F *CalosP420__2 = new TH1F("CalosP420__2","h_Calo420TopoClusters_N5",625,0,2500);
   CalosP420__2->SetBinContent(1,0.05540984);
   CalosP420__2->SetBinContent(2,0.1636066);
   CalosP420__2->SetBinContent(3,0.1881967);
   CalosP420__2->SetBinContent(4,0.1655738);
   CalosP420__2->SetBinContent(5,0.1157377);
   CalosP420__2->SetBinContent(6,0.07180328);
   CalosP420__2->SetBinContent(7,0.05442623);
   CalosP420__2->SetBinContent(8,0.03508197);
   CalosP420__2->SetBinContent(9,0.0252459);
   CalosP420__2->SetBinContent(10,0.0147541);
   CalosP420__2->SetBinContent(11,0.01114754);
   CalosP420__2->SetBinContent(12,0.007540984);
   CalosP420__2->SetBinContent(13,0.007213115);
   CalosP420__2->SetBinContent(14,0.004918033);
   CalosP420__2->SetBinContent(15,0.004590164);
   CalosP420__2->SetBinContent(16,0.001967213);
   CalosP420__2->SetBinContent(17,0.004262295);
   CalosP420__2->SetBinContent(18,0.004590164);
   CalosP420__2->SetBinContent(19,0.002295082);
   CalosP420__2->SetBinContent(20,0.002622951);
   CalosP420__2->SetBinContent(21,0.003278689);
   CalosP420__2->SetBinContent(22,0.00295082);
   CalosP420__2->SetBinContent(23,0.004262295);
   CalosP420__2->SetBinContent(24,0.006557377);
   CalosP420__2->SetBinContent(25,0.00557377);
   CalosP420__2->SetBinContent(26,0.008852459);
   CalosP420__2->SetBinContent(27,0.003934426);
   CalosP420__2->SetBinContent(28,0.008196721);
   CalosP420__2->SetBinContent(29,0.006229508);
   CalosP420__2->SetBinContent(30,0.004262295);
   CalosP420__2->SetBinContent(31,0.001311475);
   CalosP420__2->SetBinContent(32,0.002295082);
   CalosP420__2->SetBinContent(33,0.0003278689);
   CalosP420__2->SetBinContent(34,0.0003278689);
   CalosP420__2->SetBinContent(35,0.0006557377);
   CalosP420__2->SetMinimum(0);
   CalosP420__2->SetMaximum(0.3274754);
   CalosP420__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   CalosP420__2->SetLineColor(ci);
   CalosP420__2->SetLineWidth(2);
   CalosP420__2->GetXaxis()->SetRange(1,42);
   CalosP420__2->GetXaxis()->SetLabelFont(42);
   CalosP420__2->GetXaxis()->SetTitleOffset(1);
   CalosP420__2->GetXaxis()->SetTitleFont(42);
   CalosP420__2->GetYaxis()->SetLabelFont(42);
   CalosP420__2->GetYaxis()->SetTitleFont(42);
   CalosP420__2->GetZaxis()->SetLabelFont(42);
   CalosP420__2->GetZaxis()->SetTitleOffset(1);
   CalosP420__2->GetZaxis()->SetTitleFont(42);
   CalosP420__2->Draw("hist same");
   
   TLegend *leg = new TLegend(0.75,0.55,0.88,0.67,NULL,"brNDC");
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
