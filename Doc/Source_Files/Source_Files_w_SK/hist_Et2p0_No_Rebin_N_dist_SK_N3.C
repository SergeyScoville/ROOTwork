#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et2p0_No_Rebin_N_dist_SK_N3()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Fri Jul 21 17:57:57 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,53,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-14.76923,-0.01596253,77.53846,0.08380328);
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
   
   TH1F *CalosP422__1 = new TH1F("CalosP422__1","Number of Topoclusters post SK",2500,0,2500);
   CalosP422__1->SetBinContent(1,0.0003278689);
   CalosP422__1->SetBinContent(2,0.001639344);
   CalosP422__1->SetBinContent(3,0.004918033);
   CalosP422__1->SetBinContent(4,0.0104918);
   CalosP422__1->SetBinContent(5,0.01836066);
   CalosP422__1->SetBinContent(6,0.02819672);
   CalosP422__1->SetBinContent(7,0.03081967);
   CalosP422__1->SetBinContent(8,0.04393443);
   CalosP422__1->SetBinContent(9,0.05442623);
   CalosP422__1->SetBinContent(10,0.06196721);
   CalosP422__1->SetBinContent(11,0.06393442);
   CalosP422__1->SetBinContent(12,0.06983607);
   CalosP422__1->SetBinContent(13,0.06950819);
   CalosP422__1->SetBinContent(14,0.06688525);
   CalosP422__1->SetBinContent(15,0.06295082);
   CalosP422__1->SetBinContent(16,0.04327869);
   CalosP422__1->SetBinContent(17,0.05606557);
   CalosP422__1->SetBinContent(18,0.05081967);
   CalosP422__1->SetBinContent(19,0.03836066);
   CalosP422__1->SetBinContent(20,0.03245902);
   CalosP422__1->SetBinContent(21,0.0357377);
   CalosP422__1->SetBinContent(22,0.02721312);
   CalosP422__1->SetBinContent(23,0.02098361);
   CalosP422__1->SetBinContent(24,0.01606557);
   CalosP422__1->SetBinContent(25,0.01934426);
   CalosP422__1->SetBinContent(26,0.01409836);
   CalosP422__1->SetBinContent(27,0.01147541);
   CalosP422__1->SetBinContent(28,0.008852459);
   CalosP422__1->SetBinContent(29,0.007213115);
   CalosP422__1->SetBinContent(30,0.005901639);
   CalosP422__1->SetBinContent(31,0.007213115);
   CalosP422__1->SetBinContent(32,0.005901639);
   CalosP422__1->SetBinContent(33,0.004590164);
   CalosP422__1->SetBinContent(34,0.001967213);
   CalosP422__1->SetBinContent(36,0.001311475);
   CalosP422__1->SetBinContent(37,0.0003278689);
   CalosP422__1->SetBinContent(38,0.0009836066);
   CalosP422__1->SetBinContent(39,0.0009836066);
   CalosP422__1->SetBinContent(41,0.0003278689);
   CalosP422__1->SetBinContent(42,0.0003278689);
   CalosP422__1->SetMinimum(0);
   CalosP422__1->SetMaximum(0.07681967);
   CalosP422__1->SetEntries(5550);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   CalosP422__1->SetFillColor(ci);
   CalosP422__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   CalosP422__1->SetLineColor(ci);
   CalosP422__1->SetLineWidth(2);
   CalosP422__1->GetXaxis()->SetTitle("Number of Topoclusters");
   CalosP422__1->GetXaxis()->SetRange(1,72);
   CalosP422__1->GetXaxis()->SetLabelFont(42);
   CalosP422__1->GetXaxis()->SetTitleSize(0.04);
   CalosP422__1->GetXaxis()->SetTitleOffset(1);
   CalosP422__1->GetXaxis()->SetTitleFont(42);
   CalosP422__1->GetYaxis()->SetTitle("Fraction of Events/0 TC");
   CalosP422__1->GetYaxis()->SetLabelFont(42);
   CalosP422__1->GetYaxis()->SetTitleSize(0.04);
   CalosP422__1->GetYaxis()->SetTitleFont(42);
   CalosP422__1->GetZaxis()->SetLabelFont(42);
   CalosP422__1->GetZaxis()->SetTitleOffset(1);
   CalosP422__1->GetZaxis()->SetTitleFont(42);
   CalosP422__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.4598831,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Number of Topoclusters post SK");
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
   
   TH1F *CalosP420__2 = new TH1F("CalosP420__2","h_Calo420SKclusters_N3",2500,0,2500);
   CalosP420__2->SetBinContent(1,0.001639344);
   CalosP420__2->SetBinContent(2,0.007213115);
   CalosP420__2->SetBinContent(3,0.01016393);
   CalosP420__2->SetBinContent(4,0.009836066);
   CalosP420__2->SetBinContent(5,0.01508197);
   CalosP420__2->SetBinContent(6,0.01442623);
   CalosP420__2->SetBinContent(7,0.01508197);
   CalosP420__2->SetBinContent(8,0.01934426);
   CalosP420__2->SetBinContent(9,0.02327869);
   CalosP420__2->SetBinContent(10,0.02819672);
   CalosP420__2->SetBinContent(11,0.03836066);
   CalosP420__2->SetBinContent(12,0.04032787);
   CalosP420__2->SetBinContent(13,0.04);
   CalosP420__2->SetBinContent(14,0.04426229);
   CalosP420__2->SetBinContent(15,0.04622951);
   CalosP420__2->SetBinContent(16,0.04426229);
   CalosP420__2->SetBinContent(17,0.04557377);
   CalosP420__2->SetBinContent(18,0.04);
   CalosP420__2->SetBinContent(19,0.04918033);
   CalosP420__2->SetBinContent(20,0.04393443);
   CalosP420__2->SetBinContent(21,0.04491803);
   CalosP420__2->SetBinContent(22,0.03770492);
   CalosP420__2->SetBinContent(23,0.03934426);
   CalosP420__2->SetBinContent(24,0.03147541);
   CalosP420__2->SetBinContent(25,0.02819672);
   CalosP420__2->SetBinContent(26,0.03672131);
   CalosP420__2->SetBinContent(27,0.02360656);
   CalosP420__2->SetBinContent(28,0.02622951);
   CalosP420__2->SetBinContent(29,0.02426229);
   CalosP420__2->SetBinContent(30,0.02032787);
   CalosP420__2->SetBinContent(31,0.01508197);
   CalosP420__2->SetBinContent(32,0.0157377);
   CalosP420__2->SetBinContent(33,0.01377049);
   CalosP420__2->SetBinContent(34,0.01245902);
   CalosP420__2->SetBinContent(35,0.01016393);
   CalosP420__2->SetBinContent(36,0.01016393);
   CalosP420__2->SetBinContent(37,0.004918033);
   CalosP420__2->SetBinContent(38,0.005901639);
   CalosP420__2->SetBinContent(39,0.003934426);
   CalosP420__2->SetBinContent(40,0.003606557);
   CalosP420__2->SetBinContent(41,0.00295082);
   CalosP420__2->SetBinContent(42,0.001967213);
   CalosP420__2->SetBinContent(43,0.001967213);
   CalosP420__2->SetBinContent(44,0.001639344);
   CalosP420__2->SetBinContent(45,0.001639344);
   CalosP420__2->SetBinContent(46,0.001311475);
   CalosP420__2->SetBinContent(47,0.0009836066);
   CalosP420__2->SetBinContent(48,0.0006557377);
   CalosP420__2->SetBinContent(49,0.0006557377);
   CalosP420__2->SetBinContent(51,0.0003278689);
   CalosP420__2->SetBinContent(54,0.0003278689);
   CalosP420__2->SetBinContent(57,0.0003278689);
   CalosP420__2->SetBinContent(60,0.0003278689);
   CalosP420__2->SetMinimum(0);
   CalosP420__2->SetMaximum(0.07681967);
   CalosP420__2->SetEntries(3050);

   ci = TColor::GetColor("#ff0000");
   CalosP420__2->SetLineColor(ci);
   CalosP420__2->SetLineWidth(2);
   CalosP420__2->GetXaxis()->SetRange(1,72);
   CalosP420__2->GetXaxis()->SetLabelFont(42);
   CalosP420__2->GetXaxis()->SetTitleOffset(1);
   CalosP420__2->GetXaxis()->SetTitleFont(42);
   CalosP420__2->GetYaxis()->SetLabelFont(42);
   CalosP420__2->GetYaxis()->SetTitleFont(42);
   CalosP420__2->GetZaxis()->SetLabelFont(42);
   CalosP420__2->GetZaxis()->SetTitleOffset(1);
   CalosP420__2->GetZaxis()->SetTitleFont(42);
   CalosP420__2->Draw("hist same");
   
   TLegend *leg = new TLegend(0.7,0.55,0.83,0.67,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Calo 422","Calo 422","lpf");

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
   entry=leg->AddEntry("Calo 420","Calo 420","l");

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
