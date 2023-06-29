#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0p5_No_Rebin_eta_dist()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 29 13:30:58 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-15.60663,5.653846,81.93482);
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
   CalosP422__1->SetBinContent(1,1.639016);
   CalosP422__1->SetBinContent(2,2.486885);
   CalosP422__1->SetBinContent(3,4.528197);
   CalosP422__1->SetBinContent(4,6.839672);
   CalosP422__1->SetBinContent(5,38.86885);
   CalosP422__1->SetBinContent(6,45.26098);
   CalosP422__1->SetBinContent(7,51.44557);
   CalosP422__1->SetBinContent(8,56.90689);
   CalosP422__1->SetBinContent(9,56.11771);
   CalosP422__1->SetBinContent(10,51.5918);
   CalosP422__1->SetBinContent(11,45.25672);
   CalosP422__1->SetBinContent(12,39.30459);
   CalosP422__1->SetBinContent(13,6.934098);
   CalosP422__1->SetBinContent(14,4.515082);
   CalosP422__1->SetBinContent(15,2.537377);
   CalosP422__1->SetBinContent(16,1.638689);
   CalosP422__1->SetBinError(1,0.02318151);
   CalosP422__1->SetBinError(2,0.02855472);
   CalosP422__1->SetBinError(3,0.03853122);
   CalosP422__1->SetBinError(4,0.04735521);
   CalosP422__1->SetBinError(5,0.1128888);
   CalosP422__1->SetBinError(6,0.1218182);
   CalosP422__1->SetBinError(7,0.1298746);
   CalosP422__1->SetBinError(8,0.1365943);
   CalosP422__1->SetBinError(9,0.1356438);
   CalosP422__1->SetBinError(10,0.130059);
   CalosP422__1->SetBinError(11,0.1218124);
   CalosP422__1->SetBinError(12,0.1135198);
   CalosP422__1->SetBinError(13,0.04768097);
   CalosP422__1->SetBinError(14,0.03847538);
   CalosP422__1->SetBinError(15,0.02884314);
   CalosP422__1->SetBinError(16,0.02317919);
   CalosP422__1->SetMinimum(0);
   CalosP422__1->SetMaximum(75.10692);
   CalosP422__1->SetEntries(1268410);

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
   TLine *line = new TLine(-4.9,0,-4.9,75.10692);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,75.10692);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,75.10692);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,75.10692);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,75.10692);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,75.10692);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,75.10692);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,75.10692);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,0,0,75.10692);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,75.10692);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.225,0,1.225,75.10692);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,75.10692);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(2.45,0,2.45,75.10692);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,75.10692);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.675,0,3.675,75.10692);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,75.10692);
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
   pt_LaTex = pt->AddText("E_{T}^{TC} > 0.5");
   pt->Draw();
   line = new TLine(-4.9,2.398361,-4.2875,2.398361);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,3.478688,-3.675,3.478688);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,6.555737,-3.0625,6.555737);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,10.66787,-2.45,10.66787);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,59.25246,-1.8375,59.25246);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,61.39213,-1.225,61.39213);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,64.30656,-0.6125,64.30656);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,68.27901,0,68.27901);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,67.54263,0.6125,67.54263);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,64.85705,1.225,64.85705);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,61.58033,1.8375,61.58033);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,60.00131,2.45,60.00131);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,10.72393,3.0625,10.72393);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,6.608525,3.675,6.608525);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,3.566885,4.2875,3.566885);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.425902,4.9,2.425902);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *CalosP420__2 = new TH1F("CalosP420__2","h_Calo420TopoClusters_eta",16,-4.9,4.9);
   CalosP420__2->SetBinContent(1,2.398361);
   CalosP420__2->SetBinContent(2,3.478688);
   CalosP420__2->SetBinContent(3,6.555737);
   CalosP420__2->SetBinContent(4,10.66787);
   CalosP420__2->SetBinContent(5,59.25246);
   CalosP420__2->SetBinContent(6,61.39213);
   CalosP420__2->SetBinContent(7,64.30656);
   CalosP420__2->SetBinContent(8,68.27901);
   CalosP420__2->SetBinContent(9,67.54263);
   CalosP420__2->SetBinContent(10,64.85705);
   CalosP420__2->SetBinContent(11,61.58033);
   CalosP420__2->SetBinContent(12,60.00131);
   CalosP420__2->SetBinContent(13,10.72393);
   CalosP420__2->SetBinContent(14,6.608525);
   CalosP420__2->SetBinContent(15,3.566885);
   CalosP420__2->SetBinContent(16,2.425902);
   CalosP420__2->SetBinError(1,0.02804189);
   CalosP420__2->SetBinError(2,0.03377208);
   CalosP420__2->SetBinError(3,0.04636186);
   CalosP420__2->SetBinError(4,0.05914103);
   CalosP420__2->SetBinError(5,0.1393809);
   CalosP420__2->SetBinError(6,0.1418752);
   CalosP420__2->SetBinError(7,0.1452037);
   CalosP420__2->SetBinError(8,0.1496214);
   CalosP420__2->SetBinError(9,0.1488124);
   CalosP420__2->SetBinError(10,0.1458239);
   CalosP420__2->SetBinError(11,0.1420925);
   CalosP420__2->SetBinError(12,0.1402589);
   CalosP420__2->SetBinError(13,0.05929624);
   CalosP420__2->SetBinError(14,0.04654814);
   CalosP420__2->SetBinError(15,0.03419752);
   CalosP420__2->SetBinError(16,0.02820244);
   CalosP420__2->SetMinimum(0);
   CalosP420__2->SetMaximum(75.10692);
   CalosP420__2->SetEntries(1688594);

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
