#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p5_No_Rebin_eta_dist_SK()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 15 17:27:44 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-3.992655,5.653846,20.96144);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetTickx(1);
   All_GEP_Algo->SetTicky(1);
   All_GEP_Algo->SetLeftMargin(0.16);
   All_GEP_Algo->SetRightMargin(0.06);
   All_GEP_Algo->SetTopMargin(0.07);
   All_GEP_Algo->SetBottomMargin(0.16);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Average number of topoclusters as function of #eta post SK",16,-4.9,4.9);
   Calo_422__1->SetBinContent(1,1.557377);
   Calo_422__1->SetBinContent(2,2.143934);
   Calo_422__1->SetBinContent(3,2.505574);
   Calo_422__1->SetBinContent(4,3.814754);
   Calo_422__1->SetBinContent(5,9.175737);
   Calo_422__1->SetBinContent(6,9.44);
   Calo_422__1->SetBinContent(7,11.78984);
   Calo_422__1->SetBinContent(8,13.22623);
   Calo_422__1->SetBinContent(9,13.11443);
   Calo_422__1->SetBinContent(10,11.96197);
   Calo_422__1->SetBinContent(11,9.485574);
   Calo_422__1->SetBinContent(12,9.351803);
   Calo_422__1->SetBinContent(13,3.837049);
   Calo_422__1->SetBinContent(14,2.526885);
   Calo_422__1->SetBinContent(15,2.195082);
   Calo_422__1->SetBinContent(16,1.559016);
   Calo_422__1->SetBinError(1,0.0225968);
   Calo_422__1->SetBinError(2,0.02651281);
   Calo_422__1->SetBinError(3,0.02866181);
   Calo_422__1->SetBinError(4,0.03536579);
   Calo_422__1->SetBinError(5,0.05484924);
   Calo_422__1->SetBinError(6,0.05563346);
   Calo_422__1->SetBinError(7,0.06217331);
   Calo_422__1->SetBinError(8,0.06585187);
   Calo_422__1->SetBinError(9,0.06557295);
   Calo_422__1->SetBinError(10,0.06262553);
   Calo_422__1->SetBinError(11,0.05576759);
   Calo_422__1->SetBinError(12,0.05537296);
   Calo_422__1->SetBinError(13,0.03546899);
   Calo_422__1->SetBinError(14,0.02878345);
   Calo_422__1->SetBinError(15,0.02682721);
   Calo_422__1->SetBinError(16,0.02260869);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(19.21466);
   Calo_422__1->SetEntries(328440);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   Calo_422__1->SetFillColor(ci);
   Calo_422__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   Calo_422__1->SetLineColor(ci);
   Calo_422__1->SetLineWidth(2);
   Calo_422__1->GetXaxis()->SetTitle("#eta");
   Calo_422__1->GetXaxis()->SetRange(1,16);
   Calo_422__1->GetXaxis()->SetLabelFont(42);
   Calo_422__1->GetXaxis()->SetTickLength(0.02);
   Calo_422__1->GetXaxis()->SetTitleOffset(1);
   Calo_422__1->GetXaxis()->SetTitleFont(42);
   Calo_422__1->GetYaxis()->SetTitle("Number of topoclusters/# events");
   Calo_422__1->GetYaxis()->SetLabelFont(42);
   Calo_422__1->GetYaxis()->SetTitleFont(42);
   Calo_422__1->GetZaxis()->SetLabelFont(42);
   Calo_422__1->GetZaxis()->SetTitleOffset(1);
   Calo_422__1->GetZaxis()->SetTitleFont(42);
   Calo_422__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Average number of topoclusters as function of #eta post SK");
   pt->Draw();
   TLine *line = new TLine(-4.9,0,-4.9,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,19.21466);
   line->SetLineStyle(2);
   line->Draw();
   
   pt = new TPaveText(0.195,0.87,0.265,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(72);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("ATLAS");
   pt->Draw();
   
   pt = new TPaveText(0.265,0.87,0.42,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("Simulation Internal");
   pt->Draw();
   
   pt = new TPaveText(0.19,0.83,0.35,0.87,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("HL-LHC <#mu>=200");
   pt->Draw();
   
   pt = new TPaveText(0.19,0.79,0.323,0.83,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("Minimum Bias");
   pt->Draw();
   
   pt = new TPaveText(0.19,0.75,0.284,0.79,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("E_{T}^{TC} > 1.5");
   pt->Draw();
   line = new TLine(-4.9,2.184918,-4.2875,2.184918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-4.2875,3.124918,-3.675,3.124918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.675,3.547541,-3.0625,3.547541);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.0625,6.034754,-2.45,6.034754);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-2.45,13.74197,-1.8375,13.74197);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.8375,13.23836,-1.225,13.23836);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.225,16.34164,-0.6125,16.34164);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-0.6125,17.46787,0,17.46787);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0,17.25672,0.6125,17.25672);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0.6125,16.43115,1.225,16.43115);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.225,13.23213,1.8375,13.23213);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.8375,14.03574,2.45,14.03574);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(2.45,6.036721,3.0625,6.036721);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.0625,3.627541,3.675,3.627541);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.675,3.187541,4.2875,3.187541);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(4.2875,2.197049,4.9,2.197049);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420SKclusters_eta",16,-4.9,4.9);
   Calo_420__2->SetBinContent(1,2.184918);
   Calo_420__2->SetBinContent(2,3.124918);
   Calo_420__2->SetBinContent(3,3.547541);
   Calo_420__2->SetBinContent(4,6.034754);
   Calo_420__2->SetBinContent(5,13.74197);
   Calo_420__2->SetBinContent(6,13.23836);
   Calo_420__2->SetBinContent(7,16.34164);
   Calo_420__2->SetBinContent(8,17.46787);
   Calo_420__2->SetBinContent(9,17.25672);
   Calo_420__2->SetBinContent(10,16.43115);
   Calo_420__2->SetBinContent(11,13.23213);
   Calo_420__2->SetBinContent(12,14.03574);
   Calo_420__2->SetBinContent(13,6.036721);
   Calo_420__2->SetBinContent(14,3.627541);
   Calo_420__2->SetBinContent(15,3.187541);
   Calo_420__2->SetBinContent(16,2.197049);
   Calo_420__2->SetBinError(1,0.02676503);
   Calo_420__2->SetBinError(2,0.0320088);
   Calo_420__2->SetBinError(3,0.03410467);
   Calo_420__2->SetBinError(4,0.04448155);
   Calo_420__2->SetBinError(5,0.06712349);
   Calo_420__2->SetBinError(6,0.06588206);
   Calo_420__2->SetBinError(7,0.07319778);
   Calo_420__2->SetBinError(8,0.07567807);
   Calo_420__2->SetBinError(9,0.07521929);
   Calo_420__2->SetBinError(10,0.07339797);
   Calo_420__2->SetBinError(11,0.06586656);
   Calo_420__2->SetBinError(12,0.06783717);
   Calo_420__2->SetBinError(13,0.0444888);
   Calo_420__2->SetBinError(14,0.03448707);
   Calo_420__2->SetBinError(15,0.03232794);
   Calo_420__2->SetBinError(16,0.02683922);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(19.21466);
   Calo_420__2->SetEntries(462644);

   ci = TColor::GetColor("#000099");
   Calo_420__2->SetLineColor(ci);
   Calo_420__2->SetLineWidth(0);

   ci = TColor::GetColor("#ff0000");
   Calo_420__2->SetMarkerColor(ci);
   Calo_420__2->SetMarkerSize(0);
   Calo_420__2->GetXaxis()->SetRange(1,16);
   Calo_420__2->GetXaxis()->SetLabelFont(42);
   Calo_420__2->GetXaxis()->SetTitleOffset(1);
   Calo_420__2->GetXaxis()->SetTitleFont(42);
   Calo_420__2->GetYaxis()->SetLabelFont(42);
   Calo_420__2->GetYaxis()->SetTitleFont(42);
   Calo_420__2->GetZaxis()->SetLabelFont(42);
   Calo_420__2->GetZaxis()->SetTitleOffset(1);
   Calo_420__2->GetZaxis()->SetTitleFont(42);
   Calo_420__2->Draw("P same");
   
   TLegend *leg = new TLegend(0.8,0.5,0.92,0.62,NULL,"brNDC");
   leg->SetTextFont(62);
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
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TLine","Calo_420","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   All_GEP_Algo->Modified();
   All_GEP_Algo->cd();
   All_GEP_Algo->SetSelected(All_GEP_Algo);
}
