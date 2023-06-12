#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_EtNoCut_5eta_No_Rebin_eta_dist_5eta_SK()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Mon Jun 12 11:17:43 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.890625,-0.01787588,6.890625,0.1608829);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Number of Topoclusters as function of #eta",16,-4.9,4.9);
   Calo_422__1->SetBinContent(1,0.002252761);
   Calo_422__1->SetBinContent(2,0.003424288);
   Calo_422__1->SetBinContent(3,0.006861016);
   Calo_422__1->SetBinContent(4,0.008070319);
   Calo_422__1->SetBinContent(5,0.1036233);
   Calo_422__1->SetBinContent(6,0.1212755);
   Calo_422__1->SetBinContent(7,0.1236305);
   Calo_422__1->SetBinContent(8,0.1300064);
   Calo_422__1->SetBinContent(9,0.1296563);
   Calo_422__1->SetBinContent(10,0.1243939);
   Calo_422__1->SetBinContent(11,0.1212653);
   Calo_422__1->SetBinContent(12,0.09489328);
   Calo_422__1->SetBinContent(13,0.01802439);
   Calo_422__1->SetBinContent(14,0.006872533);
   Calo_422__1->SetBinContent(15,0.003487402);
   Calo_422__1->SetBinContent(16,0.002262896);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(0.143007);
   Calo_422__1->SetEntries(2170670);
   
   TPaveStats *ptstats = new TPaveStats(0.8,0.8,0.95,0.95,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   TText *ptstats_LaTex = ptstats->AddText("Calo_422");
   ptstats_LaTex = ptstats->AddText("Entries = 2170670");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.009636");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.508");
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
   Calo_422__1->GetXaxis()->SetRange(0,17);
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
   Calo_420__2->SetBinContent(1,0.003226042);
   Calo_420__2->SetBinContent(2,0.004866779);
   Calo_420__2->SetBinContent(3,0.009988027);
   Calo_420__2->SetBinContent(4,0.01181471);
   Calo_420__2->SetBinContent(5,0.1196219);
   Calo_420__2->SetBinContent(6,0.1166408);
   Calo_420__2->SetBinContent(7,0.1142414);
   Calo_420__2->SetBinContent(8,0.1187839);
   Calo_420__2->SetBinContent(9,0.1182099);
   Calo_420__2->SetBinContent(10,0.1147744);
   Calo_420__2->SetBinContent(11,0.1165351);
   Calo_420__2->SetBinContent(12,0.1095964);
   Calo_420__2->SetBinContent(13,0.02338498);
   Calo_420__2->SetBinContent(14,0.01003168);
   Calo_420__2->SetBinContent(15,0.005042245);
   Calo_420__2->SetBinContent(16,0.003241755);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(0.143007);
   Calo_420__2->SetEntries(2291043);
   
   ptstats = new TPaveStats(0.8,0.65,0.95,0.8,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   ptstats_LaTex = ptstats->AddText("Calo_420");
   ptstats_LaTex = ptstats->AddText("Entries = 2291043");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.01147");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.614");
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
   Calo_420__2->GetXaxis()->SetRange(0,17);
   Calo_420__2->GetXaxis()->SetLabelFont(42);
   Calo_420__2->GetXaxis()->SetTitleOffset(1);
   Calo_420__2->GetXaxis()->SetTitleFont(42);
   Calo_420__2->GetYaxis()->SetLabelFont(42);
   Calo_420__2->GetYaxis()->SetTitleFont(42);
   Calo_420__2->GetZaxis()->SetLabelFont(42);
   Calo_420__2->GetZaxis()->SetTitleOffset(1);
   Calo_420__2->GetZaxis()->SetTitleFont(42);
   Calo_420__2->Draw("hist SAMES");
   
   TH1F *Calo_Cal__3 = new TH1F("Calo_Cal__3","",16,-4.9,4.9);
   Calo_Cal__3->SetBinContent(1,0.003206687);
   Calo_Cal__3->SetBinContent(2,0.004799545);
   Calo_Cal__3->SetBinContent(3,0.009770783);
   Calo_Cal__3->SetBinContent(4,0.0117896);
   Calo_Cal__3->SetBinContent(5,0.1191175);
   Calo_Cal__3->SetBinContent(6,0.1167758);
   Calo_Cal__3->SetBinContent(7,0.1145665);
   Calo_Cal__3->SetBinContent(8,0.1191673);
   Calo_Cal__3->SetBinContent(9,0.1185613);
   Calo_Cal__3->SetBinContent(10,0.1151336);
   Calo_Cal__3->SetBinContent(11,0.1166006);
   Calo_Cal__3->SetBinContent(12,0.1092366);
   Calo_Cal__3->SetBinContent(13,0.02327557);
   Calo_Cal__3->SetBinContent(14,0.009835877);
   Calo_Cal__3->SetBinContent(15,0.004939783);
   Calo_Cal__3->SetBinContent(16,0.003222851);
   Calo_Cal__3->SetMinimum(0);
   Calo_Cal__3->SetMaximum(0.143007);
   Calo_Cal__3->SetEntries(2288967);
   
   ptstats = new TPaveStats(0.8,0.5,0.95,0.65,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   ptstats_LaTex = ptstats->AddText("Calo_Cal");
   ptstats_LaTex = ptstats->AddText("Entries = 2288967");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.0114");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   1.61");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Calo_Cal__3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Calo_Cal__3);

   ci = 1181;
   color = new TColor(ci, 0, 0.6, 0, " ", 0.1);
   Calo_Cal__3->SetFillColor(ci);

   ci = TColor::GetColor("#009900");
   Calo_Cal__3->SetLineColor(ci);
   Calo_Cal__3->SetLineWidth(3);
   Calo_Cal__3->GetXaxis()->SetRange(0,17);
   Calo_Cal__3->GetXaxis()->SetLabelFont(42);
   Calo_Cal__3->GetXaxis()->SetTitleOffset(1);
   Calo_Cal__3->GetXaxis()->SetTitleFont(42);
   Calo_Cal__3->GetYaxis()->SetLabelFont(42);
   Calo_Cal__3->GetYaxis()->SetTitleFont(42);
   Calo_Cal__3->GetZaxis()->SetLabelFont(42);
   Calo_Cal__3->GetZaxis()->SetTitleOffset(1);
   Calo_Cal__3->GetZaxis()->SetTitleFont(42);
   Calo_Cal__3->Draw("hist SAMES");
   
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
   entry=leg->AddEntry("Calo_Cal","Calo_Cal","lpf");

   ci = 1181;
   color = new TColor(ci, 0, 0.6, 0, " ", 0.1);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#009900");
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
