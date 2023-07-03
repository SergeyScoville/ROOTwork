#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et2p0_No_Rebin_eta_dist_SKNoAtlas()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Mon Jul  3 11:28:03 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-2.754098,5.653846,14.45902);
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
   CalosP422__1->SetBinContent(1,1.485574);
   CalosP422__1->SetBinContent(2,2.012787);
   CalosP422__1->SetBinContent(3,2.067213);
   CalosP422__1->SetBinContent(4,3.293443);
   CalosP422__1->SetBinContent(5,4.972459);
   CalosP422__1->SetBinContent(6,5.251475);
   CalosP422__1->SetBinContent(7,7.222295);
   CalosP422__1->SetBinContent(8,8.001967);
   CalosP422__1->SetBinContent(9,7.924918);
   CalosP422__1->SetBinContent(10,7.355738);
   CalosP422__1->SetBinContent(11,5.418033);
   CalosP422__1->SetBinContent(12,5.083607);
   CalosP422__1->SetBinContent(13,3.34918);
   CalosP422__1->SetBinContent(14,2.096393);
   CalosP422__1->SetBinContent(15,2.05541);
   CalosP422__1->SetBinContent(16,1.480984);
   CalosP422__1->SetBinError(1,0.02206974);
   CalosP422__1->SetBinError(2,0.02568911);
   CalosP422__1->SetBinError(3,0.02603411);
   CalosP422__1->SetBinError(4,0.03286057);
   CalosP422__1->SetBinError(5,0.04037715);
   CalosP422__1->SetBinError(6,0.04149452);
   CalosP422__1->SetBinError(7,0.04866175);
   CalosP422__1->SetBinError(8,0.05122105);
   CalosP422__1->SetBinError(9,0.05097385);
   CalosP422__1->SetBinError(10,0.04910924);
   CalosP422__1->SetBinError(11,0.04214741);
   CalosP422__1->SetBinError(12,0.04082593);
   CalosP422__1->SetBinError(13,0.03313747);
   CalosP422__1->SetBinError(14,0.02621721);
   CalosP422__1->SetBinError(15,0.02595968);
   CalosP422__1->SetBinError(16,0.02203562);
   CalosP422__1->SetMinimum(0);
   CalosP422__1->SetMaximum(13.2541);
   CalosP422__1->SetEntries(210668);

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
   TLine *line = new TLine(-4.9,0,-4.9,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,0,0,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.225,0,1.225,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(2.45,0,2.45,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.675,0,3.675,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,13.2541);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-4.9,2.133443,-4.2875,2.133443);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,2.945574,-3.675,2.945574);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,3.027869,-3.0625,3.027869);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,5.10918,-2.45,5.10918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,6.218688,-1.8375,6.218688);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,7.598033,-1.225,7.598033);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,11.12459,-0.6125,11.12459);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,12.04918,0,12.04918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,11.98689,0.6125,11.98689);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,11.18361,1.225,11.18361);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,7.654754,1.8375,7.654754);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,6.412459,2.45,6.412459);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,5.105902,3.0625,5.105902);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,3.112787,3.675,3.112787);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,2.967213,4.2875,2.967213);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.143607,4.9,2.143607);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *CalosP420__2 = new TH1F("CalosP420__2","h_Calo420SKclusters_eta",16,-4.9,4.9);
   CalosP420__2->SetBinContent(1,2.133443);
   CalosP420__2->SetBinContent(2,2.945574);
   CalosP420__2->SetBinContent(3,3.027869);
   CalosP420__2->SetBinContent(4,5.10918);
   CalosP420__2->SetBinContent(5,6.218688);
   CalosP420__2->SetBinContent(6,7.598033);
   CalosP420__2->SetBinContent(7,11.12459);
   CalosP420__2->SetBinContent(8,12.04918);
   CalosP420__2->SetBinContent(9,11.98689);
   CalosP420__2->SetBinContent(10,11.18361);
   CalosP420__2->SetBinContent(11,7.654754);
   CalosP420__2->SetBinContent(12,6.412459);
   CalosP420__2->SetBinContent(13,5.105902);
   CalosP420__2->SetBinContent(14,3.112787);
   CalosP420__2->SetBinContent(15,2.967213);
   CalosP420__2->SetBinContent(16,2.143607);
   CalosP420__2->SetBinError(1,0.02644786);
   CalosP420__2->SetBinError(2,0.03107671);
   CalosP420__2->SetBinError(3,0.03150784);
   CalosP420__2->SetBinError(4,0.04092849);
   CalosP420__2->SetBinError(5,0.04515434);
   CalosP420__2->SetBinError(6,0.0499115);
   CalosP420__2->SetBinError(7,0.06039376);
   CalosP420__2->SetBinError(8,0.06285341);
   CalosP420__2->SetBinError(9,0.06269072);
   CalosP420__2->SetBinError(10,0.06055375);
   CalosP420__2->SetBinError(11,0.05009746);
   CalosP420__2->SetBinError(12,0.04585243);
   CalosP420__2->SetBinError(13,0.04091535);
   CalosP420__2->SetBinError(14,0.03194661);
   CalosP420__2->SetBinError(15,0.03119065);
   CalosP420__2->SetBinError(16,0.02651079);
   CalosP420__2->SetMinimum(0);
   CalosP420__2->SetMaximum(13.2541);
   CalosP420__2->SetEntries(307360);

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
   
   TLegend *leg = new TLegend(0.2,0.6,0.3,0.72,NULL,"brNDC");
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
