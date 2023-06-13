#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et2p0_5eta_No_Rebin_eta_dist_SK()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Tue Jun 13 14:16:44 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.125,-3.731976,6.125,33.58778);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   Double_t xAxis1[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9}; 
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Number of Topoclusters as function of #eta",16, xAxis1);
   Calo_422__1->SetBinContent(1,1.503607);
   Calo_422__1->SetBinContent(2,2.102951);
   Calo_422__1->SetBinContent(3,2.194098);
   Calo_422__1->SetBinContent(4,3.399672);
   Calo_422__1->SetBinContent(5,8.297049);
   Calo_422__1->SetBinContent(6,6.954426);
   Calo_422__1->SetBinContent(7,8.580328);
   Calo_422__1->SetBinContent(8,9.027541);
   Calo_422__1->SetBinContent(9,8.933443);
   Calo_422__1->SetBinContent(10,8.764262);
   Calo_422__1->SetBinContent(11,7.06);
   Calo_422__1->SetBinContent(12,8.49082);
   Calo_422__1->SetBinContent(13,3.442295);
   Calo_422__1->SetBinContent(14,2.215082);
   Calo_422__1->SetBinContent(15,2.153443);
   Calo_422__1->SetBinContent(16,1.498361);
   Calo_422__1->SetBinError(1,1.226216);
   Calo_422__1->SetBinError(2,1.450155);
   Calo_422__1->SetBinError(3,1.481249);
   Calo_422__1->SetBinError(4,1.84382);
   Calo_422__1->SetBinError(5,2.88046);
   Calo_422__1->SetBinError(6,2.637125);
   Calo_422__1->SetBinError(7,2.92922);
   Calo_422__1->SetBinError(8,3.004587);
   Calo_422__1->SetBinError(9,2.988887);
   Calo_422__1->SetBinError(10,2.96045);
   Calo_422__1->SetBinError(11,2.657066);
   Calo_422__1->SetBinError(12,2.913901);
   Calo_422__1->SetBinError(13,1.855342);
   Calo_422__1->SetBinError(14,1.488315);
   Calo_422__1->SetBinError(15,1.467461);
   Calo_422__1->SetBinError(16,1.224075);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(29.8558);
   Calo_422__1->SetEntries(258083);
   
   TPaveStats *ptstats = new TPaveStats(0.8,0.8,0.95,0.95,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   TText *ptstats_LaTex = ptstats->AddText("Calo_422");
   ptstats_LaTex = ptstats->AddText("Entries = 258083 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.01279");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   2.06");
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
   TLine *line = new TLine(-4.9,0,-4.9,29.8558);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,29.8558);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,29.8558);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,29.8558);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,29.8558);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,29.8558);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,29.8558);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,29.8558);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,29.8558);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,29.8558);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,29.8558);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,29.8558);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,29.8558);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,29.8558);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,29.8558);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,23.07039);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.9,2.500984,-4.2875,2.500984);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,4.039344,-3.675,4.039344);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,5.821967,-3.0625,5.821967);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,6.76459,-2.45,6.76459);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,26.43541,-1.8375,26.43541);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,16.52066,-1.225,16.52066);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,17.46721,-0.6125,17.46721);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,16.97541,0,16.97541);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,16.89606,0.6125,16.89606);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,17.67771,1.225,17.67771);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,16.49082,1.8375,16.49082);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,27.14164,2.45,27.14164);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,6.78,3.0625,6.78);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,5.822623,3.675,5.822623);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,4.168197,4.2875,4.168197);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.480983,4.9,2.480983);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   Double_t xAxis2[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9}; 
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","",16, xAxis2);
   Calo_420__2->SetBinContent(1,2.500984);
   Calo_420__2->SetBinContent(2,4.039344);
   Calo_420__2->SetBinContent(3,5.821967);
   Calo_420__2->SetBinContent(4,6.76459);
   Calo_420__2->SetBinContent(5,26.43541);
   Calo_420__2->SetBinContent(6,16.52066);
   Calo_420__2->SetBinContent(7,17.46721);
   Calo_420__2->SetBinContent(8,16.97541);
   Calo_420__2->SetBinContent(9,16.89606);
   Calo_420__2->SetBinContent(10,17.67771);
   Calo_420__2->SetBinContent(11,16.49082);
   Calo_420__2->SetBinContent(12,27.14164);
   Calo_420__2->SetBinContent(13,6.78);
   Calo_420__2->SetBinContent(14,5.822623);
   Calo_420__2->SetBinContent(15,4.168197);
   Calo_420__2->SetBinContent(16,2.480983);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(29.8558);
   Calo_420__2->SetEntries(591650);
   
   ptstats = new TPaveStats(0.8,0.65,0.95,0.8,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   ptstats_LaTex = ptstats->AddText("Calo_420");
   ptstats_LaTex = ptstats->AddText("Entries = 591650 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.01084");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  2.064");
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
