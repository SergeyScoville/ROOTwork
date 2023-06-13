#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0p5_5eta_No_Rebin_eta_dist_SK()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Tue Jun 13 14:16:29 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.125,-10.6301,6.125,95.67092);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   Double_t xAxis1[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9}; 
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Number of Topoclusters as function of #eta",16, xAxis1);
   Calo_422__1->SetBinContent(1,1.645246);
   Calo_422__1->SetBinContent(2,2.672131);
   Calo_422__1->SetBinContent(3,4.835738);
   Calo_422__1->SetBinContent(4,4.916721);
   Calo_422__1->SetBinContent(5,45.21344);
   Calo_422__1->SetBinContent(6,45.95869);
   Calo_422__1->SetBinContent(7,52.99082);
   Calo_422__1->SetBinContent(8,57.4623);
   Calo_422__1->SetBinContent(9,57.17803);
   Calo_422__1->SetBinContent(10,52.75607);
   Calo_422__1->SetBinContent(11,45.72164);
   Calo_422__1->SetBinContent(12,45.72393);
   Calo_422__1->SetBinContent(13,4.922623);
   Calo_422__1->SetBinContent(14,4.827868);
   Calo_422__1->SetBinContent(15,2.718033);
   Calo_422__1->SetBinContent(16,1.648525);
   Calo_422__1->SetBinError(1,1.282671);
   Calo_422__1->SetBinError(2,1.634665);
   Calo_422__1->SetBinError(3,2.199031);
   Calo_422__1->SetBinError(4,2.217368);
   Calo_422__1->SetBinError(5,6.724094);
   Calo_422__1->SetBinError(6,6.779284);
   Calo_422__1->SetBinError(7,7.279479);
   Calo_422__1->SetBinError(8,7.580389);
   Calo_422__1->SetBinError(9,7.561616);
   Calo_422__1->SetBinError(10,7.263337);
   Calo_422__1->SetBinError(11,6.761778);
   Calo_422__1->SetBinError(12,6.761948);
   Calo_422__1->SetBinError(13,2.218699);
   Calo_422__1->SetBinError(14,2.197241);
   Calo_422__1->SetBinError(15,1.648646);
   Calo_422__1->SetBinError(16,1.283949);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(85.04082);
   Calo_422__1->SetEntries(1315135);
   
   TPaveStats *ptstats = new TPaveStats(0.8,0.8,0.95,0.95,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   TText *ptstats_LaTex = ptstats->AddText("Calo_422");
   ptstats_LaTex = ptstats->AddText("Entries = 1315135");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.001429");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.577");
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
   TLine *line = new TLine(-4.9,0,-4.9,85.04082);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,85.04082);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,85.04082);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,85.04082);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,85.04082);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,85.04082);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,85.04082);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,85.04082);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,85.04082);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,85.04082);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,85.04082);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,85.04082);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,85.04082);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,85.04082);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,85.04082);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,65.71336);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.9,2.612131,-4.2875,2.612131);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,4.528524,-3.675,4.528524);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,8.116721,-3.0625,8.116721);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,8.725574,-2.45,8.725574);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,76.45312,-1.8375,76.45312);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,63.94033,-1.225,63.94033);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,66.8577,-0.6125,66.8577);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,69.80787,0,69.80787);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,69.51508,0.6125,69.51508);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,67.15475,1.225,67.15475);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,63.72164,1.8375,63.72164);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,77.30984,2.45,77.30984);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,8.714754,3.0625,8.714754);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,8.163279,3.675,8.163279);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,4.672131,4.2875,4.672131);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.594426,4.9,2.594426);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   Double_t xAxis2[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9}; 
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","",16, xAxis2);
   Calo_420__2->SetBinContent(1,2.612131);
   Calo_420__2->SetBinContent(2,4.528524);
   Calo_420__2->SetBinContent(3,8.116721);
   Calo_420__2->SetBinContent(4,8.725574);
   Calo_420__2->SetBinContent(5,76.45312);
   Calo_420__2->SetBinContent(6,63.94033);
   Calo_420__2->SetBinContent(7,66.8577);
   Calo_420__2->SetBinContent(8,69.80787);
   Calo_420__2->SetBinContent(9,69.51508);
   Calo_420__2->SetBinContent(10,67.15475);
   Calo_420__2->SetBinContent(11,63.72164);
   Calo_420__2->SetBinContent(12,77.30984);
   Calo_420__2->SetBinContent(13,8.714754);
   Calo_420__2->SetBinContent(14,8.163279);
   Calo_420__2->SetBinContent(15,4.672131);
   Calo_420__2->SetBinContent(16,2.594426);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(85.04082);
   Calo_420__2->SetEntries(1838808);
   
   ptstats = new TPaveStats(0.8,0.65,0.95,0.8,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   ptstats_LaTex = ptstats->AddText("Calo_420");
   ptstats_LaTex = ptstats->AddText("Entries = 1838808");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.003819");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.682");
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
