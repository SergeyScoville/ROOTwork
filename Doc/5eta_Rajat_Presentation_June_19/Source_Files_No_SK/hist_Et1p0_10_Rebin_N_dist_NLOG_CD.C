#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et1p0_10_Rebin_N_dist_NLOG_CD()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Fri Jun 16 18:36:48 2023) by ROOT version 6.26/06
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
   
   TH1F *Calo_422_cumulative__1 = new TH1F("Calo_422_cumulative__1","Cumulative Number of Topoclusters",250,0,2500);
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
   Calo_422_cumulative__1->SetBinContent(11,0.9986885);
   Calo_422_cumulative__1->SetBinContent(12,0.9944263);
   Calo_422_cumulative__1->SetBinContent(13,0.9872131);
   Calo_422_cumulative__1->SetBinContent(14,0.9714754);
   Calo_422_cumulative__1->SetBinContent(15,0.9429508);
   Calo_422_cumulative__1->SetBinContent(16,0.9032787);
   Calo_422_cumulative__1->SetBinContent(17,0.8439344);
   Calo_422_cumulative__1->SetBinContent(18,0.7760656);
   Calo_422_cumulative__1->SetBinContent(19,0.7036065);
   Calo_422_cumulative__1->SetBinContent(20,0.6288525);
   Calo_422_cumulative__1->SetBinContent(21,0.5419672);
   Calo_422_cumulative__1->SetBinContent(22,0.4718033);
   Calo_422_cumulative__1->SetBinContent(23,0.4081967);
   Calo_422_cumulative__1->SetBinContent(24,0.3468852);
   Calo_422_cumulative__1->SetBinContent(25,0.2944262);
   Calo_422_cumulative__1->SetBinContent(26,0.237377);
   Calo_422_cumulative__1->SetBinContent(27,0.1983607);
   Calo_422_cumulative__1->SetBinContent(28,0.1714754);
   Calo_422_cumulative__1->SetBinContent(29,0.1491803);
   Calo_422_cumulative__1->SetBinContent(30,0.1321311);
   Calo_422_cumulative__1->SetBinContent(31,0.1177049);
   Calo_422_cumulative__1->SetBinContent(32,0.1013115);
   Calo_422_cumulative__1->SetBinContent(33,0.09114754);
   Calo_422_cumulative__1->SetBinContent(34,0.08);
   Calo_422_cumulative__1->SetBinContent(35,0.07016394);
   Calo_422_cumulative__1->SetBinContent(36,0.06459016);
   Calo_422_cumulative__1->SetBinContent(37,0.05934426);
   Calo_422_cumulative__1->SetBinContent(38,0.05377049);
   Calo_422_cumulative__1->SetBinContent(39,0.04852459);
   Calo_422_cumulative__1->SetBinContent(40,0.04426229);
   Calo_422_cumulative__1->SetBinContent(41,0.04098361);
   Calo_422_cumulative__1->SetBinContent(42,0.03704918);
   Calo_422_cumulative__1->SetBinContent(43,0.03213115);
   Calo_422_cumulative__1->SetBinContent(44,0.02918033);
   Calo_422_cumulative__1->SetBinContent(45,0.02688524);
   Calo_422_cumulative__1->SetBinContent(46,0.02393443);
   Calo_422_cumulative__1->SetBinContent(47,0.02196721);
   Calo_422_cumulative__1->SetBinContent(48,0.01868852);
   Calo_422_cumulative__1->SetBinContent(49,0.01672131);
   Calo_422_cumulative__1->SetBinContent(50,0.01508197);
   Calo_422_cumulative__1->SetBinContent(51,0.01377049);
   Calo_422_cumulative__1->SetBinContent(52,0.01278689);
   Calo_422_cumulative__1->SetBinContent(53,0.01180328);
   Calo_422_cumulative__1->SetBinContent(54,0.01114754);
   Calo_422_cumulative__1->SetBinContent(55,0.01016393);
   Calo_422_cumulative__1->SetBinContent(56,0.009508196);
   Calo_422_cumulative__1->SetBinContent(57,0.008196721);
   Calo_422_cumulative__1->SetBinContent(58,0.007868852);
   Calo_422_cumulative__1->SetBinContent(59,0.006885246);
   Calo_422_cumulative__1->SetBinContent(60,0.006229508);
   Calo_422_cumulative__1->SetBinContent(61,0.004918033);
   Calo_422_cumulative__1->SetBinContent(62,0.004918033);
   Calo_422_cumulative__1->SetBinContent(63,0.004590164);
   Calo_422_cumulative__1->SetBinContent(64,0.004262295);
   Calo_422_cumulative__1->SetBinContent(65,0.003606557);
   Calo_422_cumulative__1->SetBinContent(66,0.003606557);
   Calo_422_cumulative__1->SetBinContent(67,0.003606557);
   Calo_422_cumulative__1->SetBinContent(68,0.003278689);
   Calo_422_cumulative__1->SetBinContent(69,0.003278689);
   Calo_422_cumulative__1->SetBinContent(70,0.002622951);
   Calo_422_cumulative__1->SetBinContent(71,0.002295082);
   Calo_422_cumulative__1->SetBinContent(72,0.001639344);
   Calo_422_cumulative__1->SetBinContent(73,0.001639344);
   Calo_422_cumulative__1->SetBinContent(74,0.001639344);
   Calo_422_cumulative__1->SetBinContent(75,0.001311475);
   Calo_422_cumulative__1->SetBinContent(76,0.001311475);
   Calo_422_cumulative__1->SetBinContent(77,0.0009836066);
   Calo_422_cumulative__1->SetBinContent(78,0.0006557377);
   Calo_422_cumulative__1->SetBinContent(79,0.0006557377);
   Calo_422_cumulative__1->SetBinContent(80,0.0006557377);
   Calo_422_cumulative__1->SetBinContent(81,0.0006557377);
   Calo_422_cumulative__1->SetBinContent(82,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(83,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(84,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(85,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(86,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(87,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(88,0.0003278689);
   Calo_422_cumulative__1->SetBinContent(89,0.0003278689);
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
   Calo_422_cumulative__1->GetXaxis()->SetRange(1,201);
   Calo_422_cumulative__1->GetXaxis()->SetLabelFont(42);
   Calo_422_cumulative__1->GetXaxis()->SetTitleOffset(1);
   Calo_422_cumulative__1->GetXaxis()->SetTitleFont(42);
   Calo_422_cumulative__1->GetYaxis()->SetTitle("Fraction of Events/10 TC");
   Calo_422_cumulative__1->GetYaxis()->SetLabelFont(42);
   Calo_422_cumulative__1->GetYaxis()->SetTitleFont(42);
   Calo_422_cumulative__1->GetZaxis()->SetLabelFont(42);
   Calo_422_cumulative__1->GetZaxis()->SetTitleOffset(1);
   Calo_422_cumulative__1->GetZaxis()->SetTitleFont(42);
   Calo_422_cumulative__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.5049583,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Cumulative Number of Topoclusters");
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
   pt_LaTex = pt->AddText("E_{T}^{TC} > 1.0");
   pt->Draw();
   
   TH1F *Calo_420_cumulative__2 = new TH1F("Calo_420_cumulative__2","h_Calo420TopoClusters_N",250,0,2500);
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
   Calo_420_cumulative__2->SetBinContent(14,0.9996721);
   Calo_420_cumulative__2->SetBinContent(15,0.9990164);
   Calo_420_cumulative__2->SetBinContent(16,0.9986885);
   Calo_420_cumulative__2->SetBinContent(17,0.997377);
   Calo_420_cumulative__2->SetBinContent(18,0.9963934);
   Calo_420_cumulative__2->SetBinContent(19,0.9901639);
   Calo_420_cumulative__2->SetBinContent(20,0.9822951);
   Calo_420_cumulative__2->SetBinContent(21,0.9718033);
   Calo_420_cumulative__2->SetBinContent(22,0.9560656);
   Calo_420_cumulative__2->SetBinContent(23,0.9403279);
   Calo_420_cumulative__2->SetBinContent(24,0.9203279);
   Calo_420_cumulative__2->SetBinContent(25,0.8947541);
   Calo_420_cumulative__2->SetBinContent(26,0.8659016);
   Calo_420_cumulative__2->SetBinContent(27,0.8285246);
   Calo_420_cumulative__2->SetBinContent(28,0.795082);
   Calo_420_cumulative__2->SetBinContent(29,0.76);
   Calo_420_cumulative__2->SetBinContent(30,0.7226229);
   Calo_420_cumulative__2->SetBinContent(31,0.6760656);
   Calo_420_cumulative__2->SetBinContent(32,0.6363934);
   Calo_420_cumulative__2->SetBinContent(33,0.5986885);
   Calo_420_cumulative__2->SetBinContent(34,0.5622951);
   Calo_420_cumulative__2->SetBinContent(35,0.5222951);
   Calo_420_cumulative__2->SetBinContent(36,0.4865574);
   Calo_420_cumulative__2->SetBinContent(37,0.4521312);
   Calo_420_cumulative__2->SetBinContent(38,0.4177049);
   Calo_420_cumulative__2->SetBinContent(39,0.3793443);
   Calo_420_cumulative__2->SetBinContent(40,0.3521312);
   Calo_420_cumulative__2->SetBinContent(41,0.3291803);
   Calo_420_cumulative__2->SetBinContent(42,0.3039344);
   Calo_420_cumulative__2->SetBinContent(43,0.2780328);
   Calo_420_cumulative__2->SetBinContent(44,0.255082);
   Calo_420_cumulative__2->SetBinContent(45,0.2393443);
   Calo_420_cumulative__2->SetBinContent(46,0.2236066);
   Calo_420_cumulative__2->SetBinContent(47,0.2078689);
   Calo_420_cumulative__2->SetBinContent(48,0.1947541);
   Calo_420_cumulative__2->SetBinContent(49,0.1859016);
   Calo_420_cumulative__2->SetBinContent(50,0.1737705);
   Calo_420_cumulative__2->SetBinContent(51,0.16);
   Calo_420_cumulative__2->SetBinContent(52,0.1514754);
   Calo_420_cumulative__2->SetBinContent(53,0.1442623);
   Calo_420_cumulative__2->SetBinContent(54,0.1334426);
   Calo_420_cumulative__2->SetBinContent(55,0.1268853);
   Calo_420_cumulative__2->SetBinContent(56,0.1213115);
   Calo_420_cumulative__2->SetBinContent(57,0.1183607);
   Calo_420_cumulative__2->SetBinContent(58,0.1127869);
   Calo_420_cumulative__2->SetBinContent(59,0.1068852);
   Calo_420_cumulative__2->SetBinContent(60,0.1019672);
   Calo_420_cumulative__2->SetBinContent(61,0.09901639);
   Calo_420_cumulative__2->SetBinContent(62,0.09508197);
   Calo_420_cumulative__2->SetBinContent(63,0.09016393);
   Calo_420_cumulative__2->SetBinContent(64,0.08786885);
   Calo_420_cumulative__2->SetBinContent(65,0.08393443);
   Calo_420_cumulative__2->SetBinContent(66,0.08065574);
   Calo_420_cumulative__2->SetBinContent(67,0.07803278);
   Calo_420_cumulative__2->SetBinContent(68,0.07639344);
   Calo_420_cumulative__2->SetBinContent(69,0.07409836);
   Calo_420_cumulative__2->SetBinContent(70,0.06983607);
   Calo_420_cumulative__2->SetBinContent(71,0.06786885);
   Calo_420_cumulative__2->SetBinContent(72,0.06426229);
   Calo_420_cumulative__2->SetBinContent(73,0.06196721);
   Calo_420_cumulative__2->SetBinContent(74,0.06032787);
   Calo_420_cumulative__2->SetBinContent(75,0.05836065);
   Calo_420_cumulative__2->SetBinContent(76,0.05508197);
   Calo_420_cumulative__2->SetBinContent(77,0.05278689);
   Calo_420_cumulative__2->SetBinContent(78,0.0504918);
   Calo_420_cumulative__2->SetBinContent(79,0.04885246);
   Calo_420_cumulative__2->SetBinContent(80,0.04622951);
   Calo_420_cumulative__2->SetBinContent(81,0.04360656);
   Calo_420_cumulative__2->SetBinContent(82,0.04131148);
   Calo_420_cumulative__2->SetBinContent(83,0.04032787);
   Calo_420_cumulative__2->SetBinContent(84,0.03803279);
   Calo_420_cumulative__2->SetBinContent(85,0.0357377);
   Calo_420_cumulative__2->SetBinContent(86,0.03344262);
   Calo_420_cumulative__2->SetBinContent(87,0.03311475);
   Calo_420_cumulative__2->SetBinContent(88,0.03147541);
   Calo_420_cumulative__2->SetBinContent(89,0.0304918);
   Calo_420_cumulative__2->SetBinContent(90,0.02819672);
   Calo_420_cumulative__2->SetBinContent(91,0.02721312);
   Calo_420_cumulative__2->SetBinContent(92,0.02655738);
   Calo_420_cumulative__2->SetBinContent(93,0.02360656);
   Calo_420_cumulative__2->SetBinContent(94,0.02163934);
   Calo_420_cumulative__2->SetBinContent(95,0.02032787);
   Calo_420_cumulative__2->SetBinContent(96,0.01967213);
   Calo_420_cumulative__2->SetBinContent(97,0.01836066);
   Calo_420_cumulative__2->SetBinContent(98,0.01737705);
   Calo_420_cumulative__2->SetBinContent(99,0.01704918);
   Calo_420_cumulative__2->SetBinContent(100,0.01540984);
   Calo_420_cumulative__2->SetBinContent(101,0.01409836);
   Calo_420_cumulative__2->SetBinContent(102,0.01344262);
   Calo_420_cumulative__2->SetBinContent(103,0.01311475);
   Calo_420_cumulative__2->SetBinContent(104,0.01213115);
   Calo_420_cumulative__2->SetBinContent(105,0.01114754);
   Calo_420_cumulative__2->SetBinContent(106,0.01114754);
   Calo_420_cumulative__2->SetBinContent(107,0.01114754);
   Calo_420_cumulative__2->SetBinContent(108,0.01081967);
   Calo_420_cumulative__2->SetBinContent(109,0.0104918);
   Calo_420_cumulative__2->SetBinContent(110,0.01016393);
   Calo_420_cumulative__2->SetBinContent(111,0.009836066);
   Calo_420_cumulative__2->SetBinContent(112,0.009180328);
   Calo_420_cumulative__2->SetBinContent(113,0.008852459);
   Calo_420_cumulative__2->SetBinContent(114,0.007540984);
   Calo_420_cumulative__2->SetBinContent(115,0.006229508);
   Calo_420_cumulative__2->SetBinContent(116,0.005245902);
   Calo_420_cumulative__2->SetBinContent(117,0.004918033);
   Calo_420_cumulative__2->SetBinContent(118,0.004918033);
   Calo_420_cumulative__2->SetBinContent(119,0.004918033);
   Calo_420_cumulative__2->SetBinContent(120,0.003934426);
   Calo_420_cumulative__2->SetBinContent(121,0.003606557);
   Calo_420_cumulative__2->SetBinContent(122,0.003606557);
   Calo_420_cumulative__2->SetBinContent(123,0.003606557);
   Calo_420_cumulative__2->SetBinContent(124,0.003606557);
   Calo_420_cumulative__2->SetBinContent(125,0.003606557);
   Calo_420_cumulative__2->SetBinContent(126,0.003278689);
   Calo_420_cumulative__2->SetBinContent(127,0.003278689);
   Calo_420_cumulative__2->SetBinContent(128,0.003278689);
   Calo_420_cumulative__2->SetBinContent(129,0.00295082);
   Calo_420_cumulative__2->SetBinContent(130,0.00295082);
   Calo_420_cumulative__2->SetBinContent(131,0.00295082);
   Calo_420_cumulative__2->SetBinContent(132,0.002622951);
   Calo_420_cumulative__2->SetBinContent(133,0.002295082);
   Calo_420_cumulative__2->SetBinContent(134,0.001967213);
   Calo_420_cumulative__2->SetBinContent(135,0.001639344);
   Calo_420_cumulative__2->SetBinContent(136,0.001311475);
   Calo_420_cumulative__2->SetBinContent(137,0.001311475);
   Calo_420_cumulative__2->SetBinContent(138,0.0009836066);
   Calo_420_cumulative__2->SetBinContent(139,0.0006557377);
   Calo_420_cumulative__2->SetBinContent(140,0.0006557377);
   Calo_420_cumulative__2->SetBinContent(141,0.0006557377);
   Calo_420_cumulative__2->SetBinContent(142,0.0006557377);
   Calo_420_cumulative__2->SetBinContent(143,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(144,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(145,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(146,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(147,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(148,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(149,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(150,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(151,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(152,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(153,0.0003278689);
   Calo_420_cumulative__2->SetBinContent(154,0.0003278689);
   Calo_420_cumulative__2->SetMinimum(1e-05);
   Calo_420_cumulative__2->SetMaximum(2);
   Calo_420_cumulative__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   Calo_420_cumulative__2->SetLineColor(ci);
   Calo_420_cumulative__2->SetLineWidth(2);
   Calo_420_cumulative__2->GetXaxis()->SetRange(1,201);
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
