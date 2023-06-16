#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_EtNoCut_10_Rebin_N_dist_SK()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Wed Jun 14 15:06:12 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-83.03797,-0.03155509,435.9494,0.1656642);
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
   Calo_422__1->SetBinContent(12,0.04098361);
   Calo_422__1->SetBinContent(13,0.06393442);
   Calo_422__1->SetBinContent(14,0.09770492);
   Calo_422__1->SetBinContent(15,0.1160656);
   Calo_422__1->SetBinContent(16,0.1416393);
   Calo_422__1->SetBinContent(17,0.1413115);
   Calo_422__1->SetBinContent(18,0.1032787);
   Calo_422__1->SetBinContent(19,0.0852459);
   Calo_422__1->SetBinContent(20,0.07049181);
   Calo_422__1->SetBinContent(21,0.04754099);
   Calo_422__1->SetBinContent(22,0.02754098);
   Calo_422__1->SetBinContent(23,0.01901639);
   Calo_422__1->SetBinContent(24,0.007868852);
   Calo_422__1->SetBinContent(25,0.005245902);
   Calo_422__1->SetBinContent(26,0.006229508);
   Calo_422__1->SetBinContent(27,0.001311475);
   Calo_422__1->SetBinContent(28,0.001311475);
   Calo_422__1->SetBinContent(29,0.0003278689);
   Calo_422__1->SetBinContent(31,0.0006557377);
   Calo_422__1->SetBinContent(36,0.0003278689);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(0.1558033);
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
   Calo_422__1->GetXaxis()->SetRange(1,41);
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
   TLatex *   tex = new TLatex(0.2,0.91,"ATLAS");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(72);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.27,0.91,"Simulation Internal");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.87,"HL-LHC #mu=200");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.83,"Minimum Bias");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420SKclusters_N",250,0,2500);
   Calo_420__2->SetBinContent(11,0.003278689);
   Calo_420__2->SetBinContent(12,0.02131147);
   Calo_420__2->SetBinContent(13,0.06655738);
   Calo_420__2->SetBinContent(14,0.09770492);
   Calo_420__2->SetBinContent(15,0.112459);
   Calo_420__2->SetBinContent(16,0.1026229);
   Calo_420__2->SetBinContent(17,0.1180328);
   Calo_420__2->SetBinContent(18,0.1098361);
   Calo_420__2->SetBinContent(19,0.08557377);
   Calo_420__2->SetBinContent(20,0.07770491);
   Calo_420__2->SetBinContent(21,0.06721312);
   Calo_420__2->SetBinContent(22,0.04426229);
   Calo_420__2->SetBinContent(23,0.03213115);
   Calo_420__2->SetBinContent(24,0.01967213);
   Calo_420__2->SetBinContent(25,0.01639344);
   Calo_420__2->SetBinContent(26,0.01180328);
   Calo_420__2->SetBinContent(27,0.002622951);
   Calo_420__2->SetBinContent(28,0.004918033);
   Calo_420__2->SetBinContent(29,0.002622951);
   Calo_420__2->SetBinContent(30,0.0003278689);
   Calo_420__2->SetBinContent(31,0.0009836066);
   Calo_420__2->SetBinContent(32,0.0006557377);
   Calo_420__2->SetBinContent(33,0.0003278689);
   Calo_420__2->SetBinContent(34,0.0006557377);
   Calo_420__2->SetBinContent(37,0.0003278689);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(0.1558033);
   Calo_420__2->SetEntries(3050);

   ci = 1180;
   color = new TColor(ci, 1, 0, 0, " ", 0.1);
   Calo_420__2->SetFillColor(ci);
   Calo_420__2->SetFillStyle(3490);

   ci = TColor::GetColor("#ff0000");
   Calo_420__2->SetLineColor(ci);
   Calo_420__2->SetLineWidth(3);
   Calo_420__2->GetXaxis()->SetRange(1,41);
   Calo_420__2->GetXaxis()->SetLabelFont(42);
   Calo_420__2->GetXaxis()->SetTitleOffset(1);
   Calo_420__2->GetXaxis()->SetTitleFont(42);
   Calo_420__2->GetYaxis()->SetLabelFont(42);
   Calo_420__2->GetYaxis()->SetTitleFont(42);
   Calo_420__2->GetZaxis()->SetLabelFont(42);
   Calo_420__2->GetZaxis()->SetTitleOffset(1);
   Calo_420__2->GetZaxis()->SetTitleFont(42);
   Calo_420__2->Draw("hist same");
   
   TH1F *Calo_Cal__3 = new TH1F("Calo_Cal__3","h_CaloCalSKclusters_N",250,0,2500);
   Calo_Cal__3->SetBinContent(10,0.0006557377);
   Calo_Cal__3->SetBinContent(11,0.004262295);
   Calo_Cal__3->SetBinContent(12,0.03639344);
   Calo_Cal__3->SetBinContent(13,0.08885246);
   Calo_Cal__3->SetBinContent(14,0.1062295);
   Calo_Cal__3->SetBinContent(15,0.1311475);
   Calo_Cal__3->SetBinContent(16,0.1111475);
   Calo_Cal__3->SetBinContent(17,0.1219672);
   Calo_Cal__3->SetBinContent(18,0.1134426);
   Calo_Cal__3->SetBinContent(19,0.07245902);
   Calo_Cal__3->SetBinContent(20,0.06557377);
   Calo_Cal__3->SetBinContent(21,0.04983607);
   Calo_Cal__3->SetBinContent(22,0.0347541);
   Calo_Cal__3->SetBinContent(23,0.02229508);
   Calo_Cal__3->SetBinContent(24,0.01540984);
   Calo_Cal__3->SetBinContent(25,0.01147541);
   Calo_Cal__3->SetBinContent(26,0.00557377);
   Calo_Cal__3->SetBinContent(27,0.004262295);
   Calo_Cal__3->SetBinContent(28,0.001311475);
   Calo_Cal__3->SetBinContent(29,0.001311475);
   Calo_Cal__3->SetBinContent(31,0.0003278689);
   Calo_Cal__3->SetBinContent(32,0.0006557377);
   Calo_Cal__3->SetBinContent(34,0.0003278689);
   Calo_Cal__3->SetBinContent(36,0.0003278689);
   Calo_Cal__3->SetMinimum(0);
   Calo_Cal__3->SetMaximum(0.1558033);
   Calo_Cal__3->SetEntries(3050);

   ci = 1181;
   color = new TColor(ci, 0.2, 0.6, 0.2, " ", 0.1);
   Calo_Cal__3->SetFillColor(ci);

   ci = TColor::GetColor("#009900");
   Calo_Cal__3->SetLineColor(ci);
   Calo_Cal__3->SetLineWidth(3);
   Calo_Cal__3->GetXaxis()->SetRange(1,41);
   Calo_Cal__3->GetXaxis()->SetLabelFont(42);
   Calo_Cal__3->GetXaxis()->SetTitleOffset(1);
   Calo_Cal__3->GetXaxis()->SetTitleFont(42);
   Calo_Cal__3->GetYaxis()->SetLabelFont(42);
   Calo_Cal__3->GetYaxis()->SetTitleFont(42);
   Calo_Cal__3->GetZaxis()->SetLabelFont(42);
   Calo_Cal__3->GetZaxis()->SetTitleOffset(1);
   Calo_Cal__3->GetZaxis()->SetTitleFont(42);
   Calo_Cal__3->Draw("hist SAME");
   
   TLegend *leg = new TLegend(0.8,0.4,0.92,0.52,NULL,"brNDC");
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
   entry=leg->AddEntry("Calo_Cal","Calo_Cal","lpf");

   ci = 1181;
   color = new TColor(ci, 0.2, 0.6, 0.2, " ", 0.1);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#009900");
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
