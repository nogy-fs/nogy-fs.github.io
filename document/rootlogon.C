#include "TStyle.h"

void rootlogon()
{
  gSystem->Load("libRooFit");
  using namespace RooFit;
  gStyle->SetOptFit();
  gStyle->SetFrameFillColor(0);
  gStyle->SetLabelSize(0.06,"XYZ");
  gStyle->SetLabelFont(42,"XYZ");
  gStyle->SetTitleFont(42,"");
  gStyle->SetTitleFont(42,"XYZ.");
  gStyle->SetTitleFontSize(0.06);
  gStyle->SetStatFont(42);
  gStyle->SetTextFont(42);
  gStyle->SetTitleAlign(13);
  gStyle->SetTitleX(0.14);
  gStyle->SetTitleY(0.99);

  //gROOT->GetColor(5)->SetRGB(1,0.5,0);
  gROOT->GetColor(3)->SetRGB(0,0.8,0);
  //gROOT->GetColor(7)->SetRGB(0,0.9,0.9);
  
//  gStyle->SetNdivisions(505,"XYZ");
  gStyle->SetCanvasColor(10);
  gStyle->SetCanvasBorderMode(0);
//  gStyle->SetMarkerStyle(20);
//  gStyle->SetMarkerSize(0.2);
  gStyle->SetPadColor(10);
  gStyle->SetPadBorderMode(0);
//  gStyle->SetPadGridX(1);
//  gStyle->SetPadGridY(1);
  gStyle->SetPalette(1,0);
  gStyle->SetStatColor(10);
  gStyle->SetStatBorderSize(1);
  gStyle->SetFrameBorderMode(0);
  gStyle->SetTitleFillColor(10);
  gStyle->SetTitleBorderSize(1);
  gStyle->SetTitleXSize(0.06);
  gStyle->SetTitleYSize(0.06);
  gStyle->SetPadBottomMargin(0.14);
  gStyle->SetPadLeftMargin(0.14);
  gStyle->SetPadRightMargin(0.14);
  gStyle->SetTitleOffset(1.0,"Y");
  gStyle->SetLegendBorderSize(1);
}
