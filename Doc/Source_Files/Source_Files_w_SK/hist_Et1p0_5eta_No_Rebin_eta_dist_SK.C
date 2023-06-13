#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p0_5eta_No_Rebin_eta_dist_SK()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Tue Jun 13 14:16:34 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.125,-7.26807,6.125,65.41263);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   Double_t xAxis1[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9}; 
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Number of Topoclusters as function of #eta",16, xAxis1);
   Calo_422__1->SetBinContent(1,1.627869);
   Calo_422__1->SetBinContent(2,2.466558);
   Calo_422__1->SetBinContent(3,3.607213);
   Calo_422__1->SetBinContent(4,4.148197);
   Calo_422__1->SetBinContent(5,23.01017);
   Calo_422__1->SetBinContent(6,21.55967);
   Calo_422__1->SetBinContent(7,26.07607);
   Calo_422__1->SetBinContent(8,28.95312);
   Calo_422__1->SetBinContent(9,28.84721);
   Calo_422__1->SetBinContent(10,26.16098);
   Calo_422__1->SetBinContent(11,21.36623);
   Calo_422__1->SetBinContent(12,23.29902);
   Calo_422__1->SetBinContent(13,4.160655);
   Calo_422__1->SetBinContent(14,3.59541);
   Calo_422__1->SetBinContent(15,2.519344);
   Calo_422__1->SetBinContent(16,1.62918);
   Calo_422__1->SetBinError(1,1.27588);
   Calo_422__1->SetBinError(2,1.570528);
   Calo_422__1->SetBinError(3,1.899267);
   Calo_422__1->SetBinError(4,2.036712);
   Calo_422__1->SetBinError(5,4.796891);
   Calo_422__1->SetBinError(6,4.643239);
   Calo_422__1->SetBinError(7,5.106473);
   Calo_422__1->SetBinError(8,5.38081);
   Calo_422__1->SetBinError(9,5.37096);
   Calo_422__1->SetBinError(10,5.114781);
   Calo_422__1->SetBinError(11,4.622362);
   Calo_422__1->SetBinError(12,4.826905);
   Calo_422__1->SetBinError(13,2.039768);
   Calo_422__1->SetBinError(14,1.896157);
   Calo_422__1->SetBinError(15,1.587244);
   Calo_422__1->SetBinError(16,1.276393);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(58.14456);
   Calo_422__1->SetEntries(680232);
   
   TPaveStats *ptstats = new TPaveStats(0.8,0.8,0.95,0.95,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   TText *ptstats_LaTex = ptstats->AddText("Calo_422");
   ptstats_LaTex = ptstats->AddText("Entries = 680232 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.002598");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.715");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Calo_422__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Calo_422__1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   Calo_422__1->SetFillColor(ci);
   Calo_422__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   Calo_422__1->SetLineColor(ci);
   Calo_422__1->SetLineWidth(3);
   Calo_422__1->GetXaxis()->SetTitle("#eta");
   Calo_422__1->GetXaxis()->SetRange(1,16);
   Calo_422__1->GetXaxis()->CenterTitle(true);
   Calo_422__1->GetXaxis()->SetNdivisions(-16);
   Calo_422__1->GetXaxis()->SetLabelFont(42);
   Calo_422__1->GetXaxis()->SetLabelSize(0.02);
   Calo_422__1->GetXaxis()->SetTickLength(0.02);
   Calo_422__1->GetXaxis()->SetTitleOffset(1.2);
   Calo_422__1->GetXaxis()->SetTitleFont(42);
   Calo_422__1->GetYaxis()->SetTitle("Fraction of topoclusters");
   Calo_422__1->GetYaxis()->CenterTitle(true);
   Calo_422__1->GetYaxis()->SetLabelFont(42);
   Calo_422__1->GetYaxis()->SetLabelSize(0.03);
   Calo_422__1->GetYaxis()->SetTitleOffset(1.4);
   Calo_422__1->GetYaxis()->SetTitleFont(42);
   Calo_422__1->GetZaxis()->SetLabelFont(42);
   Calo_422__1->GetZaxis()->SetTitleOffset(1);
   Calo_422__1->GetZaxis()->SetTitleFont(42);
   Calo_422__1->Draw("hist");
   TLine *line = new TLine(-4.9,0,-4.9,58.14456);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,58.14456);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,58.14456);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,58.14456);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,58.14456);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,58.14456);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,58.14456);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,58.14456);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,58.14456);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,58.14456);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,58.14456);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,58.14456);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,58.14456);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,58.14456);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,58.14456);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,44.92989);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.9,2.579344,-4.2875,2.579344);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,4.350492,-3.675,4.350492);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,7.25082,-3.0625,7.25082);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,8.027868,-2.45,8.027868);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,52.16951,-1.8375,52.16951);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,37.70623,-1.225,37.70623);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,40.62,-0.6125,40.62);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,41.96295,0,41.96295);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,42.02131,0.6125,42.02131);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,40.8236,1.225,40.8236);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,37.5541,1.8375,37.5541);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,52.85869,2.45,52.85869);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,8.026229,3.0625,8.026229);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,7.26918,3.675,7.26918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,4.508197,4.2875,4.508197);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.557705,4.9,2.557705);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   Double_t xAxis2[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9}; 
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","",16, xAxis2);
   Calo_420__2->SetBinContent(1,2.579344);
   Calo_420__2->SetBinContent(2,4.350492);
   Calo_420__2->SetBinContent(3,7.25082);
   Calo_420__2->SetBinContent(4,8.027868);
   Calo_420__2->SetBinContent(5,52.16951);
   Calo_420__2->SetBinContent(6,37.70623);
   Calo_420__2->SetBinContent(7,40.62);
   Calo_420__2->SetBinContent(8,41.96295);
   Calo_420__2->SetBinContent(9,42.02131);
   Calo_420__2->SetBinContent(10,40.8236);
   Calo_420__2->SetBinContent(11,37.5541);
   Calo_420__2->SetBinContent(12,52.85869);
   Calo_420__2->SetBinContent(13,8.026229);
   Calo_420__2->SetBinContent(14,7.26918);
   Calo_420__2->SetBinContent(15,4.508197);
   Calo_420__2->SetBinContent(16,2.557705);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(58.14456);
   Calo_420__2->SetEntries(1190373);
   
   ptstats = new TPaveStats(0.8,0.65,0.95,0.8,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   ptstats_LaTex = ptstats->AddText("Calo_420");
   ptstats_LaTex = ptstats->AddText("Entries = 1190373");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.005215");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.805");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Calo_420__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Calo_420__2);

   ci = TColor::GetColor("#000099");
   Calo_420__2->SetLineColor(ci);
   Calo_420__2->SetLineWidth(0);
   Calo_420__2->GetXaxis()->SetRange(1,16);
   Calo_420__2->GetXaxis()->SetLabelFont(42);
   Calo_420__2->GetXaxis()->SetTitleOffset(1);
   Calo_420__2->GetXaxis()->SetTitleFont(42);
   Calo_420__2->GetYaxis()->SetLabelFont(42);
   Calo_420__2->GetYaxis()->SetTitleFont(42);
   Calo_420__2->GetZaxis()->SetLabelFont(42);
   Calo_420__2->GetZaxis()->SetTitleOffset(1);
   Calo_420__2->GetZaxis()->SetTitleFont(42);
   Calo_420__2->Draw("sames");
   
   TPaveText *pt = new TPaveText(0.177813,0.9377097,0.822187,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of Topoclusters as function of #eta");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.8,0.5,0.92,0.62,NULL,"brNDC");
   leg->SetBorderSize(1);
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
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("TLine","Calo_420","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   All_GEP_Algo->Modified();
   All_GEP_Algo->cd();
   All_GEP_Algo->SetSelected(All_GEP_Algo);
}
