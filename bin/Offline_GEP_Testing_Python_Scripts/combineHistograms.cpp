#include <TFile.h>
#include <TH1F.h>
#include <TCanvas.h>
#include <TLegend.h>

void combineHistograms()
{
    // Open the ROOT file containing the histograms
    TFile* file = new TFile("/Users/sergeyscoville/Desktop/Projects/ROOT_Github/ROOTwork/Data/18Jul_splitting/hist_Et0p0.root", "READ");

    // Get the histograms from the file
    TH1F* h1 = (TH1F*)file->Get("h_Calo422TopoClusters_N1");
    TH1F* h2 = (TH1F*)file->Get("h_Calo420TopoClusters_N1");
    TH1F* h3 = (TH1F*)file->Get("h_CaloCalTopoClusters_N1");

    // Create a new canvas to draw the combined histogram
    TCanvas* canvas = new TCanvas("canvas", "Combined Histogram", 800, 600);

    // Draw the first histogram
    h1->Draw();

    // Set the line color and style for the second histogram
    h2->SetLineColor(kRed);
    h2->SetLineStyle(2);

    // Draw the second histogram on top of the first one
    h2->Draw("SAME");

    // Set the line color and style for the third histogram
    h3->SetLineColor(kBlue);
    h3->SetLineStyle(3);

    // Draw the third histogram on top of the previous ones
    h3->Draw("SAME");

    // Update the canvas to show the combined histogram
    canvas->Update();

    // Add a legend to the plot to label each histogram
    TLegend* legend = new TLegend(0.7, 0.7, 0.9, 0.9);
    legend->AddEntry(h1, "h_Calo422TopoClusters_N1", "l");
    legend->AddEntry(h2, "h_Calo420TopoClusters_N1", "l");
    legend->AddEntry(h3, "h_CaloCalTopoClusters_N1", "l");
    legend->Draw();

    // Save the combined histogram to a ROOT file
    TFile* outputFile = new TFile("combined_histogram.root", "RECREATE");
    canvas->Write();
    outputFile->Close();

    // Clean up by closing the file and deleting the objects
    file->Close();
    delete file;
    delete canvas;
}
