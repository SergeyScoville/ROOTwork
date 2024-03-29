#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_EtNoCut_4_Rebin_N_dist_SK_NLOG_CD()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Fri Jun 16 18:41:18 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,53,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-82.87179,-6.101513,435.0769,0.7829418);
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
   Calo_422_cumulative__1->SetBinContent(10,1);
   Calo_422_cumulative__1->SetBinContent(11,1);
   Calo_422_cumulative__1->SetBinContent(12,1);
   Calo_422_cumulative__1->SetBinContent(13,1);
   Calo_422_cumulative__1->SetBinContent(14,1);
   Calo_422_cumulative__1->SetBinContent(15,1);
   Calo_422_cumulative__1->SetBinContent(16,1);
   Calo_422_cumulative__1->SetBinContent(17,1);
   Calo_422_cumulative__1->SetBinContent(18,1);
   Calo_422_cumulative__1->SetBinContent(19,1);
   Calo_422_cumulative__1->SetBinContent(20,1);
   Calo_422_cumulative__1->SetBinContent(21,1);
   Calo_422_cumulative__1->SetBinContent(22,1);
   Calo_422_cumulative__1->SetBinContent(23,1);
   Calo_422_cumulative__1->SetBinContent(24,1);
   Calo_422_cumulative__1->SetBinContent(25,1);
   Calo_422_cumulative__1->SetBinContent(26,0.9990164);
   Calo_422_cumulative__1->SetBinContent(27,0.9927869);
   Calo_422_cumulative__1->SetBinContent(28,0.9836065);
   Calo_422_cumulative__1->SetBinContent(29,0.9708197);
   Calo_422_cumulative__1->SetBinContent(30,0.9567213);
   Calo_422_cumulative__1->SetBinContent(31,0.9370492);
   Calo_422_cumulative__1->SetBinContent(32,0.9177049);
   Calo_422_cumulative__1->SetBinContent(33,0.8888524);
   Calo_422_cumulative__1->SetBinContent(34,0.8547541);
   Calo_422_cumulative__1->SetBinContent(35,0.8163934);
   Calo_422_cumulative__1->SetBinContent(36,0.7754098);
   Calo_422_cumulative__1->SetBinContent(37,0.7347541);
   Calo_422_cumulative__1->SetBinContent(38,0.6881967);
   Calo_422_cumulative__1->SetBinContent(39,0.6281967);
   Calo_422_cumulative__1->SetBinContent(40,0.5767213);
   Calo_422_cumulative__1->SetBinContent(41,0.5177049);
   Calo_422_cumulative__1->SetBinContent(42,0.4557377);
   Calo_422_cumulative__1->SetBinContent(43,0.4013115);
   Calo_422_cumulative__1->SetBinContent(44,0.3557377);
   Calo_422_cumulative__1->SetBinContent(45,0.312459);
   Calo_422_cumulative__1->SetBinContent(46,0.2731147);
   Calo_422_cumulative__1->SetBinContent(47,0.2367213);
   Calo_422_cumulative__1->SetBinContent(48,0.2009836);
   Calo_422_cumulative__1->SetBinContent(49,0.1711475);
   Calo_422_cumulative__1->SetBinContent(50,0.1436066);
   Calo_422_cumulative__1->SetBinContent(51,0.1173771);
   Calo_422_cumulative__1->SetBinContent(52,0.09737705);
   Calo_422_cumulative__1->SetBinContent(53,0.07672131);
   Calo_422_cumulative__1->SetBinContent(54,0.06327869);
   Calo_422_cumulative__1->SetBinContent(55,0.0504918);
   Calo_422_cumulative__1->SetBinContent(56,0.04229508);
   Calo_422_cumulative__1->SetBinContent(57,0.03508197);
   Calo_422_cumulative__1->SetBinContent(58,0.02622951);
   Calo_422_cumulative__1->SetBinContent(59,0.02196721);
   Calo_422_cumulative__1->SetBinContent(60,0.01967213);
   Calo_422_cumulative__1->SetBinContent(61,0.01540984);
   Calo_422_cumulative__1->SetBinContent(62,0.01344262);
   Calo_422_cumulative__1->SetBinContent(63,0.01114754);
   Calo_422_cumulative__1->SetBinContent(64,0.00852459);
   Calo_422_cumulative__1->SetBinContent(65,0.004918033);
   Calo_422_cumulative__1->SetBinContent(66,0.003934426);
   Calo_422_cumulative__1->SetBinContent(67,0.003606557);
   Calo_422_cumulative__1->SetBinContent(68,0.00295082);
   Calo_422_cumulative__1->SetBinContent(69,0.001967213);
   Calo_422_cumulative__1->SetBinContent(70,0.001639344);
   Calo_422_cumulative__1->SetBinContent(71,0.001311475);
   Calo_422_cumulative__1->SetBinContent(72,0.001311475);
   Calo_422_cumulative__1->SetBinContent(73,0.0009836066);
   Calo_422_cumulative__1->SetBinContent(74,0.0009836066);
   Calo_422_cumulative__1->SetBinContent(75,0.0009836066);
   Calo_422_cumulative__1->SetBinContent(76,0.0009836066);
   Calo_422_cumulative__1->SetBinContent(77,0.0006557377);
   Calo_422_cumulative__1->SetBinContent(78,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(79,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(80,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(81,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(82,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(83,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(84,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(85,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(86,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(87,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(88,0.0003278689);
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
   Calo_422_cumulative__1->GetXaxis()->SetRange(1,101);
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
   Calo_420_cumulative__2->SetBinContent(12,1);
   Calo_420_cumulative__2->SetBinContent(13,1);
   Calo_420_cumulative__2->SetBinContent(14,1);
   Calo_420_cumulative__2->SetBinContent(15,1);
   Calo_420_cumulative__2->SetBinContent(16,1);
   Calo_420_cumulative__2->SetBinContent(17,1);
   Calo_420_cumulative__2->SetBinContent(18,1);
   Calo_420_cumulative__2->SetBinContent(19,1);
   Calo_420_cumulative__2->SetBinContent(20,1);
   Calo_420_cumulative__2->SetBinContent(21,1);
   Calo_420_cumulative__2->SetBinContent(22,1);
   Calo_420_cumulative__2->SetBinContent(23,1);
   Calo_420_cumulative__2->SetBinContent(24,1);
   Calo_420_cumulative__2->SetBinContent(25,1);
   Calo_420_cumulative__2->SetBinContent(26,1);
   Calo_420_cumulative__2->SetBinContent(27,0.9996721);
   Calo_420_cumulative__2->SetBinContent(28,0.997377);
   Calo_420_cumulative__2->SetBinContent(29,0.9954098);
   Calo_420_cumulative__2->SetBinContent(30,0.9885246);
   Calo_420_cumulative__2->SetBinContent(31,0.9754098);
   Calo_420_cumulative__2->SetBinContent(32,0.9540983);
   Calo_420_cumulative__2->SetBinContent(33,0.9245902);
   Calo_420_cumulative__2->SetBinContent(34,0.8950819);
   Calo_420_cumulative__2->SetBinContent(35,0.852459);
   Calo_420_cumulative__2->SetBinContent(36,0.8111475);
   Calo_420_cumulative__2->SetBinContent(37,0.7619672);
   Calo_420_cumulative__2->SetBinContent(38,0.7242623);
   Calo_420_cumulative__2->SetBinContent(39,0.6744262);
   Calo_420_cumulative__2->SetBinContent(40,0.6360655);
   Calo_420_cumulative__2->SetBinContent(41,0.5960656);
   Calo_420_cumulative__2->SetBinContent(42,0.5436065);
   Calo_420_cumulative__2->SetBinContent(43,0.4996721);
   Calo_420_cumulative__2->SetBinContent(44,0.455082);
   Calo_420_cumulative__2->SetBinContent(45,0.4098361);
   Calo_420_cumulative__2->SetBinContent(46,0.3681967);
   Calo_420_cumulative__2->SetBinContent(47,0.3360656);
   Calo_420_cumulative__2->SetBinContent(48,0.3);
   Calo_420_cumulative__2->SetBinContent(49,0.264918);
   Calo_420_cumulative__2->SetBinContent(50,0.2344262);
   Calo_420_cumulative__2->SetBinContent(51,0.204918);
   Calo_420_cumulative__2->SetBinContent(52,0.175082);
   Calo_420_cumulative__2->SetBinContent(53,0.1491803);
   Calo_420_cumulative__2->SetBinContent(54,0.1265574);
   Calo_420_cumulative__2->SetBinContent(55,0.107541);
   Calo_420_cumulative__2->SetBinContent(56,0.09344263);
   Calo_420_cumulative__2->SetBinContent(57,0.07901639);
   Calo_420_cumulative__2->SetBinContent(58,0.06754098);
   Calo_420_cumulative__2->SetBinContent(59,0.0590164);
   Calo_420_cumulative__2->SetBinContent(60,0.05016394);
   Calo_420_cumulative__2->SetBinContent(61,0.04163934);
   Calo_420_cumulative__2->SetBinContent(62,0.03377049);
   Calo_420_cumulative__2->SetBinContent(63,0.02590164);
   Calo_420_cumulative__2->SetBinContent(64,0.02098361);
   Calo_420_cumulative__2->SetBinContent(65,0.01770492);
   Calo_420_cumulative__2->SetBinContent(66,0.01344262);
   Calo_420_cumulative__2->SetBinContent(67,0.01213115);
   Calo_420_cumulative__2->SetBinContent(68,0.01114754);
   Calo_420_cumulative__2->SetBinContent(69,0.01016393);
   Calo_420_cumulative__2->SetBinContent(70,0.007868852);
   Calo_420_cumulative__2->SetBinContent(71,0.005901639);
   Calo_420_cumulative__2->SetBinContent(72,0.004918033);
   Calo_420_cumulative__2->SetBinContent(73,0.003606557);
   Calo_420_cumulative__2->SetBinContent(74,0.003278689);
   Calo_420_cumulative__2->SetBinContent(75,0.003278689);
   Calo_420_cumulative__2->SetBinContent(76,0.00295082);
   Calo_420_cumulative__2->SetBinContent(77,0.002295082);
   Calo_420_cumulative__2->SetBinContent(78,0.001967213);
   Calo_420_cumulative__2->SetBinContent(79,0.001639344);
   Calo_420_cumulative__2->SetBinContent(80,0.001311475);
   Calo_420_cumulative__2->SetBinContent(81,0.001311475);
   Calo_420_cumulative__2->SetBinContent(82,0.0009836066);
   Calo_420_cumulative__2->SetBinContent(83,0.0009836066);
   Calo_420_cumulative__2->SetBinContent(84,0.0009836066);
   Calo_420_cumulative__2->SetBinContent(85,0.0009836066);
   Calo_420_cumulative__2->SetBinContent(86,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(87,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(88,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(89,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(90,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(91,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(92,0.0003278689);
   Calo_420_cumulative__2->SetMinimum(1e-05);
   Calo_420_cumulative__2->SetMaximum(2);
   Calo_420_cumulative__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   Calo_420_cumulative__2->SetLineColor(ci);
   Calo_420_cumulative__2->SetLineWidth(2);
   Calo_420_cumulative__2->GetXaxis()->SetRange(1,101);
   Calo_420_cumulative__2->GetXaxis()->SetLabelFont(42);
   Calo_420_cumulative__2->GetXaxis()->SetTitleOffset(1);
   Calo_420_cumulative__2->GetXaxis()->SetTitleFont(42);
   Calo_420_cumulative__2->GetYaxis()->SetLabelFont(42);
   Calo_420_cumulative__2->GetYaxis()->SetTitleFont(42);
   Calo_420_cumulative__2->GetZaxis()->SetLabelFont(42);
   Calo_420_cumulative__2->GetZaxis()->SetTitleOffset(1);
   Calo_420_cumulative__2->GetZaxis()->SetTitleFont(42);
   Calo_420_cumulative__2->Draw("hist same");
   
   TH1F *Calo_Cal_cumulative__3 = new TH1F("Calo_Cal_cumulative__3","h_CaloCalSKclusters_N",625,0,2500);
   Calo_Cal_cumulative__3->SetBinContent(1,1);
   Calo_Cal_cumulative__3->SetBinContent(2,1);
   Calo_Cal_cumulative__3->SetBinContent(3,1);
   Calo_Cal_cumulative__3->SetBinContent(4,1);
   Calo_Cal_cumulative__3->SetBinContent(5,1);
   Calo_Cal_cumulative__3->SetBinContent(6,1);
   Calo_Cal_cumulative__3->SetBinContent(7,1);
   Calo_Cal_cumulative__3->SetBinContent(8,1);
   Calo_Cal_cumulative__3->SetBinContent(9,1);
   Calo_Cal_cumulative__3->SetBinContent(10,1);
   Calo_Cal_cumulative__3->SetBinContent(11,1);
   Calo_Cal_cumulative__3->SetBinContent(12,1);
   Calo_Cal_cumulative__3->SetBinContent(13,1);
   Calo_Cal_cumulative__3->SetBinContent(14,1);
   Calo_Cal_cumulative__3->SetBinContent(15,1);
   Calo_Cal_cumulative__3->SetBinContent(16,1);
   Calo_Cal_cumulative__3->SetBinContent(17,1);
   Calo_Cal_cumulative__3->SetBinContent(18,1);
   Calo_Cal_cumulative__3->SetBinContent(19,1);
   Calo_Cal_cumulative__3->SetBinContent(20,1);
   Calo_Cal_cumulative__3->SetBinContent(21,1);
   Calo_Cal_cumulative__3->SetBinContent(22,1);
   Calo_Cal_cumulative__3->SetBinContent(23,1);
   Calo_Cal_cumulative__3->SetBinContent(24,1);
   Calo_Cal_cumulative__3->SetBinContent(25,1);
   Calo_Cal_cumulative__3->SetBinContent(26,0.9993442);
   Calo_Cal_cumulative__3->SetBinContent(27,0.9990164);
   Calo_Cal_cumulative__3->SetBinContent(28,0.9970492);
   Calo_Cal_cumulative__3->SetBinContent(29,0.9895082);
   Calo_Cal_cumulative__3->SetBinContent(30,0.9809836);
   Calo_Cal_cumulative__3->SetBinContent(31,0.9586885);
   Calo_Cal_cumulative__3->SetBinContent(32,0.9252459);
   Calo_Cal_cumulative__3->SetBinContent(33,0.8891803);
   Calo_Cal_cumulative__3->SetBinContent(34,0.852459);
   Calo_Cal_cumulative__3->SetBinContent(35,0.8144262);
   Calo_Cal_cumulative__3->SetBinContent(36,0.7636065);
   Calo_Cal_cumulative__3->SetBinContent(37,0.7111475);
   Calo_Cal_cumulative__3->SetBinContent(38,0.6642623);
   Calo_Cal_cumulative__3->SetBinContent(39,0.6121311);
   Calo_Cal_cumulative__3->SetBinContent(40,0.5672131);
   Calo_Cal_cumulative__3->SetBinContent(41,0.5213115);
   Calo_Cal_cumulative__3->SetBinContent(42,0.4763934);
   Calo_Cal_cumulative__3->SetBinContent(43,0.4272131);
   Calo_Cal_cumulative__3->SetBinContent(44,0.3740984);
   Calo_Cal_cumulative__3->SetBinContent(45,0.324918);
   Calo_Cal_cumulative__3->SetBinContent(46,0.2859016);
   Calo_Cal_cumulative__3->SetBinContent(47,0.2544262);
   Calo_Cal_cumulative__3->SetBinContent(48,0.2272131);
   Calo_Cal_cumulative__3->SetBinContent(49,0.2009836);
   Calo_Cal_cumulative__3->SetBinContent(50,0.1747541);
   Calo_Cal_cumulative__3->SetBinContent(51,0.1478689);
   Calo_Cal_cumulative__3->SetBinContent(52,0.127541);
   Calo_Cal_cumulative__3->SetBinContent(53,0.107541);
   Calo_Cal_cumulative__3->SetBinContent(54,0.08786885);
   Calo_Cal_cumulative__3->SetBinContent(55,0.07442623);
   Calo_Cal_cumulative__3->SetBinContent(56,0.06327869);
   Calo_Cal_cumulative__3->SetBinContent(57,0.05442623);
   Calo_Cal_cumulative__3->SetBinContent(58,0.0452459);
   Calo_Cal_cumulative__3->SetBinContent(59,0.03868853);
   Calo_Cal_cumulative__3->SetBinContent(60,0.0304918);
   Calo_Cal_cumulative__3->SetBinContent(61,0.02557377);
   Calo_Cal_cumulative__3->SetBinContent(62,0.02065574);
   Calo_Cal_cumulative__3->SetBinContent(63,0.01606557);
   Calo_Cal_cumulative__3->SetBinContent(64,0.01311475);
   Calo_Cal_cumulative__3->SetBinContent(65,0.0104918);
   Calo_Cal_cumulative__3->SetBinContent(66,0.00852459);
   Calo_Cal_cumulative__3->SetBinContent(67,0.006229508);
   Calo_Cal_cumulative__3->SetBinContent(68,0.00557377);
   Calo_Cal_cumulative__3->SetBinContent(69,0.003606557);
   Calo_Cal_cumulative__3->SetBinContent(70,0.00295082);
   Calo_Cal_cumulative__3->SetBinContent(71,0.00295082);
   Calo_Cal_cumulative__3->SetBinContent(72,0.00295082);
   Calo_Cal_cumulative__3->SetBinContent(73,0.001967213);
   Calo_Cal_cumulative__3->SetBinContent(74,0.001639344);
   Calo_Cal_cumulative__3->SetBinContent(75,0.001639344);
   Calo_Cal_cumulative__3->SetBinContent(76,0.001639344);
   Calo_Cal_cumulative__3->SetBinContent(77,0.001311475);
   Calo_Cal_cumulative__3->SetBinContent(78,0.001311475);
   Calo_Cal_cumulative__3->SetBinContent(79,0.001311475);
   Calo_Cal_cumulative__3->SetBinContent(80,0.0009836066);
   Calo_Cal_cumulative__3->SetBinContent(81,0.0006557377);
   Calo_Cal_cumulative__3->SetBinContent(82,0.0006557377);
   Calo_Cal_cumulative__3->SetBinContent(83,0.0006557377);
   Calo_Cal_cumulative__3->SetBinContent(84,0.0006557377);
   Calo_Cal_cumulative__3->SetBinContent(85,0.0003278689);
   Calo_Cal_cumulative__3->SetBinContent(86,0.0003278689);
   Calo_Cal_cumulative__3->SetBinContent(87,0.0003278689);
   Calo_Cal_cumulative__3->SetBinContent(88,0.0003278689);
   Calo_Cal_cumulative__3->SetBinContent(89,0.0003278689);
   Calo_Cal_cumulative__3->SetMinimum(1e-05);
   Calo_Cal_cumulative__3->SetMaximum(2);
   Calo_Cal_cumulative__3->SetEntries(3050);

   ci = TColor::GetColor("#009900");
   Calo_Cal_cumulative__3->SetLineColor(ci);
   Calo_Cal_cumulative__3->SetLineWidth(2);
   Calo_Cal_cumulative__3->GetXaxis()->SetRange(1,101);
   Calo_Cal_cumulative__3->GetXaxis()->SetLabelFont(42);
   Calo_Cal_cumulative__3->GetXaxis()->SetTitleOffset(1);
   Calo_Cal_cumulative__3->GetXaxis()->SetTitleFont(42);
   Calo_Cal_cumulative__3->GetYaxis()->SetLabelFont(42);
   Calo_Cal_cumulative__3->GetYaxis()->SetTitleFont(42);
   Calo_Cal_cumulative__3->GetZaxis()->SetLabelFont(42);
   Calo_Cal_cumulative__3->GetZaxis()->SetTitleOffset(1);
   Calo_Cal_cumulative__3->GetZaxis()->SetTitleFont(42);
   Calo_Cal_cumulative__3->Draw("hist SAME");
   
   TLegend *leg = new TLegend(0.8,0.5,0.91,0.62,NULL,"brNDC");
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
   entry=leg->AddEntry("Calo_Cal_cumulative","Calo_Cal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   All_GEP_Algo->Modified();
   All_GEP_Algo->cd();
   All_GEP_Algo->SetSelected(All_GEP_Algo);
}
