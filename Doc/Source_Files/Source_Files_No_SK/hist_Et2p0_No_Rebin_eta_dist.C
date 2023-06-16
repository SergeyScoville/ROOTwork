#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et2p0_No_Rebin_eta_dist()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 15 17:24:37 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-5.512993,5.653846,28.94321);
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
   Calo_422__1->SetBinContent(1,1.537377);
   Calo_422__1->SetBinContent(2,2.149836);
   Calo_422__1->SetBinContent(3,2.319016);
   Calo_422__1->SetBinContent(4,3.535738);
   Calo_422__1->SetBinContent(5,7.426229);
   Calo_422__1->SetBinContent(6,7.157049);
   Calo_422__1->SetBinContent(7,8.730492);
   Calo_422__1->SetBinContent(8,9.211803);
   Calo_422__1->SetBinContent(9,9.099344);
   Calo_422__1->SetBinContent(10,8.94);
   Calo_422__1->SetBinContent(11,7.307541);
   Calo_422__1->SetBinContent(12,7.553442);
   Calo_422__1->SetBinContent(13,3.585246);
   Calo_422__1->SetBinContent(14,2.341967);
   Calo_422__1->SetBinContent(15,2.210164);
   Calo_422__1->SetBinContent(16,1.528852);
   Calo_422__1->SetBinError(1,0.02245124);
   Calo_422__1->SetBinError(2,0.02654928);
   Calo_422__1->SetBinError(3,0.02757414);
   Calo_422__1->SetBinError(4,0.03404788);
   Calo_422__1->SetBinError(5,0.04934399);
   Calo_422__1->SetBinError(6,0.04844144);
   Calo_422__1->SetBinError(7,0.05350193);
   Calo_422__1->SetBinError(8,0.05495692);
   Calo_422__1->SetBinError(9,0.05462043);
   Calo_422__1->SetBinError(10,0.05414007);
   Calo_422__1->SetBinError(11,0.04894809);
   Calo_422__1->SetBinError(12,0.04976483);
   Calo_422__1->SetBinError(13,0.03428543);
   Calo_422__1->SetBinError(14,0.02771025);
   Calo_422__1->SetBinError(15,0.02691921);
   Calo_422__1->SetBinError(16,0.02238891);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(26.53128);
   Calo_422__1->SetEntries(258134);

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
   TLine *line = new TLine(-4.9,0,-4.9,26.53128);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,26.53128);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,26.53128);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,26.53128);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,26.53128);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,26.53128);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,26.53128);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,26.53128);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,26.53128);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,26.53128);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,26.53128);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,26.53128);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,26.53128);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,26.53128);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,26.53128);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,26.53128);
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
   pt_LaTex = pt->AddText("E_{T}^{TC} > 2.0");
   pt->Draw();
   line = new TLine(-4.9,2.558689,-4.2875,2.558689);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-4.2875,4.163279,-3.675,4.163279);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.675,6.066557,-3.0625,6.066557);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.0625,7.799344,-2.45,7.799344);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-2.45,23.55082,-1.8375,23.55082);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.8375,17.18066,-1.225,17.18066);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.225,17.89803,-0.6125,17.89803);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-0.6125,17.32066,0,17.32066);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0,17.21967,0.6125,17.21967);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0.6125,18.13443,1.225,18.13443);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.225,17.19803,1.8375,17.19803);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.8375,24.11934,2.45,24.11934);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(2.45,7.880984,3.0625,7.880984);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.0625,6.082951,3.675,6.082951);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.675,4.290164,4.2875,4.290164);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(4.2875,2.549836,4.9,2.549836);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420TopoClusters_eta",16,-4.9,4.9);
   Calo_420__2->SetBinContent(1,2.558689);
   Calo_420__2->SetBinContent(2,4.163279);
   Calo_420__2->SetBinContent(3,6.066557);
   Calo_420__2->SetBinContent(4,7.799344);
   Calo_420__2->SetBinContent(5,23.55082);
   Calo_420__2->SetBinContent(6,17.18066);
   Calo_420__2->SetBinContent(7,17.89803);
   Calo_420__2->SetBinContent(8,17.32066);
   Calo_420__2->SetBinContent(9,17.21967);
   Calo_420__2->SetBinContent(10,18.13443);
   Calo_420__2->SetBinContent(11,17.19803);
   Calo_420__2->SetBinContent(12,24.11934);
   Calo_420__2->SetBinContent(13,7.880984);
   Calo_420__2->SetBinContent(14,6.082951);
   Calo_420__2->SetBinContent(15,4.290164);
   Calo_420__2->SetBinContent(16,2.549836);
   Calo_420__2->SetBinError(1,0.02896402);
   Calo_420__2->SetBinError(2,0.03694603);
   Calo_420__2->SetBinError(3,0.0445986);
   Calo_420__2->SetBinError(4,0.05056839);
   Calo_420__2->SetBinError(5,0.08787252);
   Calo_420__2->SetBinError(6,0.07505333);
   Calo_420__2->SetBinError(7,0.07660423);
   Calo_420__2->SetBinError(8,0.0753585);
   Calo_420__2->SetBinError(9,0.0751385);
   Calo_420__2->SetBinError(10,0.07710845);
   Calo_420__2->SetBinError(11,0.07509127);
   Calo_420__2->SetBinError(12,0.08892683);
   Calo_420__2->SetBinError(13,0.05083236);
   Calo_420__2->SetBinError(14,0.04465882);
   Calo_420__2->SetBinError(15,0.03750481);
   Calo_420__2->SetBinError(16,0.02891387);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(26.53128);
   Calo_420__2->SetEntries(591741);

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
