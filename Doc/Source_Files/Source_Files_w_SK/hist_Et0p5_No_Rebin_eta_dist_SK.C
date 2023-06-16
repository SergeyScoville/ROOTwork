#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0p5_No_Rebin_eta_dist_SK()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 15 17:27:38 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-5.018679,5.653846,26.34807);
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
   Calo_422__1->SetBinContent(1,1.58459);
   Calo_422__1->SetBinContent(2,2.266557);
   Calo_422__1->SetBinContent(3,2.995082);
   Calo_422__1->SetBinContent(4,4.391148);
   Calo_422__1->SetBinContent(5,13.94426);
   Calo_422__1->SetBinContent(6,15.21508);
   Calo_422__1->SetBinContent(7,19.10066);
   Calo_422__1->SetBinContent(8,21.83934);
   Calo_422__1->SetBinContent(9,21.5859);
   Calo_422__1->SetBinContent(10,19.33246);
   Calo_422__1->SetBinContent(11,15.31836);
   Calo_422__1->SetBinContent(12,14.11344);
   Calo_422__1->SetBinContent(13,4.405901);
   Calo_422__1->SetBinContent(14,2.983279);
   Calo_422__1->SetBinContent(15,2.310164);
   Calo_422__1->SetBinContent(16,1.588852);
   Calo_422__1->SetBinError(1,0.02279337);
   Calo_422__1->SetBinError(2,0.02726048);
   Calo_422__1->SetBinError(3,0.03133678);
   Calo_422__1->SetBinError(4,0.03794365);
   Calo_422__1->SetBinError(5,0.06761575);
   Calo_422__1->SetBinError(6,0.07062968);
   Calo_422__1->SetBinError(7,0.07913602);
   Calo_422__1->SetBinError(8,0.08461939);
   Calo_422__1->SetBinError(9,0.08412696);
   Calo_422__1->SetBinError(10,0.07961477);
   Calo_422__1->SetBinError(11,0.07086899);
   Calo_422__1->SetBinError(12,0.06802469);
   Calo_422__1->SetBinError(13,0.03800734);
   Calo_422__1->SetBinError(14,0.03127498);
   Calo_422__1->SetBinError(15,0.02752146);
   Calo_422__1->SetBinError(16,0.02282401);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(24.15239);
   Calo_422__1->SetEntries(497074);

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
   TLine *line = new TLine(-4.9,0,-4.9,24.15239);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,24.15239);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,24.15239);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,24.15239);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,24.15239);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,24.15239);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,24.15239);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,24.15239);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,24.15239);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,24.15239);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,24.15239);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,24.15239);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,24.15239);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,24.15239);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,24.15239);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,24.15239);
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
   pt_LaTex = pt->AddText("E_{T}^{TC} > 0.5");
   pt->Draw();
   line = new TLine(-4.9,2.183607,-4.2875,2.183607);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-4.2875,3.110492,-3.675,3.110492);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.675,3.584262,-3.0625,3.584262);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.0625,6.028852,-2.45,6.028852);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-2.45,13.06262,-1.8375,13.06262);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.8375,15.35836,-1.225,15.35836);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.225,20.00885,-0.6125,20.00885);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-0.6125,21.95672,0,21.95672);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0,21.74623,0.6125,21.74623);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0.6125,20.1941,1.225,20.1941);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.225,15.47607,1.8375,15.47607);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.8375,13.36852,2.45,13.36852);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(2.45,6.029508,3.0625,6.029508);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.0625,3.680984,3.675,3.680984);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.675,3.167869,4.2875,3.167869);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(4.2875,2.197049,4.9,2.197049);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420SKclusters_eta",16,-4.9,4.9);
   Calo_420__2->SetBinContent(1,2.183607);
   Calo_420__2->SetBinContent(2,3.110492);
   Calo_420__2->SetBinContent(3,3.584262);
   Calo_420__2->SetBinContent(4,6.028852);
   Calo_420__2->SetBinContent(5,13.06262);
   Calo_420__2->SetBinContent(6,15.35836);
   Calo_420__2->SetBinContent(7,20.00885);
   Calo_420__2->SetBinContent(8,21.95672);
   Calo_420__2->SetBinContent(9,21.74623);
   Calo_420__2->SetBinContent(10,20.1941);
   Calo_420__2->SetBinContent(11,15.47607);
   Calo_420__2->SetBinContent(12,13.36852);
   Calo_420__2->SetBinContent(13,6.029508);
   Calo_420__2->SetBinContent(14,3.680984);
   Calo_420__2->SetBinContent(15,3.167869);
   Calo_420__2->SetBinContent(16,2.197049);
   Calo_420__2->SetBinError(1,0.02675699);
   Calo_420__2->SetBinError(2,0.03193483);
   Calo_420__2->SetBinError(3,0.03428072);
   Calo_420__2->SetBinError(4,0.04445979);
   Calo_420__2->SetBinError(5,0.06544331);
   Calo_420__2->SetBinError(6,0.07096145);
   Calo_420__2->SetBinError(7,0.08099555);
   Calo_420__2->SetBinError(8,0.08484648);
   Calo_420__2->SetBinError(9,0.0844388);
   Calo_420__2->SetBinError(10,0.08136962);
   Calo_420__2->SetBinError(11,0.07123286);
   Calo_420__2->SetBinError(12,0.06620516);
   Calo_420__2->SetBinError(13,0.04446221);
   Calo_420__2->SetBinError(14,0.03474018);
   Calo_420__2->SetBinError(15,0.03222802);
   Calo_420__2->SetBinError(16,0.02683922);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(24.15239);
   Calo_420__2->SetEntries(522020);

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
