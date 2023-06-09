#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0p5_5eta_No_Rebin_eta_dist_5eta()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Fri Jun  9 16:47:44 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",2160,53,1200,800);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-5.5125,-0.002925493,0.6125,0.02632943);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   Double_t xAxis1[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9, 2.453575e-314}; 
   
   TH1F *new_hist__1 = new TH1F("new_hist__1","Number of Topoclusters as function of eta",16, xAxis1);
   new_hist__1->SetBinContent(1,0.0008081899);
   new_hist__1->SetBinContent(2,0.001178452);
   new_hist__1->SetBinContent(3,0.002020855);
   new_hist__1->SetBinContent(4,0.001362442);
   new_hist__1->SetBinContent(5,0.01530467);
   new_hist__1->SetBinContent(6,0.02048833);
   new_hist__1->SetBinContent(7,0.01911601);
   new_hist__1->SetBinContent(8,0.02228947);
   new_hist__1->SetBinContent(9,0.01902629);
   new_hist__1->SetBinContent(10,0.02052407);
   new_hist__1->SetBinContent(11,0.01593495);
   new_hist__1->SetBinContent(12,0.001392094);
   new_hist__1->SetBinContent(13,0.001962312);
   new_hist__1->SetBinContent(14,0.001186815);
   new_hist__1->SetBinContent(15,0.0008462044);
   new_hist__1->SetBinContent(16,0.01097785);
   new_hist__1->SetEntries(16);
   new_hist__1->SetDirectory(0);
   
   TPaveStats *ptstats = new TPaveStats(0.8,0.8,0.95,0.95,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   TText *ptstats_LaTex = ptstats->AddText("new_hist");
   ptstats_LaTex = ptstats->AddText("Entries = 16     ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.1833");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.747");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   new_hist__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(new_hist__1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   new_hist__1->SetFillColor(ci);
   new_hist__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   new_hist__1->SetLineColor(ci);
   new_hist__1->GetXaxis()->SetTitle("Number of Topoclusters");
   new_hist__1->GetXaxis()->CenterTitle(true);
   new_hist__1->GetXaxis()->SetDecimals();
   new_hist__1->GetXaxis()->SetLabelFont(42);
   new_hist__1->GetXaxis()->SetTitleOffset(1.2);
   new_hist__1->GetXaxis()->SetTitleFont(42);
   new_hist__1->GetYaxis()->SetTitle("Fraction of events");
   new_hist__1->GetYaxis()->CenterTitle(true);
   new_hist__1->GetYaxis()->SetNdivisions(-6);
   new_hist__1->GetYaxis()->SetLabelFont(42);
   new_hist__1->GetYaxis()->SetTitleOffset(1.6);
   new_hist__1->GetYaxis()->SetTitleFont(42);
   new_hist__1->GetZaxis()->SetLabelFont(42);
   new_hist__1->GetZaxis()->SetTitleOffset(1);
   new_hist__1->GetZaxis()->SetTitleFont(42);
   new_hist__1->Draw("hist");
   Double_t xAxis2[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9, 2.453318e-314}; 
   
   TH1F *new_hist__2 = new TH1F("new_hist__2","",16, xAxis2);
   new_hist__2->SetBinContent(1,0.0009021148);
   new_hist__2->SetBinContent(2,0.001338762);
   new_hist__2->SetBinContent(3,0.002132667);
   new_hist__2->SetBinContent(4,0.00188362);
   new_hist__2->SetBinContent(5,0.01904392);
   new_hist__2->SetBinContent(6,0.01925871);
   new_hist__2->SetBinContent(7,0.01749363);
   new_hist__2->SetBinContent(8,0.01920923);
   new_hist__2->SetBinContent(9,0.01761272);
   new_hist__2->SetBinContent(10,0.01930982);
   new_hist__2->SetBinContent(11,0.01957518);
   new_hist__2->SetBinContent(12,0.001889058);
   new_hist__2->SetBinContent(13,0.002048383);
   new_hist__2->SetBinContent(14,0.001350182);
   new_hist__2->SetBinContent(15,0.0008863455);
   new_hist__2->SetBinContent(16,0.01286941);
   new_hist__2->SetEntries(16);
   new_hist__2->SetDirectory(0);
   
   ptstats = new TPaveStats(0.8,0.65,0.95,0.8,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   ptstats_LaTex = ptstats->AddText("new_hist");
   ptstats_LaTex = ptstats->AddText("Entries = 16     ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2077");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.829");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   new_hist__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(new_hist__2);

   ci = 1180;
   color = new TColor(ci, 1, 0, 0, " ", 0.1);
   new_hist__2->SetFillColor(ci);
   new_hist__2->SetFillStyle(3490);

   ci = TColor::GetColor("#ff0000");
   new_hist__2->SetLineColor(ci);
   new_hist__2->GetXaxis()->SetLabelFont(42);
   new_hist__2->GetXaxis()->SetTitleOffset(1);
   new_hist__2->GetXaxis()->SetTitleFont(42);
   new_hist__2->GetYaxis()->SetLabelFont(42);
   new_hist__2->GetYaxis()->SetTitleFont(42);
   new_hist__2->GetZaxis()->SetLabelFont(42);
   new_hist__2->GetZaxis()->SetTitleOffset(1);
   new_hist__2->GetZaxis()->SetTitleFont(42);
   new_hist__2->Draw("hist SAMES");
   
   TPaveText *pt = new TPaveText(0.1640401,0.9377097,0.8359599,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of Topoclusters as function of eta");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.6,0.7,0.75,0.85,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_hist","Calo_422","lpf");

   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("new_hist","Calo_420","lpf");

   ci = 1180;
   color = new TColor(ci, 1, 0, 0, " ", 0.1);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3490);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   All_GEP_Algo->Modified();
   All_GEP_Algo->cd();
   All_GEP_Algo->SetSelected(All_GEP_Algo);
}
