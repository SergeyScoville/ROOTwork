#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0p5_10_Rebin_N_dist_SK()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Wed Jun 14 15:06:16 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-81.01265,-0.03184727,425.3165,0.1671982);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetTickx(1);
   All_GEP_Algo->SetTicky(1);
   All_GEP_Algo->SetLeftMargin(0.16);
   All_GEP_Algo->SetRightMargin(0.05);
   All_GEP_Algo->SetTopMargin(0.05);
   All_GEP_Algo->SetBottomMargin(0.16);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Number of Topoclusters measured with offline GEP Algorithms after SK",250,0,2500);
   Calo_422__1->SetBinContent(10,0.0009836066);
   Calo_422__1->SetBinContent(11,0.02098361);
   Calo_422__1->SetBinContent(12,0.04229508);
   Calo_422__1->SetBinContent(13,0.06262295);
   Calo_422__1->SetBinContent(14,0.09868852);
   Calo_422__1->SetBinContent(15,0.1147541);
   Calo_422__1->SetBinContent(16,0.1426229);
   Calo_422__1->SetBinContent(17,0.1429508);
   Calo_422__1->SetBinContent(18,0.1036066);
   Calo_422__1->SetBinContent(19,0.08327869);
   Calo_422__1->SetBinContent(20,0.07180328);
   Calo_422__1->SetBinContent(21,0.04655738);
   Calo_422__1->SetBinContent(22,0.02786885);
   Calo_422__1->SetBinContent(23,0.01803279);
   Calo_422__1->SetBinContent(24,0.009180328);
   Calo_422__1->SetBinContent(25,0.004918033);
   Calo_422__1->SetBinContent(26,0.005901639);
   Calo_422__1->SetBinContent(27,0.0006557377);
   Calo_422__1->SetBinContent(28,0.001311475);
   Calo_422__1->SetBinContent(29,0.0003278689);
   Calo_422__1->SetBinContent(30,0.0003278689);
   Calo_422__1->SetBinContent(31,0.0003278689);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(0.1572459);
   Calo_422__1->SetEntries(5550);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   Calo_422__1->SetFillColor(ci);
   Calo_422__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   Calo_422__1->SetLineColor(ci);
   Calo_422__1->SetLineWidth(3);
   Calo_422__1->GetXaxis()->SetTitle("Number of Topoclusters");
   Calo_422__1->GetXaxis()->SetRange(1,40);
   Calo_422__1->GetXaxis()->SetLabelFont(42);
   Calo_422__1->GetXaxis()->SetTitleOffset(1);
   Calo_422__1->GetXaxis()->SetTitleFont(42);
   Calo_422__1->GetYaxis()->SetTitle("Fraction of Events");
   Calo_422__1->GetYaxis()->SetLabelFont(42);
   Calo_422__1->GetYaxis()->SetTitleFont(42);
   Calo_422__1->GetZaxis()->SetLabelFont(42);
   Calo_422__1->GetZaxis()->SetTitleOffset(1);
   Calo_422__1->GetZaxis()->SetTitleFont(42);
   Calo_422__1->Draw("hist");
   TLatex *   tex = new TLatex(0.35,0.91,"ATLAS");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(72);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.42,0.91,"Simulation Internal");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.35,0.87,"HL-LHC #mu=200");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.35,0.83,"Minimum Bias");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.35,0.79,"E_{T}^{TC} > 0.5");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420SKclusters_N",250,0,2500);
   Calo_420__2->SetBinContent(11,0.003606557);
   Calo_420__2->SetBinContent(12,0.02098361);
   Calo_420__2->SetBinContent(13,0.06721311);
   Calo_420__2->SetBinContent(14,0.1006557);
   Calo_420__2->SetBinContent(15,0.1108197);
   Calo_420__2->SetBinContent(16,0.1091803);
   Calo_420__2->SetBinContent(17,0.1190164);
   Calo_420__2->SetBinContent(18,0.1055738);
   Calo_420__2->SetBinContent(19,0.08885246);
   Calo_420__2->SetBinContent(20,0.07377049);
   Calo_420__2->SetBinContent(21,0.06655738);
   Calo_420__2->SetBinContent(22,0.0452459);
   Calo_420__2->SetBinContent(23,0.03016393);
   Calo_420__2->SetBinContent(24,0.01934426);
   Calo_420__2->SetBinContent(25,0.01672131);
   Calo_420__2->SetBinContent(26,0.009508196);
   Calo_420__2->SetBinContent(27,0.002295082);
   Calo_420__2->SetBinContent(28,0.004590164);
   Calo_420__2->SetBinContent(29,0.00295082);
   Calo_420__2->SetBinContent(30,0.0009836066);
   Calo_420__2->SetBinContent(31,0.0003278689);
   Calo_420__2->SetBinContent(32,0.0006557377);
   Calo_420__2->SetBinContent(33,0.0003278689);
   Calo_420__2->SetBinContent(34,0.0003278689);
   Calo_420__2->SetBinContent(35,0.0003278689);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(0.1572459);
   Calo_420__2->SetEntries(3050);

   ci = 1180;
   color = new TColor(ci, 1, 0, 0, " ", 0.1);
   Calo_420__2->SetFillColor(ci);
   Calo_420__2->SetFillStyle(3490);

   ci = TColor::GetColor("#ff0000");
   Calo_420__2->SetLineColor(ci);
   Calo_420__2->SetLineWidth(3);
   Calo_420__2->GetXaxis()->SetRange(1,40);
   Calo_420__2->GetXaxis()->SetLabelFont(42);
   Calo_420__2->GetXaxis()->SetTitleOffset(1);
   Calo_420__2->GetXaxis()->SetTitleFont(42);
   Calo_420__2->GetYaxis()->SetLabelFont(42);
   Calo_420__2->GetYaxis()->SetTitleFont(42);
   Calo_420__2->GetZaxis()->SetLabelFont(42);
   Calo_420__2->GetZaxis()->SetTitleOffset(1);
   Calo_420__2->GetZaxis()->SetTitleFont(42);
   Calo_420__2->Draw("hist same");
   
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
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Calo_420","Calo_420","lpf");

   ci = 1180;
   color = new TColor(ci, 1, 0, 0, " ", 0.1);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3490);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   All_GEP_Algo->Modified();
   All_GEP_Algo->cd();
   All_GEP_Algo->SetSelected(All_GEP_Algo);
}
