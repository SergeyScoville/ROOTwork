#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_EtNoCut_5eta_No_Rebin_eta_dist_SK()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Tue Jun 13 14:16:17 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.125,-12.72127,6.125,114.4915);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   Double_t xAxis1[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9}; 
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Number of Topoclusters as function of #eta",16, xAxis1);
   Calo_422__1->SetBinContent(1,1.603279);
   Calo_422__1->SetBinContent(2,2.436065);
   Calo_422__1->SetBinContent(3,4.881967);
   Calo_422__1->SetBinContent(4,5.741967);
   Calo_422__1->SetBinContent(5,73.73804);
   Calo_422__1->SetBinContent(6,86.30689);
   Calo_422__1->SetBinContent(7,87.97868);
   Calo_422__1->SetBinContent(8,92.51836);
   Calo_422__1->SetBinContent(9,92.26885);
   Calo_422__1->SetBinContent(10,88.52361);
   Calo_422__1->SetBinContent(11,86.29672);
   Calo_422__1->SetBinContent(12,74.63081);
   Calo_422__1->SetBinContent(13,5.723607);
   Calo_422__1->SetBinContent(14,4.890164);
   Calo_422__1->SetBinContent(15,2.481639);
   Calo_422__1->SetBinContent(16,1.610164);
   Calo_422__1->SetBinError(1,1.266206);
   Calo_422__1->SetBinError(2,1.56079);
   Calo_422__1->SetBinError(3,2.209517);
   Calo_422__1->SetBinError(4,2.39624);
   Calo_422__1->SetBinError(5,8.587085);
   Calo_422__1->SetBinError(6,9.29015);
   Calo_422__1->SetBinError(7,9.379695);
   Calo_422__1->SetBinError(8,9.618646);
   Calo_422__1->SetBinError(9,9.605668);
   Calo_422__1->SetBinError(10,9.408698);
   Calo_422__1->SetBinError(11,9.289603);
   Calo_422__1->SetBinError(12,8.638913);
   Calo_422__1->SetBinError(13,2.392406);
   Calo_422__1->SetBinError(14,2.211371);
   Calo_422__1->SetBinError(15,1.575322);
   Calo_422__1->SetBinError(16,1.268922);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(101.7702);
   Calo_422__1->SetEntries(2170474);
   
   TPaveStats *ptstats = new TPaveStats(0.8,0.8,0.95,0.95,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   TText *ptstats_LaTex = ptstats->AddText("Calo_422");
   ptstats_LaTex = ptstats->AddText("Entries = 2170474");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.003531");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.498");
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
   TLine *line = new TLine(-4.9,0,-4.9,101.7702);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,101.7702);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,101.7702);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,101.7702);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,101.7702);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,101.7702);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,101.7702);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,101.7702);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,101.7702);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,101.7702);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,101.7702);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,101.7702);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,101.7702);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,101.7702);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,101.7702);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,78.6406);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.9,2.422951,-4.2875,2.422951);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,3.655082,-3.675,3.655082);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,7.502623,-3.0625,7.502623);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,8.873443,-2.45,8.873443);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,89.84525,-1.8375,89.84525);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,87.60754,-1.225,87.60754);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,85.80788,-0.6125,85.80788);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,89.21705,0,89.21705);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,88.78525,0.6125,88.78525);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,86.2059,1.225,86.2059);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,87.53147,1.8375,87.53147);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,91.01934,2.45,91.01934);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,8.859016,3.0625,8.859016);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,7.535082,3.675,7.535082);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,3.786557,4.2875,3.786557);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.434426,4.9,2.434426);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   Double_t xAxis2[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9}; 
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","",16, xAxis2);
   Calo_420__2->SetBinContent(1,2.422951);
   Calo_420__2->SetBinContent(2,3.655082);
   Calo_420__2->SetBinContent(3,7.502623);
   Calo_420__2->SetBinContent(4,8.873443);
   Calo_420__2->SetBinContent(5,89.84525);
   Calo_420__2->SetBinContent(6,87.60754);
   Calo_420__2->SetBinContent(7,85.80788);
   Calo_420__2->SetBinContent(8,89.21705);
   Calo_420__2->SetBinContent(9,88.78525);
   Calo_420__2->SetBinContent(10,86.2059);
   Calo_420__2->SetBinContent(11,87.53147);
   Calo_420__2->SetBinContent(12,91.01934);
   Calo_420__2->SetBinContent(13,8.859016);
   Calo_420__2->SetBinContent(14,7.535082);
   Calo_420__2->SetBinContent(15,3.786557);
   Calo_420__2->SetBinContent(16,2.434426);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(101.7702);
   Calo_420__2->SetEntries(2290821);
   
   ptstats = new TPaveStats(0.8,0.65,0.95,0.8,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   ptstats_LaTex = ptstats->AddText("Calo_420");
   ptstats_LaTex = ptstats->AddText("Entries = 2290821");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.004367");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.603");
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
   line = new TLine(-4.9,2.40623,-4.2875,2.40623);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,3.600984,-3.675,3.600984);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,7.332459,-3.0625,7.332459);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,8.84623,-2.45,8.84623);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,89.38623,-1.8375,89.38623);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,87.62983,-1.225,87.62983);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,85.97378,-0.6125,85.97378);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,89.42393,0,89.42393);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,88.96623,0.6125,88.96623);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,86.39804,1.225,86.39804);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,87.50066,1.8375,87.50066);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,90.61082,2.45,90.61082);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,8.827213,3.0625,8.827213);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,7.380983,3.675,7.380983);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,3.705902,4.2875,3.705902);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.418689,4.9,2.418689);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   Double_t xAxis3[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9}; 
   
   TH1F *Calo_Cal__3 = new TH1F("Calo_Cal__3","",16, xAxis3);
   Calo_Cal__3->SetBinContent(1,2.40623);
   Calo_Cal__3->SetBinContent(2,3.600984);
   Calo_Cal__3->SetBinContent(3,7.332459);
   Calo_Cal__3->SetBinContent(4,8.84623);
   Calo_Cal__3->SetBinContent(5,89.38623);
   Calo_Cal__3->SetBinContent(6,87.62983);
   Calo_Cal__3->SetBinContent(7,85.97378);
   Calo_Cal__3->SetBinContent(8,89.42393);
   Calo_Cal__3->SetBinContent(9,88.96623);
   Calo_Cal__3->SetBinContent(10,86.39804);
   Calo_Cal__3->SetBinContent(11,87.50066);
   Calo_Cal__3->SetBinContent(12,90.61082);
   Calo_Cal__3->SetBinContent(13,8.827213);
   Calo_Cal__3->SetBinContent(14,7.380983);
   Calo_Cal__3->SetBinContent(15,3.705902);
   Calo_Cal__3->SetBinContent(16,2.418689);
   Calo_Cal__3->SetBinError(1,1.551203);
   Calo_Cal__3->SetBinError(2,1.897626);
   Calo_Cal__3->SetBinError(3,2.707851);
   Calo_Cal__3->SetBinError(4,2.974261);
   Calo_Cal__3->SetBinError(5,9.454429);
   Calo_Cal__3->SetBinError(6,9.361081);
   Calo_Cal__3->SetBinError(7,9.272205);
   Calo_Cal__3->SetBinError(8,9.456423);
   Calo_Cal__3->SetBinError(9,9.432191);
   Calo_Cal__3->SetBinError(10,9.295055);
   Calo_Cal__3->SetBinError(11,9.354179);
   Calo_Cal__3->SetBinError(12,9.518971);
   Calo_Cal__3->SetBinError(13,2.971063);
   Calo_Cal__3->SetBinError(14,2.716797);
   Calo_Cal__3->SetBinError(15,1.925072);
   Calo_Cal__3->SetBinError(16,1.555213);
   Calo_Cal__3->SetMinimum(0);
   Calo_Cal__3->SetMaximum(101.7702);
   Calo_Cal__3->SetEntries(2288745);
   
   ptstats = new TPaveStats(0.8,0.5,0.95,0.65,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   ptstats_LaTex = ptstats->AddText("Calo_Cal");
   ptstats_LaTex = ptstats->AddText("Entries = 2288745");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.004348");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.599");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Calo_Cal__3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Calo_Cal__3);

   ci = TColor::GetColor("#009900");
   Calo_Cal__3->SetLineColor(ci);
   Calo_Cal__3->SetLineWidth(0);
   Calo_Cal__3->GetXaxis()->SetRange(1,16);
   Calo_Cal__3->GetXaxis()->SetLabelFont(42);
   Calo_Cal__3->GetXaxis()->SetTitleOffset(1);
   Calo_Cal__3->GetXaxis()->SetTitleFont(42);
   Calo_Cal__3->GetYaxis()->SetLabelFont(42);
   Calo_Cal__3->GetYaxis()->SetTitleFont(42);
   Calo_Cal__3->GetZaxis()->SetLabelFont(42);
   Calo_Cal__3->GetZaxis()->SetTitleOffset(1);
   Calo_Cal__3->GetZaxis()->SetTitleFont(42);
   Calo_Cal__3->Draw("sames");
   
   TPaveText *pt = new TPaveText(0.177813,0.9377097,0.822187,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of Topoclusters as function of #eta");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.8,0.3,0.92,0.42,NULL,"brNDC");
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
   entry=leg->AddEntry("TLine","Calo_Cal","l");

   ci = TColor::GetColor("#00ff00");
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
