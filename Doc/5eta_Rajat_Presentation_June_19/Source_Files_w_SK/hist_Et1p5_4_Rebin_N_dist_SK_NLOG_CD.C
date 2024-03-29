#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p5_4_Rebin_N_dist_SK_NLOG_CD()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Fri Jun 16 18:41:31 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,53,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-80.41025,-6.101513,422.1538,0.7829418);
   All_GEP_Algo->SetFillColor(0);
   All_GEP_Algo->SetBorderMode(0);
   All_GEP_Algo->SetBorderSize(2);
   All_GEP_Algo->SetLogy();
   All_GEP_Algo->SetTickx(1);
   All_GEP_Algo->SetTicky(1);
   All_GEP_Algo->SetLeftMargin(0.16);
   All_GEP_Algo->SetRightMargin(0.06);
   All_GEP_Algo->SetTopMargin(0.07);
   All_GEP_Algo->SetBottomMargin(0.16);
   All_GEP_Algo->SetFrameBorderMode(0);
   All_GEP_Algo->SetFrameBorderMode(0);
   
   TH1F *Calo_422_cumulative__1 = new TH1F("Calo_422_cumulative__1","Cumulative Number of Topoclusters post SK",625,0,2500);
   Calo_422_cumulative__1->SetBinContent(1,1);
   Calo_422_cumulative__1->SetBinContent(2,1);
   Calo_422_cumulative__1->SetBinContent(3,1);
   Calo_422_cumulative__1->SetBinContent(4,1);
   Calo_422_cumulative__1->SetBinContent(5,1);
   Calo_422_cumulative__1->SetBinContent(6,1);
   Calo_422_cumulative__1->SetBinContent(7,1);
   Calo_422_cumulative__1->SetBinContent(8,1);
   Calo_422_cumulative__1->SetBinContent(9,1);
   Calo_422_cumulative__1->SetBinContent(10,0.9996721);
   Calo_422_cumulative__1->SetBinContent(11,0.9983606);
   Calo_422_cumulative__1->SetBinContent(12,0.9970492);
   Calo_422_cumulative__1->SetBinContent(13,0.9947541);
   Calo_422_cumulative__1->SetBinContent(14,0.9914754);
   Calo_422_cumulative__1->SetBinContent(15,0.9829508);
   Calo_422_cumulative__1->SetBinContent(16,0.9721311);
   Calo_422_cumulative__1->SetBinContent(17,0.9540983);
   Calo_422_cumulative__1->SetBinContent(18,0.9360656);
   Calo_422_cumulative__1->SetBinContent(19,0.9078688);
   Calo_422_cumulative__1->SetBinContent(20,0.877377);
   Calo_422_cumulative__1->SetBinContent(21,0.8416393);
   Calo_422_cumulative__1->SetBinContent(22,0.8009836);
   Calo_422_cumulative__1->SetBinContent(23,0.76);
   Calo_422_cumulative__1->SetBinContent(24,0.7177049);
   Calo_422_cumulative__1->SetBinContent(25,0.6740984);
   Calo_422_cumulative__1->SetBinContent(26,0.6183606);
   Calo_422_cumulative__1->SetBinContent(27,0.5639344);
   Calo_422_cumulative__1->SetBinContent(28,0.517377);
   Calo_422_cumulative__1->SetBinContent(29,0.4609836);
   Calo_422_cumulative__1->SetBinContent(30,0.4036065);
   Calo_422_cumulative__1->SetBinContent(31,0.3495082);
   Calo_422_cumulative__1->SetBinContent(32,0.2967213);
   Calo_422_cumulative__1->SetBinContent(33,0.2380328);
   Calo_422_cumulative__1->SetBinContent(34,0.1931148);
   Calo_422_cumulative__1->SetBinContent(35,0.1511475);
   Calo_422_cumulative__1->SetBinContent(36,0.1068852);
   Calo_422_cumulative__1->SetBinContent(37,0.08);
   Calo_422_cumulative__1->SetBinContent(38,0.0557377);
   Calo_422_cumulative__1->SetBinContent(39,0.04262295);
   Calo_422_cumulative__1->SetBinContent(40,0.02819672);
   Calo_422_cumulative__1->SetBinContent(41,0.01901639);
   Calo_422_cumulative__1->SetBinContent(42,0.009836066);
   Calo_422_cumulative__1->SetBinContent(43,0.006229508);
   Calo_422_cumulative__1->SetBinContent(44,0.003278689);
   Calo_422_cumulative__1->SetBinContent(45,0.001967213);
   Calo_422_cumulative__1->SetBinContent(46,0.0006557377);
   Calo_422_cumulative__1->SetBinContent(47,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(48,0.0003278689);
   Calo_422_cumulative__1->SetMinimum(1e-05);
   Calo_422_cumulative__1->SetMaximum(2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   Calo_422_cumulative__1->SetFillColor(ci);
   Calo_422_cumulative__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   Calo_422_cumulative__1->SetLineColor(ci);
   Calo_422_cumulative__1->SetLineWidth(2);
   Calo_422_cumulative__1->GetXaxis()->SetTitle("Number of Topoclusters");
   Calo_422_cumulative__1->GetXaxis()->SetRange(1,98);
   Calo_422_cumulative__1->GetXaxis()->SetLabelFont(42);
   Calo_422_cumulative__1->GetXaxis()->SetTitleOffset(1);
   Calo_422_cumulative__1->GetXaxis()->SetTitleFont(42);
   Calo_422_cumulative__1->GetYaxis()->SetTitle("Fraction of Events/4 TC");
   Calo_422_cumulative__1->GetYaxis()->SetLabelFont(42);
   Calo_422_cumulative__1->GetYaxis()->SetTitleFont(42);
   Calo_422_cumulative__1->GetZaxis()->SetLabelFont(42);
   Calo_422_cumulative__1->GetZaxis()->SetTitleOffset(1);
   Calo_422_cumulative__1->GetZaxis()->SetTitleFont(42);
   Calo_422_cumulative__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.6184808,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Cumulative Number of Topoclusters post SK");
   pt->Draw();
   
   pt = new TPaveText(0.605,0.87,0.675,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(72);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("ATLAS");
   pt->Draw();
   
   pt = new TPaveText(0.675,0.87,0.83,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("Simulation Internal");
   pt->Draw();
   
   pt = new TPaveText(0.6,0.83,0.76,0.87,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("HL-LHC <#mu>=200");
   pt->Draw();
   
   pt = new TPaveText(0.6,0.79,0.733,0.83,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("Minimum Bias");
   pt->Draw();
   
   pt = new TPaveText(0.6,0.75,0.694,0.79,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("E_{T}^{TC} > 1.5");
   pt->Draw();
   
   TH1F *Calo_420_cumulative__2 = new TH1F("Calo_420_cumulative__2","h_Calo420SKclusters_N",625,0,2500);
   Calo_420_cumulative__2->SetBinContent(1,1);
   Calo_420_cumulative__2->SetBinContent(2,1);
   Calo_420_cumulative__2->SetBinContent(3,1);
   Calo_420_cumulative__2->SetBinContent(4,1);
   Calo_420_cumulative__2->SetBinContent(5,1);
   Calo_420_cumulative__2->SetBinContent(6,1);
   Calo_420_cumulative__2->SetBinContent(7,1);
   Calo_420_cumulative__2->SetBinContent(8,1);
   Calo_420_cumulative__2->SetBinContent(9,1);
   Calo_420_cumulative__2->SetBinContent(10,1);
   Calo_420_cumulative__2->SetBinContent(11,1);
   Calo_420_cumulative__2->SetBinContent(12,0.9996721);
   Calo_420_cumulative__2->SetBinContent(13,0.9996721);
   Calo_420_cumulative__2->SetBinContent(14,0.9996721);
   Calo_420_cumulative__2->SetBinContent(15,0.9996721);
   Calo_420_cumulative__2->SetBinContent(16,0.9990164);
   Calo_420_cumulative__2->SetBinContent(17,0.9986885);
   Calo_420_cumulative__2->SetBinContent(18,0.9977049);
   Calo_420_cumulative__2->SetBinContent(19,0.9954098);
   Calo_420_cumulative__2->SetBinContent(20,0.9947541);
   Calo_420_cumulative__2->SetBinContent(21,0.9921311);
   Calo_420_cumulative__2->SetBinContent(22,0.9881967);
   Calo_420_cumulative__2->SetBinContent(23,0.9845902);
   Calo_420_cumulative__2->SetBinContent(24,0.9803278);
   Calo_420_cumulative__2->SetBinContent(25,0.9744262);
   Calo_420_cumulative__2->SetBinContent(26,0.9691803);
   Calo_420_cumulative__2->SetBinContent(27,0.9606557);
   Calo_420_cumulative__2->SetBinContent(28,0.9491803);
   Calo_420_cumulative__2->SetBinContent(29,0.9390164);
   Calo_420_cumulative__2->SetBinContent(30,0.9219672);
   Calo_420_cumulative__2->SetBinContent(31,0.8980328);
   Calo_420_cumulative__2->SetBinContent(32,0.8636066);
   Calo_420_cumulative__2->SetBinContent(33,0.8232787);
   Calo_420_cumulative__2->SetBinContent(34,0.7760656);
   Calo_420_cumulative__2->SetBinContent(35,0.7190164);
   Calo_420_cumulative__2->SetBinContent(36,0.6583607);
   Calo_420_cumulative__2->SetBinContent(37,0.5980328);
   Calo_420_cumulative__2->SetBinContent(38,0.5413114);
   Calo_420_cumulative__2->SetBinContent(39,0.4868852);
   Calo_420_cumulative__2->SetBinContent(40,0.4367213);
   Calo_420_cumulative__2->SetBinContent(41,0.3829508);
   Calo_420_cumulative__2->SetBinContent(42,0.3252459);
   Calo_420_cumulative__2->SetBinContent(43,0.275082);
   Calo_420_cumulative__2->SetBinContent(44,0.2281967);
   Calo_420_cumulative__2->SetBinContent(45,0.1888525);
   Calo_420_cumulative__2->SetBinContent(46,0.1544262);
   Calo_420_cumulative__2->SetBinContent(47,0.1285246);
   Calo_420_cumulative__2->SetBinContent(48,0.1016393);
   Calo_420_cumulative__2->SetBinContent(49,0.08098361);
   Calo_420_cumulative__2->SetBinContent(50,0.06196721);
   Calo_420_cumulative__2->SetBinContent(51,0.04852459);
   Calo_420_cumulative__2->SetBinContent(52,0.03540984);
   Calo_420_cumulative__2->SetBinContent(53,0.02491803);
   Calo_420_cumulative__2->SetBinContent(54,0.01901639);
   Calo_420_cumulative__2->SetBinContent(55,0.0147541);
   Calo_420_cumulative__2->SetBinContent(56,0.01180328);
   Calo_420_cumulative__2->SetBinContent(57,0.00852459);
   Calo_420_cumulative__2->SetBinContent(58,0.007213115);
   Calo_420_cumulative__2->SetBinContent(59,0.004590164);
   Calo_420_cumulative__2->SetBinContent(60,0.00295082);
   Calo_420_cumulative__2->SetBinContent(61,0.002295082);
   Calo_420_cumulative__2->SetBinContent(62,0.0006557377);
   Calo_420_cumulative__2->SetBinContent(63,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(64,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(65,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(66,0.0003278689);
   Calo_420_cumulative__2->SetMinimum(1e-05);
   Calo_420_cumulative__2->SetMaximum(2);
   Calo_420_cumulative__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   Calo_420_cumulative__2->SetLineColor(ci);
   Calo_420_cumulative__2->SetLineWidth(2);
   Calo_420_cumulative__2->GetXaxis()->SetRange(1,98);
   Calo_420_cumulative__2->GetXaxis()->SetLabelFont(42);
   Calo_420_cumulative__2->GetXaxis()->SetTitleOffset(1);
   Calo_420_cumulative__2->GetXaxis()->SetTitleFont(42);
   Calo_420_cumulative__2->GetYaxis()->SetLabelFont(42);
   Calo_420_cumulative__2->GetYaxis()->SetTitleFont(42);
   Calo_420_cumulative__2->GetZaxis()->SetLabelFont(42);
   Calo_420_cumulative__2->GetZaxis()->SetTitleOffset(1);
   Calo_420_cumulative__2->GetZaxis()->SetTitleFont(42);
   Calo_420_cumulative__2->Draw("hist same");
   
   TLegend *leg = new TLegend(0.7,0.5,0.81,0.62,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Calo_422_cumulative","Calo 422","lpf");

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
   entry=leg->AddEntry("Calo_420_cumulative","Calo 420","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   All_GEP_Algo->Modified();
   All_GEP_Algo->cd();
   All_GEP_Algo->SetSelected(All_GEP_Algo);
}
