#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p0_No_Rebin_eta_distNoAtlas()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Mon Jul  3 11:27:17 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-9.312749,5.653846,48.89193);
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
   
   TH1F *CalosP422__1 = new TH1F("CalosP422__1","Average number of topoclusters as function of #eta",16,-4.9,4.9);
   CalosP422__1->SetBinContent(1,1.625574);
   CalosP422__1->SetBinContent(2,2.324918);
   CalosP422__1->SetBinContent(3,3.502295);
   CalosP422__1->SetBinContent(4,4.966229);
   CalosP422__1->SetBinContent(5,19.3259);
   CalosP422__1->SetBinContent(6,20.94361);
   CalosP422__1->SetBinContent(7,25.44361);
   CalosP422__1->SetBinContent(8,28.48656);
   CalosP422__1->SetBinContent(9,28.21344);
   CalosP422__1->SetBinContent(10,25.57705);
   CalosP422__1->SetBinContent(11,20.91869);
   CalosP422__1->SetBinContent(12,19.60721);
   CalosP422__1->SetBinContent(13,4.982623);
   CalosP422__1->SetBinContent(14,3.502623);
   CalosP422__1->SetBinContent(15,2.375738);
   CalosP422__1->SetBinContent(16,1.623607);
   CalosP422__1->SetBinError(1,0.02308625);
   CalosP422__1->SetBinError(2,0.02760921);
   CalosP422__1->SetBinError(3,0.03388648);
   CalosP422__1->SetBinError(4,0.04035185);
   CalosP422__1->SetBinError(5,0.07960126);
   CalosP422__1->SetBinError(6,0.08286589);
   CalosP422__1->SetBinError(7,0.09133546);
   CalosP422__1->SetBinError(8,0.09664292);
   CalosP422__1->SetBinError(9,0.09617853);
   CalosP422__1->SetBinError(10,0.09157466);
   CalosP422__1->SetBinError(11,0.08281658);
   CalosP422__1->SetBinError(12,0.08017852);
   CalosP422__1->SetBinError(13,0.0404184);
   CalosP422__1->SetBinError(14,0.03388807);
   CalosP422__1->SetBinError(15,0.02790932);
   CalosP422__1->SetBinError(16,0.02307228);
   CalosP422__1->SetMinimum(0);
   CalosP422__1->SetMaximum(44.81761);
   CalosP422__1->SetEntries(650930);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   CalosP422__1->SetFillColor(ci);
   CalosP422__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   CalosP422__1->SetLineColor(ci);
   CalosP422__1->SetLineWidth(2);
   CalosP422__1->GetXaxis()->SetTitle("#eta");
   CalosP422__1->GetXaxis()->SetRange(1,16);
   CalosP422__1->GetXaxis()->SetNdivisions(-16);
   CalosP422__1->GetXaxis()->SetLabelFont(42);
   CalosP422__1->GetXaxis()->SetLabelSize(0.023);
   CalosP422__1->GetXaxis()->SetTitleSize(0.04);
   CalosP422__1->GetXaxis()->SetTickLength(0.02);
   CalosP422__1->GetXaxis()->SetTitleOffset(1);
   CalosP422__1->GetXaxis()->SetTitleFont(42);
   CalosP422__1->GetYaxis()->SetTitle("Number of topoclusters/# events");
   CalosP422__1->GetYaxis()->SetLabelFont(42);
   CalosP422__1->GetYaxis()->SetTitleSize(0.04);
   CalosP422__1->GetYaxis()->SetTitleFont(42);
   CalosP422__1->GetZaxis()->SetLabelFont(42);
   CalosP422__1->GetZaxis()->SetTitleOffset(1);
   CalosP422__1->GetZaxis()->SetTitleFont(42);
   CalosP422__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.6677295,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Average number of topoclusters as function of #eta");
   pt->Draw();
   TLine *line = new TLine(-4.9,0,-4.9,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,0,0,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.225,0,1.225,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(2.45,0,2.45,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.675,0,3.675,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,44.81761);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-4.9,2.363279,-4.2875,2.363279);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,3.337377,-3.675,3.337377);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,5.561311,-3.0625,5.561311);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,8.589836,-2.45,8.589836);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,31.29246,-1.8375,31.29246);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,33.48098,-1.225,33.48098);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,38.54918,-0.6125,38.54918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,40.74328,0,40.74328);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,40.5741,0.6125,40.5741);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,38.85934,1.225,38.85934);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,33.64394,1.8375,33.64394);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,31.81344,2.45,31.81344);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,8.626229,3.0625,8.626229);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,5.63377,3.675,5.63377);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,3.41377,4.2875,3.41377);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.387213,4.9,2.387213);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *CalosP420__2 = new TH1F("CalosP420__2","h_Calo420TopoClusters_eta",16,-4.9,4.9);
   CalosP420__2->SetBinContent(1,2.363279);
   CalosP420__2->SetBinContent(2,3.337377);
   CalosP420__2->SetBinContent(3,5.561311);
   CalosP420__2->SetBinContent(4,8.589836);
   CalosP420__2->SetBinContent(5,31.29246);
   CalosP420__2->SetBinContent(6,33.48098);
   CalosP420__2->SetBinContent(7,38.54918);
   CalosP420__2->SetBinContent(8,40.74328);
   CalosP420__2->SetBinContent(9,40.5741);
   CalosP420__2->SetBinContent(10,38.85934);
   CalosP420__2->SetBinContent(11,33.64394);
   CalosP420__2->SetBinContent(12,31.81344);
   CalosP420__2->SetBinContent(13,8.626229);
   CalosP420__2->SetBinContent(14,5.63377);
   CalosP420__2->SetBinContent(15,3.41377);
   CalosP420__2->SetBinContent(16,2.387213);
   CalosP420__2->SetBinError(1,0.02783605);
   CalosP420__2->SetBinError(2,0.03307903);
   CalosP420__2->SetBinError(3,0.04270106);
   CalosP420__2->SetBinError(4,0.0530692);
   CalosP420__2->SetBinError(5,0.1012908);
   CalosP420__2->SetBinError(6,0.104773);
   CalosP420__2->SetBinError(7,0.1124236);
   CalosP420__2->SetBinError(8,0.1155788);
   CalosP420__2->SetBinError(9,0.1153386);
   CalosP420__2->SetBinError(10,0.112875);
   CalosP420__2->SetBinError(11,0.1050276);
   CalosP420__2->SetBinError(12,0.1021305);
   CalosP420__2->SetBinError(13,0.0531815);
   CalosP420__2->SetBinError(14,0.04297834);
   CalosP420__2->SetBinError(15,0.03345548);
   CalosP420__2->SetBinError(16,0.02797665);
   CalosP420__2->SetMinimum(0);
   CalosP420__2->SetMaximum(44.81761);
   CalosP420__2->SetEntries(1003052);

   ci = TColor::GetColor("#000099");
   CalosP420__2->SetLineColor(ci);
   CalosP420__2->SetLineWidth(0);

   ci = TColor::GetColor("#ff0000");
   CalosP420__2->SetMarkerColor(ci);
   CalosP420__2->SetMarkerSize(0);
   CalosP420__2->GetXaxis()->SetRange(1,16);
   CalosP420__2->GetXaxis()->SetLabelFont(42);
   CalosP420__2->GetXaxis()->SetTitleOffset(1);
   CalosP420__2->GetXaxis()->SetTitleFont(42);
   CalosP420__2->GetYaxis()->SetLabelFont(42);
   CalosP420__2->GetYaxis()->SetTitleFont(42);
   CalosP420__2->GetZaxis()->SetLabelFont(42);
   CalosP420__2->GetZaxis()->SetTitleOffset(1);
   CalosP420__2->GetZaxis()->SetTitleFont(42);
   CalosP420__2->Draw("P same");
   
   TLegend *leg = new TLegend(0.2,0.3,0.3,0.42,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
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
   entry=leg->AddEntry("TLine","Calo 420","l");

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
