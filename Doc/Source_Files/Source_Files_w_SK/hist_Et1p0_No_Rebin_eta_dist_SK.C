#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p0_No_Rebin_eta_dist_SK()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 15 17:27:41 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-4.844065,5.653846,25.43134);
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
   Calo_422__1->SetBinContent(1,1.583934);
   Calo_422__1->SetBinContent(2,2.252459);
   Calo_422__1->SetBinContent(3,2.920656);
   Calo_422__1->SetBinContent(4,4.278361);
   Calo_422__1->SetBinContent(5,12.93475);
   Calo_422__1->SetBinContent(6,13.90885);
   Calo_422__1->SetBinContent(7,17.44492);
   Calo_422__1->SetBinContent(8,19.93344);
   Calo_422__1->SetBinContent(9,19.71705);
   Calo_422__1->SetBinContent(10,17.60754);
   Calo_422__1->SetBinContent(11,13.98361);
   Calo_422__1->SetBinContent(12,13.10459);
   Calo_422__1->SetBinContent(13,4.287541);
   Calo_422__1->SetBinContent(14,2.908853);
   Calo_422__1->SetBinContent(15,2.297705);
   Calo_422__1->SetBinContent(16,1.585902);
   Calo_422__1->SetBinError(1,0.02278865);
   Calo_422__1->SetBinError(2,0.02717556);
   Calo_422__1->SetBinError(3,0.03094498);
   Calo_422__1->SetBinError(4,0.03745319);
   Calo_422__1->SetBinError(5,0.06512222);
   Calo_422__1->SetBinError(6,0.06752984);
   Calo_422__1->SetBinError(7,0.07562834);
   Calo_422__1->SetBinError(8,0.08084278);
   Calo_422__1->SetBinError(9,0.08040278);
   Calo_422__1->SetBinError(10,0.07598003);
   Calo_422__1->SetBinError(11,0.06771107);
   Calo_422__1->SetBinError(12,0.06554836);
   Calo_422__1->SetBinError(13,0.03749335);
   Calo_422__1->SetBinError(14,0.03088239);
   Calo_422__1->SetBinError(15,0.02744715);
   Calo_422__1->SetBinError(16,0.0228028);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(23.31207);
   Calo_422__1->SetEntries(459788);

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
   TLine *line = new TLine(-4.9,0,-4.9,23.31207);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,23.31207);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,23.31207);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,23.31207);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,23.31207);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,23.31207);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,23.31207);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,23.31207);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,23.31207);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,23.31207);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,23.31207);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,23.31207);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,23.31207);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,23.31207);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,23.31207);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,23.31207);
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
   pt_LaTex = pt->AddText("E_{T}^{TC} > 1.0");
   pt->Draw();
   line = new TLine(-4.9,2.183934,-4.2875,2.183934);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-4.2875,3.107213,-3.675,3.107213);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.675,3.579016,-3.0625,3.579016);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.0625,6.037049,-2.45,6.037049);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-2.45,13.27672,-1.8375,13.27672);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.8375,14.96918,-1.225,14.96918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.225,19.40131,-0.6125,19.40131);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-0.6125,21.19279,0,21.19279);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0,21.01049,0.6125,21.01049);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0.6125,19.53934,1.225,19.53934);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.225,15.08787,1.8375,15.08787);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.8375,13.56984,2.45,13.56984);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(2.45,6.038689,3.0625,6.038689);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.0625,3.674426,3.675,3.674426);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.675,3.165902,4.2875,3.165902);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(4.2875,2.196393,4.9,2.196393);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420SKclusters_eta",16,-4.9,4.9);
   Calo_420__2->SetBinContent(1,2.183934);
   Calo_420__2->SetBinContent(2,3.107213);
   Calo_420__2->SetBinContent(3,3.579016);
   Calo_420__2->SetBinContent(4,6.037049);
   Calo_420__2->SetBinContent(5,13.27672);
   Calo_420__2->SetBinContent(6,14.96918);
   Calo_420__2->SetBinContent(7,19.40131);
   Calo_420__2->SetBinContent(8,21.19279);
   Calo_420__2->SetBinContent(9,21.01049);
   Calo_420__2->SetBinContent(10,19.53934);
   Calo_420__2->SetBinContent(11,15.08787);
   Calo_420__2->SetBinContent(12,13.56984);
   Calo_420__2->SetBinContent(13,6.038689);
   Calo_420__2->SetBinContent(14,3.674426);
   Calo_420__2->SetBinContent(15,3.165902);
   Calo_420__2->SetBinContent(16,2.196393);
   Calo_420__2->SetBinError(1,0.026759);
   Calo_420__2->SetBinError(2,0.03191799);
   Calo_420__2->SetBinError(3,0.03425563);
   Calo_420__2->SetBinError(4,0.04449);
   Calo_420__2->SetBinError(5,0.06597745);
   Calo_420__2->SetBinError(6,0.07005661);
   Calo_420__2->SetBinError(7,0.07975641);
   Calo_420__2->SetBinError(8,0.08335739);
   Calo_420__2->SetBinError(9,0.08299811);
   Calo_420__2->SetBinError(10,0.08003963);
   Calo_420__2->SetBinError(11,0.07033379);
   Calo_420__2->SetBinError(12,0.06670177);
   Calo_420__2->SetBinError(13,0.04449604);
   Calo_420__2->SetBinError(14,0.03470922);
   Calo_420__2->SetBinError(15,0.03221802);
   Calo_420__2->SetBinError(16,0.02683522);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(23.31207);
   Calo_420__2->SetEntries(512492);

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
