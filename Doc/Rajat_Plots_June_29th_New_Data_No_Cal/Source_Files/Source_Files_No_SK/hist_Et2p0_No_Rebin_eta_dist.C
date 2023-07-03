#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et2p0_No_Rebin_eta_dist()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 29 16:29:00 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-3.590669,5.653846,18.85102);
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
   CalosP422__1->SetBinContent(1,1.505902);
   CalosP422__1->SetBinContent(2,2.021967);
   CalosP422__1->SetBinContent(3,2.218361);
   CalosP422__1->SetBinContent(4,3.419672);
   CalosP422__1->SetBinContent(5,5.636721);
   CalosP422__1->SetBinContent(6,5.982951);
   CalosP422__1->SetBinContent(7,8.025574);
   CalosP422__1->SetBinContent(8,8.785902);
   CalosP422__1->SetBinContent(9,8.697049);
   CalosP422__1->SetBinContent(10,8.185246);
   CalosP422__1->SetBinContent(11,6.116721);
   CalosP422__1->SetBinContent(12,5.744262);
   CalosP422__1->SetBinContent(13,3.487869);
   CalosP422__1->SetBinContent(14,2.249836);
   CalosP422__1->SetBinContent(15,2.063607);
   CalosP422__1->SetBinContent(16,1.500328);
   CalosP422__1->SetBinError(1,0.02222022);
   CalosP422__1->SetBinError(2,0.02574762);
   CalosP422__1->SetBinError(3,0.02696908);
   CalosP422__1->SetBinError(4,0.03348438);
   CalosP422__1->SetBinError(5,0.0429896);
   CalosP422__1->SetBinError(6,0.04429022);
   CalosP422__1->SetBinError(7,0.05129655);
   CalosP422__1->SetBinError(8,0.05367144);
   CalosP422__1->SetBinError(9,0.05339936);
   CalosP422__1->SetBinError(10,0.05180432);
   CalosP422__1->SetBinError(11,0.04478261);
   CalosP422__1->SetBinError(12,0.04339775);
   CalosP422__1->SetBinError(13,0.03381662);
   CalosP422__1->SetBinError(14,0.02715973);
   CalosP422__1->SetBinError(15,0.02601139);
   CalosP422__1->SetBinError(16,0.02217906);
   CalosP422__1->SetMinimum(0);
   CalosP422__1->SetMaximum(17.2801);
   CalosP422__1->SetEntries(230708);

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
   TLine *line = new TLine(-4.9,0,-4.9,17.2801);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,17.2801);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,17.2801);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,17.2801);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,17.2801);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,17.2801);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,17.2801);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,17.2801);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,0,0,17.2801);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,17.2801);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.225,0,1.225,17.2801);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,17.2801);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(2.45,0,2.45,17.2801);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,17.2801);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.675,0,3.675,17.2801);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,17.2801);
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
   pt_LaTex = pt->AddText("E_{T}^{TC} > 2.0");
   pt->Draw();
   line = new TLine(-4.9,2.260656,-4.2875,2.260656);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,3.03541,-3.675,3.03541);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,4.001967,-3.0625,4.001967);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,5.962951,-2.45,5.962951);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,9.251147,-1.8375,9.251147);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,11.01967,-1.225,11.01967);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,15.07639,-0.6125,15.07639);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,15.70918,0,15.70918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,15.6141,0.6125,15.6141);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,15.16098,1.225,15.16098);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,11.11115,1.8375,11.11115);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,9.507869,2.45,9.507869);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,5.996394,3.0625,5.996394);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,4.073115,3.675,4.073115);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,3.060656,4.2875,3.060656);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.281312,4.9,2.281312);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *CalosP420__2 = new TH1F("CalosP420__2","h_Calo420TopoClusters_eta",16,-4.9,4.9);
   CalosP420__2->SetBinContent(1,2.260656);
   CalosP420__2->SetBinContent(2,3.03541);
   CalosP420__2->SetBinContent(3,4.001967);
   CalosP420__2->SetBinContent(4,5.962951);
   CalosP420__2->SetBinContent(5,9.251147);
   CalosP420__2->SetBinContent(6,11.01967);
   CalosP420__2->SetBinContent(7,15.07639);
   CalosP420__2->SetBinContent(8,15.70918);
   CalosP420__2->SetBinContent(9,15.6141);
   CalosP420__2->SetBinContent(10,15.16098);
   CalosP420__2->SetBinContent(11,11.11115);
   CalosP420__2->SetBinContent(12,9.507869);
   CalosP420__2->SetBinContent(13,5.996394);
   CalosP420__2->SetBinContent(14,4.073115);
   CalosP420__2->SetBinContent(15,3.060656);
   CalosP420__2->SetBinContent(16,2.281312);
   CalosP420__2->SetBinError(1,0.02722496);
   CalosP420__2->SetBinError(2,0.03154705);
   CalosP420__2->SetBinError(3,0.0362232);
   CalosP420__2->SetBinError(4,0.04421613);
   CalosP420__2->SetBinError(5,0.05507416);
   CalosP420__2->SetBinError(6,0.0601083);
   CalosP420__2->SetBinError(7,0.07030704);
   CalosP420__2->SetBinError(8,0.07176734);
   CalosP420__2->SetBinError(9,0.07154982);
   CalosP420__2->SetBinError(10,0.070504);
   CalosP420__2->SetBinError(11,0.06035726);
   CalosP420__2->SetBinError(12,0.05583309);
   CalosP420__2->SetBinError(13,0.04433994);
   CalosP420__2->SetBinError(14,0.03654377);
   CalosP420__2->SetBinError(15,0.03167797);
   CalosP420__2->SetBinError(16,0.02734906);
   CalosP420__2->SetMinimum(0);
   CalosP420__2->SetMaximum(17.2801);
   CalosP420__2->SetEntries(406025);

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
