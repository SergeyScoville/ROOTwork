#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p0_5eta_No_Rebin_eta_dist()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Tue Jun 13 14:22:41 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.125,-7.269107,6.125,65.42196);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   Double_t xAxis1[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9}; 
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Number of Topoclusters as function of #eta",16, xAxis1);
   Calo_422__1->SetBinContent(1,1.627869);
   Calo_422__1->SetBinContent(2,2.467541);
   Calo_422__1->SetBinContent(3,3.608197);
   Calo_422__1->SetBinContent(4,4.149836);
   Calo_422__1->SetBinContent(5,23.01508);
   Calo_422__1->SetBinContent(6,21.56066);
   Calo_422__1->SetBinContent(7,26.08);
   Calo_422__1->SetBinContent(8,28.95639);
   Calo_422__1->SetBinContent(9,28.8518);
   Calo_422__1->SetBinContent(10,26.16492);
   Calo_422__1->SetBinContent(11,21.36983);
   Calo_422__1->SetBinContent(12,23.30295);
   Calo_422__1->SetBinContent(13,4.161311);
   Calo_422__1->SetBinContent(14,3.596066);
   Calo_422__1->SetBinContent(15,2.519344);
   Calo_422__1->SetBinContent(16,1.629508);
   Calo_422__1->SetBinError(1,1.27588);
   Calo_422__1->SetBinError(2,1.570841);
   Calo_422__1->SetBinError(3,1.899525);
   Calo_422__1->SetBinError(4,2.037115);
   Calo_422__1->SetBinError(5,4.797403);
   Calo_422__1->SetBinError(6,4.643345);
   Calo_422__1->SetBinError(7,5.106858);
   Calo_422__1->SetBinError(8,5.381115);
   Calo_422__1->SetBinError(9,5.371387);
   Calo_422__1->SetBinError(10,5.115165);
   Calo_422__1->SetBinError(11,4.622752);
   Calo_422__1->SetBinError(12,4.827313);
   Calo_422__1->SetBinError(13,2.039929);
   Calo_422__1->SetBinError(14,1.896329);
   Calo_422__1->SetBinError(15,1.587244);
   Calo_422__1->SetBinError(16,1.276522);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(58.15285);
   Calo_422__1->SetEntries(680337);
   
   TPaveStats *ptstats = new TPaveStats(0.8,0.8,0.95,0.95,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   TText *ptstats_LaTex = ptstats->AddText("Calo_422");
   ptstats_LaTex = ptstats->AddText("Entries = 680337 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.00258");
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
   TLine *line = new TLine(-4.9,0,-4.9,58.15285);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,58.15285);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,58.15285);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,58.15285);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,58.15285);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,58.15285);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,58.15285);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,58.15285);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,58.15285);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,58.15285);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,58.15285);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,58.15285);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,58.15285);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,58.15285);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,58.15285);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,44.93629);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.9,2.579672,-4.2875,2.579672);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,4.351147,-3.675,4.351147);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,7.25082,-3.0625,7.25082);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,8.029181,-2.45,8.029181);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,52.17803,-1.8375,52.17803);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,37.71213,-1.225,37.71213);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,40.62459,-0.6125,40.62459);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,41.96852,0,41.96852);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,42.02721,0.6125,42.02721);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,40.82787,1.225,40.82787);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,37.55705,1.8375,37.55705);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,52.86623,2.45,52.86623);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,8.028852,3.0625,8.028852);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,7.269508,3.675,7.269508);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,4.50918,4.2875,4.50918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.558361,4.9,2.558361);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   Double_t xAxis2[17] = {-4.9, -4.2875, -3.675, -3.0625, -2.45, -1.8375, -1.225, -0.6125, 0, 0.6125, 1.225, 1.8375, 2.45, 3.0625, 3.675, 4.2875, 4.9}; 
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","",16, xAxis2);
   Calo_420__2->SetBinContent(1,2.579672);
   Calo_420__2->SetBinContent(2,4.351147);
   Calo_420__2->SetBinContent(3,7.25082);
   Calo_420__2->SetBinContent(4,8.029181);
   Calo_420__2->SetBinContent(5,52.17803);
   Calo_420__2->SetBinContent(6,37.71213);
   Calo_420__2->SetBinContent(7,40.62459);
   Calo_420__2->SetBinContent(8,41.96852);
   Calo_420__2->SetBinContent(9,42.02721);
   Calo_420__2->SetBinContent(10,40.82787);
   Calo_420__2->SetBinContent(11,37.55705);
   Calo_420__2->SetBinContent(12,52.86623);
   Calo_420__2->SetBinContent(13,8.028852);
   Calo_420__2->SetBinContent(14,7.269508);
   Calo_420__2->SetBinContent(15,4.50918);
   Calo_420__2->SetBinContent(16,2.558361);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(58.15285);
   Calo_420__2->SetEntries(1190532);
   
   ptstats = new TPaveStats(0.8,0.65,0.95,0.8,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats->SetTextSize(0.025);
   ptstats_LaTex = ptstats->AddText("Calo_420");
   ptstats_LaTex = ptstats->AddText("Entries = 1190532");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.005216");
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
