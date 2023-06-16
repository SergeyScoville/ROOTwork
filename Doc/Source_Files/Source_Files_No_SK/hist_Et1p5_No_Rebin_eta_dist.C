#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p5_No_Rebin_eta_dist()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 15 17:24:34 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-7.575756,5.653846,39.77272);
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
   Calo_422__1->SetBinContent(1,1.622623);
   Calo_422__1->SetBinContent(2,2.315082);
   Calo_422__1->SetBinContent(3,2.861639);
   Calo_422__1->SetBinContent(4,4.129836);
   Calo_422__1->SetBinContent(5,11.66131);
   Calo_422__1->SetBinContent(6,11.75902);
   Calo_422__1->SetBinContent(7,14.31443);
   Calo_422__1->SetBinContent(8,15.79443);
   Calo_422__1->SetBinContent(9,15.62951);
   Calo_422__1->SetBinContent(10,14.5423);
   Calo_422__1->SetBinContent(11,11.76131);
   Calo_422__1->SetBinContent(12,11.82754);
   Calo_422__1->SetBinContent(13,4.14918);
   Calo_422__1->SetBinContent(14,2.88);
   Calo_422__1->SetBinContent(15,2.385902);
   Calo_422__1->SetBinContent(16,1.619344);
   Calo_422__1->SetBinError(1,0.02306529);
   Calo_422__1->SetBinError(2,0.02755074);
   Calo_422__1->SetBinError(3,0.03063074);
   Calo_422__1->SetBinError(4,0.03679735);
   Calo_422__1->SetBinError(5,0.06183349);
   Calo_422__1->SetBinError(6,0.06209199);
   Calo_422__1->SetBinError(7,0.06850733);
   Calo_422__1->SetBinError(8,0.0719618);
   Calo_422__1->SetBinError(9,0.07158512);
   Calo_422__1->SetBinError(10,0.06905046);
   Calo_422__1->SetBinError(11,0.06209805);
   Calo_422__1->SetBinError(12,0.06227264);
   Calo_422__1->SetBinError(13,0.03688342);
   Calo_422__1->SetBinError(14,0.03072885);
   Calo_422__1->SetBinError(15,0.02796896);
   Calo_422__1->SetBinError(16,0.02304197);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(36.45833);
   Calo_422__1->SetEntries(394223);

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
   TLine *line = new TLine(-4.9,0,-4.9,36.45833);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,36.45833);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,36.45833);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,36.45833);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,36.45833);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,36.45833);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,36.45833);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,36.45833);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,36.45833);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,36.45833);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,36.45833);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,36.45833);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,36.45833);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,36.45833);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,36.45833);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,36.45833);
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
   pt_LaTex = pt->AddText("E_{T}^{TC} > 1.5");
   pt->Draw();
   line = new TLine(-4.9,2.599016,-4.2875,2.599016);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-4.2875,4.326557,-3.675,4.326557);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.675,6.709508,-3.0625,6.709508);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.0625,8.803607,-2.45,8.803607);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-2.45,32.64328,-1.8375,32.64328);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.8375,24.98492,-1.225,24.98492);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.225,26.44951,-0.6125,26.44951);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-0.6125,26.77508,0,26.77508);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0,26.51672,0.6125,26.51672);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0.6125,26.66721,1.225,26.66721);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.225,24.90754,1.8375,24.90754);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.8375,33.14394,2.45,33.14394);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(2.45,8.89082,3.0625,8.89082);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.0625,6.731803,3.675,6.731803);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.675,4.465902,4.2875,4.465902);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(4.2875,2.590164,4.9,2.590164);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420TopoClusters_eta",16,-4.9,4.9);
   Calo_420__2->SetBinContent(1,2.599016);
   Calo_420__2->SetBinContent(2,4.326557);
   Calo_420__2->SetBinContent(3,6.709508);
   Calo_420__2->SetBinContent(4,8.803607);
   Calo_420__2->SetBinContent(5,32.64328);
   Calo_420__2->SetBinContent(6,24.98492);
   Calo_420__2->SetBinContent(7,26.44951);
   Calo_420__2->SetBinContent(8,26.77508);
   Calo_420__2->SetBinContent(9,26.51672);
   Calo_420__2->SetBinContent(10,26.66721);
   Calo_420__2->SetBinContent(11,24.90754);
   Calo_420__2->SetBinContent(12,33.14394);
   Calo_420__2->SetBinContent(13,8.89082);
   Calo_420__2->SetBinContent(14,6.731803);
   Calo_420__2->SetBinContent(15,4.465902);
   Calo_420__2->SetBinContent(16,2.590164);
   Calo_420__2->SetBinError(1,0.02919138);
   Calo_420__2->SetBinError(2,0.03766356);
   Calo_420__2->SetBinError(3,0.04690244);
   Calo_420__2->SetBinError(4,0.05372549);
   Calo_420__2->SetBinError(5,0.1034539);
   Calo_420__2->SetBinError(6,0.09050843);
   Calo_420__2->SetBinError(7,0.09312341);
   Calo_420__2->SetBinError(8,0.0936948);
   Calo_420__2->SetBinError(9,0.09324166);
   Calo_420__2->SetBinError(10,0.09350587);
   Calo_420__2->SetBinError(11,0.09036817);
   Calo_420__2->SetBinError(12,0.1042443);
   Calo_420__2->SetBinError(13,0.05399095);
   Calo_420__2->SetBinError(14,0.0469803);
   Calo_420__2->SetBinError(15,0.03826526);
   Calo_420__2->SetBinError(16,0.02914162);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(36.45833);
   Calo_420__2->SetEntries(814977);

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
