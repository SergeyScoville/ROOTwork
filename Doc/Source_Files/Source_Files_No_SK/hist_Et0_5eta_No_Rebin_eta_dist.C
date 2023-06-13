#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0_5eta_No_Rebin_eta_dist()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Tue Jun 13 14:22:35 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.125,-14.4095,6.125,129.6855);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   Double_t xAxis1[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9}; 
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Number of Topoclusters as function of #eta",16, xAxis1);
   Calo_422__1->SetBinContent(2,1.638689);
   Calo_422__1->SetBinContent(3,5.971148);
   Calo_422__1->SetBinContent(4,6.864262);
   Calo_422__1->SetBinContent(5,70.45279);
   Calo_422__1->SetBinContent(6,97.59869);
   Calo_422__1->SetBinContent(7,84.84721);
   Calo_422__1->SetBinContent(8,103.6433);
   Calo_422__1->SetBinContent(9,103.2446);
   Calo_422__1->SetBinContent(10,85.49673);
   Calo_422__1->SetBinContent(11,97.26557);
   Calo_422__1->SetBinContent(12,71.21246);
   Calo_422__1->SetBinContent(13,6.867213);
   Calo_422__1->SetBinContent(14,6.000328);
   Calo_422__1->SetBinContent(15,1.716066);
   Calo_422__1->SetBinError(2,1.280113);
   Calo_422__1->SetBinError(3,2.443593);
   Calo_422__1->SetBinError(4,2.619974);
   Calo_422__1->SetBinError(5,8.393616);
   Calo_422__1->SetBinError(6,9.879205);
   Calo_422__1->SetBinError(7,9.211255);
   Calo_422__1->SetBinError(8,10.18053);
   Calo_422__1->SetBinError(9,10.16093);
   Calo_422__1->SetBinError(10,9.246444);
   Calo_422__1->SetBinError(11,9.862331);
   Calo_422__1->SetBinError(12,8.438748);
   Calo_422__1->SetBinError(13,2.620537);
   Calo_422__1->SetBinError(14,2.449557);
   Calo_422__1->SetBinError(15,1.309987);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(115.276);
   Calo_422__1->SetEntries(2282922);
   
   TPaveStats *ptstats = new TPaveStats(0.8,0.8,0.95,0.95,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   TText *ptstats_LaTex = ptstats->AddText("Calo_422");
   ptstats_LaTex = ptstats->AddText("Entries = 2282922");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.002703");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.451");
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
   TLine *line = new TLine(-4.9,0,-4.9,115.276);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,115.276);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,115.276);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,115.276);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,115.276);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,115.276);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,115.276);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,115.276);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,115.276);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,115.276);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,115.276);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,115.276);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,115.276);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,115.276);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,115.276);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,89.07693);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.9,0,-4.2875,0);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,2.719672,-3.675,2.719672);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,9.592131,-3.0625,9.592131);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,9.894426,-2.45,9.894426);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,88.49803,-1.8375,88.49803);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,103.2059,-1.225,103.2059);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,87.27541,-0.6125,87.27541);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,104.7964,0,104.7964);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,104.0387,0.6125,104.0387);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,88.15901,1.225,88.15901);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,102.7344,1.8375,102.7344);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,89.54557,2.45,89.54557);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,9.80623,3.0625,9.80623);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,9.615737,3.675,9.615737);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,2.824918,4.2875,2.824918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,0,4.9,0);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   Double_t xAxis2[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9}; 
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","",16, xAxis2);
   Calo_420__2->SetBinContent(2,2.719672);
   Calo_420__2->SetBinContent(3,9.592131);
   Calo_420__2->SetBinContent(4,9.894426);
   Calo_420__2->SetBinContent(5,88.49803);
   Calo_420__2->SetBinContent(6,103.2059);
   Calo_420__2->SetBinContent(7,87.27541);
   Calo_420__2->SetBinContent(8,104.7964);
   Calo_420__2->SetBinContent(9,104.0387);
   Calo_420__2->SetBinContent(10,88.15901);
   Calo_420__2->SetBinContent(11,102.7344);
   Calo_420__2->SetBinContent(12,89.54557);
   Calo_420__2->SetBinContent(13,9.80623);
   Calo_420__2->SetBinContent(14,9.615737);
   Calo_420__2->SetBinContent(15,2.824918);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(115.276);
   Calo_420__2->SetEntries(2508125);
   
   ptstats = new TPaveStats(0.8,0.65,0.95,0.8,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   ptstats_LaTex = ptstats->AddText("Calo_420");
   ptstats_LaTex = ptstats->AddText("Entries = 2508125");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.002903");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.539");
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
