#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et2p0_5eta_No_Rebin_eta_dist_5eta()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Sat Jun 10 17:21:52 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,53,1200,800);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.125,0.0009983096,6.125,0.1236091);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Number of Topoclusters as function of #eta",16,-4.9,4.9);
   Calo_422__1->SetBinContent(1,0.01776597);
   Calo_422__1->SetBinContent(2,0.02485918);
   Calo_422__1->SetBinContent(3,0.02592839);
   Calo_422__1->SetBinContent(4,0.04018455);
   Calo_422__1->SetBinContent(5,0.09805759);
   Calo_422__1->SetBinContent(6,0.08217437);
   Calo_422__1->SetBinContent(7,0.1014047);
   Calo_422__1->SetBinContent(8,0.1066772);
   Calo_422__1->SetBinContent(9,0.1055808);
   Calo_422__1->SetBinContent(10,0.1035664);
   Calo_422__1->SetBinContent(11,0.0834334);
   Calo_422__1->SetBinContent(12,0.09096051);
   Calo_422__1->SetBinContent(13,0.05007864);
   Calo_422__1->SetBinContent(14,0.02617633);
   Calo_422__1->SetBinContent(15,0.02544415);
   Calo_422__1->SetBinContent(16,0.01770786);
   Calo_422__1->SetEntries(100);
   
   TPaveStats *ptstats = new TPaveStats(0.8,0.8,0.95,0.95,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   TText *ptstats_LaTex = ptstats->AddText("Calo_422");
   ptstats_LaTex = ptstats->AddText("Entries = 100    ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.01853");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  2.067");
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
   Calo_422__1->GetXaxis()->CenterTitle(true);
   Calo_422__1->GetXaxis()->SetLabelFont(42);
   Calo_422__1->GetXaxis()->SetTitleOffset(1.2);
   Calo_422__1->GetXaxis()->SetTitleFont(42);
   Calo_422__1->GetYaxis()->SetTitle("Fraction of topoclusters");
   Calo_422__1->GetYaxis()->CenterTitle(true);
   Calo_422__1->GetYaxis()->SetLabelFont(42);
   Calo_422__1->GetYaxis()->SetTitleOffset(1.55);
   Calo_422__1->GetYaxis()->SetTitleFont(42);
   Calo_422__1->GetZaxis()->SetLabelFont(42);
   Calo_422__1->GetZaxis()->SetTitleOffset(1);
   Calo_422__1->GetZaxis()->SetTitleFont(42);
   Calo_422__1->Draw("hist");
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","",16,-4.9,4.9);
   Calo_420__2->SetBinContent(1,0.01289246);
   Calo_420__2->SetBinContent(2,0.0208233);
   Calo_420__2->SetBinContent(3,0.03000806);
   Calo_420__2->SetBinContent(4,0.03487336);
   Calo_420__2->SetBinContent(5,0.1362809);
   Calo_420__2->SetBinContent(6,0.08515888);
   Calo_420__2->SetBinContent(7,0.0900377);
   Calo_420__2->SetBinContent(8,0.08750957);
   Calo_420__2->SetBinContent(9,0.0871023);
   Calo_420__2->SetBinContent(10,0.09113278);
   Calo_420__2->SetBinContent(11,0.08500848);
   Calo_420__2->SetBinContent(12,0.1237264);
   Calo_420__2->SetBinContent(13,0.05115245);
   Calo_420__2->SetBinContent(14,0.03001313);
   Calo_420__2->SetBinContent(15,0.02148913);
   Calo_420__2->SetBinContent(16,0.01279107);
   Calo_420__2->SetEntries(100);
   
   ptstats = new TPaveStats(0.8,0.65,0.95,0.8,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   ptstats_LaTex = ptstats->AddText("Calo_420");
   ptstats_LaTex = ptstats->AddText("Entries = 100    ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.02081");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  2.076");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Calo_420__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Calo_420__2);

   ci = 1180;
   color = new TColor(ci, 1, 0, 0, " ", 0.1);
   Calo_420__2->SetFillColor(ci);
   Calo_420__2->SetFillStyle(3490);

   ci = TColor::GetColor("#ff0000");
   Calo_420__2->SetLineColor(ci);
   Calo_420__2->SetLineWidth(3);
   Calo_420__2->GetXaxis()->SetLabelFont(42);
   Calo_420__2->GetXaxis()->SetTitleOffset(1);
   Calo_420__2->GetXaxis()->SetTitleFont(42);
   Calo_420__2->GetYaxis()->SetLabelFont(42);
   Calo_420__2->GetYaxis()->SetTitleFont(42);
   Calo_420__2->GetZaxis()->SetLabelFont(42);
   Calo_420__2->GetZaxis()->SetTitleOffset(1);
   Calo_420__2->GetZaxis()->SetTitleFont(42);
   Calo_420__2->Draw("hist SAMES");
   
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
   entry=leg->AddEntry("Calo_420","Calo_420","lpf");

   ci = 1180;
   color = new TColor(ci, 1, 0, 0, " ", 0.1);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3490);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   All_GEP_Algo->Modified();
   All_GEP_Algo->cd();
   All_GEP_Algo->SetSelected(All_GEP_Algo);
}
