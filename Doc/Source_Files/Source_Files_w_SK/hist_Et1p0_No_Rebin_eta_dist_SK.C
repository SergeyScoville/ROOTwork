#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p0_No_Rebin_eta_dist_SK()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 29 13:38:11 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-4.842042,5.653846,25.42072);
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
   CalosP422__1->SetBinContent(1,1.582295);
   CalosP422__1->SetBinContent(2,2.240656);
   CalosP422__1->SetBinContent(3,2.919016);
   CalosP422__1->SetBinContent(4,4.271803);
   CalosP422__1->SetBinContent(5,12.79803);
   CalosP422__1->SetBinContent(6,13.81803);
   CalosP422__1->SetBinContent(7,17.42426);
   CalosP422__1->SetBinContent(8,19.9318);
   CalosP422__1->SetBinContent(9,19.7223);
   CalosP422__1->SetBinContent(10,17.58951);
   CalosP422__1->SetBinContent(11,13.91508);
   CalosP422__1->SetBinContent(12,12.97869);
   CalosP422__1->SetBinContent(13,4.285246);
   CalosP422__1->SetBinContent(14,2.904262);
   CalosP422__1->SetBinContent(15,2.288525);
   CalosP422__1->SetBinContent(16,1.585246);
   CalosP422__1->SetBinError(1,0.02277686);
   CalosP422__1->SetBinError(2,0.02710427);
   CalosP422__1->SetBinError(3,0.0309363);
   CalosP422__1->SetBinError(4,0.03742447);
   CalosP422__1->SetBinError(5,0.06477713);
   CalosP422__1->SetBinError(6,0.06730901);
   CalosP422__1->SetBinError(7,0.07558355);
   CalosP422__1->SetBinError(8,0.08083945);
   CalosP422__1->SetBinError(9,0.08041347);
   CalosP422__1->SetBinError(10,0.07594111);
   CalosP422__1->SetBinError(11,0.06754496);
   CalosP422__1->SetBinError(12,0.06523272);
   CalosP422__1->SetBinError(13,0.03748331);
   CalosP422__1->SetBinError(14,0.03085802);
   CalosP422__1->SetBinError(15,0.02739226);
   CalosP422__1->SetBinError(16,0.02279809);
   CalosP422__1->SetMinimum(0);
   CalosP422__1->SetMaximum(23.30233);
   CalosP422__1->SetEntries(458277);

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
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Average number of topoclusters as function of #eta post SK");
   pt->Draw();
   TLine *line = new TLine(-4.9,0,-4.9,23.30233);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,23.30233);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,23.30233);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,23.30233);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,23.30233);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,23.30233);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,23.30233);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,23.30233);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,0,0,23.30233);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,23.30233);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.225,0,1.225,23.30233);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,23.30233);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(2.45,0,2.45,23.30233);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,23.30233);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.675,0,3.675,23.30233);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,23.30233);
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
   pt_LaTex = pt->AddText("E_{T}^{TC} > 1.0");
   pt->Draw();
   line = new TLine(-4.9,2.177049,-4.2875,2.177049);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,3.075082,-3.675,3.075082);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,3.556721,-3.0625,3.556721);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,5.977377,-2.45,5.977377);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,12.45115,-1.8375,12.45115);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,14.72262,-1.225,14.72262);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,19.3318,-0.6125,19.3318);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,21.18394,0,21.18394);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,21.01541,0.6125,21.01541);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,19.50328,1.225,19.50328);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,14.81377,1.8375,14.81377);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,12.8259,2.45,12.8259);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,5.984918,3.0625,5.984918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,3.642295,3.675,3.642295);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,3.123606,4.2875,3.123606);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.186557,4.9,2.186557);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *CalosP420__2 = new TH1F("CalosP420__2","h_Calo420SKclusters_eta",16,-4.9,4.9);
   CalosP420__2->SetBinContent(1,2.177049);
   CalosP420__2->SetBinContent(2,3.075082);
   CalosP420__2->SetBinContent(3,3.556721);
   CalosP420__2->SetBinContent(4,5.977377);
   CalosP420__2->SetBinContent(5,12.45115);
   CalosP420__2->SetBinContent(6,14.72262);
   CalosP420__2->SetBinContent(7,19.3318);
   CalosP420__2->SetBinContent(8,21.18394);
   CalosP420__2->SetBinContent(9,21.01541);
   CalosP420__2->SetBinContent(10,19.50328);
   CalosP420__2->SetBinContent(11,14.81377);
   CalosP420__2->SetBinContent(12,12.8259);
   CalosP420__2->SetBinContent(13,5.984918);
   CalosP420__2->SetBinContent(14,3.642295);
   CalosP420__2->SetBinContent(15,3.123606);
   CalosP420__2->SetBinContent(16,2.186557);
   CalosP420__2->SetBinError(1,0.02671679);
   CalosP420__2->SetBinError(2,0.03175254);
   CalosP420__2->SetBinError(3,0.03414876);
   CalosP420__2->SetBinError(4,0.04426958);
   CalosP420__2->SetBinError(5,0.06389322);
   CalosP420__2->SetBinError(6,0.06947726);
   CalosP420__2->SetBinError(7,0.07961342);
   CalosP420__2->SetBinError(8,0.08333998);
   CalosP420__2->SetBinError(9,0.08300782);
   CalosP420__2->SetBinError(10,0.07996573);
   CalosP420__2->SetBinError(11,0.06969199);
   CalosP420__2->SetBinError(12,0.06484762);
   CalosP420__2->SetBinError(13,0.0442975);
   CalosP420__2->SetBinError(14,0.03455713);
   CalosP420__2->SetBinError(15,0.03200208);
   CalosP420__2->SetBinError(16,0.02677506);
   CalosP420__2->SetMinimum(0);
   CalosP420__2->SetMaximum(23.30233);
   CalosP420__2->SetEntries(504993);

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
