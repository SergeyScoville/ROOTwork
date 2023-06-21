#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0p0_No_Rebin_eta_dist_SK()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 15 17:27:34 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-5.009386,5.653846,26.29928);
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
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Average number of topoclusters as function of #eta post SK",16,-4.9,4.9);
   Calo_422__1->SetBinContent(1,1.58459);
   Calo_422__1->SetBinContent(2,2.266557);
   Calo_422__1->SetBinContent(3,2.99541);
   Calo_422__1->SetBinContent(4,4.391148);
   Calo_422__1->SetBinContent(5,13.9518);
   Calo_422__1->SetBinContent(6,15.22426);
   Calo_422__1->SetBinContent(7,19.10984);
   Calo_422__1->SetBinContent(8,21.84984);
   Calo_422__1->SetBinContent(9,21.59934);
   Calo_422__1->SetBinContent(10,19.33803);
   Calo_422__1->SetBinContent(11,15.32492);
   Calo_422__1->SetBinContent(12,14.12066);
   Calo_422__1->SetBinContent(13,4.406885);
   Calo_422__1->SetBinContent(14,2.983607);
   Calo_422__1->SetBinContent(15,2.310164);
   Calo_422__1->SetBinContent(16,1.588852);
   Calo_422__1->SetBinError(1,0.02279337);
   Calo_422__1->SetBinError(2,0.02726048);
   Calo_422__1->SetBinError(3,0.0313385);
   Calo_422__1->SetBinError(4,0.03794365);
   Calo_422__1->SetBinError(5,0.06763403);
   Calo_422__1->SetBinError(6,0.07065098);
   Calo_422__1->SetBinError(7,0.07915504);
   Calo_422__1->SetBinError(8,0.08463971);
   Calo_422__1->SetBinError(9,0.08415315);
   Calo_422__1->SetBinError(10,0.07962624);
   Calo_422__1->SetBinError(11,0.07088415);
   Calo_422__1->SetBinError(12,0.06804207);
   Calo_422__1->SetBinError(13,0.03801158);
   Calo_422__1->SetBinError(14,0.0312767);
   Calo_422__1->SetBinError(15,0.02752146);
   Calo_422__1->SetBinError(16,0.02282401);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(24.10767);
   Calo_422__1->SetEntries(497290);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   Calo_422__1->SetFillColor(ci);
   Calo_422__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   Calo_422__1->SetLineColor(ci);
   Calo_422__1->SetLineWidth(2);
   Calo_422__1->GetXaxis()->SetTitle("#eta");
   Calo_422__1->GetXaxis()->SetRange(1,16);
   Calo_422__1->GetXaxis()->SetLabelFont(42);
   Calo_422__1->GetXaxis()->SetTickLength(0.02);
   Calo_422__1->GetXaxis()->SetTitleOffset(1);
   Calo_422__1->GetXaxis()->SetTitleFont(42);
   Calo_422__1->GetYaxis()->SetTitle("Number of topoclusters/# events");
   Calo_422__1->GetYaxis()->SetLabelFont(42);
   Calo_422__1->GetYaxis()->SetTitleFont(42);
   Calo_422__1->GetZaxis()->SetLabelFont(42);
   Calo_422__1->GetZaxis()->SetTitleOffset(1);
   Calo_422__1->GetZaxis()->SetTitleFont(42);
   Calo_422__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Average number of topoclusters as function of #eta post SK");
   pt->Draw();
   TLine *line = new TLine(-4.9,0,-4.9,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,24.10767);
   line->SetLineStyle(2);
   line->Draw();
   
   pt = new TPaveText(0.195,0.87,0.265,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(72);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("ATLAS");
   pt->Draw();
   
   pt = new TPaveText(0.265,0.87,0.42,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("Simulation Internal");
   pt->Draw();
   
   pt = new TPaveText(0.19,0.83,0.35,0.87,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("HL-LHC <#mu>=200");
   pt->Draw();
   
   pt = new TPaveText(0.19,0.79,0.323,0.83,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("Minimum Bias");
   pt->Draw();
   
   pt = new TPaveText(0.19,0.75,0.284,0.79,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("E_{T}^{TC} > 0.0");
   pt->Draw();
   line = new TLine(-4.9,2.185902,-4.2875,2.185902);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-4.2875,3.118689,-3.675,3.118689);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.675,3.590164,-3.0625,3.590164);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.0625,6.028524,-2.45,6.028524);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-2.45,13.02951,-1.8375,13.02951);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.8375,15.33443,-1.225,15.33443);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.225,19.97213,-0.6125,19.97213);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-0.6125,21.91607,0,21.91607);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0,21.71312,0.6125,21.71312);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0.6125,20.17443,1.225,20.17443);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.225,15.4482,1.8375,15.4482);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.8375,13.35016,2.45,13.35016);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(2.45,6.028852,3.0625,6.028852);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.0625,3.686885,3.675,3.686885);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.675,3.178689,4.2875,3.178689);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(4.2875,2.197705,4.9,2.197705);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420SKclusters_eta",16,-4.9,4.9);
   Calo_420__2->SetBinContent(1,2.185902);
   Calo_420__2->SetBinContent(2,3.118689);
   Calo_420__2->SetBinContent(3,3.590164);
   Calo_420__2->SetBinContent(4,6.028524);
   Calo_420__2->SetBinContent(5,13.02951);
   Calo_420__2->SetBinContent(6,15.33443);
   Calo_420__2->SetBinContent(7,19.97213);
   Calo_420__2->SetBinContent(8,21.91607);
   Calo_420__2->SetBinContent(9,21.71312);
   Calo_420__2->SetBinContent(10,20.17443);
   Calo_420__2->SetBinContent(11,15.4482);
   Calo_420__2->SetBinContent(12,13.35016);
   Calo_420__2->SetBinContent(13,6.028852);
   Calo_420__2->SetBinContent(14,3.686885);
   Calo_420__2->SetBinContent(15,3.178689);
   Calo_420__2->SetBinContent(16,2.197705);
   Calo_420__2->SetBinError(1,0.02677105);
   Calo_420__2->SetBinError(2,0.03197688);
   Calo_420__2->SetBinError(3,0.03430893);
   Calo_420__2->SetBinError(4,0.04445858);
   Calo_420__2->SetBinError(5,0.06536031);
   Calo_420__2->SetBinError(6,0.07090614);
   Calo_420__2->SetBinError(7,0.08092119);
   Calo_420__2->SetBinError(8,0.08476789);
   Calo_420__2->SetBinError(9,0.08437449);
   Calo_420__2->SetBinError(10,0.08132998);
   Calo_420__2->SetBinError(11,0.07116869);
   Calo_420__2->SetBinError(12,0.06615968);
   Calo_420__2->SetBinError(13,0.04445979);
   Calo_420__2->SetBinError(14,0.03476801);
   Calo_420__2->SetBinError(15,0.03228301);
   Calo_420__2->SetBinError(16,0.02684323);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(24.10767);
   Calo_420__2->SetEntries(521408);

   ci = TColor::GetColor("#000099");
   Calo_420__2->SetLineColor(ci);
   Calo_420__2->SetLineWidth(0);

   ci = TColor::GetColor("#ff0000");
   Calo_420__2->SetMarkerColor(ci);
   Calo_420__2->SetMarkerSize(0);
   Calo_420__2->GetXaxis()->SetRange(1,16);
   Calo_420__2->GetXaxis()->SetLabelFont(42);
   Calo_420__2->GetXaxis()->SetTitleOffset(1);
   Calo_420__2->GetXaxis()->SetTitleFont(42);
   Calo_420__2->GetYaxis()->SetLabelFont(42);
   Calo_420__2->GetYaxis()->SetTitleFont(42);
   Calo_420__2->GetZaxis()->SetLabelFont(42);
   Calo_420__2->GetZaxis()->SetTitleOffset(1);
   Calo_420__2->GetZaxis()->SetTitleFont(42);
   Calo_420__2->Draw("P same");
   
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
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TLine","Calo_420","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   All_GEP_Algo->Modified();
   All_GEP_Algo->cd();
   All_GEP_Algo->SetSelected(All_GEP_Algo);
}
