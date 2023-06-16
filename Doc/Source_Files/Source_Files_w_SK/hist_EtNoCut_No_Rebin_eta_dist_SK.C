#ifdef __CLING__
#pragma cling optimize(0)
#endif
void hist_EtNoCut_No_Rebin_eta_dist_SK()
{
//=========Macro generated from canvas: All_GEP_Algo/Histograms
//=========  (Thu Jun 15 17:27:31 2023) by ROOT version 6.26/06
   TCanvas *All_GEP_Algo = new TCanvas("All_GEP_Algo", "Histograms",0,151,1200,800);
   gStyle->SetOptStat(0);
   All_GEP_Algo->SetHighLightColor(2);
   All_GEP_Algo->Range(-6.910256,-5.03689,5.653846,26.44367);
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
   Calo_422__1->SetBinContent(1,1.582951);
   Calo_422__1->SetBinContent(2,2.255082);
   Calo_422__1->SetBinContent(3,2.994426);
   Calo_422__1->SetBinContent(4,4.388853);
   Calo_422__1->SetBinContent(5,13.97148);
   Calo_422__1->SetBinContent(6,15.25443);
   Calo_422__1->SetBinContent(7,19.12426);
   Calo_422__1->SetBinContent(8,21.86656);
   Calo_422__1->SetBinContent(9,21.62328);
   Calo_422__1->SetBinContent(10,19.35541);
   Calo_422__1->SetBinContent(11,15.3482);
   Calo_422__1->SetBinContent(12,14.13967);
   Calo_422__1->SetBinContent(13,4.407541);
   Calo_422__1->SetBinContent(14,2.979344);
   Calo_422__1->SetBinContent(15,2.300656);
   Calo_422__1->SetBinContent(16,1.588197);
   Calo_422__1->SetBinError(1,0.02278158);
   Calo_422__1->SetBinError(2,0.02719138);
   Calo_422__1->SetBinError(3,0.03133335);
   Calo_422__1->SetBinError(4,0.03793373);
   Calo_422__1->SetBinError(5,0.06768169);
   Calo_422__1->SetBinError(6,0.07072094);
   Calo_422__1->SetBinError(7,0.07918491);
   Calo_422__1->SetBinError(8,0.08467209);
   Calo_422__1->SetBinError(9,0.08419976);
   Calo_422__1->SetBinError(10,0.07966201);
   Calo_422__1->SetBinError(11,0.07093797);
   Calo_422__1->SetBinError(12,0.06808787);
   Calo_422__1->SetBinError(13,0.03801441);
   Calo_422__1->SetBinError(14,0.03125435);
   Calo_422__1->SetBinError(15,0.02746477);
   Calo_422__1->SetBinError(16,0.0228193);
   Calo_422__1->SetMinimum(0);
   Calo_422__1->SetMaximum(24.24003);
   Calo_422__1->SetEntries(497700);

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
   TLine *line = new TLine(-4.9,0,-4.9,24.24003);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4.2875,0,-4.2875,24.24003);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.675,0,-3.675,24.24003);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-3.0625,0,-3.0625,24.24003);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-2.45,0,-2.45,24.24003);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.8375,0,-1.8375,24.24003);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-1.225,0,-1.225,24.24003);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-0.6125,0,-0.6125,24.24003);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,0,0,24.24003);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0.6125,0,0.6125,24.24003);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.225,0,1.225,24.24003);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(1.8375,0,1.8375,24.24003);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.45,0,2.45,24.24003);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.0625,0,3.0625,24.24003);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(3.675,0,3.675,24.24003);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(4.2875,0,4.2875,24.24003);
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
   line = new TLine(-4.9,2.177705,-4.2875,2.177705);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-4.2875,3.078689,-3.675,3.078689);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.675,3.58,-3.0625,3.58);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-3.0625,6.026885,-2.45,6.026885);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-2.45,13.1223,-1.8375,13.1223);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.8375,15.45016,-1.225,15.45016);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-1.225,20.06951,-0.6125,20.06951);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(-0.6125,22.03639,0,22.03639);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0,21.83672,0.6125,21.83672);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(0.6125,20.29377,1.225,20.29377);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.225,15.55934,1.8375,15.55934);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(1.8375,13.45148,2.45,13.45148);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(2.45,6.036394,3.0625,6.036394);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.0625,3.662951,3.675,3.662951);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(3.675,3.12623,4.2875,3.12623);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(4.2875,2.187869,4.9,2.187869);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   
   TH1F *Calo_420__2 = new TH1F("Calo_420__2","h_Calo420SKclusters_eta",16,-4.9,4.9);
   Calo_420__2->SetBinContent(1,2.177705);
   Calo_420__2->SetBinContent(2,3.078689);
   Calo_420__2->SetBinContent(3,3.58);
   Calo_420__2->SetBinContent(4,6.026885);
   Calo_420__2->SetBinContent(5,13.1223);
   Calo_420__2->SetBinContent(6,15.45016);
   Calo_420__2->SetBinContent(7,20.06951);
   Calo_420__2->SetBinContent(8,22.03639);
   Calo_420__2->SetBinContent(9,21.83672);
   Calo_420__2->SetBinContent(10,20.29377);
   Calo_420__2->SetBinContent(11,15.55934);
   Calo_420__2->SetBinContent(12,13.45148);
   Calo_420__2->SetBinContent(13,6.036394);
   Calo_420__2->SetBinContent(14,3.662951);
   Calo_420__2->SetBinContent(15,3.12623);
   Calo_420__2->SetBinContent(16,2.187869);
   Calo_420__2->SetBinError(1,0.02672081);
   Calo_420__2->SetBinError(2,0.03177115);
   Calo_420__2->SetBinError(3,0.03426033);
   Calo_420__2->SetBinError(4,0.04445254);
   Calo_420__2->SetBinError(5,0.06559262);
   Calo_420__2->SetBinError(6,0.07117322);
   Calo_420__2->SetBinError(7,0.08111823);
   Calo_420__2->SetBinError(8,0.08500028);
   Calo_420__2->SetBinError(9,0.08461431);
   Calo_420__2->SetBinError(10,0.08157019);
   Calo_420__2->SetBinError(11,0.07142426);
   Calo_420__2->SetBinError(12,0.06641024);
   Calo_420__2->SetBinError(13,0.04448759);
   Calo_420__2->SetBinError(14,0.03465498);
   Calo_420__2->SetBinError(15,0.03201552);
   Calo_420__2->SetBinError(16,0.02678309);
   Calo_420__2->SetMinimum(0);
   Calo_420__2->SetMaximum(24.24003);
   Calo_420__2->SetEntries(523674);

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
   line = new TLine(-4.9,1.945574,-4.2875,1.945574);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-4.2875,2.911803,-3.675,2.911803);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.675,3.65082,-3.0625,3.65082);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-3.0625,6.006885,-2.45,6.006885);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-2.45,12.68098,-1.8375,12.68098);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.8375,17.06557,-1.225,17.06557);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.225,18.81279,-0.6125,18.81279);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.6125,19.22328,0,19.22328);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,19.1341,0.6125,19.1341);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.6125,18.91902,1.225,18.91902);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.225,17.1941,1.8375,17.1941);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.8375,12.96492,2.45,12.96492);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.45,5.965574,3.0625,5.965574);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.0625,3.689508,3.675,3.689508);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(3.675,2.943279,4.2875,2.943279);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(4.2875,1.982623,4.9,1.982623);

   ci = TColor::GetColor("#339933");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *Calo_Cal__3 = new TH1F("Calo_Cal__3","h_CaloCalSKclusters_eta",16,-4.9,4.9);
   Calo_Cal__3->SetBinContent(1,1.945574);
   Calo_Cal__3->SetBinContent(2,2.911803);
   Calo_Cal__3->SetBinContent(3,3.65082);
   Calo_Cal__3->SetBinContent(4,6.006885);
   Calo_Cal__3->SetBinContent(5,12.68098);
   Calo_Cal__3->SetBinContent(6,17.06557);
   Calo_Cal__3->SetBinContent(7,18.81279);
   Calo_Cal__3->SetBinContent(8,19.22328);
   Calo_Cal__3->SetBinContent(9,19.1341);
   Calo_Cal__3->SetBinContent(10,18.91902);
   Calo_Cal__3->SetBinContent(11,17.1941);
   Calo_Cal__3->SetBinContent(12,12.96492);
   Calo_Cal__3->SetBinContent(13,5.965574);
   Calo_Cal__3->SetBinContent(14,3.689508);
   Calo_Cal__3->SetBinContent(15,2.943279);
   Calo_Cal__3->SetBinContent(16,1.982623);
   Calo_Cal__3->SetBinError(1,0.02525654);
   Calo_Cal__3->SetBinError(2,0.03089805);
   Calo_Cal__3->SetBinError(3,0.03459754);
   Calo_Cal__3->SetBinError(4,0.04437872);
   Calo_Cal__3->SetBinError(5,0.06448023);
   Calo_Cal__3->SetBinError(6,0.07480154);
   Calo_Cal__3->SetBinError(7,0.07853742);
   Calo_Cal__3->SetBinError(8,0.07938964);
   Calo_Cal__3->SetBinError(9,0.07920527);
   Calo_Cal__3->SetBinError(10,0.07875885);
   Calo_Cal__3->SetBinError(11,0.07508268);
   Calo_Cal__3->SetBinError(12,0.0651981);
   Calo_Cal__3->SetBinError(13,0.04422585);
   Calo_Cal__3->SetBinError(14,0.03478038);
   Calo_Cal__3->SetBinError(15,0.0310646);
   Calo_Cal__3->SetBinError(16,0.02549589);
   Calo_Cal__3->SetMinimum(0);
   Calo_Cal__3->SetMaximum(24.24003);
   Calo_Cal__3->SetEntries(503527);

   ci = TColor::GetColor("#009900");
   Calo_Cal__3->SetLineColor(ci);
   Calo_Cal__3->SetLineWidth(0);
   Calo_Cal__3->GetXaxis()->SetRange(1,16);
   Calo_Cal__3->GetXaxis()->SetLabelFont(42);
   Calo_Cal__3->GetXaxis()->SetTitleOffset(1);
   Calo_Cal__3->GetXaxis()->SetTitleFont(42);
   Calo_Cal__3->GetYaxis()->SetLabelFont(42);
   Calo_Cal__3->GetYaxis()->SetTitleFont(42);
   Calo_Cal__3->GetZaxis()->SetLabelFont(42);
   Calo_Cal__3->GetZaxis()->SetTitleOffset(1);
   Calo_Cal__3->GetZaxis()->SetTitleFont(42);
   Calo_Cal__3->Draw("same");
   
   TLegend *leg = new TLegend(0.8,0.4,0.92,0.52,NULL,"brNDC");
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
   entry=leg->AddEntry("TLine","Calo_Cal","l");

   ci = TColor::GetColor("#339933");
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
