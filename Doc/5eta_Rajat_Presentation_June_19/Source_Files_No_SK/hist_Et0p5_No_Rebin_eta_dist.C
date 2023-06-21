#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0p5_No_Rebin_eta_dist()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 15 17:24:28 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-16.32195,5.653846,85.69023);
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
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Average number of topoclusters as function of #eta",16,-4.9,4.9);
   Calo_422__1->SetBinContent(1,1.685902);
   Calo_422__1->SetBinContent(2,2.756393);
   Calo_422__1->SetBinContent(3,4.972459);
   Calo_422__1->SetBinContent(4,7.033771);
   Calo_422__1->SetBinContent(5,40.09541);
   Calo_422__1->SetBinContent(6,46.69902);
   Calo_422__1->SetBinContent(7,53.52721);
   Calo_422__1->SetBinContent(8,58.94984);
   Calo_422__1->SetBinContent(9,58.1518);
   Calo_422__1->SetBinContent(10,53.73869);
   Calo_422__1->SetBinContent(11,46.57836);
   Calo_422__1->SetBinContent(12,40.48853);
   Calo_422__1->SetBinContent(13,7.10918);
   Calo_422__1->SetBinContent(14,4.958689);
   Calo_422__1->SetBinContent(15,2.811803);
   Calo_422__1->SetBinContent(16,1.683934);
   Calo_422__1->SetBinError(1,0.02351073);
   Calo_422__1->SetBinError(2,0.03006219);
   Calo_422__1->SetBinError(3,0.04037715);
   Calo_422__1->SetBinError(4,0.04802243);
   Calo_422__1->SetBinError(5,0.1146562);
   Calo_422__1->SetBinError(6,0.1237382);
   Calo_422__1->SetBinError(7,0.1324761);
   Calo_422__1->SetBinError(8,0.1390245);
   Calo_422__1->SetBinError(9,0.1380803);
   Calo_422__1->SetBinError(10,0.1327375);
   Calo_422__1->SetBinError(11,0.1235783);
   Calo_422__1->SetBinError(12,0.1152169);
   Calo_422__1->SetBinError(13,0.04827918);
   Calo_422__1->SetBinError(14,0.0403212);
   Calo_422__1->SetBinError(15,0.03036285);
   Calo_422__1->SetBinError(16,0.02349701);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(78.54938);
   Calo_422__1->SetEntries(1315285);

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
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.6677295,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Average number of topoclusters as function of #eta");
   pt->Draw();
   TLine *line = new TLine(-4.9,0,-4.9,78.54938);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,78.54938);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,78.54938);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,78.54938);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,78.54938);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,78.54938);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,78.54938);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,78.54938);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,78.54938);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,78.54938);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,78.54938);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,78.54938);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,78.54938);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,78.54938);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,78.54938);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,78.54938);
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
   line = new TLine(-4.9,2.672459,-4.2875,2.672459);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-4.2875,4.684262,-3.675,4.684262);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.675,8.391804,-3.0625,8.391804);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.0625,11.81836,-2.45,11.81836);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-2.45,68.54164,-1.8375,68.54164);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.8375,65.66295,-1.225,65.66295);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.225,67.89606,-0.6125,67.89606);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-0.6125,71.40852,0,71.40852);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0,70.66557,0.6125,70.66557);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0.6125,68.53639,1.225,68.53639);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.225,65.58885,1.8375,65.58885);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.8375,69.26623,2.45,69.26623);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(2.45,11.88885,3.0625,11.88885);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.0625,8.437049,3.675,8.437049);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.675,4.829836,4.2875,4.829836);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(4.2875,2.665902,4.9,2.665902);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420TopoClusters_eta",16,-4.9,4.9);
   Calo_420__2->SetBinContent(1,2.672459);
   Calo_420__2->SetBinContent(2,4.684262);
   Calo_420__2->SetBinContent(3,8.391804);
   Calo_420__2->SetBinContent(4,11.81836);
   Calo_420__2->SetBinContent(5,68.54164);
   Calo_420__2->SetBinContent(6,65.66295);
   Calo_420__2->SetBinContent(7,67.89606);
   Calo_420__2->SetBinContent(8,71.40852);
   Calo_420__2->SetBinContent(9,70.66557);
   Calo_420__2->SetBinContent(10,68.53639);
   Calo_420__2->SetBinContent(11,65.58885);
   Calo_420__2->SetBinContent(12,69.26623);
   Calo_420__2->SetBinContent(13,11.88885);
   Calo_420__2->SetBinContent(14,8.437049);
   Calo_420__2->SetBinContent(15,4.829836);
   Calo_420__2->SetBinContent(16,2.665902);
   Calo_420__2->SetBinError(1,0.02960095);
   Calo_420__2->SetBinError(2,0.03918959);
   Calo_420__2->SetBinError(3,0.05245389);
   Calo_420__2->SetBinError(4,0.06224847);
   Calo_420__2->SetBinError(5,0.1499089);
   Calo_420__2->SetBinError(6,0.1467271);
   Calo_420__2->SetBinError(7,0.1492012);
   Calo_420__2->SetBinError(8,0.1530119);
   Calo_420__2->SetBinError(9,0.1522138);
   Calo_420__2->SetBinError(10,0.1499031);
   Calo_420__2->SetBinError(11,0.1466443);
   Calo_420__2->SetBinError(12,0.1506992);
   Calo_420__2->SetBinError(13,0.06243384);
   Calo_420__2->SetBinError(14,0.05259511);
   Calo_420__2->SetBinError(15,0.03979388);
   Calo_420__2->SetBinError(16,0.02956461);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(78.54938);
   Calo_420__2->SetEntries(1839012);

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
