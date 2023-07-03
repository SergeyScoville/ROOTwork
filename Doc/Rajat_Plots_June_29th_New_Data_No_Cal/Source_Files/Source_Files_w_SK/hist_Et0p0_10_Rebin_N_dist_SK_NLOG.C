#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0p0_10_Rebin_N_dist_SK_NLOG()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 29 14:12:54 2023) by ROOT version 6.26/06
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
   
   TH1F *CalosP422__1 = new TH1F("CalosP422__1","Number of Topoclusters post SK",250,0,2500);
   CalosP422__1->SetBinContent(10,0.0009836066);
   CalosP422__1->SetBinContent(11,0.02098361);
   CalosP422__1->SetBinContent(12,0.04098361);
   CalosP422__1->SetBinContent(13,0.06393442);
   CalosP422__1->SetBinContent(14,0.09770492);
   CalosP422__1->SetBinContent(15,0.1160656);
   CalosP422__1->SetBinContent(16,0.1416393);
   CalosP422__1->SetBinContent(17,0.1413115);
   CalosP422__1->SetBinContent(18,0.1032787);
   CalosP422__1->SetBinContent(19,0.0852459);
   CalosP422__1->SetBinContent(20,0.07049181);
   CalosP422__1->SetBinContent(21,0.04754099);
   CalosP422__1->SetBinContent(22,0.02754098);
   CalosP422__1->SetBinContent(23,0.01901639);
   CalosP422__1->SetBinContent(24,0.007868852);
   CalosP422__1->SetBinContent(25,0.005245902);
   CalosP422__1->SetBinContent(26,0.006229508);
   CalosP422__1->SetBinContent(27,0.001311475);
   CalosP422__1->SetBinContent(28,0.001311475);
   CalosP422__1->SetBinContent(29,0.0003278689);
   CalosP422__1->SetBinContent(31,0.0006557377);
   CalosP422__1->SetBinContent(36,0.0003278689);
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
   CalosP422__1->GetXaxis()->SetRange(1,45);
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
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.4598831,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Number of Topoclusters post SK");
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
   
   TH1F *CalosP420__2 = new TH1F("CalosP420__2","h_Calo420SKclusters_N",250,0,2500);
   CalosP420__2->SetBinContent(11,0.003278689);
   CalosP420__2->SetBinContent(12,0.02131147);
   CalosP420__2->SetBinContent(13,0.06655738);
   CalosP420__2->SetBinContent(14,0.09770492);
   CalosP420__2->SetBinContent(15,0.112459);
   CalosP420__2->SetBinContent(16,0.1026229);
   CalosP420__2->SetBinContent(17,0.1180328);
   CalosP420__2->SetBinContent(18,0.1098361);
   CalosP420__2->SetBinContent(19,0.08557377);
   CalosP420__2->SetBinContent(20,0.07770491);
   CalosP420__2->SetBinContent(21,0.06721312);
   CalosP420__2->SetBinContent(22,0.04426229);
   CalosP420__2->SetBinContent(23,0.03213115);
   CalosP420__2->SetBinContent(24,0.01967213);
   CalosP420__2->SetBinContent(25,0.01639344);
   CalosP420__2->SetBinContent(26,0.01180328);
   CalosP420__2->SetBinContent(27,0.002622951);
   CalosP420__2->SetBinContent(28,0.004918033);
   CalosP420__2->SetBinContent(29,0.002622951);
   CalosP420__2->SetBinContent(30,0.0003278689);
   CalosP420__2->SetBinContent(31,0.0009836066);
   CalosP420__2->SetBinContent(32,0.0006557377);
   CalosP420__2->SetBinContent(33,0.0003278689);
   CalosP420__2->SetBinContent(34,0.0006557377);
   CalosP420__2->SetBinContent(37,0.0003278689);
   CalosP420__2->SetMinimum(1e-05);
   CalosP420__2->SetMaximum(5);
   CalosP420__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   CalosP420__2->SetLineColor(ci);
   CalosP420__2->SetLineWidth(2);
   CalosP420__2->GetXaxis()->SetRange(1,45);
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
