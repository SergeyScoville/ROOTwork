#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_EtNoCut_No_Rebin_eta_dist()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Tue Jun 13 16:42:54 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.125,-13.04767,6.125,117.429);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Number of Topoclusters as function of #eta",16,-4.9,4.9);
   Calo_422__1->SetBinContent(1,1.641639);
   Calo_422__1->SetBinContent(2,2.513443);
   Calo_422__1->SetBinContent(3,5.043934);
   Calo_422__1->SetBinContent(4,9.100984);
   Calo_422__1->SetBinContent(5,64.95573);
   Calo_422__1->SetBinContent(6,87.84065);
   Calo_422__1->SetBinContent(7,89.24984);
   Calo_422__1->SetBinContent(8,94.89213);
   Calo_422__1->SetBinContent(9,94.07672);
   Calo_422__1->SetBinContent(10,90.14492);
   Calo_422__1->SetBinContent(11,88.06525);
   Calo_422__1->SetBinContent(12,65.75377);
   Calo_422__1->SetBinContent(13,9.160656);
   Calo_422__1->SetBinContent(14,5.043279);
   Calo_422__1->SetBinContent(15,2.56918);
   Calo_422__1->SetBinContent(16,1.642951);
   Calo_422__1->SetBinError(1,0.02320005);
   Calo_422__1->SetBinError(2,0.02870679);
   Calo_422__1->SetBinError(3,0.04066631);
   Calo_422__1->SetBinError(4,0.05462535);
   Calo_422__1->SetBinError(5,0.1459348);
   Calo_422__1->SetBinError(6,0.1697063);
   Calo_422__1->SetBinError(7,0.1710621);
   Calo_422__1->SetBinError(8,0.1763864);
   Calo_422__1->SetBinError(9,0.175627);
   Calo_422__1->SetBinError(10,0.1719177);
   Calo_422__1->SetBinError(11,0.1699231);
   Calo_422__1->SetBinError(12,0.1468285);
   Calo_422__1->SetBinError(13,0.05480414);
   Calo_422__1->SetBinError(14,0.04066367);
   Calo_422__1->SetBinError(15,0.02902334);
   Calo_422__1->SetBinError(16,0.02320932);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(104.3813);
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
   ptstats_LaTex = ptstats->AddText("Mean  = 0.00424");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.493");
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
   Calo_422__1->GetYaxis()->SetTitle("Number of topoclusters/# events");
   Calo_422__1->GetYaxis()->CenterTitle(true);
   Calo_422__1->GetYaxis()->SetLabelFont(42);
   Calo_422__1->GetYaxis()->SetLabelSize(0.03);
   Calo_422__1->GetYaxis()->SetTitleOffset(1.4);
   Calo_422__1->GetYaxis()->SetTitleFont(42);
   Calo_422__1->GetZaxis()->SetLabelFont(42);
   Calo_422__1->GetZaxis()->SetTitleOffset(1);
   Calo_422__1->GetZaxis()->SetTitleFont(42);
   Calo_422__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.2725543,0.9377097,0.9169282,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of Topoclusters as function of #eta");
   pt->Draw();
   TLine *line = new TLine(-4.9,0,-4.9,104.3813);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,104.3813);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,104.3813);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,104.3813);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,104.3813);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,104.3813);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,104.3813);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,104.3813);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,104.3813);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,104.3813);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,104.3813);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,104.3813);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,104.3813);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,104.3813);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,104.3813);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,80.65831);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.9,2.473115,-4.2875,2.473115);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,3.779344,-3.675,3.779344);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,7.824918,-3.0625,7.824918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,12.52787,-2.45,12.52787);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,80.34393,-1.8375,80.34393);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,89.68918,-1.225,89.68918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,87.11049,-0.6125,87.11049);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,91.21869,0,91.21869);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,90.22787,0.6125,90.22787);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,87.94656,1.225,87.94656);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,89.76623,1.8375,89.76623);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,81.44721,2.45,81.44721);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,12.54328,3.0625,12.54328);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,7.844262,3.675,7.844262);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,3.921639,4.2875,3.921639);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.497049,4.9,2.497049);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420TopoClusters_eta",16,-4.9,4.9);
   Calo_420__2->SetBinContent(1,2.473115);
   Calo_420__2->SetBinContent(2,3.779344);
   Calo_420__2->SetBinContent(3,7.824918);
   Calo_420__2->SetBinContent(4,12.52787);
   Calo_420__2->SetBinContent(5,80.34393);
   Calo_420__2->SetBinContent(6,89.68918);
   Calo_420__2->SetBinContent(7,87.11049);
   Calo_420__2->SetBinContent(8,91.21869);
   Calo_420__2->SetBinContent(9,90.22787);
   Calo_420__2->SetBinContent(10,87.94656);
   Calo_420__2->SetBinContent(11,89.76623);
   Calo_420__2->SetBinContent(12,81.44721);
   Calo_420__2->SetBinContent(13,12.54328);
   Calo_420__2->SetBinContent(14,7.844262);
   Calo_420__2->SetBinContent(15,3.921639);
   Calo_420__2->SetBinContent(16,2.497049);
   Calo_420__2->SetBinError(1,0.02847556);
   Calo_420__2->SetBinError(2,0.03520127);
   Calo_420__2->SetBinError(3,0.05065123);
   Calo_420__2->SetBinError(4,0.06408977);
   Calo_420__2->SetBinError(5,0.162303);
   Calo_420__2->SetBinError(6,0.1714826);
   Calo_420__2->SetBinError(7,0.1689995);
   Calo_420__2->SetBinError(8,0.1729386);
   Calo_420__2->SetBinError(9,0.1719968);
   Calo_420__2->SetBinError(10,0.1698085);
   Calo_420__2->SetBinError(11,0.1715563);
   Calo_420__2->SetBinError(12,0.1634136);
   Calo_420__2->SetBinError(13,0.06412917);
   Calo_420__2->SetBinError(14,0.0507138);
   Calo_420__2->SetBinError(15,0.03585782);
   Calo_420__2->SetBinError(16,0.02861302);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(104.3813);
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
   ptstats_LaTex = ptstats->AddText("Mean  = 0.004968");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.601");
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
   line = new TLine(-4.9,2.45377,-4.2875,2.45377);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,3.730492,-3.675,3.730492);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,7.659017,-3.0625,7.659017);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,12.44918,-2.45,12.44918);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,79.93049,-1.8375,79.93049);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,89.69804,-1.225,89.69804);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,87.31541,-0.6125,87.31541);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,91.39902,0,91.39902);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,90.42197,0.6125,90.42197);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,88.12459,1.225,88.12459);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,89.73836,1.8375,89.73836);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,81.05476,2.45,81.05476);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,12.49115,3.0625,12.49115);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,7.697705,3.675,7.697705);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,3.837049,4.2875,3.837049);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.48,4.9,2.48);

   ci = TColor::GetColor("#00ff00");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *Calo_Cal__3 = new TH1F("Calo_Cal__3","h_CaloCalTopoClusters_eta",16,-4.9,4.9);
   Calo_Cal__3->SetBinContent(1,2.45377);
   Calo_Cal__3->SetBinContent(2,3.730492);
   Calo_Cal__3->SetBinContent(3,7.659017);
   Calo_Cal__3->SetBinContent(4,12.44918);
   Calo_Cal__3->SetBinContent(5,79.93049);
   Calo_Cal__3->SetBinContent(6,89.69804);
   Calo_Cal__3->SetBinContent(7,87.31541);
   Calo_Cal__3->SetBinContent(8,91.39902);
   Calo_Cal__3->SetBinContent(9,90.42197);
   Calo_Cal__3->SetBinContent(10,88.12459);
   Calo_Cal__3->SetBinContent(11,89.73836);
   Calo_Cal__3->SetBinContent(12,81.05476);
   Calo_Cal__3->SetBinContent(13,12.49115);
   Calo_Cal__3->SetBinContent(14,7.697705);
   Calo_Cal__3->SetBinContent(15,3.837049);
   Calo_Cal__3->SetBinContent(16,2.48);
   Calo_Cal__3->SetBinError(1,0.02836397);
   Calo_Cal__3->SetBinError(2,0.03497302);
   Calo_Cal__3->SetBinError(3,0.05011141);
   Calo_Cal__3->SetBinError(4,0.06388817);
   Calo_Cal__3->SetBinError(5,0.1618849);
   Calo_Cal__3->SetBinError(6,0.1714911);
   Calo_Cal__3->SetBinError(7,0.1691981);
   Calo_Cal__3->SetBinError(8,0.1731095);
   Calo_Cal__3->SetBinError(9,0.1721817);
   Calo_Cal__3->SetBinError(10,0.1699803);
   Calo_Cal__3->SetBinError(11,0.1715296);
   Calo_Cal__3->SetBinError(12,0.1630194);
   Calo_Cal__3->SetBinError(13,0.06399577);
   Calo_Cal__3->SetBinError(14,0.05023781);
   Calo_Cal__3->SetBinError(15,0.03546899);
   Calo_Cal__3->SetBinError(16,0.02851517);
   Calo_Cal__3->SetMinimum(0);
   Calo_Cal__3->SetMaximum(104.3813);
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
   ptstats_LaTex = ptstats->AddText("Mean  = 0.004939");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.597");
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
