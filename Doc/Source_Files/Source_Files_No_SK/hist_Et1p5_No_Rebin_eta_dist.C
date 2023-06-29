#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p5_No_Rebin_eta_dist()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 29 13:31:09 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-5.713985,5.653846,29.99843);
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
   CalosP422__1->SetBinContent(1,1.584262);
   CalosP422__1->SetBinContent(2,2.154098);
   CalosP422__1->SetBinContent(3,2.73082);
   CalosP422__1->SetBinContent(4,4.017705);
   CalosP422__1->SetBinContent(5,10.04852);
   CalosP422__1->SetBinContent(6,10.64787);
   CalosP422__1->SetBinContent(7,13.60197);
   CalosP422__1->SetBinContent(8,15.17803);
   CalosP422__1->SetBinContent(9,15.04459);
   CalosP422__1->SetBinContent(10,13.77049);
   CalosP422__1->SetBinContent(11,10.68951);
   CalosP422__1->SetBinContent(12,10.23443);
   CalosP422__1->SetBinContent(13,4.059016);
   CalosP422__1->SetBinContent(14,2.751803);
   CalosP422__1->SetBinContent(15,2.209508);
   CalosP422__1->SetBinContent(16,1.583607);
   CalosP422__1->SetBinError(1,0.02279101);
   CalosP422__1->SetBinError(2,0.02657559);
   CalosP422__1->SetBinError(3,0.02992241);
   CalosP422__1->SetBinError(4,0.03629436);
   CalosP422__1->SetBinError(5,0.05739859);
   CalosP422__1->SetBinError(6,0.05908557);
   CalosP422__1->SetBinError(7,0.0667807);
   CalosP422__1->SetBinError(8,0.07054363);
   CalosP422__1->SetBinError(9,0.07023284);
   CalosP422__1->SetBinError(10,0.06719312);
   CalosP422__1->SetBinError(11,0.05920099);
   CalosP422__1->SetBinError(12,0.05792711);
   CalosP422__1->SetBinError(13,0.03648047);
   CalosP422__1->SetBinError(14,0.03003715);
   CalosP422__1->SetBinError(15,0.02691522);
   CalosP422__1->SetBinError(16,0.0227863);
   CalosP422__1->SetMinimum(0);
   CalosP422__1->SetMaximum(27.49856);
   CalosP422__1->SetEntries(366934);

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
   CalosP422__1->GetXaxis()->SetLabelFont(42);
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
   TLine *line = new TLine(-4.9,0,-4.9,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,0,0,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.225,0,1.225,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(2.45,0,2.45,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.675,0,3.675,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,27.49856);
   line->SetLineStyle(3);
   line->Draw();
   
   pt = new TPaveText(0.185,0.87,0.27,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(72);
   pt->SetTextSize(0.04);
   pt_LaTex = pt->AddText("ATLAS");
   pt->Draw();
   
   pt = new TPaveText(0.27,0.87,0.475,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   pt_LaTex = pt->AddText("Simulation Internal");
   pt->Draw();
   
   pt = new TPaveText(0.185,0.83,0.375,0.87,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   pt_LaTex = pt->AddText("HL-LHC <#mu>=200");
   pt->Draw();
   
   pt = new TPaveText(0.185,0.79,0.335,0.83,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   pt_LaTex = pt->AddText("Minimum Bias");
   pt->Draw();
   
   pt = new TPaveText(0.185,0.75,0.28,0.79,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   pt_LaTex = pt->AddText("E_{T}^{TC} > 1.5");
   pt->Draw();
   line = new TLine(-4.9,2.316721,-4.2875,2.316721);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,3.190164,-3.675,3.190164);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,4.691475,-3.0625,4.691475);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,6.992787,-2.45,6.992787);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,16.45672,-1.8375,16.45672);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,18.76492,-1.225,18.76492);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,23.70098,-0.6125,23.70098);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,24.99869,0,24.99869);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,24.74524,0.6125,24.74524);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,23.78688,1.225,23.78688);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,18.82426,1.8375,18.82426);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,16.78492,2.45,16.78492);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,7.062951,3.0625,7.062951);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,4.776065,3.675,4.776065);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,3.238688,4.2875,3.238688);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.339016,4.9,2.339016);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *CalosP420__2 = new TH1F("CalosP420__2","h_Calo420TopoClusters_eta",16,-4.9,4.9);
   CalosP420__2->SetBinContent(1,2.316721);
   CalosP420__2->SetBinContent(2,3.190164);
   CalosP420__2->SetBinContent(3,4.691475);
   CalosP420__2->SetBinContent(4,6.992787);
   CalosP420__2->SetBinContent(5,16.45672);
   CalosP420__2->SetBinContent(6,18.76492);
   CalosP420__2->SetBinContent(7,23.70098);
   CalosP420__2->SetBinContent(8,24.99869);
   CalosP420__2->SetBinContent(9,24.74524);
   CalosP420__2->SetBinContent(10,23.78688);
   CalosP420__2->SetBinContent(11,18.82426);
   CalosP420__2->SetBinContent(12,16.78492);
   CalosP420__2->SetBinContent(13,7.062951);
   CalosP420__2->SetBinContent(14,4.776065);
   CalosP420__2->SetBinContent(15,3.238688);
   CalosP420__2->SetBinContent(16,2.339016);
   CalosP420__2->SetBinError(1,0.02756049);
   CalosP420__2->SetBinError(2,0.03234123);
   CalosP420__2->SetBinError(3,0.03921975);
   CalosP420__2->SetBinError(4,0.04788232);
   CalosP420__2->SetBinError(5,0.07345506);
   CalosP420__2->SetBinError(6,0.07843744);
   CalosP420__2->SetBinError(7,0.08815222);
   CalosP420__2->SetBinError(8,0.09053337);
   CalosP420__2->SetBinError(9,0.09007328);
   CalosP420__2->SetBinError(10,0.08831183);
   CalosP420__2->SetBinError(11,0.07856137);
   CalosP420__2->SetBinError(12,0.07418391);
   CalosP420__2->SetBinError(13,0.04812194);
   CalosP420__2->SetBinError(14,0.03957175);
   CalosP420__2->SetBinError(15,0.03258627);
   CalosP420__2->SetBinError(16,0.02769279);
   CalosP420__2->SetMinimum(0);
   CalosP420__2->SetMaximum(27.49856);
   CalosP420__2->SetEntries(618145);

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
   
   TLegend *leg = new TLegend(0.2,0.4,0.3,0.52,NULL,"brNDC");
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
