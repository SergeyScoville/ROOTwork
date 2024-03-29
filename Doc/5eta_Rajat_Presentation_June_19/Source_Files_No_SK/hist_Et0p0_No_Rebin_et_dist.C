#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0p0_No_Rebin_et_dist()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 15 17:31:55 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-4102.564,-5.063635,21538.46,-0.2973516);
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
   
   TH1F *Calo_422__1 = new TH1F("Calo_422__1","E_{t} of Topoclusters",100,0,20000);
   Calo_422__1->SetBinContent(0,108574);
   Calo_422__1->SetBinContent(1,0.1343892);
   Calo_422__1->SetBinContent(2,0.1871106);
   Calo_422__1->SetBinContent(3,0.1362351);
   Calo_422__1->SetBinContent(4,0.1217032);
   Calo_422__1->SetBinContent(5,0.08761097);
   Calo_422__1->SetBinContent(6,0.06118869);
   Calo_422__1->SetBinContent(7,0.0454952);
   Calo_422__1->SetBinContent(8,0.03325387);
   Calo_422__1->SetBinContent(9,0.02505123);
   Calo_422__1->SetBinContent(10,0.01925909);
   Calo_422__1->SetBinContent(11,0.01523793);
   Calo_422__1->SetBinContent(12,0.01208101);
   Calo_422__1->SetBinContent(13,0.009455864);
   Calo_422__1->SetBinContent(14,0.007740519);
   Calo_422__1->SetBinContent(15,0.006363774);
   Calo_422__1->SetBinContent(16,0.00525686);
   Calo_422__1->SetBinContent(17,0.004441238);
   Calo_422__1->SetBinContent(18,0.003701835);
   Calo_422__1->SetBinContent(19,0.003136769);
   Calo_422__1->SetBinContent(20,0.002684279);
   Calo_422__1->SetBinContent(21,0.002251063);
   Calo_422__1->SetBinContent(22,0.002012771);
   Calo_422__1->SetBinContent(23,0.001753893);
   Calo_422__1->SetBinContent(24,0.001538817);
   Calo_422__1->SetBinContent(25,0.001278186);
   Calo_422__1->SetBinContent(26,0.001198464);
   Calo_422__1->SetBinContent(27,0.001045152);
   Calo_422__1->SetBinContent(28,0.0009373951);
   Calo_422__1->SetBinContent(29,0.0008835168);
   Calo_422__1->SetBinContent(30,0.0007214439);
   Calo_422__1->SetBinContent(31,0.0006881531);
   Calo_422__1->SetBinContent(32,0.0006456638);
   Calo_422__1->SetBinContent(33,0.000598794);
   Calo_422__1->SetBinContent(34,0.0005655033);
   Calo_422__1->SetBinContent(35,0.0005107489);
   Calo_422__1->SetBinContent(36,0.0004511762);
   Calo_422__1->SetBinContent(37,0.0004573087);
   Calo_422__1->SetBinContent(38,0.0003942316);
   Calo_422__1->SetBinContent(39,0.0004078107);
   Calo_422__1->SetBinContent(40,0.0003793384);
   Calo_422__1->SetBinContent(41,0.0003254601);
   Calo_422__1->SetBinContent(42,0.000337287);
   Calo_422__1->SetBinContent(43,0.0003158233);
   Calo_422__1->SetBinContent(44,0.0002803425);
   Calo_422__1->SetBinContent(45,0.0002711437);
   Calo_422__1->SetBinContent(46,0.0002663253);
   Calo_422__1->SetBinContent(47,0.0002628211);
   Calo_422__1->SetBinContent(48,0.0002479279);
   Calo_422__1->SetBinContent(49,0.0002269022);
   Calo_422__1->SetBinContent(50,0.0002282163);
   Calo_422__1->SetBinContent(51,0.000224712);
   Calo_422__1->SetBinContent(52,0.0002023722);
   Calo_422__1->SetBinContent(53,0.0001944876);
   Calo_422__1->SetBinContent(54,0.0002076286);
   Calo_422__1->SetBinContent(55,0.0001958017);
   Calo_422__1->SetBinContent(56,0.0001756521);
   Calo_422__1->SetBinContent(57,0.0001550644);
   Calo_422__1->SetBinContent(58,0.0001839747);
   Calo_422__1->SetBinContent(59,0.0001519982);
   Calo_422__1->SetBinContent(60,0.0001717098);
   Calo_422__1->SetBinContent(61,0.0001594448);
   Calo_422__1->SetBinContent(62,0.0001555025);
   Calo_422__1->SetBinContent(63,0.0001515601);
   Calo_422__1->SetBinContent(64,0.0001541884);
   Calo_422__1->SetBinContent(65,0.0001423614);
   Calo_422__1->SetBinContent(66,0.0001384191);
   Calo_422__1->SetBinContent(67,0.000149808);
   Calo_422__1->SetBinContent(68,0.0001471798);
   Calo_422__1->SetBinContent(69,0.0001379811);
   Calo_422__1->SetBinContent(70,0.0001265921);
   Calo_422__1->SetBinContent(71,0.0001327246);
   Calo_422__1->SetBinContent(72,0.0001261541);
   Calo_422__1->SetBinContent(73,0.00012484);
   Calo_422__1->SetBinContent(74,0.000124402);
   Calo_422__1->SetBinContent(75,0.0001055665);
   Calo_422__1->SetBinContent(76,0.000111699);
   Calo_422__1->SetBinContent(77,0.0001077566);
   Calo_422__1->SetBinContent(78,0.0001086327);
   Calo_422__1->SetBinContent(79,0.0001130131);
   Calo_422__1->SetBinContent(80,9.943397e-05);
   Calo_422__1->SetBinContent(81,0.0001038143);
   Calo_422__1->SetBinContent(82,8.629292e-05);
   Calo_422__1->SetBinContent(83,9.461559e-05);
   Calo_422__1->SetBinContent(84,9.198737e-05);
   Calo_422__1->SetBinContent(85,9.242541e-05);
   Calo_422__1->SetBinContent(86,8.716898e-05);
   Calo_422__1->SetBinContent(87,8.97972e-05);
   Calo_422__1->SetBinContent(88,7.884632e-05);
   Calo_422__1->SetBinContent(89,7.578007e-05);
   Calo_422__1->SetBinContent(90,8.585488e-05);
   Calo_422__1->SetBinContent(91,7.797025e-05);
   Calo_422__1->SetBinContent(92,7.271383e-05);
   Calo_422__1->SetBinContent(93,8.059846e-05);
   Calo_422__1->SetBinContent(94,6.964758e-05);
   Calo_422__1->SetBinContent(95,6.570527e-05);
   Calo_422__1->SetBinContent(96,7.709418e-05);
   Calo_422__1->SetBinContent(97,6.833348e-05);
   Calo_422__1->SetBinContent(98,6.526723e-05);
   Calo_422__1->SetBinContent(99,6.833348e-05);
   Calo_422__1->SetBinContent(100,0.003482227);
   Calo_422__1->SetBinError(0,329.5057);
   Calo_422__1->SetBinError(101,89.16277);
   Calo_422__1->SetMinimum(5e-05);
   Calo_422__1->SetMaximum(0.2338883);
   Calo_422__1->SetEntries(2283024);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   Calo_422__1->SetFillColor(ci);
   Calo_422__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   Calo_422__1->SetLineColor(ci);
   Calo_422__1->SetLineWidth(2);
   Calo_422__1->GetXaxis()->SetTitle("E_{t} [MeV]");
   Calo_422__1->GetXaxis()->SetRange(1,100);
   Calo_422__1->GetXaxis()->SetLabelFont(42);
   Calo_422__1->GetXaxis()->SetTitleOffset(1);
   Calo_422__1->GetXaxis()->SetTitleFont(42);
   Calo_422__1->GetYaxis()->SetTitle("Fraction of Topoclusters");
   Calo_422__1->GetYaxis()->SetLabelFont(42);
   Calo_422__1->GetYaxis()->SetTitleFont(42);
   Calo_422__1->GetZaxis()->SetLabelFont(42);
   Calo_422__1->GetZaxis()->SetTitleOffset(1);
   Calo_422__1->GetZaxis()->SetTitleFont(42);
   Calo_422__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9392581,0.2645576,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("E_{t} of Topoclusters");
   pt->Draw();
   
   pt = new TPaveText(0.355,0.87,0.425,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(72);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("ATLAS");
   pt->Draw();
   
   pt = new TPaveText(0.425,0.87,0.58,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("Simulation Internal");
   pt->Draw();
   
   pt = new TPaveText(0.35,0.83,0.51,0.87,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("HL-LHC <#mu>=200");
   pt->Draw();
   
   pt = new TPaveText(0.35,0.79,0.483,0.83,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("Minimum Bias");
   pt->Draw();
   
   pt = new TPaveText(0.35,0.75,0.444,0.79,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   pt_LaTex = pt->AddText("E_{T}^{TC} > 0.0");
   pt->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420TopoClusters_et",100,0,20000);
   Calo_420__2->SetBinContent(0,219575);
   Calo_420__2->SetBinContent(1,0.06568412);
   Calo_420__2->SetBinContent(2,0.1121794);
   Calo_420__2->SetBinContent(3,0.1203158);
   Calo_420__2->SetBinContent(4,0.1179726);
   Calo_420__2->SetBinContent(5,0.09562043);
   Calo_420__2->SetBinContent(6,0.07330655);
   Calo_420__2->SetBinContent(7,0.0568628);
   Calo_420__2->SetBinContent(8,0.04460025);
   Calo_420__2->SetBinContent(9,0.03553451);
   Calo_420__2->SetBinContent(10,0.02821351);
   Calo_420__2->SetBinContent(11,0.02274727);
   Calo_420__2->SetBinContent(12,0.01843608);
   Calo_420__2->SetBinContent(13,0.01506185);
   Calo_420__2->SetBinContent(14,0.012491);
   Calo_420__2->SetBinContent(15,0.01028099);
   Calo_420__2->SetBinContent(16,0.008726439);
   Calo_420__2->SetBinContent(17,0.007315425);
   Calo_420__2->SetBinContent(18,0.006117319);
   Calo_420__2->SetBinContent(19,0.005229006);
   Calo_420__2->SetBinContent(20,0.004561974);
   Calo_420__2->SetBinContent(21,0.003974682);
   Calo_420__2->SetBinContent(22,0.003375031);
   Calo_420__2->SetBinContent(23,0.002933267);
   Calo_420__2->SetBinContent(24,0.002585198);
   Calo_420__2->SetBinContent(25,0.002356741);
   Calo_420__2->SetBinContent(26,0.002082432);
   Calo_420__2->SetBinContent(27,0.001824072);
   Calo_420__2->SetBinContent(28,0.001675355);
   Calo_420__2->SetBinContent(29,0.001482781);
   Calo_420__2->SetBinContent(30,0.001363967);
   Calo_420__2->SetBinContent(31,0.001304162);
   Calo_420__2->SetBinContent(32,0.001146275);
   Calo_420__2->SetBinContent(33,0.001017094);
   Calo_420__2->SetBinContent(34,0.0009780214);
   Calo_420__2->SetBinContent(35,0.0009118365);
   Calo_420__2->SetBinContent(36,0.0008552205);
   Calo_420__2->SetBinContent(37,0.0007902317);
   Calo_420__2->SetBinContent(38,0.0007136805);
   Calo_420__2->SetBinContent(39,0.0007256417);
   Calo_420__2->SetBinContent(40,0.0006466982);
   Calo_420__2->SetBinContent(41,0.0006136058);
   Calo_420__2->SetBinContent(42,0.0005996511);
   Calo_420__2->SetBinContent(43,0.0005490157);
   Calo_420__2->SetBinContent(44,0.0005334662);
   Calo_420__2->SetBinContent(45,0.000492001);
   Calo_420__2->SetBinContent(46,0.0004652878);
   Calo_420__2->SetBinContent(47,0.0004537254);
   Calo_420__2->SetBinContent(48,0.0004274109);
   Calo_420__2->SetBinContent(49,0.00044615);
   Calo_420__2->SetBinContent(50,0.0004154498);
   Calo_420__2->SetBinContent(51,0.0003931223);
   Calo_420__2->SetBinContent(52,0.0003584351);
   Calo_420__2->SetBinContent(53,0.0003408921);
   Calo_420__2->SetBinContent(54,0.0003213556);
   Calo_420__2->SetBinContent(55,0.0003201595);
   Calo_420__2->SetBinContent(56,0.0003309245);
   Calo_420__2->SetBinContent(57,0.000300623);
   Calo_420__2->SetBinContent(58,0.000293845);
   Calo_420__2->SetBinContent(59,0.0002607526);
   Calo_420__2->SetBinContent(60,0.0002778968);
   Calo_420__2->SetBinContent(61,0.0002743085);
   Calo_420__2->SetBinContent(62,0.0002543733);
   Calo_420__2->SetBinContent(63,0.000233242);
   Calo_420__2->SetBinContent(64,0.0002471966);
   Calo_420__2->SetBinContent(65,0.0002404186);
   Calo_420__2->SetBinContent(66,0.000226464);
   Calo_420__2->SetBinContent(67,0.0002228756);
   Calo_420__2->SetBinContent(68,0.0002212808);
   Calo_420__2->SetBinContent(69,0.0002053327);
   Calo_420__2->SetBinContent(70,0.0002065288);
   Calo_420__2->SetBinContent(71,0.0001929728);
   Calo_420__2->SetBinContent(72,0.0001953651);
   Calo_420__2->SetBinContent(73,0.0001842013);
   Calo_420__2->SetBinContent(74,0.0001778221);
   Calo_420__2->SetBinContent(75,0.0001642661);
   Calo_420__2->SetBinContent(76,0.0001606778);
   Calo_420__2->SetBinContent(77,0.0001562921);
   Calo_420__2->SetBinContent(78,0.0001519063);
   Calo_420__2->SetBinContent(79,0.0001594817);
   Calo_420__2->SetBinContent(80,0.0001499128);
   Calo_420__2->SetBinContent(81,0.000145527);
   Calo_420__2->SetBinContent(82,0.0001467231);
   Calo_420__2->SetBinContent(83,0.0001495141);
   Calo_420__2->SetBinContent(84,0.0001423374);
   Calo_420__2->SetBinContent(85,0.0001411413);
   Calo_420__2->SetBinContent(86,0.0001188139);
   Calo_420__2->SetBinContent(87,0.0001204087);
   Calo_420__2->SetBinContent(88,0.000123997);
   Calo_420__2->SetBinContent(89,0.0001196113);
   Calo_420__2->SetBinContent(90,0.0001192126);
   Calo_420__2->SetBinContent(91,0.0001152255);
   Calo_420__2->SetBinContent(92,0.0001044605);
   Calo_420__2->SetBinContent(93,9.529031e-05);
   Calo_420__2->SetBinContent(94,9.688512e-05);
   Calo_420__2->SetBinContent(95,9.808123e-05);
   Calo_420__2->SetBinContent(96,9.608772e-05);
   Calo_420__2->SetBinContent(97,8.930975e-05);
   Calo_420__2->SetBinContent(98,9.249938e-05);
   Calo_420__2->SetBinContent(99,7.455769e-05);
   Calo_420__2->SetBinContent(100,0.003962563);
   Calo_420__2->SetMinimum(5e-05);
   Calo_420__2->SetMaximum(0.2338883);
   Calo_420__2->SetEntries(2508125);
   Calo_420__2->SetFillStyle(3490);

   ci = TColor::GetColor("#ff0000");
   Calo_420__2->SetLineColor(ci);
   Calo_420__2->SetLineWidth(2);
   Calo_420__2->GetXaxis()->SetRange(1,101);
   Calo_420__2->GetXaxis()->SetLabelFont(42);
   Calo_420__2->GetXaxis()->SetTitleOffset(1);
   Calo_420__2->GetXaxis()->SetTitleFont(42);
   Calo_420__2->GetYaxis()->SetLabelFont(42);
   Calo_420__2->GetYaxis()->SetTitleFont(42);
   Calo_420__2->GetZaxis()->SetLabelFont(42);
   Calo_420__2->GetZaxis()->SetTitleOffset(1);
   Calo_420__2->GetZaxis()->SetTitleFont(42);
   Calo_420__2->Draw("hist same");
   
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
   entry=leg->AddEntry("Calo_420","Calo_420","l");

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
