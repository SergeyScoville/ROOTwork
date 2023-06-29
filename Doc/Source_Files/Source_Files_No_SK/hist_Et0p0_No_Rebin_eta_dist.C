#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et0p0_No_Rebin_eta_dist()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 29 13:30:52 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-21.68955,5.653846,113.8702);
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
   
   TH1F *CalosP422__1 = new TH1F("CalosP422__1","Average number of topoclusters as function of #eta",16,-4.9,4.9);
   CalosP422__1->SetBinContent(1,1.641639);
   CalosP422__1->SetBinContent(2,2.513443);
   CalosP422__1->SetBinContent(3,5.043607);
   CalosP422__1->SetBinContent(4,9.100984);
   CalosP422__1->SetBinContent(5,64.95246);
   CalosP422__1->SetBinContent(6,87.83836);
   CalosP422__1->SetBinContent(7,89.24754);
   CalosP422__1->SetBinContent(8,94.8918);
   CalosP422__1->SetBinContent(9,94.07607);
   CalosP422__1->SetBinContent(10,90.1423);
   CalosP422__1->SetBinContent(11,88.06295);
   CalosP422__1->SetBinContent(12,65.74886);
   CalosP422__1->SetBinContent(13,9.160328);
   CalosP422__1->SetBinContent(14,5.042295);
   CalosP422__1->SetBinContent(15,2.56918);
   CalosP422__1->SetBinContent(16,1.642951);
   CalosP422__1->SetBinError(1,0.02320005);
   CalosP422__1->SetBinError(2,0.02870679);
   CalosP422__1->SetBinError(3,0.04066499);
   CalosP422__1->SetBinError(4,0.05462535);
   CalosP422__1->SetBinError(5,0.1459311);
   CalosP422__1->SetBinError(6,0.169704);
   CalosP422__1->SetBinError(7,0.1710599);
   CalosP422__1->SetBinError(8,0.1763861);
   CalosP422__1->SetBinError(9,0.1756263);
   CalosP422__1->SetBinError(10,0.1719152);
   CalosP422__1->SetBinError(11,0.1699209);
   CalosP422__1->SetBinError(12,0.146823);
   CalosP422__1->SetBinError(13,0.05480316);
   CalosP422__1->SetBinError(14,0.0406597);
   CalosP422__1->SetBinError(15,0.02902334);
   CalosP422__1->SetBinError(16,0.02320932);
   CalosP422__1->SetMinimum(0);
   CalosP422__1->SetMaximum(104.381);
   CalosP422__1->SetEntries(2170608);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1179;
   color = new TColor(ci, 0, 0, 1, " ", 0.1);
   CalosP422__1->SetFillColor(ci);
   CalosP422__1->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   CalosP422__1->SetLineColor(ci);
   CalosP422__1->SetLineWidth(2);
   CalosP422__1->GetXaxis()->SetTitle("#eta");
   CalosP422__1->GetXaxis()->SetRange(1,16);
   CalosP422__1->GetXaxis()->SetLabelFont(42);
   CalosP422__1->GetXaxis()->SetTitleSize(0.04);
   CalosP422__1->GetXaxis()->SetTickLength(0.02);
   CalosP422__1->GetXaxis()->SetTitleOffset(1);
   CalosP422__1->GetXaxis()->SetTitleFont(42);
   CalosP422__1->GetYaxis()->SetTitle("Number of topoclusters/# events");
   CalosP422__1->GetYaxis()->SetLabelFont(42);
   CalosP422__1->GetYaxis()->SetTitleSize(0.04);
   CalosP422__1->GetYaxis()->SetTitleFont(42);
   CalosP422__1->GetZaxis()->SetLabelFont(42);
   CalosP422__1->GetZaxis()->SetTitleOffset(1);
   CalosP422__1->GetZaxis()->SetTitleFont(42);
   CalosP422__1->Draw("hist");
   
   TPaveText *pt = new TPaveText(0.01,0.9408065,0.6677295,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   TText *pt_LaTex = pt->AddText("Average number of topoclusters as function of #eta");
   pt->Draw();
   TLine *line = new TLine(-4.9,0,-4.9,104.381);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,104.381);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,104.381);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,104.381);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,104.381);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,104.381);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,104.381);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,104.381);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,0,0,104.381);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,104.381);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.225,0,1.225,104.381);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,104.381);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(2.45,0,2.45,104.381);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,104.381);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(3.675,0,3.675,104.381);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,104.381);
   line->SetLineStyle(3);
   line->Draw();
   
   pt = new TPaveText(0.185,0.87,0.27,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(72);
   pt->SetTextSize(0.04);
   pt_LaTex = pt->AddText("ATLAS");
   pt->Draw();
   
   pt = new TPaveText(0.27,0.87,0.475,0.91,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   pt_LaTex = pt->AddText("Simulation Internal");
   pt->Draw();
   
   pt = new TPaveText(0.185,0.83,0.375,0.87,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   pt_LaTex = pt->AddText("HL-LHC <#mu>=200");
   pt->Draw();
   
   pt = new TPaveText(0.185,0.79,0.335,0.83,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   pt_LaTex = pt->AddText("Minimum Bias");
   pt->Draw();
   
   pt = new TPaveText(0.185,0.75,0.28,0.79,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   pt_LaTex = pt->AddText("E_{T}^{TC} > 0.0");
   pt->Draw();
   line = new TLine(-4.9,2.426557,-4.2875,2.426557);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,3.598033,-3.675,3.598033);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,7.472131,-3.0625,7.472131);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,12.36459,-2.45,12.36459);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,79.60426,-1.8375,79.60426);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,89.40557,-1.225,89.40557);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,86.95541,-0.6125,86.95541);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,91.13345,0,91.13345);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,90.13312,0.6125,90.13312);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,87.79246,1.225,87.79246);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,89.49246,1.8375,89.49246);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,80.76623,2.45,80.76623);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,12.39934,3.0625,12.39934);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,7.505902,3.675,7.505902);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,3.68918,4.2875,3.68918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,2.456721,4.9,2.456721);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *CalosP420__2 = new TH1F("CalosP420__2","h_Calo420TopoClusters_eta",16,-4.9,4.9);
   CalosP420__2->SetBinContent(1,2.426557);
   CalosP420__2->SetBinContent(2,3.598033);
   CalosP420__2->SetBinContent(3,7.472131);
   CalosP420__2->SetBinContent(4,12.36459);
   CalosP420__2->SetBinContent(5,79.60426);
   CalosP420__2->SetBinContent(6,89.40557);
   CalosP420__2->SetBinContent(7,86.95541);
   CalosP420__2->SetBinContent(8,91.13345);
   CalosP420__2->SetBinContent(9,90.13312);
   CalosP420__2->SetBinContent(10,87.79246);
   CalosP420__2->SetBinContent(11,89.49246);
   CalosP420__2->SetBinContent(12,80.76623);
   CalosP420__2->SetBinContent(13,12.39934);
   CalosP420__2->SetBinContent(14,7.505902);
   CalosP420__2->SetBinContent(15,3.68918);
   CalosP420__2->SetBinContent(16,2.456721);
   CalosP420__2->SetBinError(1,0.02820625);
   CalosP420__2->SetBinError(2,0.03434651);
   CalosP420__2->SetBinError(3,0.04949625);
   CalosP420__2->SetBinError(4,0.06367075);
   CalosP420__2->SetBinError(5,0.1615542);
   CalosP420__2->SetBinError(6,0.1712113);
   CalosP420__2->SetBinError(7,0.168849);
   CalosP420__2->SetBinError(8,0.1728578);
   CalosP420__2->SetBinError(9,0.1719065);
   CalosP420__2->SetBinError(10,0.1696597);
   CalosP420__2->SetBinError(11,0.1712945);
   CalosP420__2->SetBinError(12,0.162729);
   CalosP420__2->SetBinError(13,0.06376017);
   CalosP420__2->SetBinError(14,0.04960798);
   CalosP420__2->SetBinError(15,0.03477883);
   CalosP420__2->SetBinError(16,0.02838102);
   CalosP420__2->SetMinimum(0);
   CalosP420__2->SetMaximum(104.381);
   CalosP420__2->SetEntries(2278946);

   ci = TColor::GetColor("#000099");
   CalosP420__2->SetLineColor(ci);
   CalosP420__2->SetLineWidth(0);

   ci = TColor::GetColor("#ff0000");
   CalosP420__2->SetMarkerColor(ci);
   CalosP420__2->SetMarkerSize(0);
   CalosP420__2->GetXaxis()->SetRange(1,16);
   CalosP420__2->GetXaxis()->SetLabelFont(42);
   CalosP420__2->GetXaxis()->SetTitleOffset(1);
   CalosP420__2->GetXaxis()->SetTitleFont(42);
   CalosP420__2->GetYaxis()->SetLabelFont(42);
   CalosP420__2->GetYaxis()->SetTitleFont(42);
   CalosP420__2->GetZaxis()->SetLabelFont(42);
   CalosP420__2->GetZaxis()->SetTitleOffset(1);
   CalosP420__2->GetZaxis()->SetTitleFont(42);
   CalosP420__2->Draw("P same");
   
   TLegend *leg = new TLegend(0.2,0.3,0.3,0.42,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
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
   entry=leg->AddEntry("TLine","Calo 420","l");

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
