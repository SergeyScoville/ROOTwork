#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p5_5eta_No_Rebin_eta_dist_SK()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Tue Jun 13 14:16:40 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.125,-5.109816,6.125,45.98834);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   Double_t xAxis1[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9}; 
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Number of Topoclusters as function of #eta",16, xAxis1);
   Calo_422__1->SetBinContent(1,1.582295);
   Calo_422__1->SetBinContent(2,2.26459);
   Calo_422__1->SetBinContent(3,2.738033);
   Calo_422__1->SetBinContent(4,3.757049);
   Calo_422__1->SetBinContent(5,13.04852);
   Calo_422__1->SetBinContent(6,11.49771);
   Calo_422__1->SetBinContent(7,14.08688);
   Calo_422__1->SetBinContent(8,15.47115);
   Calo_422__1->SetBinContent(9,15.35377);
   Calo_422__1->SetBinContent(10,14.23803);
   Calo_422__1->SetBinContent(11,11.46885);
   Calo_422__1->SetBinContent(12,13.28197);
   Calo_422__1->SetBinContent(13,3.774754);
   Calo_422__1->SetBinContent(14,2.753115);
   Calo_422__1->SetBinContent(15,2.327541);
   Calo_422__1->SetBinContent(16,1.584262);
   Calo_422__1->SetBinError(1,1.257893);
   Calo_422__1->SetBinError(2,1.504856);
   Calo_422__1->SetBinError(3,1.6547);
   Calo_422__1->SetBinError(4,1.938311);
   Calo_422__1->SetBinError(5,3.612274);
   Calo_422__1->SetBinError(6,3.390827);
   Calo_422__1->SetBinError(7,3.75325);
   Calo_422__1->SetBinError(8,3.933338);
   Calo_422__1->SetBinError(9,3.918389);
   Calo_422__1->SetBinError(10,3.773332);
   Calo_422__1->SetBinError(11,3.386569);
   Calo_422__1->SetBinError(12,3.644443);
   Calo_422__1->SetBinError(13,1.942873);
   Calo_422__1->SetBinError(14,1.659251);
   Calo_422__1->SetBinError(15,1.525628);
   Calo_422__1->SetBinError(16,1.258675);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(40.87853);
   Calo_422__1->SetEntries(394147);
   
   TPaveStats *ptstats = new TPaveStats(0.8,0.8,0.95,0.95,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   TText *ptstats_LaTex = ptstats->AddText("Calo_422");
   ptstats_LaTex = ptstats->AddText("Entries = 394147 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.007107");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.888");
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
   TLine *line = new TLine(-4.9,0,-4.9,40.87853);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,40.87853);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,40.87853);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,40.87853);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,40.87853);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,40.87853);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,40.87853);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,40.87853);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,40.87853);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,40.87853);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,40.87853);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,40.87853);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,40.87853);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,40.87853);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,40.87853);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,31.58795);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.9,2.540984,-4.2875,2.540984);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,4.194754,-3.675,4.194754);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,6.457049,-3.0625,6.457049);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,7.343279,-2.45,7.343279);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,36.53312,-1.8375,36.53312);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,24.07705,-1.225,24.07705);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,25.90918,-0.6125,25.90918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,26.21738,0,26.21738);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,26.04066,0.6125,26.04066);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,26.03213,1.225,26.03213);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,23.97148,1.8375,23.97148);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,37.1623,2.45,37.1623);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,7.365574,3.0625,7.365574);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,6.468197,3.675,6.468197);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,4.334098,4.2875,4.334098);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.520328,4.9,2.520328);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   Double_t xAxis2[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9}; 
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","",16, xAxis2);
   Calo_420__2->SetBinContent(1,2.540984);
   Calo_420__2->SetBinContent(2,4.194754);
   Calo_420__2->SetBinContent(3,6.457049);
   Calo_420__2->SetBinContent(4,7.343279);
   Calo_420__2->SetBinContent(5,36.53312);
   Calo_420__2->SetBinContent(6,24.07705);
   Calo_420__2->SetBinContent(7,25.90918);
   Calo_420__2->SetBinContent(8,26.21738);
   Calo_420__2->SetBinContent(9,26.04066);
   Calo_420__2->SetBinContent(10,26.03213);
   Calo_420__2->SetBinContent(11,23.97148);
   Calo_420__2->SetBinContent(12,37.1623);
   Calo_420__2->SetBinContent(13,7.365574);
   Calo_420__2->SetBinContent(14,6.468197);
   Calo_420__2->SetBinContent(15,4.334098);
   Calo_420__2->SetBinContent(16,2.520328);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(40.87853);
   Calo_420__2->SetEntries(814861);
   
   ptstats = new TPaveStats(0.8,0.65,0.95,0.8,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   ptstats_LaTex = ptstats->AddText("Calo_420");
   ptstats_LaTex = ptstats->AddText("Entries = 814861 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.006756");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.935");
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
