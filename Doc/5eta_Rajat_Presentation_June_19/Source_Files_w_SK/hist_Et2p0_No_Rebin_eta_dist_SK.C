#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_Et2p0_No_Rebin_eta_dist_SK()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 15 17:27:48 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-2.93748,5.653846,15.42177);
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
   Calo_422__1->SetBinContent(1,1.486885);
   Calo_422__1->SetBinContent(2,2.020984);
   Calo_422__1->SetBinContent(3,2.073115);
   Calo_422__1->SetBinContent(4,3.324262);
   Calo_422__1->SetBinContent(5,6.142951);
   Calo_422__1->SetBinContent(6,6.051803);
   Calo_422__1->SetBinContent(7,7.570492);
   Calo_422__1->SetBinContent(8,8.123279);
   Calo_422__1->SetBinContent(9,8.043279);
   Calo_422__1->SetBinContent(10,7.72623);
   Calo_422__1->SetBinContent(11,6.23377);
   Calo_422__1->SetBinContent(12,6.304918);
   Calo_422__1->SetBinContent(13,3.380328);
   Calo_422__1->SetBinContent(14,2.104262);
   Calo_422__1->SetBinContent(15,2.062951);
   Calo_422__1->SetBinContent(16,1.481639);
   Calo_422__1->SetBinError(1,0.02207948);
   Calo_422__1->SetBinError(2,0.02574136);
   Calo_422__1->SetBinError(3,0.02607124);
   Calo_422__1->SetBinError(4,0.03301397);
   Calo_422__1->SetBinError(5,0.04487853);
   Calo_422__1->SetBinError(6,0.04454434);
   Calo_422__1->SetBinError(7,0.04982096);
   Calo_422__1->SetBinError(8,0.05160785);
   Calo_422__1->SetBinError(9,0.0513531);
   Calo_422__1->SetBinError(10,0.05033081);
   Calo_422__1->SetBinError(11,0.04520906);
   Calo_422__1->SetBinError(12,0.04546632);
   Calo_422__1->SetBinError(13,0.0332912);
   Calo_422__1->SetBinError(14,0.02626637);
   Calo_422__1->SetBinError(15,0.02600726);
   Calo_422__1->SetBinError(16,0.02204049);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(14.13662);
   Calo_422__1->SetEntries(226100);

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
   TLine *line = new TLine(-4.9,0,-4.9,14.13662);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,14.13662);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,14.13662);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,14.13662);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,14.13662);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,14.13662);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,14.13662);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,14.13662);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,14.13662);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,14.13662);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,14.13662);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,14.13662);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,14.13662);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,14.13662);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,14.13662);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,14.13662);
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
   pt_LaTex = pt->AddText("E_{T}^{TC} > 2.0");
   pt->Draw();
   line = new TLine(-4.9,2.184918,-4.2875,2.184918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-4.2875,3.119344,-3.675,3.119344);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.675,3.446229,-3.0625,3.446229);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.0625,5.860983,-2.45,5.860983);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-2.45,12.52852,-1.8375,12.52852);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.8375,10.63574,-1.225,10.63574);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.225,12.45475,-0.6125,12.45475);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-0.6125,12.6777,0,12.6777);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0,12.57672,0.6125,12.57672);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0.6125,12.5459,1.225,12.5459);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.225,10.64754,1.8375,10.64754);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.8375,12.85148,2.45,12.85148);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(2.45,5.88918,3.0625,5.88918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.0625,3.52918,3.675,3.52918);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.675,3.199672,4.2875,3.199672);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(4.2875,2.191475,4.9,2.191475);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420SKclusters_eta",16,-4.9,4.9);
   Calo_420__2->SetBinContent(1,2.184918);
   Calo_420__2->SetBinContent(2,3.119344);
   Calo_420__2->SetBinContent(3,3.446229);
   Calo_420__2->SetBinContent(4,5.860983);
   Calo_420__2->SetBinContent(5,12.52852);
   Calo_420__2->SetBinContent(6,10.63574);
   Calo_420__2->SetBinContent(7,12.45475);
   Calo_420__2->SetBinContent(8,12.6777);
   Calo_420__2->SetBinContent(9,12.57672);
   Calo_420__2->SetBinContent(10,12.5459);
   Calo_420__2->SetBinContent(11,10.64754);
   Calo_420__2->SetBinContent(12,12.85148);
   Calo_420__2->SetBinContent(13,5.88918);
   Calo_420__2->SetBinContent(14,3.52918);
   Calo_420__2->SetBinContent(15,3.199672);
   Calo_420__2->SetBinContent(16,2.191475);
   Calo_420__2->SetBinError(1,0.02676503);
   Calo_420__2->SetBinError(2,0.03198024);
   Calo_420__2->SetBinError(3,0.03361415);
   Calo_420__2->SetBinError(4,0.04383645);
   Calo_420__2->SetBinError(5,0.06409144);
   Calo_420__2->SetBinError(6,0.0590519);
   Calo_420__2->SetBinError(7,0.06390247);
   Calo_420__2->SetBinError(8,0.06447189);
   Calo_420__2->SetBinError(9,0.0642146);
   Calo_420__2->SetBinError(10,0.06413587);
   Calo_420__2->SetBinError(11,0.05908466);
   Calo_420__2->SetBinError(12,0.06491224);
   Calo_420__2->SetBinError(13,0.04394177);
   Calo_420__2->SetBinError(14,0.03401629);
   Calo_420__2->SetBinError(15,0.03238939);
   Calo_420__2->SetBinError(16,0.02680516);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(14.13662);
   Calo_420__2->SetEntries(385335);

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
