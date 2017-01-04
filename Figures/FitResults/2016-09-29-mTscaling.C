#if !defined __CINT__ || defined __MAKECINT__
#include <TGraph.h>
#include <TCanvas.h>
#include <TColor.h>
#include <TH1F.h>
#include <TGraphErrors.h>
#include <TGraphAsymmErrors.h>
#include <TMarker.h>
#include <TLatex.h>
#include <TStyle.h>
#include <TLine.h>
#include <TMath.h>
#endif

enum Markers {kLamLam = kFullTriangleDown, kLamALam = kFullTriangleUp};



void mTscaling(Bool_t useNoResiduals = kFALSE){
//=========Macro generated from canvas: canmtcomb/canmtcomb
//=========  (Fri May  8 11:29:01 2015) by ROOT version5.34/26
  const Int_t red = kRed;
  const Int_t redT = TColor::GetColorTransparent(red,0.2);
  const Int_t green = kGreen+2;
  const Int_t greenT = TColor::GetColorTransparent(green,0.2);
  const Int_t blue = kBlue;
  const Int_t blueT = TColor::GetColorTransparent(blue,0.2);


  

  
   TCanvas *canmtcomb = new TCanvas("canmtcomb", "canmtcomb",2626,901,700,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canmtcomb->Range(-0.1314815,-0.7522786,2.078395,10.43759);
   canmtcomb->SetFillColor(10);
   canmtcomb->SetBorderMode(0);
   canmtcomb->SetBorderSize(2);
   canmtcomb->SetLeftMargin(0.15);
   canmtcomb->SetRightMargin(0.04);
   canmtcomb->SetTopMargin(0.04);
   canmtcomb->SetBottomMargin(0.17);
   canmtcomb->SetFrameFillColor(0);
   canmtcomb->SetFrameBorderMode(0);
   canmtcomb->SetFrameBorderMode(0);
   
   //   TH1D *ramka = new TH1D("ramka","",100,0.2,1.99);
      TH1D *ramka = new TH1D("ramka","",100,0.2,2.2);
   ramka->SetMinimum(1.15);
   ramka->SetMaximum(9.99);
   ramka->SetStats(0);

   ramka->GetXaxis()->SetTitle("#LT#it{m}_{T}#GT (GeV/#it{c}^{2})");
   ramka->GetXaxis()->SetNdivisions(8);
   ramka->GetXaxis()->SetLabelFont(42);
   ramka->GetXaxis()->SetLabelOffset(0.01);
   ramka->GetXaxis()->SetTitleSize(0.044);
   ramka->GetXaxis()->SetTitleOffset(0.9);
   ramka->GetXaxis()->SetTitleFont(42);
   ramka->GetYaxis()->SetTitle("#it{R}_{inv} (fm)");
   ramka->GetYaxis()->SetNdivisions(6);
   ramka->GetYaxis()->SetLabelFont(42);
   ramka->GetYaxis()->SetLabelOffset(0.01);
   ramka->GetYaxis()->SetTitleSize(0.044);
   ramka->GetYaxis()->SetTickLength(0.02);
   ramka->GetYaxis()->SetTitleOffset(0.9);
   ramka->GetYaxis()->SetTitleFont(42);
   ramka->GetZaxis()->SetLabelFont(42);
   ramka->GetZaxis()->SetLabelOffset(0.01);
   ramka->GetZaxis()->SetTitleSize(0.044);
   ramka->GetZaxis()->SetTitleOffset(0.9);
   ramka->GetZaxis()->SetTitleFont(42);
   ramka->Draw("");
   

//----- Protons ----------------------------------

  //----- 0-10% -----
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3);
   grae->SetName("Graph0");
   grae->SetFillColor(redT);
   grae->SetPoint(0,1.093712,4.06);
   grae->SetPointError(0,0.015,0.015,0.8,0.84);
   grae->SetPoint(1,1.35126,3.53);
   grae->SetPointError(1,0.015,0.015,0.34,0.6);
   grae->SetPoint(2,1.665335,3.24);
   grae->SetPointError(2,0.015,0.015,1.11,0.55);
   grae->Draw("2");

   TGraphErrors *gre = new TGraphErrors(3);
   gre->SetName("Graph15");
   gre->SetTitle("Graph");
   gre->SetLineColor(red);
   gre->SetMarkerColor(red);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.6);
   gre->SetPoint(0,1.093712,4.06);
   gre->SetPointError(0,0,0.09);
   gre->SetPoint(1,1.35126,3.53);
   gre->SetPointError(1,0,0.06);
   gre->SetPoint(2,1.665335,3.24);
   gre->SetPointError(2,0,0.06);
   gre->Draw("pz");

  //----- 10-30% -----
   grae = new TGraphAsymmErrors(3);
   grae->SetName("Graph1");
   grae->SetFillColor(greenT);
   grae->SetFillStyle(1001);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetPoint(0,1.103712,3.28);
   grae->SetPointError(0,0.015,0.015,0.75,0.29);
   grae->SetPoint(1,1.36126,3.32);
   grae->SetPointError(1,0.015,0.015,0.79,0.18);
   grae->SetPoint(2,1.675335,3.1);
   grae->SetPointError(2,0.015,0.015,0.41,0.71);
   grae->Draw("e2");

   gre = new TGraphErrors(3);
   gre->SetName("Graph16");
   gre->SetTitle("Graph");
   gre->SetLineColor(green);
   gre->SetMarkerColor(green);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.6);
   gre->SetPoint(0,1.103712,3.28);
   gre->SetPointError(0,0,0.13);
   gre->SetPoint(1,1.36126,3.32);
   gre->SetPointError(1,0,0.01);
   gre->SetPoint(2,1.675335,3.1);
   gre->SetPointError(2,0,0.02);
   gre->Draw("pz");
   

  //----- 30-50% -----
   grae = new TGraphAsymmErrors(3);
   grae->SetName("Graph2");
   grae->SetFillColor(blueT);
   grae->SetFillStyle(1001);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetPoint(0,1.113712,2.65);
   grae->SetPointError(0,0.015,0.015,0.71,1.06);
   grae->SetPoint(1,1.37126,2.72);
   grae->SetPointError(1,0.015,0.015,0.88,1.07);
   grae->SetPoint(2,1.685335,2.4);
   grae->SetPointError(2,0.015,0.015,0.51,0.6);
   grae->Draw("e2");

   gre = new TGraphErrors(3);
   gre->SetName("Graph17");
   gre->SetTitle("Graph");
   gre->SetLineColor(blue);
   gre->SetMarkerColor(blue);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.6);
   gre->SetPoint(0,1.113712,2.65);
   gre->SetPointError(0,0,0.28);
   gre->SetPoint(1,1.37126,2.72);
   gre->SetPointError(1,0,0.19);
   gre->SetPoint(2,1.685335,2.4);
   gre->SetPointError(2,0,0.18);
   gre->Draw("pz");




//----- Anti-Protons ----------------------------------



  //----- 0-10% -----
   grae = new TGraphAsymmErrors(3);
   grae->SetName("Graph3");
   grae->SetFillColor(redT);
   grae->SetFillStyle(1001);
   grae->SetLineColor(0);
   grae->SetLineStyle(2);
   grae->SetLineWidth(0);
   grae->SetPoint(0,1.143712,4.39);
   grae->SetPointError(0,0.015,0.015,0.77,0.36);
   grae->SetPoint(1,1.40126,3.6);
   grae->SetPointError(1,0.015,0.015,0.65,0.44);
   grae->SetPoint(2,1.715335,3.11);
   grae->SetPointError(2,0.015,0.015,0.94,0.87);
   grae->Draw("e2");

   gre = new TGraphErrors(3);
   gre->SetName("Graph18");
   gre->SetTitle("Graph");
   gre->SetLineColor(red);
   gre->SetMarkerColor(red);
   gre->SetMarkerStyle(5);
   gre->SetMarkerSize(1.6);
   gre->SetPoint(0,1.143712,4.39);
   gre->SetPointError(0,0,0.07);
   gre->SetPoint(1,1.40126,3.6);
   gre->SetPointError(1,0,0.01);
   gre->SetPoint(2,1.715335,3.11);
   gre->SetPointError(2,0,0.08);
   gre->Draw("pz");
   
  //----- 10-30% -----
   grae = new TGraphAsymmErrors(3);
   grae->SetName("Graph4");
   grae->SetFillColor(greenT);
   grae->SetFillStyle(1001);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetPoint(0,1.153712,3.44);
   grae->SetPointError(0,0.015,0.015,0.83,0.96);
   grae->SetPoint(1,1.41126,3.3);
   grae->SetPointError(1,0.015,0.015,0.56,0.29);
   grae->SetPoint(2,1.725335,3.12);
   grae->SetPointError(2,0.015,0.015,0.45,0.69);
   grae->Draw("e2");

   gre = new TGraphErrors(3);
   gre->SetName("Graph19");
   gre->SetTitle("Graph");
   gre->SetLineColor(green);
   gre->SetMarkerColor(green);
   gre->SetMarkerStyle(5);
   gre->SetMarkerSize(1.6);
   gre->SetPoint(0,1.153712,3.44);
   gre->SetPointError(0,0,0.03);
   gre->SetPoint(1,1.41126,3.3);
   gre->SetPointError(1,0,0.01);
   gre->SetPoint(2,1.725335,3.12);
   gre->SetPointError(2,0,0.14);
   gre->Draw("pz");
   
  //----- 30-50% -----
   grae = new TGraphAsymmErrors(3);
   grae->SetName("Graph5");
   grae->SetFillColor(blueT);
   grae->SetFillStyle(1001);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetPoint(0,1.163712,2.93);
   grae->SetPointError(0,0.015,0.015,0.47,0.74);
   grae->SetPoint(1,1.42126,2.5);
   grae->SetPointError(1,0.015,0.015,0.26,0.9);
   grae->SetPoint(2,1.735335,2.47);
   grae->SetPointError(2,0.015,0.015,0.69,0.47);
   grae->Draw("e2");

   gre = new TGraphErrors(3);
   gre->SetName("Graph20");
   gre->SetLineColor(blue);
   gre->SetMarkerColor(blue);
   gre->SetMarkerStyle(5);
   gre->SetMarkerSize(1.6);
   gre->SetPoint(0,1.163712,2.93);
   gre->SetPointError(0,0,0.28);
   gre->SetPoint(1,1.42126,2.5);
   gre->SetPointError(1,0,0.02);
   gre->SetPoint(2,1.735335,2.47);
   gre->SetPointError(2,0,0.2);
   gre->Draw("pz");


//----- K0s-K0s ----------------------------------


   //----- 0-10% -----
   gre = new TGraphErrors(4);
   gre->SetName("Graph6");
   gre->SetFillColor(redT);
   gre->SetFillStyle(1001);
   gre->SetLineColor(0);
   gre->SetLineStyle(2);
   gre->SetLineWidth(0);
   gre->SetPoint(0,0.6983693,6.066);
   gre->SetPointError(0,0.015,0.137);
   gre->SetPoint(1,0.8670177,5.394);
   gre->SetPointError(1,0.015,0.138);
   gre->SetPoint(2,1.028406,5.0706);
   gre->SetPointError(2,0.015,0.12);
   gre->SetPoint(3,1.289853,4.408);
   gre->SetPointError(3,0.015,0.139);
   gre->Draw("e2");

   gre = new TGraphErrors(4);
   gre->SetName("Graph21");
   gre->SetLineColor(red);
   gre->SetMarkerColor(red);
   gre->SetMarkerStyle(27);
   gre->SetMarkerSize(1.6);
   gre->SetPoint(0,0.6983693,6.066);
   gre->SetPointError(0,0,0.195);
   gre->SetPoint(1,0.8670177,5.394);
   gre->SetPointError(1,0,0.116);
   gre->SetPoint(2,1.028406,5.0706);
   gre->SetPointError(2,0,0.101);
   gre->SetPoint(3,1.289853,4.408);
   gre->SetPointError(3,0,0.08);
   gre->Draw("pz");


  //----- 10-30% -----   
   gre = new TGraphErrors(4);
   gre->SetName("Graph7");
   gre->SetFillColor(greenT);
   gre->SetFillStyle(1001);
   gre->SetLineColor(0);
   gre->SetLineWidth(0);
   gre->SetPoint(0,0.6913897,5.174);
   gre->SetPointError(0,0.015,0.137);
   gre->SetPoint(1,0.8588479,4.69);
   gre->SetPointError(1,0.015,0.138);
   gre->SetPoint(2,1.028406,4.123);
   gre->SetPointError(2,0.015,0.12);
   gre->SetPoint(3,1.289853,3.785);
   gre->SetPointError(3,0.015,0.139);
   gre->Draw("e2");

   gre = new TGraphErrors(4);
   gre->SetName("Graph22");
   gre->SetLineColor(green);
   gre->SetMarkerColor(green);
   gre->SetMarkerStyle(27);
   gre->SetMarkerSize(1.6);
   gre->SetPoint(0,0.6913897,5.174);
   gre->SetPointError(0,0,0.207);
   gre->SetPoint(1,0.8588479,4.69);
   gre->SetPointError(1,0,0.152);
   gre->SetPoint(2,1.028406,4.123);
   gre->SetPointError(2,0,0.136);
   gre->SetPoint(3,1.289853,3.785);
   gre->SetPointError(3,0,0.11);
   gre->Draw("pz");

  //----- 30-50% -----
   gre = new TGraphErrors(4);
   gre->SetName("Graph8");
   gre->SetFillColor(blueT);
   gre->SetFillStyle(1001);
   gre->SetLineColor(0);
   gre->SetLineWidth(0);
   gre->SetPoint(0,0.6913897,3.93);
   gre->SetPointError(0,0.015,0.285);
   gre->SetPoint(1,0.8588479,3.671);
   gre->SetPointError(1,0.015,0.124);
   gre->SetPoint(2,1.019666,3.194);
   gre->SetPointError(2,0.015,0.234);
   gre->SetPoint(3,1.289853,2.754);
   gre->SetPointError(3,0.015,0.155);
   gre->Draw("e2");


   gre = new TGraphErrors(4);
   gre->SetName("Graph23");
   gre->SetLineColor(blue);
   gre->SetMarkerColor(blue);
   gre->SetMarkerStyle(27);
   gre->SetMarkerSize(1.6);
   gre->SetPoint(0,0.6913897,3.93);
   gre->SetPointError(0,0,0.206);
   gre->SetPoint(1,0.8588479,3.671);
   gre->SetPointError(1,0,0.16);
   gre->SetPoint(2,1.019666,3.194);
   gre->SetPointError(2,0,0.152);
   gre->SetPoint(3,1.289853,2.754);
   gre->SetPointError(3,0,0.136);
   gre->Draw("pz");

   

//----- Kch-Kch ----------------------------------

  //----- 0-10% -----
   gre = new TGraphErrors(8);
   gre->SetName("Graph9");
   gre->SetFillColor(redT);
   gre->SetFillStyle(1001);
   gre->SetLineColor(0);
   gre->SetLineStyle(2);
   gre->SetLineWidth(0);
   gre->SetPoint(0,0.5547305,5.989);
   gre->SetPointError(0,0.015,0.456);
   gre->SetPoint(1,0.6057376,5.804);
   gre->SetPointError(1,0.015,0.439);
   gre->SetPoint(2,0.6679947,5.562);
   gre->SetPointError(2,0.015,0.42);
   gre->SetPoint(3,0.7383211,5.472);
   gre->SetPointError(3,0.015,0.414);
   gre->SetPoint(4,0.815425,5.311);
   gre->SetPointError(4,0.015,0.401);
   gre->SetPoint(5,0.896226,5.145);
   gre->SetPointError(5,0.015,0.406);
   gre->SetPoint(6,0.9951286,4.752);
   gre->SetPointError(6,0.015,0.397);
   gre->SetPoint(7,1.211178,4.132);
   gre->SetPointError(7,0.015,0.373);
   gre->Draw("e2");

   gre = new TGraphErrors(8);
   gre->SetName("Graph24");
   gre->SetLineColor(red);
   gre->SetMarkerColor(red);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(1.6);
   gre->SetPoint(0,0.5547305,5.989);
   gre->SetPointError(0,0,0.057);
   gre->SetPoint(1,0.6057376,5.804);
   gre->SetPointError(1,0,0.027);
   gre->SetPoint(2,0.6679947,5.562);
   gre->SetPointError(2,0,0.04);
   gre->SetPoint(3,0.7383211,5.472);
   gre->SetPointError(3,0,0.042);
   gre->SetPoint(4,0.815425,5.311);
   gre->SetPointError(4,0,0.049);
   gre->SetPoint(5,0.896226,5.145);
   gre->SetPointError(5,0,0.048);
   gre->SetPoint(6,0.9951286,4.752);
   gre->SetPointError(6,0,0.049);
   gre->SetPoint(7,1.211178,4.132);
   gre->SetPointError(7,0,0.066);
   gre->Draw("pz");
   

  //----- 10-30% -----
   gre = new TGraphErrors(8);
   gre->SetName("Graph10");
   gre->SetFillColor(greenT);
   gre->SetFillStyle(1001);
   gre->SetLineColor(0);
   gre->SetLineWidth(0);
   gre->SetPoint(0,0.5547305,5.04);
   gre->SetPointError(0,0.015,0.351);
   gre->SetPoint(1,0.6057376,4.907);
   gre->SetPointError(1,0.015,0.341);
   gre->SetPoint(2,0.6679947,4.517);
   gre->SetPointError(2,0.015,0.313);
   gre->SetPoint(3,0.7383211,4.666);
   gre->SetPointError(3,0.015,0.325);
   gre->SetPoint(4,0.815425,4.671);
   gre->SetPointError(4,0.015,0.326);
   gre->SetPoint(5,0.896226,4.169);
   gre->SetPointError(5,0.015,0.305);
   gre->SetPoint(6,0.9951286,3.867);
   gre->SetPointError(6,0.015,0.302);
   gre->SetPoint(7,1.211178,3.725);
   gre->SetPointError(7,0.015,0.316);
   gre->Draw("e2");

   gre = new TGraphErrors(8);
   gre->SetName("Graph25");
   gre->SetLineColor(green);
   gre->SetMarkerColor(green);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(1.6);
   gre->SetPoint(0,0.5547305,5.04);
   gre->SetPointError(0,0,0.082);
   gre->SetPoint(1,0.6057376,4.907);
   gre->SetPointError(1,0,0.045);
   gre->SetPoint(2,0.6679947,4.517);
   gre->SetPointError(2,0,0.069);
   gre->SetPoint(3,0.7383211,4.666);
   gre->SetPointError(3,0,0.11);
   gre->SetPoint(4,0.815425,4.671);
   gre->SetPointError(4,0,0.098);
   gre->SetPoint(5,0.896226,4.169);
   gre->SetPointError(5,0,0.101);
   gre->SetPoint(6,0.9951286,3.867);
   gre->SetPointError(6,0,0.1);
   gre->SetPoint(7,1.211178,3.725);
   gre->SetPointError(7,0,0.109);
   gre->Draw("pz");


  //----- 30-50% -----
   gre = new TGraphErrors(8);
   gre->SetName("Graph11");
   gre->SetFillColor(blueT);
   gre->SetFillStyle(1001);
   gre->SetLineColor(0);
   gre->SetLineWidth(0);
   gre->SetPoint(0,0.5547305,4.217);
   gre->SetPointError(0,0.015,0.271);
   gre->SetPoint(1,0.6057376,3.943);
   gre->SetPointError(1,0.015,0.253);
   gre->SetPoint(2,0.6679947,3.8);
   gre->SetPointError(2,0.015,0.244);
   gre->SetPoint(3,0.7383211,3.734);
   gre->SetPointError(3,0.015,0.242);
   gre->SetPoint(4,0.815425,3.642);
   gre->SetPointError(4,0.015,0.239);
   gre->SetPoint(5,0.896226,3.019);
   gre->SetPointError(5,0.015,0.208);
   gre->SetPoint(6,0.9951286,3.089);
   gre->SetPointError(6,0.015,0.235);
   gre->SetPoint(7,1.211178,2.948);
   gre->SetPointError(7,0.015,0.258);
   gre->Draw("e2");
 
   gre = new TGraphErrors(8);
   gre->SetName("Graph26");
   gre->SetLineColor(blue);
   gre->SetMarkerColor(blue);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(1.6);
   gre->SetPoint(0,0.5547305,4.217);
   gre->SetPointError(0,0,0.092);
   gre->SetPoint(1,0.6057376,3.943);
   gre->SetPointError(1,0,0.044);
   gre->SetPoint(2,0.6679947,3.8);
   gre->SetPointError(2,0,0.064);
   gre->SetPoint(3,0.7383211,3.734);
   gre->SetPointError(3,0,0.122);
   gre->SetPoint(4,0.815425,3.642);
   gre->SetPointError(4,0,0.138);
   gre->SetPoint(5,0.896226,3.019);
   gre->SetPointError(5,0,0.113);
   gre->SetPoint(6,0.9951286,3.089);
   gre->SetPointError(6,0,0.096);
   gre->SetPoint(7,1.211178,2.948);
   gre->SetPointError(7,0,0.127);
   gre->Draw("pz");



//----- Pi-Pi ----------------------------------


  //----- 0-10% -----
   gre = new TGraphErrors(7);
   gre->SetName("Graph12");
   gre->SetFillColor(redT);
   gre->SetFillStyle(1001);
   gre->SetLineColor(0);
   gre->SetLineStyle(2);
   gre->SetLineWidth(0);
   gre->SetPoint(0,0.2871947,8.98);
   gre->SetPointError(0,0.015,0.88);
   gre->SetPoint(1,0.3758733,8.385);
   gre->SetPointError(1,0.015,0.89);
   gre->SetPoint(2,0.4692374,7.775);
   gre->SetPointError(2,0.015,0.82);
   gre->SetPoint(3,0.5654943,7.275);
   gre->SetPointError(3,0.015,0.76);
   gre->SetPoint(4,0.6628603,6.675);
   gre->SetPointError(4,0.015,0.75);
   gre->SetPoint(5,0.7599268,6.295);
   gre->SetPointError(5,0.015,0.87);
   gre->SetPoint(6,0.8779136,5.825);
   gre->SetPointError(6,0.015,0.95);
   gre->Draw("e2");

   gre = new TGraphErrors(7);
   gre->SetName("Graph27");
   gre->SetLineColor(red);
   gre->SetMarkerColor(red);
   gre->SetMarkerStyle(28);
   gre->SetMarkerSize(1.6);
   gre->SetPoint(0,0.2871947,8.98);
   gre->SetPointError(0,0,0.06);
   gre->SetPoint(1,0.3758733,8.385);
   gre->SetPointError(1,0,0.09);
   gre->SetPoint(2,0.4692374,7.775);
   gre->SetPointError(2,0,0.08);
   gre->SetPoint(3,0.5654943,7.275);
   gre->SetPointError(3,0,0.105);
   gre->SetPoint(4,0.6628603,6.675);
   gre->SetPointError(4,0,0.095);
   gre->SetPoint(5,0.7599268,6.295);
   gre->SetPointError(5,0,0.115);
   gre->SetPoint(6,0.8779136,5.825);
   gre->SetPointError(6,0,0.11);
   gre->Draw("pz");

  //----- 10-30% -----
   gre = new TGraphErrors(7);
   gre->SetName("Graph13");
   gre->SetFillColor(greenT);
   gre->SetFillStyle(1001);
   gre->SetLineColor(0);
   gre->SetLineWidth(0);
   gre->SetPoint(0,0.2871947,7.6);
   gre->SetPointError(0,0.015,0.7);
   gre->SetPoint(1,0.3758733,7.06);
   gre->SetPointError(1,0.015,0.64);
   gre->SetPoint(2,0.4692374,6.565);
   gre->SetPointError(2,0.015,0.67);
   gre->SetPoint(3,0.5654943,6.17);
   gre->SetPointError(3,0.015,0.71);
   gre->SetPoint(4,0.6628603,5.76);
   gre->SetPointError(4,0.015,0.67);
   gre->SetPoint(5,0.7599268,5.275);
   gre->SetPointError(5,0.015,0.61);
   gre->SetPoint(6,0.8779136,4.96);
   gre->SetPointError(6,0.015,0.99);
   gre->Draw("e2");

   gre = new TGraphErrors(7);
   gre->SetName("Graph28");
   gre->SetLineColor(green);
   gre->SetMarkerColor(green);
   gre->SetMarkerStyle(28);
   gre->SetMarkerSize(1.6);
   gre->SetPoint(0,0.2871947,7.6);
   gre->SetPointError(0,0,0.08);
   gre->SetPoint(1,0.3758733,7.06);
   gre->SetPointError(1,0,0.06);
   gre->SetPoint(2,0.4692374,6.565);
   gre->SetPointError(2,0,0.07);
   gre->SetPoint(3,0.5654943,6.17);
   gre->SetPointError(3,0,0.06);
   gre->SetPoint(4,0.6628603,5.76);
   gre->SetPointError(4,0,0.08);
   gre->SetPoint(5,0.7599268,5.275);
   gre->SetPointError(5,0,0.09);
   gre->SetPoint(6,0.8779136,4.96);
   gre->SetPointError(6,0,0.11);
   gre->Draw("pz");

  //----- 30-50% -----
   gre = new TGraphErrors(7);
   gre->SetName("Graph14");
   gre->SetFillColor(blueT);
   gre->SetFillStyle(1001);
   gre->SetLineColor(0);
   gre->SetLineWidth(0);
   gre->SetPoint(0,0.2871947,5.995);
   gre->SetPointError(0,0.015,0.65);
   gre->SetPoint(1,0.3758733,5.67);
   gre->SetPointError(1,0.015,0.63);
   gre->SetPoint(2,0.4692374,5.3);
   gre->SetPointError(2,0.015,0.63);
   gre->SetPoint(3,0.5654943,4.885);
   gre->SetPointError(3,0.015,0.7);
   gre->SetPoint(4,0.6628603,4.595);
   gre->SetPointError(4,0.015,0.74);
   gre->SetPoint(5,0.7599268,4.295);
   gre->SetPointError(5,0.015,0.72);
   gre->SetPoint(6,0.8779136,3.875);
   gre->SetPointError(6,0.015,0.81);
   gre->Draw("e2");

   gre = new TGraphErrors(7);
   gre->SetName("Graph29");
   gre->SetLineColor(blue);
   gre->SetMarkerColor(blue);
   gre->SetMarkerStyle(28);
   gre->SetMarkerSize(1.6);
   gre->SetPoint(0,0.2871947,5.995);
   gre->SetPointError(0,0,0.04);
   gre->SetPoint(1,0.3758733,5.67);
   gre->SetPointError(1,0,0.04);
   gre->SetPoint(2,0.4692374,5.3);
   gre->SetPointError(2,0,0.04);
   gre->SetPoint(3,0.5654943,4.885);
   gre->SetPointError(3,0,0.07);
   gre->SetPoint(4,0.6628603,4.595);
   gre->SetPointError(4,0,0.07);
   gre->SetPoint(5,0.7599268,4.295);
   gre->SetPointError(5,0,0.09);
   gre->SetPoint(6,0.8779136,3.875);
   gre->SetPointError(6,0,0.08);
   gre->Draw("pz");



   //
   // Add the proton lambda points
   //
   // 0-10
   const Size_t size=1.8;
   TGraphAsymmErrors *plst = new TGraphAsymmErrors(4);
   plst->SetMarkerSize(size);
   plst->SetMarkerStyle(20);
   plst->SetLineColor(kRed);
   plst->SetMarkerColor(kRed);
   TGraphAsymmErrors *plfree = new TGraphAsymmErrors(4);
   plfree->SetMarkerSize(size);
   plfree->SetMarkerStyle(24);
   plfree->SetLineColor(kRed);
   plfree->SetMarkerColor(kRed);

   TGraphAsymmErrors *plsy = new TGraphAsymmErrors(4);
   plsy->SetFillColor(redT);
   {
     // mt
     const Float_t mt[]={1.27,1.50,1.74,2.18};
     // radius
     //     const Float_t R[]={6.21-1.62,5.04-1.32,4.95-1.33,4.29-1.06};
     const Float_t R[]={6.21,5.04,4.95,4.29};
     const Float_t Rfree[]={5.12,5.44,6.04,5.54};
     // statistical low side
     const Float_t stl[]={.30,.17,.16,.12};
     const Float_t stlfree[]={1.02,0.71,0.94,.77};
     // statistical high side
     const Float_t sth[]={.35,.19,.18,.14};
     const Float_t sthfree[]={1.48,.87,0.66,.29};
     // systematic low side
     const Float_t syl[]={.34,.28,.29,.23};
     // systematic high side
     const Float_t syh[]={.15,.22,.19,.17};
     for (Int_t i=0;i<static_cast<Int_t>(sizeof(R)/sizeof(Float_t));i++){
       plst->SetPoint(i,mt[i],R[i]);
       plsy->SetPoint(i,mt[i],R[i]);
       plfree->SetPoint(i,mt[i],Rfree[i]);
       plst->SetPointError(i,0.,0.,stl[i],sth[i]);
       plsy->SetPointError(i,.02,.02,syl[i],syh[i]);
       plfree->SetPointError(i,.02,.02,stlfree[i],sthfree[i]);
     }
   }
   plsy->Draw("2");
   plst->Draw("pl");
   //   plfree->Draw("p");
   // 10-30
   plst = new TGraphAsymmErrors(2);
   plst->SetMarkerSize(size);
   plst->SetMarkerStyle(20);
   plst->SetLineColor(green);
   plst->SetMarkerColor(green);
   plsy = new TGraphAsymmErrors(2);
   plsy->SetFillColor(greenT);
   plfree = new TGraphAsymmErrors(2);
   plfree->SetMarkerSize(size);
   plfree->SetMarkerStyle(24);
   plfree->SetLineColor(green);
   plfree->SetMarkerColor(green);
   {
     // mt
     const Float_t mt[]={1.37,1.93};
     // radius
     //const Float_t R[]={4.58-1.09,3.87-0.92};
     const Float_t R[]={4.58,3.87};
     const Float_t Rfree[]={4.21,3.80};
     // statistical low side
     const Float_t stl[]={.15,.11};
     const Float_t stlfree[]={.54,.40};
     // statistical high side
     const Float_t sth[]={.17,.12};
     const Float_t sthfree[]={.63,.47};
     // systematic low side
     const Float_t syl[]={.26,.21};
     // systematic high side
     const Float_t syh[]={.22,.14};
     for (Int_t i=0;i<2;i++){
     //for (Int_t i=0;i<static_cast<Int_t>(sizeof(R)/sizeof(Float_t));i++){
       plst->SetPoint(i,mt[i],R[i]);
       plsy->SetPoint(i,mt[i],R[i]);
       plfree->SetPoint(i,mt[i],Rfree[i]);
       plst->SetPointError(i,0.,0.,stl[i],sth[i]);
       plsy->SetPointError(i,.02,.02,syl[i],syh[i]);
       plfree->SetPointError(i,0.,0.,stlfree[i],sthfree[i]);
     }
   }
   plsy->Draw("2");
   plst->Draw("pl");
   //   plfree->Draw("p");

   // 30-50
   plst = new TGraphAsymmErrors(1);
   plst->SetMarkerSize(size);
   plst->SetMarkerStyle(20);
   plst->SetLineColor(blue);
   plst->SetMarkerColor(blue);
   plsy = new TGraphAsymmErrors(1);
   plsy->SetFillColor(blueT);
   plfree = new TGraphAsymmErrors(1);
   plfree->SetMarkerSize(size);
   plfree->SetMarkerStyle(24);
   plfree->SetLineColor(blue);
   plfree->SetMarkerColor(blue);
   {
     // mt
     const Float_t mt[]={1.55};
     // radius
     //const Float_t R[]={3.60-0.83};
     const Float_t R[]={3.60};
     const Float_t Rfree[]={3.34};
     // statistical low side
     const Float_t stl[]={.12};
     const Float_t stlfree[]={.39};
     // statistical high side
     const Float_t sth[]={.11};
     const Float_t sthfree[]={.45};
     // systematic low side
     const Float_t syl[]={.18};
     // systematic high side
     const Float_t syh[]={.08};
     for (Int_t i=0;i<static_cast<Int_t>(sizeof(R)/sizeof(Float_t));i++){
       plst->SetPoint(i,mt[i],R[i]);
       plsy->SetPoint(i,mt[i],R[i]);
       plfree->SetPoint(i,mt[i],Rfree[i]);
       plst->SetPointError(i,0.,0.,stl[i],sth[i]);
       plsy->SetPointError(i,.02,.02,syl[i],syh[i]);
       plfree->SetPointError(i,0.,0.,stlfree[i],sthfree[i]);
     }
   }
   plsy->Draw("2");
   plst->Draw("p");
   //plst->Draw("pl");
   //   plfree->Draw("p");

   // HKM stat only
   //rest mass of pair
/*
   const Float_t m0 = 0;// (0.938272 + 1.115683)/2.;
   TGraphErrors *hkm = new TGraphErrors(5);
   hkm->SetPoint(0,TMath::Sqrt(1.10214*1.10214+m0*m0),4.88615);
   hkm->SetPointError(0,0.,0.366154);
   hkm->SetPoint(1,TMath::Sqrt(1.24109*1.24109+m0*m0),4.52);
   hkm->SetPointError(1,0.,0.269231);
   hkm->SetPoint(2,TMath::Sqrt(1.36508*1.36508+m0*m0),4.28308);
   hkm->SetPointError(2,0.,0.215385);
   hkm->SetPoint(3,TMath::Sqrt(1.50404*1.50404+m0*m0),4.04615);
   hkm->SetPointError(3,0.,0.193846);
   hkm->SetPoint(4,TMath::Sqrt(1.65582*1.65582+m0*m0),3.89538);
   hkm->SetPointError(4,0.,0.188462);
   hkm->SetMarkerStyle(34);
   hkm->SetMarkerColor(kBlack); //sth transparent?
   hkm->SetLineColor(kBlack); //sth transparent?
   hkm->SetMarkerSize(1.6); //1.6 or 1.8
   hkm->Draw("p");
*/


//----- Personal Additions: Begin -----
  const Int_t myRed = kRed+2;
  const Int_t myGreen = kGreen-4;
  const Int_t myBlue = kBlue+2;

  const Int_t myRedT = TColor::GetColorTransparent(myRed,0.2);
  const Int_t myGreenT = TColor::GetColorTransparent(myGreen,0.2);
  const Int_t myBlueT = TColor::GetColorTransparent(myBlue,0.2);
  

  const double MassK0 = 0.497614;
  const double MassKch = 0.493677;
  const double MassLambda = 1.115683;
  /*
  //----- Lambda-K0 ------------------------------------------------------------------------
  double tLamK00010kT = 0.5*(1.349+1.350);
  double tLamK00010mT = sqrt(pow(0.5*(MassK0+MassLambda),2)+pow(tLamK00010kT,2));
  double tLamK00010R = 4.37;
  double tLamK00010Rerr = 0.76;

  double tLamK01030kT = 0.5*(1.329+1.330);
  double tLamK01030mT = sqrt(pow(0.5*(MassK0+MassLambda),2)+pow(tLamK01030kT,2));
  double tLamK01030R = 4.10;
  double tLamK01030Rerr = 0.74;

  double tLamK03050kT = 0.5*(1.277+1.275);
  double tLamK03050mT = sqrt(pow(0.5*(MassK0+MassLambda),2)+pow(tLamK03050kT,2));
  double tLamK03050R = 2.61;
  double tLamK03050Rerr = 0.51;


    //----- 0-10% -----
    TGraphErrors *grPersonal = new TGraphErrors(1);
    grPersonal->SetName("Graph30");
    grPersonal->SetLineColor(myRed);
    grPersonal->SetMarkerColor(myRed);
    grPersonal->SetMarkerStyle(21);
    grPersonal->SetMarkerSize(2.0);
    grPersonal->SetPoint(0,tLamK00010mT,tLamK00010R);
    grPersonal->SetPointError(0,0,tLamK00010Rerr);
    grPersonal->Draw("pz");

    //----- 10-30% -----
    grPersonal = new TGraphErrors(1);
    grPersonal->SetName("Graph31");
    grPersonal->SetLineColor(myGreen);
    grPersonal->SetMarkerColor(myGreen);
    grPersonal->SetMarkerStyle(21);
    grPersonal->SetMarkerSize(2.0);
    grPersonal->SetPoint(0,tLamK01030mT,tLamK01030R);
    grPersonal->SetPointError(0,0,tLamK01030Rerr);
    grPersonal->Draw("pz");

    //----- 30-50% -----
    grPersonal = new TGraphErrors(1);
    grPersonal->SetName("Graph32");
    grPersonal->SetLineColor(myBlue);
    grPersonal->SetMarkerColor(myBlue);
    grPersonal->SetMarkerStyle(21);
    grPersonal->SetMarkerSize(2.0);
    grPersonal->SetPoint(0,tLamK03050mT,tLamK03050R);
    grPersonal->SetPointError(0,0,tLamK03050Rerr);
    grPersonal->Draw("pz");


  //----- Lambda-KchP ------------------------------------------------------------------------
  double tLamKchP0010kT = 0.5*(1.074+1.070);
  double tLamKchP0010mT = sqrt(pow(0.5*(MassKch+MassLambda),2)+pow(tLamKchP0010kT,2));
  double tLamKchP0010R = 4.241;
  double tLamKchP0010Rerr = 0.783;


  double tLamKchP1030kT = 0.5*(1.060+1.053);
  double tLamKchP1030mT = sqrt(pow(0.5*(MassKch+MassLambda),2)+pow(tLamKchP1030kT,2));
  double tLamKchP1030R = 4.297;
  double tLamKchP1030Rerr = 0.754;

  double tLamKchP3050kT = 0.5*(1.020+1.008);
  double tLamKchP3050mT = sqrt(pow(0.5*(MassKch+MassLambda),2)+pow(tLamKchP3050kT,2));
  double tLamKchP3050R = 3.984;
  double tLamKchP3050Rerr = 0.802;

  bool bUseOtherPoints = false;
  if(bUseOtherPoints)
  {
    tLamKchP0010R = 5.327;
    tLamKchP0010Rerr = 1.158;

    tLamKchP1030R = 4.950;
    tLamKchP1030Rerr = 0.950;

    tLamKchP3050R = 4.225;
    tLamKchP3050Rerr = 0.890;
  }


    //----- 0-10% -----
    grPersonal = new TGraphErrors(1);
    grPersonal->SetName("Graph33");
    grPersonal->SetLineColor(myRed);
    grPersonal->SetMarkerColor(myRed);
    grPersonal->SetMarkerStyle(29);
    grPersonal->SetMarkerSize(2.0);
    grPersonal->SetPoint(0,tLamKchP0010mT,tLamKchP0010R);
    grPersonal->SetPointError(0,0,tLamKchP0010Rerr);
    grPersonal->Draw("pz");

    //----- 10-30% -----
    grPersonal = new TGraphErrors(1);
    grPersonal->SetName("Graph34");
    grPersonal->SetLineColor(myGreen);
    grPersonal->SetMarkerColor(myGreen);
    grPersonal->SetMarkerStyle(29);
    grPersonal->SetMarkerSize(2.0);
    grPersonal->SetPoint(0,tLamKchP1030mT,tLamKchP1030R);
    grPersonal->SetPointError(0,0,tLamKchP1030Rerr);
    grPersonal->Draw("pz");

    //----- 30-50% -----
    grPersonal = new TGraphErrors(1);
    grPersonal->SetName("Graph35");
    grPersonal->SetLineColor(myBlue);
    grPersonal->SetMarkerColor(myBlue);
    grPersonal->SetMarkerStyle(29);
    grPersonal->SetMarkerSize(2.0);
    grPersonal->SetPoint(0,tLamKchP3050mT,tLamKchP3050R);
    grPersonal->SetPointError(0,0,tLamKchP3050Rerr);
    grPersonal->Draw("pz");

  //----- Lambda-KchM ------------------------------------------------------------------------
  double tLamKchM0010kT = 0.5*(1.073+1.074);
  double tLamKchM0010mT = sqrt(pow(0.5*(MassKch+MassLambda),2)+pow(tLamKchM0010kT,2));
  double tLamKchM0010R = 4.461;
  double tLamKchM0010Rerr = 0.411;

  double tLamKchM1030kT = 0.5*(1.059+1.058);
  double tLamKchM1030mT = sqrt(pow(0.5*(MassKch+MassLambda),2)+pow(tLamKchM1030kT,2));
  double tLamKchM1030R = 4.001;
  double tLamKchM1030Rerr = 0.455;

  double tLamKchM3050kT = 0.5*(1.018+1.014);
  double tLamKchM3050mT = sqrt(pow(0.5*(MassKch+MassLambda),2)+pow(tLamKchM3050kT,2));
  double tLamKchM3050R = 2.014;
  double tLamKchM3050Rerr = 0.812;

    //----- 0-10% -----
    grPersonal = new TGraphErrors(1);
    grPersonal->SetName("Graph36");
    grPersonal->SetLineColor(myRed);
    grPersonal->SetMarkerColor(myRed);
    grPersonal->SetMarkerStyle(30);
    grPersonal->SetMarkerSize(2.0);
    grPersonal->SetPoint(0,tLamKchM0010mT,tLamKchM0010R);
    grPersonal->SetPointError(0,0,tLamKchM0010Rerr);
    grPersonal->Draw("pz");

    //----- 10-30% -----
    grPersonal = new TGraphErrors(1);
    grPersonal->SetName("Graph37");
    grPersonal->SetLineColor(myGreen);
    grPersonal->SetMarkerColor(myGreen);
    grPersonal->SetMarkerStyle(30);
    grPersonal->SetMarkerSize(2.0);
    grPersonal->SetPoint(0,tLamKchM1030mT,tLamKchM1030R);
    grPersonal->SetPointError(0,0,tLamKchM1030Rerr);
    grPersonal->Draw("pz");

    //----- 30-50% -----
    grPersonal = new TGraphErrors(1);
    grPersonal->SetName("Graph38");
    grPersonal->SetLineColor(myBlue);
    grPersonal->SetMarkerColor(myBlue);
    grPersonal->SetMarkerStyle(30);
    grPersonal->SetMarkerSize(2.0);
    grPersonal->SetPoint(0,tLamKchM3050mT,tLamKchM3050R);
    grPersonal->SetPointError(0,0,tLamKchM3050Rerr);
    grPersonal->Draw("pz");

  */



  //----- Lambda-Lambda ------------------------------------------------------------------------
  double tLamLam0010mT = 1.97;
  double tLamLam0010R = 5.4;
  double tLamLam0010Rerr = 0.6;
  double tLamLam0010RerrSysUpper = 0.2;
  double tLamLam0010RerrSysLower = tLamLam0010RerrSysUpper;

  double tLamLam1030mT = 1.95;
  double tLamLam1030R = 4.2;
  double tLamLam1030Rerr = 0.5;
  double tLamLam1030RerrSysUpper = 0.2;
  double tLamLam1030RerrSysLower = tLamLam1030RerrSysUpper;
  // double tLamLam3050mT = 1.89;
  // double tLamLam3050R = 3.37;
  // double tLamLam3050Rerr = 0.57;

  if (useNoResiduals) {
    tLamLam0010RerrSysLower = 1.1;
    tLamLam1030RerrSysLower = 1.3;
  }

    //----- 0-10% -----  
    grPersonal = new TGraphErrors(1); // Stat errors
    grPersonal->SetName("Graph39");
    grPersonal->SetLineColor(red);
    grPersonal->SetMarkerColor(red);
    grPersonal->SetMarkerStyle(kLamLam);
    grPersonal->SetMarkerSize(1.6);
    grPersonal->SetPoint(0,tLamLam0010mT,tLamLam0010R);
    grPersonal->SetPointError(0,0,tLamLam0010Rerr);
    grPersonal->Draw("pz");

    TGraphAsymmErrors *grPersonalAys = new TGraphAsymmErrors(1); // Sys errors
    grPersonalAys->SetName("Graph39Sys");
    grPersonalAys->SetFillColor(redT);
    grPersonalAys->SetFillStyle(1001);
    grPersonalAys->SetLineColor(0);
    grPersonalAys->SetLineStyle(2);
    grPersonalAys->SetLineWidth(0);
    grPersonalAys->SetPoint(0,tLamLam0010mT,tLamLam0010R);
    grPersonalAys->SetPointError(0,0.015, 0.015, tLamLam0010RerrSysLower, tLamLam0010RerrSysUpper); // lower error comes from "No residuals" fit
    grPersonalAys->Draw("e2"); 
    
    
    //----- 10-30% -----
    grPersonal = new TGraphErrors(1); // Stat errors
    grPersonal->SetName("Graph40");
    grPersonal->SetLineColor(green);
    grPersonal->SetMarkerColor(green);
    grPersonal->SetMarkerStyle(kLamLam);
    grPersonal->SetMarkerSize(1.6);
    grPersonal->SetPoint(0,tLamLam1030mT,tLamLam1030R);
    grPersonal->SetPointError(0,0,tLamLam1030Rerr);
    grPersonal->Draw("pz");

    grPersonalAys = new TGraphAsymmErrors(1); // Sys errors
    grPersonalAys->SetName("Graph40Sys");
    grPersonalAys->SetFillColor(greenT);
    grPersonalAys->SetFillStyle(1001);
    grPersonalAys->SetLineColor(0);
    grPersonalAys->SetLineStyle(2);
    grPersonalAys->SetLineWidth(0);
    grPersonalAys->SetPoint(0,tLamLam1030mT,tLamLam1030R);
    grPersonalAys->SetPointError(0,0.015, 0.015, tLamLam1030RerrSysLower, tLamLam1030RerrSysUpper); // lower error comes from "No residuals" fit
    grPersonalAys->Draw("e2"); 

    // //----- 30-50% -----
    // grPersonal = new TGraphErrors(1);
    // grPersonal->SetName("Graph41");
    // grPersonal->SetLineColor(myBlue);
    // grPersonal->SetMarkerColor(myBlue);
    // grPersonal->SetMarkerStyle(20);
    // grPersonal->SetMarkerSize(2.0);
    // grPersonal->SetPoint(0,tLamLam3050mT,tLamLam3050R);
    // grPersonal->SetPointError(0,0,tLamLam3050Rerr);
    // grPersonal->Draw("pz");



  //----- Lambda-AntiLambda ------------------------------------------------------------------------
  double tLamALam0010mT = 1.97;
  double tLamALam0010R = 2.9;
  double tLamALam0010Rerr = 0.3;
  double tLamALam0010RerrSys = 0.3;

  double tLamALam1030mT = 1.95;
  double tLamALam1030R = 2.3;
  double tLamALam1030Rerr = 0.2;
  double tLamALam1030RerrSys = 0.2;

  double tLamALam3050mT = 1.89;
  double tLamALam3050R = 1.8;
  double tLamALam3050Rerr = 0.2;
  double tLamALam3050RerrSys = 0.2;

  //----- 0-10% -----
    grPersonal = new TGraphErrors(1); // Stat errors 
    grPersonal->SetName("Graph42");
    grPersonal->SetLineColor(red);
    grPersonal->SetMarkerColor(red);
    grPersonal->SetMarkerStyle(kLamALam);
    grPersonal->SetMarkerSize(1.6);
    grPersonal->SetPoint(0,tLamALam0010mT,tLamALam0010R);
    grPersonal->SetPointError(0,0,tLamALam0010Rerr);
    grPersonal->Draw("pz");

    grPersonal = new TGraphErrors(1); // Sys errors
    grPersonal->SetName("Graph42Sys");
    grPersonal->SetFillColor(redT);
    grPersonal->SetFillStyle(1001);
    grPersonal->SetLineColor(0);
    grPersonal->SetLineStyle(2);
    grPersonal->SetLineWidth(0);
    grPersonal->SetPoint(0,tLamALam0010mT,tLamALam0010R);
    grPersonal->SetPointError(0,0.015,tLamALam0010RerrSys);
    grPersonal->Draw("e2"); 

    //----- 10-30% -----
    grPersonal = new TGraphErrors(1);// Stat errors 
    grPersonal->SetName("Graph43");
    grPersonal->SetLineColor(green);
    grPersonal->SetMarkerColor(green);
    grPersonal->SetMarkerStyle(kLamALam);
    grPersonal->SetMarkerSize(1.6);
    grPersonal->SetPoint(0,tLamALam1030mT,tLamALam1030R);
    grPersonal->SetPointError(0,0,tLamALam1030Rerr);
    grPersonal->Draw("pz");

    grPersonal = new TGraphErrors(1); // Sys errors
    grPersonal->SetName("Graph43Sys");
    grPersonal->SetFillColor(greenT);
    grPersonal->SetFillStyle(1001);
    grPersonal->SetLineColor(0);
    grPersonal->SetLineStyle(2);
    grPersonal->SetLineWidth(0);
    grPersonal->SetPoint(0,tLamALam1030mT,tLamALam1030R);
    grPersonal->SetPointError(0,0.015,tLamALam1030RerrSys);
    grPersonal->Draw("e2"); 

    //----- 30-50% -----
    grPersonal = new TGraphErrors(1); // Stat errors 
    grPersonal->SetName("Graph44");
    grPersonal->SetLineColor(blue);
    grPersonal->SetMarkerColor(blue);
    grPersonal->SetMarkerStyle(kLamALam);
    grPersonal->SetMarkerSize(1.6);
    grPersonal->SetPoint(0,tLamALam3050mT,tLamALam3050R);
    grPersonal->SetPointError(0,0,tLamALam3050Rerr);
    grPersonal->Draw("pz");

    grPersonal = new TGraphErrors(1); // Sys errors
    grPersonal->SetName("Graph44Sys");
    grPersonal->SetFillColor(blueT);
    grPersonal->SetFillStyle(1001);
    grPersonal->SetLineColor(0);
    grPersonal->SetLineStyle(2);
    grPersonal->SetLineWidth(0);
    grPersonal->SetPoint(0,tLamALam3050mT,tLamALam3050R);
    grPersonal->SetPointError(0,0.015,tLamALam3050RerrSys);
    grPersonal->Draw("e2"); 

//----- Personal Additions: End -----


   
   TLatex *   tex = new TLatex(0.70,9.3,"ALICE Pb-Pb #sqrt{#it{s}_{NN}} = 2.76 TeV");
   tex->SetTextFont(42);
   tex->SetTextSize(0.044);
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   // species.. ..text
   //tex->DrawLatex(1.62,5.1,"HKM 0-5%");
   tex->DrawLatex(1.4,6.3,"pp");
   tex->DrawLatex(1.4,6.9,"#bar{p}#bar{p}");
   tex->DrawLatex(1.4,7.5,"K_{S}^{0}K_{S}^{0}");
   tex->DrawLatex(1.4,8.1,"K^{#pm}K^{#pm}");
   tex->DrawLatex(1.4,8.7,"#pi^{#pm}#pi^{#pm}");
   // tex->DrawLatex(1.4,8.7,"p#Lambda#oplus#bar{p}#bar{#Lambda}");
   tex->DrawLatex(1.75,7.5,"#Lambda#bar{#Lambda}");
   tex->DrawLatex(1.75,8.1,"#Lambda#Lambda#oplus#bar{#Lambda}#bar{#Lambda}");
   tex->DrawLatex(1.75,8.7,"p#Lambda#oplus#bar{p#Lambda}");
   // species.. ..markers
   TMarker *marker = new TMarker();
   // marker->SetMarkerSize(1.6);
   // marker->SetMarkerStyle(34);//HKM
   // marker->DrawMarker(1.96,5.1);
   marker->SetMarkerSize(1.6);
   marker->SetMarkerStyle(28);//pions
   marker->DrawMarker(1.56,8.7);
   marker->SetMarkerStyle(24);//protons
   marker->DrawMarker(1.56,6.3);
   marker->SetMarkerStyle(5);// antiprotons
   marker->DrawMarker(1.56,6.9);
   marker->SetMarkerStyle(27);//K0s
   marker->DrawMarker(1.56,7.5);
   marker->SetMarkerStyle(25);//Kch
   marker->DrawMarker(1.56,8.1);
   marker->SetMarkerSize(size);
   marker->SetMarkerStyle(20);//pLam
   marker->DrawMarker(2.05,8.7);
   marker->SetMarkerSize(1.6);
   marker->SetMarkerStyle(kLamLam); //LamLam
   marker->DrawMarker(2.05,8.1);
   marker->SetMarkerStyle(kLamALam); //LamALam
   marker->DrawMarker(1.9,7.5);
   
   // centralities
   TLine line;
   line.SetLineWidth(2);
   line.SetLineColor(red);
   line.DrawLine(1.12,8.7,1.22,8.7);
   line.SetLineColor(green);
   line.DrawLine(1.12,8.1,1.22,8.1);
   line.SetLineColor(blue);
   line.DrawLine(1.12,7.5,1.22,7.5);
   marker->SetMarkerSize(1.6);
   marker->SetMarkerStyle(34);//HKM
   //marker->DrawMarker(1.17,6.9);
   tex->DrawLatex(0.9,8.7,"0-10%");
   tex->DrawLatex(0.9,8.1,"10-30%");
   tex->DrawLatex(0.9,7.5,"30-50%");
   //tex->DrawLatex(0.82,6.9,"HKM 0-5%");


  //----- Personal Additions: Begin -----
   /*
   tex->DrawLatex(1.75,6.3,"#LambdaK^{-}");
   tex->DrawLatex(1.75,6.9,"#LambdaK^{+}");
   tex->DrawLatex(1.75,7.5,"#LambdaK^{0}_{S}");
   */



   /*
   marker->SetMarkerStyle(21); //LamK0
   marker->DrawMarker(1.9,7.5);
   marker->SetMarkerStyle(29); //LamK+
   marker->DrawMarker(1.9,6.9);
   marker->SetMarkerStyle(30); //LamK-
   marker->DrawMarker(1.9,6.3);
   */



  //----- Personal Additions: Begin -----

   // canmtcomb->Modified();
   // canmtcomb->cd();
   // canmtcomb->SetSelected(canmtcomb);
   // save it
   TString outputName = "mTscaling";
   if (useNoResiduals) outputName += "SysNoResiduals";
   canmtcomb->SaveAs(outputName + ".pdf");
   // canmtcomb->SaveAs("mTscaling.eps"); // Use pdftops -eps mTscaling.pdf
}
