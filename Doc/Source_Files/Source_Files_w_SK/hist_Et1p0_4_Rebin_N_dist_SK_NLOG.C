#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p0_4_Rebin_N_dist_SK_NLOG()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Fri Jun 16 18:58:59 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,53,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-80.41025,-4.982407,422.1538,-0.7237993);
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
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Number of Topoclusters post SK",625,0,2500);
   Calo_422__1->SetBinContent(21,0.0006557377);
   Calo_422__1->SetBinContent(22,0.0003278689);
   Calo_422__1->SetBinContent(23,0.001311475);
   Calo_422__1->SetBinContent(24,0.001311475);
   Calo_422__1->SetBinContent(25,0.00295082);
   Calo_422__1->SetBinContent(26,0.008196721);
   Calo_422__1->SetBinContent(27,0.01180328);
   Calo_422__1->SetBinContent(28,0.01836066);
   Calo_422__1->SetBinContent(29,0.01803279);
   Calo_422__1->SetBinContent(30,0.02721312);
   Calo_422__1->SetBinContent(31,0.02754098);
   Calo_422__1->SetBinContent(32,0.03704918);
   Calo_422__1->SetBinContent(33,0.04426229);
   Calo_422__1->SetBinContent(34,0.05180328);
   Calo_422__1->SetBinContent(35,0.05868852);
   Calo_422__1->SetBinContent(36,0.05967213);
   Calo_422__1->SetBinContent(37,0.06918032);
   Calo_422__1->SetBinContent(38,0.07606557);
   Calo_422__1->SetBinContent(39,0.0652459);
   Calo_422__1->SetBinContent(40,0.07311475);
   Calo_422__1->SetBinContent(41,0.06655738);
   Calo_422__1->SetBinContent(42,0.06327869);
   Calo_422__1->SetBinContent(43,0.04262295);
   Calo_422__1->SetBinContent(44,0.04196721);
   Calo_422__1->SetBinContent(45,0.03377049);
   Calo_422__1->SetBinContent(46,0.02196721);
   Calo_422__1->SetBinContent(47,0.02065574);
   Calo_422__1->SetBinContent(48,0.01704918);
   Calo_422__1->SetBinContent(49,0.0147541);
   Calo_422__1->SetBinContent(50,0.00852459);
   Calo_422__1->SetBinContent(51,0.006229508);
   Calo_422__1->SetBinContent(52,0.003278689);
   Calo_422__1->SetBinContent(53,0.001639344);
   Calo_422__1->SetBinContent(54,0.001639344);
   Calo_422__1->SetBinContent(55,0.001967213);
   Calo_422__1->SetBinContent(58,0.0006557377);
   Calo_422__1->SetBinContent(59,0.0006557377);
   Calo_422__1->SetMinimum(5e-05);
   Calo_422__1->SetMaximum(0.09508196);
   Calo_422__1->SetEntries(5550);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   Calo_422__1->SetFillColor(ci);
   Calo_422__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   Calo_422__1->SetLineColor(ci);
   Calo_422__1->SetLineWidth(2);
   Calo_422__1->GetXaxis()->SetTitle("Number of Topoclusters");
   Calo_422__1->GetXaxis()->SetRange(1,98);
   Calo_422__1->GetXaxis()->SetLabelFont(42);
   Calo_422__1->GetXaxis()->SetTitleOffset(1);
   Calo_422__1->GetXaxis()->SetTitleFont(42);
   Calo_422__1->GetYaxis()->SetTitle("Fraction of Events/4 TC");
   Calo_422__1->GetYaxis()->SetLabelFont(42);
   Calo_422__1->GetYaxis()->SetTitleFont(42);
   Calo_422__1->GetZaxis()->SetLabelFont(42);
   Calo_422__1->GetZaxis()->SetTitleOffset(1);
   Calo_422__1->GetZaxis()->SetTitleFont(42);
   Calo_422__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.4598831,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Number of Topoclusters post SK");
   pt->Draw();
   
   pt = new TPaveText(0.605,0.87,0.675,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(72);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("ATLAS");
   pt->Draw();
   
   pt = new TPaveText(0.675,0.87,0.83,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("Simulation Internal");
   pt->Draw();
   
   pt = new TPaveText(0.6,0.83,0.76,0.87,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("HL-LHC <#mu>=200");
   pt->Draw();
   
   pt = new TPaveText(0.6,0.79,0.733,0.83,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("Minimum Bias");
   pt->Draw();
   
   pt = new TPaveText(0.6,0.75,0.694,0.79,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("E_{T}^{TC} > 1.0");
   pt->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420SKclusters_N",625,0,2500);
   Calo_420__2->SetBinContent(26,0.0009836066);
   Calo_420__2->SetBinContent(27,0.002622951);
   Calo_420__2->SetBinContent(28,0.002295082);
   Calo_420__2->SetBinContent(29,0.007213115);
   Calo_420__2->SetBinContent(30,0.01278689);
   Calo_420__2->SetBinContent(31,0.02360656);
   Calo_420__2->SetBinContent(32,0.02852459);
   Calo_420__2->SetBinContent(33,0.03180328);
   Calo_420__2->SetBinContent(34,0.04229508);
   Calo_420__2->SetBinContent(35,0.04590164);
   Calo_420__2->SetBinContent(36,0.04426229);
   Calo_420__2->SetBinContent(37,0.04);
   Calo_420__2->SetBinContent(38,0.04918033);
   Calo_420__2->SetBinContent(39,0.04426229);
   Calo_420__2->SetBinContent(40,0.04885246);
   Calo_420__2->SetBinContent(41,0.05442623);
   Calo_420__2->SetBinContent(42,0.04852459);
   Calo_420__2->SetBinContent(43,0.04557377);
   Calo_420__2->SetBinContent(44,0.04557377);
   Calo_420__2->SetBinContent(45,0.04688524);
   Calo_420__2->SetBinContent(46,0.03540983);
   Calo_420__2->SetBinContent(47,0.04131147);
   Calo_420__2->SetBinContent(48,0.03508197);
   Calo_420__2->SetBinContent(49,0.02721312);
   Calo_420__2->SetBinContent(50,0.03081967);
   Calo_420__2->SetBinContent(51,0.02819672);
   Calo_420__2->SetBinContent(52,0.0252459);
   Calo_420__2->SetBinContent(53,0.01868852);
   Calo_420__2->SetBinContent(54,0.01836066);
   Calo_420__2->SetBinContent(55,0.01606557);
   Calo_420__2->SetBinContent(56,0.01114754);
   Calo_420__2->SetBinContent(57,0.01180328);
   Calo_420__2->SetBinContent(58,0.007213115);
   Calo_420__2->SetBinContent(59,0.00852459);
   Calo_420__2->SetBinContent(60,0.002622951);
   Calo_420__2->SetBinContent(61,0.00557377);
   Calo_420__2->SetBinContent(62,0.002622951);
   Calo_420__2->SetBinContent(63,0.003934426);
   Calo_420__2->SetBinContent(64,0.001639344);
   Calo_420__2->SetBinContent(65,0.001311475);
   Calo_420__2->SetBinContent(67,0.0006557377);
   Calo_420__2->SetBinContent(68,0.0003278689);
   Calo_420__2->SetBinContent(72,0.0003278689);
   Calo_420__2->SetBinContent(74,0.0003278689);
   Calo_420__2->SetMinimum(5e-05);
   Calo_420__2->SetMaximum(0.09508196);
   Calo_420__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   Calo_420__2->SetLineColor(ci);
   Calo_420__2->SetLineWidth(2);
   Calo_420__2->GetXaxis()->SetRange(1,98);
   Calo_420__2->GetXaxis()->SetLabelFont(42);
   Calo_420__2->GetXaxis()->SetTitleOffset(1);
   Calo_420__2->GetXaxis()->SetTitleFont(42);
   Calo_420__2->GetYaxis()->SetLabelFont(42);
   Calo_420__2->GetYaxis()->SetTitleFont(42);
   Calo_420__2->GetZaxis()->SetLabelFont(42);
   Calo_420__2->GetZaxis()->SetTitleOffset(1);
   Calo_420__2->GetZaxis()->SetTitleFont(42);
   Calo_420__2->Draw("hist same");
   
   TLegend *leg = new TLegend(0.7,0.5,0.81,0.62,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Calo_422","Calo 422","lpf");

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
   entry=leg->AddEntry("Calo_420","Calo 420","l");

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
