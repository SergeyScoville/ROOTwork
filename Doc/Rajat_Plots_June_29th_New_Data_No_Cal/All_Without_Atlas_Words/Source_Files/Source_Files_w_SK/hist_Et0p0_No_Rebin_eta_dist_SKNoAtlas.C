#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0p0_No_Rebin_eta_dist_SKNoAtlas()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Mon Jul  3 11:28:03 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-5.03689,5.653846,26.44367);
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
   
   TH1F *CalosP422__1 = new TH1F("CalosP422__1","Average number of topoclusters as function of #eta post SK",16,-4.9,4.9);
   CalosP422__1->SetBinContent(1,1.582951);
   CalosP422__1->SetBinContent(2,2.255082);
   CalosP422__1->SetBinContent(3,2.994426);
   CalosP422__1->SetBinContent(4,4.388853);
   CalosP422__1->SetBinContent(5,13.97148);
   CalosP422__1->SetBinContent(6,15.25443);
   CalosP422__1->SetBinContent(7,19.12426);
   CalosP422__1->SetBinContent(8,21.86656);
   CalosP422__1->SetBinContent(9,21.62328);
   CalosP422__1->SetBinContent(10,19.35541);
   CalosP422__1->SetBinContent(11,15.3482);
   CalosP422__1->SetBinContent(12,14.13967);
   CalosP422__1->SetBinContent(13,4.407541);
   CalosP422__1->SetBinContent(14,2.979344);
   CalosP422__1->SetBinContent(15,2.300656);
   CalosP422__1->SetBinContent(16,1.588197);
   CalosP422__1->SetBinError(1,0.02278158);
   CalosP422__1->SetBinError(2,0.02719138);
   CalosP422__1->SetBinError(3,0.03133335);
   CalosP422__1->SetBinError(4,0.03793373);
   CalosP422__1->SetBinError(5,0.06768169);
   CalosP422__1->SetBinError(6,0.07072094);
   CalosP422__1->SetBinError(7,0.07918491);
   CalosP422__1->SetBinError(8,0.08467209);
   CalosP422__1->SetBinError(9,0.08419976);
   CalosP422__1->SetBinError(10,0.07966201);
   CalosP422__1->SetBinError(11,0.07093797);
   CalosP422__1->SetBinError(12,0.06808787);
   CalosP422__1->SetBinError(13,0.03801441);
   CalosP422__1->SetBinError(14,0.03125435);
   CalosP422__1->SetBinError(15,0.02746477);
   CalosP422__1->SetBinError(16,0.0228193);
   CalosP422__1->SetMinimum(0);
   CalosP422__1->SetMaximum(24.24003);
   CalosP422__1->SetEntries(497700);

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
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Average number of topoclusters as function of #eta post SK");
   pt->Draw();
   TLine *line = new TLine(-4.9,0,-4.9,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,0,0,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.225,0,1.225,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(2.45,0,2.45,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.675,0,3.675,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,24.24003);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-4.9,2.177705,-4.2875,2.177705);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,3.078689,-3.675,3.078689);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,3.58,-3.0625,3.58);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,6.026885,-2.45,6.026885);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,13.1223,-1.8375,13.1223);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,15.45016,-1.225,15.45016);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,20.06951,-0.6125,20.06951);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,22.03639,0,22.03639);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,21.83672,0.6125,21.83672);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,20.29377,1.225,20.29377);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,15.55934,1.8375,15.55934);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,13.45148,2.45,13.45148);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,6.036394,3.0625,6.036394);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,3.662951,3.675,3.662951);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,3.12623,4.2875,3.12623);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.187869,4.9,2.187869);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *CalosP420__2 = new TH1F("CalosP420__2","h_Calo420SKclusters_eta",16,-4.9,4.9);
   CalosP420__2->SetBinContent(1,2.177705);
   CalosP420__2->SetBinContent(2,3.078689);
   CalosP420__2->SetBinContent(3,3.58);
   CalosP420__2->SetBinContent(4,6.026885);
   CalosP420__2->SetBinContent(5,13.1223);
   CalosP420__2->SetBinContent(6,15.45016);
   CalosP420__2->SetBinContent(7,20.06951);
   CalosP420__2->SetBinContent(8,22.03639);
   CalosP420__2->SetBinContent(9,21.83672);
   CalosP420__2->SetBinContent(10,20.29377);
   CalosP420__2->SetBinContent(11,15.55934);
   CalosP420__2->SetBinContent(12,13.45148);
   CalosP420__2->SetBinContent(13,6.036394);
   CalosP420__2->SetBinContent(14,3.662951);
   CalosP420__2->SetBinContent(15,3.12623);
   CalosP420__2->SetBinContent(16,2.187869);
   CalosP420__2->SetBinError(1,0.02672081);
   CalosP420__2->SetBinError(2,0.03177115);
   CalosP420__2->SetBinError(3,0.03426033);
   CalosP420__2->SetBinError(4,0.04445254);
   CalosP420__2->SetBinError(5,0.06559262);
   CalosP420__2->SetBinError(6,0.07117322);
   CalosP420__2->SetBinError(7,0.08111823);
   CalosP420__2->SetBinError(8,0.08500028);
   CalosP420__2->SetBinError(9,0.08461431);
   CalosP420__2->SetBinError(10,0.08157019);
   CalosP420__2->SetBinError(11,0.07142426);
   CalosP420__2->SetBinError(12,0.06641024);
   CalosP420__2->SetBinError(13,0.04448759);
   CalosP420__2->SetBinError(14,0.03465498);
   CalosP420__2->SetBinError(15,0.03201552);
   CalosP420__2->SetBinError(16,0.02678309);
   CalosP420__2->SetMinimum(0);
   CalosP420__2->SetMaximum(24.24003);
   CalosP420__2->SetEntries(523674);

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
