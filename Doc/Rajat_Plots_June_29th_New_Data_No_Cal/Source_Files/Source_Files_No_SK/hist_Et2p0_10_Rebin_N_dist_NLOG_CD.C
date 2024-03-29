#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et2p0_10_Rebin_N_dist_NLOG_CD()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 29 14:11:18 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-412.3077,-6.184201,2164.615,1.217058);
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
   
   TH1F *CalosP422_cumulative__1 = new TH1F("CalosP422_cumulative__1","Cumulative Number of Topoclusters",250,0,2500);
   CalosP422_cumulative__1->SetBinContent(1,1);
   CalosP422_cumulative__1->SetBinContent(2,1);
   CalosP422_cumulative__1->SetBinContent(3,0.9990164);
   CalosP422_cumulative__1->SetBinContent(4,0.9783607);
   CalosP422_cumulative__1->SetBinContent(5,0.8973771);
   CalosP422_cumulative__1->SetBinContent(6,0.7462295);
   CalosP422_cumulative__1->SetBinContent(7,0.56);
   CalosP422_cumulative__1->SetBinContent(8,0.4059016);
   CalosP422_cumulative__1->SetBinContent(9,0.2885246);
   CalosP422_cumulative__1->SetBinContent(10,0.2104918);
   CalosP422_cumulative__1->SetBinContent(11,0.157377);
   CalosP422_cumulative__1->SetBinContent(12,0.1232787);
   CalosP422_cumulative__1->SetBinContent(13,0.1006557);
   CalosP422_cumulative__1->SetBinContent(14,0.08);
   CalosP422_cumulative__1->SetBinContent(15,0.07081968);
   CalosP422_cumulative__1->SetBinContent(16,0.06196721);
   CalosP422_cumulative__1->SetBinContent(17,0.05278689);
   CalosP422_cumulative__1->SetBinContent(18,0.04754099);
   CalosP422_cumulative__1->SetBinContent(19,0.04196721);
   CalosP422_cumulative__1->SetBinContent(20,0.03672131);
   CalosP422_cumulative__1->SetBinContent(21,0.03213115);
   CalosP422_cumulative__1->SetBinContent(22,0.02852459);
   CalosP422_cumulative__1->SetBinContent(23,0.02393443);
   CalosP422_cumulative__1->SetBinContent(24,0.02163934);
   CalosP422_cumulative__1->SetBinContent(25,0.01803279);
   CalosP422_cumulative__1->SetBinContent(26,0.01540984);
   CalosP422_cumulative__1->SetBinContent(27,0.01409836);
   CalosP422_cumulative__1->SetBinContent(28,0.01213115);
   CalosP422_cumulative__1->SetBinContent(29,0.01081967);
   CalosP422_cumulative__1->SetBinContent(30,0.009836066);
   CalosP422_cumulative__1->SetBinContent(31,0.00852459);
   CalosP422_cumulative__1->SetBinContent(32,0.007868852);
   CalosP422_cumulative__1->SetBinContent(33,0.006885246);
   CalosP422_cumulative__1->SetBinContent(34,0.006229508);
   CalosP422_cumulative__1->SetBinContent(35,0.00557377);
   CalosP422_cumulative__1->SetBinContent(36,0.005245902);
   CalosP422_cumulative__1->SetBinContent(37,0.004590164);
   CalosP422_cumulative__1->SetBinContent(38,0.004262295);
   CalosP422_cumulative__1->SetBinContent(39,0.003278689);
   CalosP422_cumulative__1->SetBinContent(40,0.002295082);
   CalosP422_cumulative__1->SetBinContent(41,0.002295082);
   CalosP422_cumulative__1->SetBinContent(42,0.002295082);
   CalosP422_cumulative__1->SetBinContent(43,0.001967213);
   CalosP422_cumulative__1->SetBinContent(44,0.001639344);
   CalosP422_cumulative__1->SetBinContent(45,0.001639344);
   CalosP422_cumulative__1->SetBinContent(46,0.001311475);
   CalosP422_cumulative__1->SetBinContent(47,0.0009836066);
   CalosP422_cumulative__1->SetBinContent(48,0.0006557377);
   CalosP422_cumulative__1->SetBinContent(49,0.0003278689);
   CalosP422_cumulative__1->SetBinContent(50,0.0003278689);
   CalosP422_cumulative__1->SetBinContent(51,0.0003278689);
   CalosP422_cumulative__1->SetBinContent(52,0.0003278689);
   CalosP422_cumulative__1->SetBinContent(53,0.0003278689);
   CalosP422_cumulative__1->SetBinContent(54,0.0003278689);
   CalosP422_cumulative__1->SetBinContent(55,0.0003278689);
   CalosP422_cumulative__1->SetMinimum(1e-05);
   CalosP422_cumulative__1->SetMaximum(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   CalosP422_cumulative__1->SetFillColor(ci);
   CalosP422_cumulative__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   CalosP422_cumulative__1->SetLineColor(ci);
   CalosP422_cumulative__1->SetLineWidth(2);
   CalosP422_cumulative__1->GetXaxis()->SetTitle("Number of Topoclusters");
   CalosP422_cumulative__1->GetXaxis()->SetRange(1,201);
   CalosP422_cumulative__1->GetXaxis()->SetLabelFont(42);
   CalosP422_cumulative__1->GetXaxis()->SetTitleSize(0.04);
   CalosP422_cumulative__1->GetXaxis()->SetTitleOffset(1);
   CalosP422_cumulative__1->GetXaxis()->SetTitleFont(42);
   CalosP422_cumulative__1->GetYaxis()->SetTitle("Fraction of Events/10 TC");
   CalosP422_cumulative__1->GetYaxis()->SetLabelFont(42);
   CalosP422_cumulative__1->GetYaxis()->SetTitleSize(0.04);
   CalosP422_cumulative__1->GetYaxis()->SetTitleFont(42);
   CalosP422_cumulative__1->GetZaxis()->SetLabelFont(42);
   CalosP422_cumulative__1->GetZaxis()->SetTitleOffset(1);
   CalosP422_cumulative__1->GetZaxis()->SetTitleFont(42);
   CalosP422_cumulative__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.5049583,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Cumulative Number of Topoclusters");
   pt->Draw();
   
   pt = new TPaveText(0.545,0.85,0.65,0.9,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(72);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("ATLAS");
   pt->Draw();
   
   pt = new TPaveText(0.6505,0.85,0.905,0.9,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("Simulation Internal");
   pt->Draw();
   
   pt = new TPaveText(0.545,0.8,0.782,0.85,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("HL-LHC <#mu>=200");
   pt->Draw();
   
   pt = new TPaveText(0.545,0.76,0.735,0.81,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("Minimum Bias");
   pt->Draw();
   
   pt = new TPaveText(0.545,0.71,0.665,0.76,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.05);
   pt_LaTex = pt->AddText("E_{T}^{TC} > 2.0");
   pt->Draw();
   
   TH1F *CalosP420_cumulative__2 = new TH1F("CalosP420_cumulative__2","h_Calo420TopoClusters_N",250,0,2500);
   CalosP420_cumulative__2->SetBinContent(1,1);
   CalosP420_cumulative__2->SetBinContent(2,1);
   CalosP420_cumulative__2->SetBinContent(3,1);
   CalosP420_cumulative__2->SetBinContent(4,0.9960656);
   CalosP420_cumulative__2->SetBinContent(5,0.9816393);
   CalosP420_cumulative__2->SetBinContent(6,0.942623);
   CalosP420_cumulative__2->SetBinContent(7,0.8760656);
   CalosP420_cumulative__2->SetBinContent(8,0.789836);
   CalosP420_cumulative__2->SetBinContent(9,0.6911476);
   CalosP420_cumulative__2->SetBinContent(10,0.5901639);
   CalosP420_cumulative__2->SetBinContent(11,0.4980328);
   CalosP420_cumulative__2->SetBinContent(12,0.4259017);
   CalosP420_cumulative__2->SetBinContent(13,0.3580328);
   CalosP420_cumulative__2->SetBinContent(14,0.3081967);
   CalosP420_cumulative__2->SetBinContent(15,0.2619672);
   CalosP420_cumulative__2->SetBinContent(16,0.2301639);
   CalosP420_cumulative__2->SetBinContent(17,0.2042623);
   CalosP420_cumulative__2->SetBinContent(18,0.1842623);
   CalosP420_cumulative__2->SetBinContent(19,0.1639344);
   CalosP420_cumulative__2->SetBinContent(20,0.1504918);
   CalosP420_cumulative__2->SetBinContent(21,0.1367213);
   CalosP420_cumulative__2->SetBinContent(22,0.1265574);
   CalosP420_cumulative__2->SetBinContent(23,0.1167213);
   CalosP420_cumulative__2->SetBinContent(24,0.1101639);
   CalosP420_cumulative__2->SetBinContent(25,0.1019672);
   CalosP420_cumulative__2->SetBinContent(26,0.09639344);
   CalosP420_cumulative__2->SetBinContent(27,0.09213115);
   CalosP420_cumulative__2->SetBinContent(28,0.08557377);
   CalosP420_cumulative__2->SetBinContent(29,0.08196721);
   CalosP420_cumulative__2->SetBinContent(30,0.07770492);
   CalosP420_cumulative__2->SetBinContent(31,0.07278688);
   CalosP420_cumulative__2->SetBinContent(32,0.06950819);
   CalosP420_cumulative__2->SetBinContent(33,0.06491803);
   CalosP420_cumulative__2->SetBinContent(34,0.06262295);
   CalosP420_cumulative__2->SetBinContent(35,0.06032787);
   CalosP420_cumulative__2->SetBinContent(36,0.05836065);
   CalosP420_cumulative__2->SetBinContent(37,0.05442623);
   CalosP420_cumulative__2->SetBinContent(38,0.05016394);
   CalosP420_cumulative__2->SetBinContent(39,0.04688524);
   CalosP420_cumulative__2->SetBinContent(40,0.04393443);
   CalosP420_cumulative__2->SetBinContent(41,0.04131148);
   CalosP420_cumulative__2->SetBinContent(42,0.03901639);
   CalosP420_cumulative__2->SetBinContent(43,0.0357377);
   CalosP420_cumulative__2->SetBinContent(44,0.03377049);
   CalosP420_cumulative__2->SetBinContent(45,0.03016393);
   CalosP420_cumulative__2->SetBinContent(46,0.02983607);
   CalosP420_cumulative__2->SetBinContent(47,0.02786885);
   CalosP420_cumulative__2->SetBinContent(48,0.02721312);
   CalosP420_cumulative__2->SetBinContent(49,0.02459016);
   CalosP420_cumulative__2->SetBinContent(50,0.02262295);
   CalosP420_cumulative__2->SetBinContent(51,0.02065574);
   CalosP420_cumulative__2->SetBinContent(52,0.01836066);
   CalosP420_cumulative__2->SetBinContent(53,0.01704918);
   CalosP420_cumulative__2->SetBinContent(54,0.01540984);
   CalosP420_cumulative__2->SetBinContent(55,0.01508197);
   CalosP420_cumulative__2->SetBinContent(56,0.01409836);
   CalosP420_cumulative__2->SetBinContent(57,0.01311475);
   CalosP420_cumulative__2->SetBinContent(58,0.01245902);
   CalosP420_cumulative__2->SetBinContent(59,0.01147541);
   CalosP420_cumulative__2->SetBinContent(60,0.01147541);
   CalosP420_cumulative__2->SetBinContent(61,0.0104918);
   CalosP420_cumulative__2->SetBinContent(62,0.0104918);
   CalosP420_cumulative__2->SetBinContent(63,0.008852459);
   CalosP420_cumulative__2->SetBinContent(64,0.008852459);
   CalosP420_cumulative__2->SetBinContent(65,0.007868852);
   CalosP420_cumulative__2->SetBinContent(66,0.007213115);
   CalosP420_cumulative__2->SetBinContent(67,0.007213115);
   CalosP420_cumulative__2->SetBinContent(68,0.007213115);
   CalosP420_cumulative__2->SetBinContent(69,0.006557377);
   CalosP420_cumulative__2->SetBinContent(70,0.006557377);
   CalosP420_cumulative__2->SetBinContent(71,0.00557377);
   CalosP420_cumulative__2->SetBinContent(72,0.004918033);
   CalosP420_cumulative__2->SetBinContent(73,0.004590164);
   CalosP420_cumulative__2->SetBinContent(74,0.004262295);
   CalosP420_cumulative__2->SetBinContent(75,0.003278689);
   CalosP420_cumulative__2->SetBinContent(76,0.00295082);
   CalosP420_cumulative__2->SetBinContent(77,0.00295082);
   CalosP420_cumulative__2->SetBinContent(78,0.00295082);
   CalosP420_cumulative__2->SetBinContent(79,0.002622951);
   CalosP420_cumulative__2->SetBinContent(80,0.002295082);
   CalosP420_cumulative__2->SetBinContent(81,0.002295082);
   CalosP420_cumulative__2->SetBinContent(82,0.002295082);
   CalosP420_cumulative__2->SetBinContent(83,0.001639344);
   CalosP420_cumulative__2->SetBinContent(84,0.001639344);
   CalosP420_cumulative__2->SetBinContent(85,0.001639344);
   CalosP420_cumulative__2->SetBinContent(86,0.001639344);
   CalosP420_cumulative__2->SetBinContent(87,0.001639344);
   CalosP420_cumulative__2->SetBinContent(88,0.0009836066);
   CalosP420_cumulative__2->SetBinContent(89,0.0006557377);
   CalosP420_cumulative__2->SetBinContent(90,0.0006557377);
   CalosP420_cumulative__2->SetBinContent(91,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(92,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(93,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(94,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(95,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(96,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(97,0.0003278689);
   CalosP420_cumulative__2->SetBinContent(98,0.0003278689);
   CalosP420_cumulative__2->SetMinimum(1e-05);
   CalosP420_cumulative__2->SetMaximum(5);
   CalosP420_cumulative__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   CalosP420_cumulative__2->SetLineColor(ci);
   CalosP420_cumulative__2->SetLineWidth(2);
   CalosP420_cumulative__2->GetXaxis()->SetRange(1,201);
   CalosP420_cumulative__2->GetXaxis()->SetLabelFont(42);
   CalosP420_cumulative__2->GetXaxis()->SetTitleOffset(1);
   CalosP420_cumulative__2->GetXaxis()->SetTitleFont(42);
   CalosP420_cumulative__2->GetYaxis()->SetLabelFont(42);
   CalosP420_cumulative__2->GetYaxis()->SetTitleFont(42);
   CalosP420_cumulative__2->GetZaxis()->SetLabelFont(42);
   CalosP420_cumulative__2->GetZaxis()->SetTitleOffset(1);
   CalosP420_cumulative__2->GetZaxis()->SetTitleFont(42);
   CalosP420_cumulative__2->Draw("hist same");
   
   TLegend *leg = new TLegend(0.7,0.3,0.83,0.42,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Calo 422_cumulative","Calo 422","lpf");

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
   entry=leg->AddEntry("Calo 420_cumulative","Calo 420","l");

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
