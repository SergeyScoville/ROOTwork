#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p0_No_Rebin_eta_dist()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 15 17:24:31 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-10.80731,5.653846,56.73836);
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
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Average number of topoclusters as function of #eta",16,-4.9,4.9);
   Calo_422__1->SetBinContent(1,1.668852);
   Calo_422__1->SetBinContent(2,2.530164);
   Calo_422__1->SetBinContent(3,3.728853);
   Calo_422__1->SetBinContent(4,5.07541);
   Calo_422__1->SetBinContent(5,20.47508);
   Calo_422__1->SetBinContent(6,21.93049);
   Calo_422__1->SetBinContent(7,26.44754);
   Calo_422__1->SetBinContent(8,29.60918);
   Calo_422__1->SetBinContent(9,29.33934);
   Calo_422__1->SetBinContent(10,26.66229);
   Calo_422__1->SetBinContent(11,21.82984);
   Calo_422__1->SetBinContent(12,20.71344);
   Calo_422__1->SetBinContent(13,5.073771);
   Calo_422__1->SetBinContent(14,3.723934);
   Calo_422__1->SetBinContent(15,2.588852);
   Calo_422__1->SetBinContent(16,1.664262);
   Calo_422__1->SetBinError(1,0.02339155);
   Calo_422__1->SetBinError(2,0.02880212);
   Calo_422__1->SetBinError(3,0.03496533);
   Calo_422__1->SetBinError(4,0.040793);
   Calo_422__1->SetBinError(5,0.08193376);
   Calo_422__1->SetBinError(6,0.08479579);
   Calo_422__1->SetBinError(7,0.09311995);
   Calo_422__1->SetBinError(8,0.09852882);
   Calo_422__1->SetBinError(9,0.09807883);
   Calo_422__1->SetBinError(10,0.09349725);
   Calo_422__1->SetBinError(11,0.08460097);
   Calo_422__1->SetBinError(12,0.0824093);
   Calo_422__1->SetBinError(13,0.04078641);
   Calo_422__1->SetBinError(14,0.03494227);
   Calo_422__1->SetBinError(15,0.02913424);
   Calo_422__1->SetBinError(16,0.02335936);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(52.01016);
   Calo_422__1->SetEntries(680337);

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
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.6677295,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Average number of topoclusters as function of #eta");
   pt->Draw();
   TLine *line = new TLine(-4.9,0,-4.9,52.01016);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,52.01016);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,52.01016);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,52.01016);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,52.01016);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,52.01016);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,52.01016);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,52.01016);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,52.01016);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,52.01016);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,52.01016);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,52.01016);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,52.01016);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,52.01016);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,52.01016);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,52.01016);
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
   pt_LaTex = pt->AddText("E_{T}^{TC} > 1.0");
   pt->Draw();
   line = new TLine(-4.9,2.638033,-4.2875,2.638033);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-4.2875,4.494426,-3.675,4.494426);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.675,7.516066,-3.0625,7.516066);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.0625,10.13082,-2.45,10.13082);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-2.45,46.71935,-1.8375,46.71935);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.8375,38.93148,-1.225,38.93148);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.225,41.37246,-0.6125,41.37246);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-0.6125,42.89148,0,42.89148);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0,42.74656,0.6125,42.74656);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0.6125,41.73869,1.225,41.73869);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.225,38.8741,1.8375,38.8741);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.8375,47.28197,2.45,47.28197);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(2.45,10.18623,3.0625,10.18623);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.0625,7.535082,3.675,7.535082);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.675,4.653443,4.2875,4.653443);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(4.2875,2.628197,4.9,2.628197);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420TopoClusters_eta",16,-4.9,4.9);
   Calo_420__2->SetBinContent(1,2.638033);
   Calo_420__2->SetBinContent(2,4.494426);
   Calo_420__2->SetBinContent(3,7.516066);
   Calo_420__2->SetBinContent(4,10.13082);
   Calo_420__2->SetBinContent(5,46.71935);
   Calo_420__2->SetBinContent(6,38.93148);
   Calo_420__2->SetBinContent(7,41.37246);
   Calo_420__2->SetBinContent(8,42.89148);
   Calo_420__2->SetBinContent(9,42.74656);
   Calo_420__2->SetBinContent(10,41.73869);
   Calo_420__2->SetBinContent(11,38.8741);
   Calo_420__2->SetBinContent(12,47.28197);
   Calo_420__2->SetBinContent(13,10.18623);
   Calo_420__2->SetBinContent(14,7.535082);
   Calo_420__2->SetBinContent(15,4.653443);
   Calo_420__2->SetBinContent(16,2.628197);
   Calo_420__2->SetBinError(1,0.02940967);
   Calo_420__2->SetBinError(2,0.03838727);
   Calo_420__2->SetBinError(3,0.04964155);
   Calo_420__2->SetBinError(4,0.05763315);
   Calo_420__2->SetBinError(5,0.1237652);
   Calo_420__2->SetBinError(6,0.1129797);
   Calo_420__2->SetBinError(7,0.1164678);
   Calo_420__2->SetBinError(8,0.1185866);
   Calo_420__2->SetBinError(9,0.1183861);
   Calo_420__2->SetBinError(10,0.1169821);
   Calo_420__2->SetBinError(11,0.1128964);
   Calo_420__2->SetBinError(12,0.1245082);
   Calo_420__2->SetBinError(13,0.05779055);
   Calo_420__2->SetBinError(14,0.04970431);
   Calo_420__2->SetBinError(15,0.03906045);
   Calo_420__2->SetBinError(16,0.02935479);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(52.01016);
   Calo_420__2->SetEntries(1190532);

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
