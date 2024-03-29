#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et2p0_10_Rebin_N_dist_NLOG()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Fri Jun 16 17:41:56 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,53,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-412.3077,-6.101513,2164.615,0.7829418);
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
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","Number of Topoclusters",250,0,2500);
   Calo_422__1->SetBinContent(3,0.006885246);
   Calo_422__1->SetBinContent(4,0.04918033);
   Calo_422__1->SetBinContent(5,0.107541);
   Calo_422__1->SetBinContent(6,0.1567213);
   Calo_422__1->SetBinContent(7,0.1619672);
   Calo_422__1->SetBinContent(8,0.1390164);
   Calo_422__1->SetBinContent(9,0.09639344);
   Calo_422__1->SetBinContent(10,0.07311475);
   Calo_422__1->SetBinContent(11,0.04459016);
   Calo_422__1->SetBinContent(12,0.0347541);
   Calo_422__1->SetBinContent(13,0.02065574);
   Calo_422__1->SetBinContent(14,0.01901639);
   Calo_422__1->SetBinContent(15,0.01311475);
   Calo_422__1->SetBinContent(16,0.009508196);
   Calo_422__1->SetBinContent(17,0.006229508);
   Calo_422__1->SetBinContent(18,0.009180328);
   Calo_422__1->SetBinContent(19,0.004590164);
   Calo_422__1->SetBinContent(20,0.004590164);
   Calo_422__1->SetBinContent(21,0.00557377);
   Calo_422__1->SetBinContent(22,0.004262295);
   Calo_422__1->SetBinContent(23,0.005245902);
   Calo_422__1->SetBinContent(24,0.002622951);
   Calo_422__1->SetBinContent(25,0.002622951);
   Calo_422__1->SetBinContent(26,0.003606557);
   Calo_422__1->SetBinContent(27,0.001967213);
   Calo_422__1->SetBinContent(28,0.001311475);
   Calo_422__1->SetBinContent(29,0.001639344);
   Calo_422__1->SetBinContent(30,0.001311475);
   Calo_422__1->SetBinContent(31,0.001311475);
   Calo_422__1->SetBinContent(32,0.0009836066);
   Calo_422__1->SetBinContent(33,0.001639344);
   Calo_422__1->SetBinContent(34,0.0006557377);
   Calo_422__1->SetBinContent(35,0.0003278689);
   Calo_422__1->SetBinContent(36,0.0006557377);
   Calo_422__1->SetBinContent(37,0.0006557377);
   Calo_422__1->SetBinContent(38,0.0009836066);
   Calo_422__1->SetBinContent(39,0.0006557377);
   Calo_422__1->SetBinContent(40,0.0006557377);
   Calo_422__1->SetBinContent(42,0.0006557377);
   Calo_422__1->SetBinContent(44,0.0006557377);
   Calo_422__1->SetBinContent(45,0.0006557377);
   Calo_422__1->SetBinContent(48,0.0006557377);
   Calo_422__1->SetBinContent(52,0.0003278689);
   Calo_422__1->SetBinContent(54,0.0003278689);
   Calo_422__1->SetBinContent(55,0.0003278689);
   Calo_422__1->SetBinContent(56,0.0003278689);
   Calo_422__1->SetBinContent(67,0.0003278689);
   Calo_422__1->SetMinimum(1e-05);
   Calo_422__1->SetMaximum(2);
   Calo_422__1->SetEntries(5550);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   Calo_422__1->SetFillColor(ci);
   Calo_422__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   Calo_422__1->SetLineColor(ci);
   Calo_422__1->SetLineWidth(2);
   Calo_422__1->GetXaxis()->SetTitle("Number of Topoclusters");
   Calo_422__1->GetXaxis()->SetRange(1,201);
   Calo_422__1->GetXaxis()->SetLabelFont(42);
   Calo_422__1->GetXaxis()->SetTitleOffset(1);
   Calo_422__1->GetXaxis()->SetTitleFont(42);
   Calo_422__1->GetYaxis()->SetTitle("Fraction of Events/10 TC");
   Calo_422__1->GetYaxis()->SetLabelFont(42);
   Calo_422__1->GetYaxis()->SetTitleFont(42);
   Calo_422__1->GetZaxis()->SetLabelFont(42);
   Calo_422__1->GetZaxis()->SetTitleOffset(1);
   Calo_422__1->GetZaxis()->SetTitleFont(42);
   Calo_422__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9423548,0.3463606,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Number of Topoclusters");
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
   pt_LaTex = pt->AddText("E_{T}^{TC} > 2.0");
   pt->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420TopoClusters_N",250,0,2500);
   Calo_420__2->SetBinContent(4,0.0003278689);
   Calo_420__2->SetBinContent(5,0.001311475);
   Calo_420__2->SetBinContent(6,0.006557377);
   Calo_420__2->SetBinContent(7,0.01737705);
   Calo_420__2->SetBinContent(8,0.03344262);
   Calo_420__2->SetBinContent(9,0.04163934);
   Calo_420__2->SetBinContent(10,0.05409836);
   Calo_420__2->SetBinContent(11,0.06491803);
   Calo_420__2->SetBinContent(12,0.06557377);
   Calo_420__2->SetBinContent(13,0.07147541);
   Calo_420__2->SetBinContent(14,0.06688525);
   Calo_420__2->SetBinContent(15,0.06590164);
   Calo_420__2->SetBinContent(16,0.05737705);
   Calo_420__2->SetBinContent(17,0.05639344);
   Calo_420__2->SetBinContent(18,0.03704918);
   Calo_420__2->SetBinContent(19,0.03901639);
   Calo_420__2->SetBinContent(20,0.03147541);
   Calo_420__2->SetBinContent(21,0.03180328);
   Calo_420__2->SetBinContent(22,0.02557377);
   Calo_420__2->SetBinContent(23,0.01934426);
   Calo_420__2->SetBinContent(24,0.0157377);
   Calo_420__2->SetBinContent(25,0.01803279);
   Calo_420__2->SetBinContent(26,0.01409836);
   Calo_420__2->SetBinContent(27,0.01278689);
   Calo_420__2->SetBinContent(28,0.01081967);
   Calo_420__2->SetBinContent(29,0.009836066);
   Calo_420__2->SetBinContent(30,0.006557377);
   Calo_420__2->SetBinContent(31,0.006229508);
   Calo_420__2->SetBinContent(32,0.006885246);
   Calo_420__2->SetBinContent(33,0.007213115);
   Calo_420__2->SetBinContent(34,0.003606557);
   Calo_420__2->SetBinContent(35,0.003934426);
   Calo_420__2->SetBinContent(36,0.003606557);
   Calo_420__2->SetBinContent(37,0.00295082);
   Calo_420__2->SetBinContent(38,0.005901639);
   Calo_420__2->SetBinContent(39,0.00295082);
   Calo_420__2->SetBinContent(40,0.003934426);
   Calo_420__2->SetBinContent(41,0.003606557);
   Calo_420__2->SetBinContent(42,0.00295082);
   Calo_420__2->SetBinContent(43,0.002622951);
   Calo_420__2->SetBinContent(44,0.001639344);
   Calo_420__2->SetBinContent(45,0.001967213);
   Calo_420__2->SetBinContent(46,0.002295082);
   Calo_420__2->SetBinContent(47,0.001967213);
   Calo_420__2->SetBinContent(48,0.003278689);
   Calo_420__2->SetBinContent(49,0.003278689);
   Calo_420__2->SetBinContent(50,0.002622951);
   Calo_420__2->SetBinContent(51,0.0003278689);
   Calo_420__2->SetBinContent(52,0.003606557);
   Calo_420__2->SetBinContent(53,0.002295082);
   Calo_420__2->SetBinContent(54,0.00295082);
   Calo_420__2->SetBinContent(55,0.00295082);
   Calo_420__2->SetBinContent(56,0.001639344);
   Calo_420__2->SetBinContent(57,0.00295082);
   Calo_420__2->SetBinContent(58,0.0009836066);
   Calo_420__2->SetBinContent(59,0.001639344);
   Calo_420__2->SetBinContent(60,0.001311475);
   Calo_420__2->SetBinContent(61,0.0009836066);
   Calo_420__2->SetBinContent(62,0.0003278689);
   Calo_420__2->SetBinContent(63,0.003606557);
   Calo_420__2->SetBinContent(64,0.002295082);
   Calo_420__2->SetBinContent(65,0.0009836066);
   Calo_420__2->SetBinContent(66,0.001639344);
   Calo_420__2->SetBinContent(67,0.0006557377);
   Calo_420__2->SetBinContent(68,0.001639344);
   Calo_420__2->SetBinContent(69,0.0006557377);
   Calo_420__2->SetBinContent(70,0.0006557377);
   Calo_420__2->SetBinContent(71,0.0006557377);
   Calo_420__2->SetBinContent(72,0.0009836066);
   Calo_420__2->SetBinContent(73,0.001311475);
   Calo_420__2->SetBinContent(74,0.0003278689);
   Calo_420__2->SetBinContent(75,0.0003278689);
   Calo_420__2->SetBinContent(76,0.0009836066);
   Calo_420__2->SetBinContent(78,0.0009836066);
   Calo_420__2->SetBinContent(79,0.0006557377);
   Calo_420__2->SetBinContent(80,0.0009836066);
   Calo_420__2->SetBinContent(81,0.0003278689);
   Calo_420__2->SetBinContent(82,0.0006557377);
   Calo_420__2->SetBinContent(84,0.0003278689);
   Calo_420__2->SetBinContent(85,0.0009836066);
   Calo_420__2->SetBinContent(87,0.0003278689);
   Calo_420__2->SetBinContent(88,0.001311475);
   Calo_420__2->SetBinContent(89,0.0003278689);
   Calo_420__2->SetBinContent(90,0.0009836066);
   Calo_420__2->SetBinContent(92,0.0006557377);
   Calo_420__2->SetBinContent(93,0.0003278689);
   Calo_420__2->SetBinContent(98,0.0003278689);
   Calo_420__2->SetBinContent(99,0.0003278689);
   Calo_420__2->SetBinContent(100,0.0003278689);
   Calo_420__2->SetBinContent(103,0.0003278689);
   Calo_420__2->SetBinContent(104,0.0003278689);
   Calo_420__2->SetBinContent(108,0.0006557377);
   Calo_420__2->SetBinContent(111,0.0003278689);
   Calo_420__2->SetBinContent(113,0.0003278689);
   Calo_420__2->SetBinContent(117,0.0003278689);
   Calo_420__2->SetBinContent(129,0.0003278689);
   Calo_420__2->SetMinimum(1e-05);
   Calo_420__2->SetMaximum(2);
   Calo_420__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   Calo_420__2->SetLineColor(ci);
   Calo_420__2->SetLineWidth(2);
   Calo_420__2->GetXaxis()->SetRange(1,201);
   Calo_420__2->GetXaxis()->SetLabelFont(42);
   Calo_420__2->GetXaxis()->SetTitleOffset(1);
   Calo_420__2->GetXaxis()->SetTitleFont(42);
   Calo_420__2->GetYaxis()->SetLabelFont(42);
   Calo_420__2->GetYaxis()->SetTitleFont(42);
   Calo_420__2->GetZaxis()->SetLabelFont(42);
   Calo_420__2->GetZaxis()->SetTitleOffset(1);
   Calo_420__2->GetZaxis()->SetTitleFont(42);
   Calo_420__2->Draw("hist same");
   
   TLegend *leg = new TLegend(0.7,0.5,0.81,0.62,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Calo_422","Calo 422","lpf");

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
   entry=leg->AddEntry("Calo_420","Calo 420","l");

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
