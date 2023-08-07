//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Aug  6 12:44:42 2023 by ROOT version 6.14/09
// from TTree treemc/treemc
// found on file: flatFile_SPS_2018_Y1SZ_test6Aug202.root
//////////////////////////////////////////////////////////

#ifndef treeMC_h
#define treeMC_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class treeMC {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   vector<double>  *truth_Zmuon_pt;
   vector<double>  *truth_Zmuon_eta;
   vector<double>  *truth_Zmuon_phi;
   vector<double>  *truth_Z_pt;
   vector<double>  *truth_Z_eta;
   vector<double>  *truth_Z_phi;
   vector<double>  *truth_Z_mass;
   vector<double>  *truth_Z_pdgid;
   vector<double>  *truth_Upsimuon_pt;
   vector<double>  *truth_Upsimuon_eta;
   vector<double>  *truth_Upsimuon_phi;
   vector<double>  *truth_Upsi_pt;
   vector<double>  *truth_Upsi_eta;
   vector<double>  *truth_Upsi_phi;
   vector<double>  *truth_Upsi_mass;
   vector<double>  *truth_Upsi_pdgid;
   vector<double>  *truth_Upsi2muon_pt;
   vector<double>  *truth_Upsi2muon_eta;
   vector<double>  *truth_Upsi2muon_phi;
   vector<double>  *truth_Upsi2_pt;
   vector<double>  *truth_Upsi2_eta;
   vector<double>  *truth_Upsi2_phi;
   vector<double>  *truth_Upsi2_mass;
   vector<double>  *truth_Upsi2_pdgid;
   vector<double>  *truth_Upsi3muon_pt;
   vector<double>  *truth_Upsi3muon_eta;
   vector<double>  *truth_Upsi3muon_phi;
   vector<double>  *truth_Upsi3_pt;
   vector<double>  *truth_Upsi3_eta;
   vector<double>  *truth_Upsi3_phi;
   vector<double>  *truth_Upsi3_mass;
   vector<double>  *truth_Upsi3_pdgid;
   vector<double>  *truth_Chib0_1P_UPSI_muon_pt;
   vector<double>  *truth_Chib0_1P_UPSI_muon_eta;
   vector<double>  *truth_Chib0_1P_UPSI_muon_phi;
   vector<double>  *truth_Chib0_1P_pt;
   vector<double>  *truth_Chib0_1P_eta;
   vector<double>  *truth_Chib0_1P_phi;
   vector<double>  *truth_Chib0_1P_pdgid;
   vector<double>  *truth_Chib0_1P_mass;
   vector<double>  *truth_Chib0_1P_UPSI_pt;
   vector<double>  *truth_Chib0_1P_UPSI_phi;
   vector<double>  *truth_Chib0_1P_UPSI_eta;
   vector<double>  *truth_Chib0_1P_UPSI_pdgid;
   vector<double>  *truth_Chib0_1P_UPSI_mass;
   vector<double>  *truth_Chib0_1P_photon_pt;
   vector<double>  *truth_Chib0_1P_photon_phi;
   vector<double>  *truth_Chib0_1P_photon_eta;
   vector<double>  *truth_Chib0_1P_photon_pdgid;
   vector<double>  *truth_Chib1_1P_UPSI_muon_pt;
   vector<double>  *truth_Chib1_1P_UPSI_muon_eta;
   vector<double>  *truth_Chib1_1P_UPSI_muon_phi;
   vector<double>  *truth_Chib1_1P_pt;
   vector<double>  *truth_Chib1_1P_eta;
   vector<double>  *truth_Chib1_1P_phi;
   vector<double>  *truth_Chib1_1P_pdgid;
   vector<double>  *truth_Chib1_1P_mass;
   vector<double>  *truth_Chib1_1P_UPSI_pt;
   vector<double>  *truth_Chib1_1P_UPSI_eta;
   vector<double>  *truth_Chib1_1P_UPSI_phi;
   vector<double>  *truth_Chib1_1P_UPSI_pdgid;
   vector<double>  *truth_Chib1_1P_UPSI_mass;
   vector<double>  *truth_Chib1_1P_photon_pt;
   vector<double>  *truth_Chib1_1P_photon_eta;
   vector<double>  *truth_Chib1_1P_photon_phi;
   vector<double>  *truth_Chib1_1P_photon_pdgid;
   vector<double>  *truth_Chib2_1P_UPSI_muon_pt;
   vector<double>  *truth_Chib2_1P_UPSI_muon_eta;
   vector<double>  *truth_Chib2_1P_UPSI_muon_phi;
   vector<double>  *truth_Chib2_1P_pt;
   vector<double>  *truth_Chib2_1P_eta;
   vector<double>  *truth_Chib2_1P_phi;
   vector<double>  *truth_Chib2_1P_pdgid;
   vector<double>  *truth_Chib2_1P_mass;
   vector<double>  *truth_Chib2_1P_UPSI_pt;
   vector<double>  *truth_Chib2_1P_UPSI_eta;
   vector<double>  *truth_Chib2_1P_UPSI_phi;
   vector<double>  *truth_Chib2_1P_UPSI_pdgid;
   vector<double>  *truth_Chib2_1P_UPSI_mass;
   vector<double>  *truth_Chib2_1P_photon_pt;
   vector<double>  *truth_Chib2_1P_photon_eta;
   vector<double>  *truth_Chib2_1P_photon_phi;
   vector<double>  *truth_Chib2_1P_photon_pdgid;
   vector<double>  *loop_enter_check;
   vector<unsigned int> *mc_event_number;
   vector<unsigned int> *mc_run_number;
   vector<unsigned int> *mc_lumi_section;
   vector<int>     *eventHasZUpsiNTo4Mu_Count;
   vector<int>     *eventDoesNotHaveZUpsiNTo4Mu_Count;
   vector<int>     *eventHasUpsi1ToMuMu_Count;
   vector<int>     *eventHasUpsi2ToMuMu_Count;
   vector<int>     *eventHasUpsi3ToMuMu_Count;
   vector<int>     *eventHasZToMuMu_Count;
   vector<int>     *eventHasZUpsi1To4Mu_Count;
   vector<int>     *eventHasZUpsi2To4Mu_Count;
   vector<int>     *eventHasZUpsi3To4Mu_Count;
   vector<int>     *eventHasZUpsiNTo4MuButNoCandFound_Count;
   vector<int>     *eventHasZUpsiNTo4MuCandFound_Count;
   vector<double>  *truth_muon_pt;
   vector<double>  *truth_muon_eta;
   vector<double>  *truth_muon_phi;
   vector<bool>    *truth_muHasUpsi1Ancestor;
   vector<bool>    *truth_muHasZAncestor;
   vector<bool>    *truth_muHasChib0_1PAncestor;
   vector<bool>    *truth_muHasChib1_1PAncestor;
   vector<bool>    *truth_muHasChib2_1PAncestor;
   vector<bool>    *truth_muHasUpsi2Ancestor;
   vector<bool>    *truth_muHasUpsi3Ancestor;
   vector<bool>    *truth_muHasUpsi1FromUpsi2Ancestor;
   vector<bool>    *truth_muHasUpsi1FromUpsi3Ancestor;
   vector<bool>    *truth_muHasUpsi2FromUpsi3Ancestor;
   vector<bool>    *truth_muHasUpsi1FromUpsi2FromUpsi3Ancestor;
   vector<bool>    *truth_eventHasZUpsiNTo4Mu;
   vector<bool>    *truth_eventHasZUpsi1To4Mu;
   vector<bool>    *truth_eventHasZUpsi2To4Mu;
   vector<bool>    *truth_eventHasZUpsi3To4Mu;
   vector<bool>    *denominator_ZplusY;
   vector<double>  *SPS_LHE_Weight;
   vector<double>  *SPS_Subprocess_XSec;

   // List of branches
   TBranch        *b_truth_Zmuon_pt;   //!
   TBranch        *b_truth_Zmuon_eta;   //!
   TBranch        *b_truth_Zmuon_phi;   //!
   TBranch        *b_truth_Z_pt;   //!
   TBranch        *b_truth_Z_eta;   //!
   TBranch        *b_truth_Z_phi;   //!
   TBranch        *b_truth_Z_mass;   //!
   TBranch        *b_truth_Z_pdgid;   //!
   TBranch        *b_truth_Upsimuon_pt;   //!
   TBranch        *b_truth_Upsimuon_eta;   //!
   TBranch        *b_truth_Upsimuon_phi;   //!
   TBranch        *b_truth_Upsi_pt;   //!
   TBranch        *b_truth_Upsi_eta;   //!
   TBranch        *b_truth_Upsi_phi;   //!
   TBranch        *b_truth_Upsi_mass;   //!
   TBranch        *b_truth_Upsi_pdgid;   //!
   TBranch        *b_truth_Upsi2muon_pt;   //!
   TBranch        *b_truth_Upsi2muon_eta;   //!
   TBranch        *b_truth_Upsi2muon_phi;   //!
   TBranch        *b_truth_Upsi2_pt;   //!
   TBranch        *b_truth_Upsi2_eta;   //!
   TBranch        *b_truth_Upsi2_phi;   //!
   TBranch        *b_truth_Upsi2_mass;   //!
   TBranch        *b_truth_Upsi2_pdgid;   //!
   TBranch        *b_truth_Upsi3muon_pt;   //!
   TBranch        *b_truth_Upsi3muon_eta;   //!
   TBranch        *b_truth_Upsi3muon_phi;   //!
   TBranch        *b_truth_Upsi3_pt;   //!
   TBranch        *b_truth_Upsi3_eta;   //!
   TBranch        *b_truth_Upsi3_phi;   //!
   TBranch        *b_truth_Upsi3_mass;   //!
   TBranch        *b_truth_Upsi3_pdgid;   //!
   TBranch        *b_truth_Chib0_1P_UPSI_muon_pt;   //!
   TBranch        *b_truth_Chib0_1P_UPSI_muon_eta;   //!
   TBranch        *b_truth_Chib0_1P_UPSI_muon_phi;   //!
   TBranch        *b_truth_Chib0_1P_pt;   //!
   TBranch        *b_truth_Chib0_1P_eta;   //!
   TBranch        *b_truth_Chib0_1P_phi;   //!
   TBranch        *b_truth_Chib0_1P_pdgid;   //!
   TBranch        *b_truth_Chib0_1P_mass;   //!
   TBranch        *b_truth_Chib0_1P_UPSI_pt;   //!
   TBranch        *b_truth_Chib0_1P_UPSI_phi;   //!
   TBranch        *b_truth_Chib0_1P_UPSI_eta;   //!
   TBranch        *b_truth_Chib0_1P_UPSI_pdgid;   //!
   TBranch        *b_truth_Chib0_1P_UPSI_mass;   //!
   TBranch        *b_truth_Chib0_1P_photon_pt;   //!
   TBranch        *b_truth_Chib0_1P_photon_phi;   //!
   TBranch        *b_truth_Chib0_1P_photon_eta;   //!
   TBranch        *b_truth_Chib0_1P_photon_pdgid;   //!
   TBranch        *b_truth_Chib1_1P_UPSI_muon_pt;   //!
   TBranch        *b_truth_Chib1_1P_UPSI_muon_eta;   //!
   TBranch        *b_truth_Chib1_1P_UPSI_muon_phi;   //!
   TBranch        *b_truth_Chib1_1P_pt;   //!
   TBranch        *b_truth_Chib1_1P_eta;   //!
   TBranch        *b_truth_Chib1_1P_phi;   //!
   TBranch        *b_truth_Chib1_1P_pdgid;   //!
   TBranch        *b_truth_Chib1_1P_mass;   //!
   TBranch        *b_truth_Chib1_1P_UPSI_pt;   //!
   TBranch        *b_truth_Chib1_1P_UPSI_eta;   //!
   TBranch        *b_truth_Chib1_1P_UPSI_phi;   //!
   TBranch        *b_truth_Chib1_1P_UPSI_pdgid;   //!
   TBranch        *b_truth_Chib1_1P_UPSI_mass;   //!
   TBranch        *b_truth_Chib1_1P_photon_pt;   //!
   TBranch        *b_truth_Chib1_1P_photon_eta;   //!
   TBranch        *b_truth_Chib1_1P_photon_phi;   //!
   TBranch        *b_truth_Chib1_1P_photon_pdgid;   //!
   TBranch        *b_truth_Chib2_1P_UPSI_muon_pt;   //!
   TBranch        *b_truth_Chib2_1P_UPSI_muon_eta;   //!
   TBranch        *b_truth_Chib2_1P_UPSI_muon_phi;   //!
   TBranch        *b_truth_Chib2_1P_pt;   //!
   TBranch        *b_truth_Chib2_1P_eta;   //!
   TBranch        *b_truth_Chib2_1P_phi;   //!
   TBranch        *b_truth_Chib2_1P_pdgid;   //!
   TBranch        *b_truth_Chib2_1P_mass;   //!
   TBranch        *b_truth_Chib2_1P_UPSI_pt;   //!
   TBranch        *b_truth_Chib2_1P_UPSI_eta;   //!
   TBranch        *b_truth_Chib2_1P_UPSI_phi;   //!
   TBranch        *b_truth_Chib2_1P_UPSI_pdgid;   //!
   TBranch        *b_truth_Chib2_1P_UPSI_mass;   //!
   TBranch        *b_truth_Chib2_1P_photon_pt;   //!
   TBranch        *b_truth_Chib2_1P_photon_eta;   //!
   TBranch        *b_truth_Chib2_1P_photon_phi;   //!
   TBranch        *b_truth_Chib2_1P_photon_pdgid;   //!
   TBranch        *b_loop_enter_check;   //!
   TBranch        *b_mc_event_number;   //!
   TBranch        *b_mc_run_number;   //!
   TBranch        *b_mc_lumi_section;   //!
   TBranch        *b_eventHasZUpsiNTo4Mu_Count;   //!
   TBranch        *b_eventDoesNotHaveZUpsiNTo4Mu_Count;   //!
   TBranch        *b_eventHasUpsi1ToMuMu_Count;   //!
   TBranch        *b_eventHasUpsi2ToMuMu_Count;   //!
   TBranch        *b_eventHasUpsi3ToMuMu_Count;   //!
   TBranch        *b_eventHasZToMuMu_Count;   //!
   TBranch        *b_eventHasZUpsi1To4Mu_Count;   //!
   TBranch        *b_eventHasZUpsi2To4Mu_Count;   //!
   TBranch        *b_eventHasZUpsi3To4Mu_Count;   //!
   TBranch        *b_eventHasZUpsiNTo4MuButNoCandFound_Count;   //!
   TBranch        *b_eventHasZUpsiNTo4MuCandFound_Count;   //!
   TBranch        *b_truth_muon_pt;   //!
   TBranch        *b_truth_muon_eta;   //!
   TBranch        *b_truth_muon_phi;   //!
   TBranch        *b_truth_muHasUpsi1Ancestor;   //!
   TBranch        *b_truth_muHasZAncestor;   //!
   TBranch        *b_truth_muHasChib0_1PAncestor;   //!
   TBranch        *b_truth_muHasChib1_1PAncestor;   //!
   TBranch        *b_truth_muHasChib2_1PAncestor;   //!
   TBranch        *b_truth_muHasUpsi2Ancestor;   //!
   TBranch        *b_truth_muHasUpsi3Ancestor;   //!
   TBranch        *b_truth_muHasUpsi1FromUpsi2Ancestor;   //!
   TBranch        *b_truth_muHasUpsi1FromUpsi3Ancestor;   //!
   TBranch        *b_truth_muHasUpsi2FromUpsi3Ancestor;   //!
   TBranch        *b_truth_muHasUpsi1FromUpsi2FromUpsi3Ancestor;   //!
   TBranch        *b_truth_eventHasZUpsiNTo4Mu;   //!
   TBranch        *b_truth_eventHasZUpsi1To4Mu;   //!
   TBranch        *b_truth_eventHasZUpsi2To4Mu;   //!
   TBranch        *b_truth_eventHasZUpsi3To4Mu;   //!
   TBranch        *b_denominator_ZplusY;   //!
   TBranch        *b_SPS_LHE_Weight;   //!
   TBranch        *b_SPS_Subprocess_XSec;   //!

   treeMC(TTree *tree=0);
   virtual ~treeMC();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef treeMC_cxx
treeMC::treeMC(TTree *tree) : fChain(0) 
// {
// // if parameter tree is not specified (or zero), connect the file
// // used to generate this class and read the Tree.
//    if (tree == 0) {
//       TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("flatFile_SPS_2018_Y1SZ_test6Aug202.root");
//       if (!f || !f->IsOpen()) {
//          f = new TFile("flatFile_SPS_2018_Y1SZ_test6Aug202.root");
//       }
//       TDirectory * dir = (TDirectory*)f->Get("flatFile_SPS_2018_Y1SZ_test6Aug202.root:/ZmuonAnalyzer");
//       dir->GetObject("treemc",tree);
// 
//    }
//    Init(tree);
// }

{

   if (tree == 0) {
      TFile *f = root_file;
      if (!f || !f->IsOpen()) {
         f = root_file;
      }
      TDirectory * dir = (TDirectory*)f->Get("ZmuonAnalyzer");
      dir->GetObject("treemc",tree);//unclear to me if this should be tree or treemc
   }
   Init(tree);
}

treeMC::~treeMC()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t treeMC::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t treeMC::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void treeMC::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   truth_Zmuon_pt = 0;
   truth_Zmuon_eta = 0;
   truth_Zmuon_phi = 0;
   truth_Z_pt = 0;
   truth_Z_eta = 0;
   truth_Z_phi = 0;
   truth_Z_mass = 0;
   truth_Z_pdgid = 0;
   truth_Upsimuon_pt = 0;
   truth_Upsimuon_eta = 0;
   truth_Upsimuon_phi = 0;
   truth_Upsi_pt = 0;
   truth_Upsi_eta = 0;
   truth_Upsi_phi = 0;
   truth_Upsi_mass = 0;
   truth_Upsi_pdgid = 0;
   truth_Upsi2muon_pt = 0;
   truth_Upsi2muon_eta = 0;
   truth_Upsi2muon_phi = 0;
   truth_Upsi2_pt = 0;
   truth_Upsi2_eta = 0;
   truth_Upsi2_phi = 0;
   truth_Upsi2_mass = 0;
   truth_Upsi2_pdgid = 0;
   truth_Upsi3muon_pt = 0;
   truth_Upsi3muon_eta = 0;
   truth_Upsi3muon_phi = 0;
   truth_Upsi3_pt = 0;
   truth_Upsi3_eta = 0;
   truth_Upsi3_phi = 0;
   truth_Upsi3_mass = 0;
   truth_Upsi3_pdgid = 0;
   truth_Chib0_1P_UPSI_muon_pt = 0;
   truth_Chib0_1P_UPSI_muon_eta = 0;
   truth_Chib0_1P_UPSI_muon_phi = 0;
   truth_Chib0_1P_pt = 0;
   truth_Chib0_1P_eta = 0;
   truth_Chib0_1P_phi = 0;
   truth_Chib0_1P_pdgid = 0;
   truth_Chib0_1P_mass = 0;
   truth_Chib0_1P_UPSI_pt = 0;
   truth_Chib0_1P_UPSI_phi = 0;
   truth_Chib0_1P_UPSI_eta = 0;
   truth_Chib0_1P_UPSI_pdgid = 0;
   truth_Chib0_1P_UPSI_mass = 0;
   truth_Chib0_1P_photon_pt = 0;
   truth_Chib0_1P_photon_phi = 0;
   truth_Chib0_1P_photon_eta = 0;
   truth_Chib0_1P_photon_pdgid = 0;
   truth_Chib1_1P_UPSI_muon_pt = 0;
   truth_Chib1_1P_UPSI_muon_eta = 0;
   truth_Chib1_1P_UPSI_muon_phi = 0;
   truth_Chib1_1P_pt = 0;
   truth_Chib1_1P_eta = 0;
   truth_Chib1_1P_phi = 0;
   truth_Chib1_1P_pdgid = 0;
   truth_Chib1_1P_mass = 0;
   truth_Chib1_1P_UPSI_pt = 0;
   truth_Chib1_1P_UPSI_eta = 0;
   truth_Chib1_1P_UPSI_phi = 0;
   truth_Chib1_1P_UPSI_pdgid = 0;
   truth_Chib1_1P_UPSI_mass = 0;
   truth_Chib1_1P_photon_pt = 0;
   truth_Chib1_1P_photon_eta = 0;
   truth_Chib1_1P_photon_phi = 0;
   truth_Chib1_1P_photon_pdgid = 0;
   truth_Chib2_1P_UPSI_muon_pt = 0;
   truth_Chib2_1P_UPSI_muon_eta = 0;
   truth_Chib2_1P_UPSI_muon_phi = 0;
   truth_Chib2_1P_pt = 0;
   truth_Chib2_1P_eta = 0;
   truth_Chib2_1P_phi = 0;
   truth_Chib2_1P_pdgid = 0;
   truth_Chib2_1P_mass = 0;
   truth_Chib2_1P_UPSI_pt = 0;
   truth_Chib2_1P_UPSI_eta = 0;
   truth_Chib2_1P_UPSI_phi = 0;
   truth_Chib2_1P_UPSI_pdgid = 0;
   truth_Chib2_1P_UPSI_mass = 0;
   truth_Chib2_1P_photon_pt = 0;
   truth_Chib2_1P_photon_eta = 0;
   truth_Chib2_1P_photon_phi = 0;
   truth_Chib2_1P_photon_pdgid = 0;
   loop_enter_check = 0;
   mc_event_number = 0;
   mc_run_number = 0;
   mc_lumi_section = 0;
   eventHasZUpsiNTo4Mu_Count = 0;
   eventDoesNotHaveZUpsiNTo4Mu_Count = 0;
   eventHasUpsi1ToMuMu_Count = 0;
   eventHasUpsi2ToMuMu_Count = 0;
   eventHasUpsi3ToMuMu_Count = 0;
   eventHasZToMuMu_Count = 0;
   eventHasZUpsi1To4Mu_Count = 0;
   eventHasZUpsi2To4Mu_Count = 0;
   eventHasZUpsi3To4Mu_Count = 0;
   eventHasZUpsiNTo4MuButNoCandFound_Count = 0;
   eventHasZUpsiNTo4MuCandFound_Count = 0;
   truth_muon_pt = 0;
   truth_muon_eta = 0;
   truth_muon_phi = 0;
   truth_muHasUpsi1Ancestor = 0;
   truth_muHasZAncestor = 0;
   truth_muHasChib0_1PAncestor = 0;
   truth_muHasChib1_1PAncestor = 0;
   truth_muHasChib2_1PAncestor = 0;
   truth_muHasUpsi2Ancestor = 0;
   truth_muHasUpsi3Ancestor = 0;
   truth_muHasUpsi1FromUpsi2Ancestor = 0;
   truth_muHasUpsi1FromUpsi3Ancestor = 0;
   truth_muHasUpsi2FromUpsi3Ancestor = 0;
   truth_muHasUpsi1FromUpsi2FromUpsi3Ancestor = 0;
   truth_eventHasZUpsiNTo4Mu = 0;
   truth_eventHasZUpsi1To4Mu = 0;
   truth_eventHasZUpsi2To4Mu = 0;
   truth_eventHasZUpsi3To4Mu = 0;
   denominator_ZplusY = 0;
   SPS_LHE_Weight = 0;
   SPS_Subprocess_XSec = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("truth_Zmuon_pt", &truth_Zmuon_pt, &b_truth_Zmuon_pt);
   fChain->SetBranchAddress("truth_Zmuon_eta", &truth_Zmuon_eta, &b_truth_Zmuon_eta);
   fChain->SetBranchAddress("truth_Zmuon_phi", &truth_Zmuon_phi, &b_truth_Zmuon_phi);
   fChain->SetBranchAddress("truth_Z_pt", &truth_Z_pt, &b_truth_Z_pt);
   fChain->SetBranchAddress("truth_Z_eta", &truth_Z_eta, &b_truth_Z_eta);
   fChain->SetBranchAddress("truth_Z_phi", &truth_Z_phi, &b_truth_Z_phi);
   fChain->SetBranchAddress("truth_Z_mass", &truth_Z_mass, &b_truth_Z_mass);
   fChain->SetBranchAddress("truth_Z_pdgid", &truth_Z_pdgid, &b_truth_Z_pdgid);
   fChain->SetBranchAddress("truth_Upsimuon_pt", &truth_Upsimuon_pt, &b_truth_Upsimuon_pt);
   fChain->SetBranchAddress("truth_Upsimuon_eta", &truth_Upsimuon_eta, &b_truth_Upsimuon_eta);
   fChain->SetBranchAddress("truth_Upsimuon_phi", &truth_Upsimuon_phi, &b_truth_Upsimuon_phi);
   fChain->SetBranchAddress("truth_Upsi_pt", &truth_Upsi_pt, &b_truth_Upsi_pt);
   fChain->SetBranchAddress("truth_Upsi_eta", &truth_Upsi_eta, &b_truth_Upsi_eta);
   fChain->SetBranchAddress("truth_Upsi_phi", &truth_Upsi_phi, &b_truth_Upsi_phi);
   fChain->SetBranchAddress("truth_Upsi_mass", &truth_Upsi_mass, &b_truth_Upsi_mass);
   fChain->SetBranchAddress("truth_Upsi_pdgid", &truth_Upsi_pdgid, &b_truth_Upsi_pdgid);
   fChain->SetBranchAddress("truth_Upsi2muon_pt", &truth_Upsi2muon_pt, &b_truth_Upsi2muon_pt);
   fChain->SetBranchAddress("truth_Upsi2muon_eta", &truth_Upsi2muon_eta, &b_truth_Upsi2muon_eta);
   fChain->SetBranchAddress("truth_Upsi2muon_phi", &truth_Upsi2muon_phi, &b_truth_Upsi2muon_phi);
   fChain->SetBranchAddress("truth_Upsi2_pt", &truth_Upsi2_pt, &b_truth_Upsi2_pt);
   fChain->SetBranchAddress("truth_Upsi2_eta", &truth_Upsi2_eta, &b_truth_Upsi2_eta);
   fChain->SetBranchAddress("truth_Upsi2_phi", &truth_Upsi2_phi, &b_truth_Upsi2_phi);
   fChain->SetBranchAddress("truth_Upsi2_mass", &truth_Upsi2_mass, &b_truth_Upsi2_mass);
   fChain->SetBranchAddress("truth_Upsi2_pdgid", &truth_Upsi2_pdgid, &b_truth_Upsi2_pdgid);
   fChain->SetBranchAddress("truth_Upsi3muon_pt", &truth_Upsi3muon_pt, &b_truth_Upsi3muon_pt);
   fChain->SetBranchAddress("truth_Upsi3muon_eta", &truth_Upsi3muon_eta, &b_truth_Upsi3muon_eta);
   fChain->SetBranchAddress("truth_Upsi3muon_phi", &truth_Upsi3muon_phi, &b_truth_Upsi3muon_phi);
   fChain->SetBranchAddress("truth_Upsi3_pt", &truth_Upsi3_pt, &b_truth_Upsi3_pt);
   fChain->SetBranchAddress("truth_Upsi3_eta", &truth_Upsi3_eta, &b_truth_Upsi3_eta);
   fChain->SetBranchAddress("truth_Upsi3_phi", &truth_Upsi3_phi, &b_truth_Upsi3_phi);
   fChain->SetBranchAddress("truth_Upsi3_mass", &truth_Upsi3_mass, &b_truth_Upsi3_mass);
   fChain->SetBranchAddress("truth_Upsi3_pdgid", &truth_Upsi3_pdgid, &b_truth_Upsi3_pdgid);
   fChain->SetBranchAddress("truth_Chib0_1P_UPSI_muon_pt", &truth_Chib0_1P_UPSI_muon_pt, &b_truth_Chib0_1P_UPSI_muon_pt);
   fChain->SetBranchAddress("truth_Chib0_1P_UPSI_muon_eta", &truth_Chib0_1P_UPSI_muon_eta, &b_truth_Chib0_1P_UPSI_muon_eta);
   fChain->SetBranchAddress("truth_Chib0_1P_UPSI_muon_phi", &truth_Chib0_1P_UPSI_muon_phi, &b_truth_Chib0_1P_UPSI_muon_phi);
   fChain->SetBranchAddress("truth_Chib0_1P_pt", &truth_Chib0_1P_pt, &b_truth_Chib0_1P_pt);
   fChain->SetBranchAddress("truth_Chib0_1P_eta", &truth_Chib0_1P_eta, &b_truth_Chib0_1P_eta);
   fChain->SetBranchAddress("truth_Chib0_1P_phi", &truth_Chib0_1P_phi, &b_truth_Chib0_1P_phi);
   fChain->SetBranchAddress("truth_Chib0_1P_pdgid", &truth_Chib0_1P_pdgid, &b_truth_Chib0_1P_pdgid);
   fChain->SetBranchAddress("truth_Chib0_1P_mass", &truth_Chib0_1P_mass, &b_truth_Chib0_1P_mass);
   fChain->SetBranchAddress("truth_Chib0_1P_UPSI_pt", &truth_Chib0_1P_UPSI_pt, &b_truth_Chib0_1P_UPSI_pt);
   fChain->SetBranchAddress("truth_Chib0_1P_UPSI_phi", &truth_Chib0_1P_UPSI_phi, &b_truth_Chib0_1P_UPSI_phi);
   fChain->SetBranchAddress("truth_Chib0_1P_UPSI_eta", &truth_Chib0_1P_UPSI_eta, &b_truth_Chib0_1P_UPSI_eta);
   fChain->SetBranchAddress("truth_Chib0_1P_UPSI_pdgid", &truth_Chib0_1P_UPSI_pdgid, &b_truth_Chib0_1P_UPSI_pdgid);
   fChain->SetBranchAddress("truth_Chib0_1P_UPSI_mass", &truth_Chib0_1P_UPSI_mass, &b_truth_Chib0_1P_UPSI_mass);
   fChain->SetBranchAddress("truth_Chib0_1P_photon_pt", &truth_Chib0_1P_photon_pt, &b_truth_Chib0_1P_photon_pt);
   fChain->SetBranchAddress("truth_Chib0_1P_photon_phi", &truth_Chib0_1P_photon_phi, &b_truth_Chib0_1P_photon_phi);
   fChain->SetBranchAddress("truth_Chib0_1P_photon_eta", &truth_Chib0_1P_photon_eta, &b_truth_Chib0_1P_photon_eta);
   fChain->SetBranchAddress("truth_Chib0_1P_photon_pdgid", &truth_Chib0_1P_photon_pdgid, &b_truth_Chib0_1P_photon_pdgid);
   fChain->SetBranchAddress("truth_Chib1_1P_UPSI_muon_pt", &truth_Chib1_1P_UPSI_muon_pt, &b_truth_Chib1_1P_UPSI_muon_pt);
   fChain->SetBranchAddress("truth_Chib1_1P_UPSI_muon_eta", &truth_Chib1_1P_UPSI_muon_eta, &b_truth_Chib1_1P_UPSI_muon_eta);
   fChain->SetBranchAddress("truth_Chib1_1P_UPSI_muon_phi", &truth_Chib1_1P_UPSI_muon_phi, &b_truth_Chib1_1P_UPSI_muon_phi);
   fChain->SetBranchAddress("truth_Chib1_1P_pt", &truth_Chib1_1P_pt, &b_truth_Chib1_1P_pt);
   fChain->SetBranchAddress("truth_Chib1_1P_eta", &truth_Chib1_1P_eta, &b_truth_Chib1_1P_eta);
   fChain->SetBranchAddress("truth_Chib1_1P_phi", &truth_Chib1_1P_phi, &b_truth_Chib1_1P_phi);
   fChain->SetBranchAddress("truth_Chib1_1P_pdgid", &truth_Chib1_1P_pdgid, &b_truth_Chib1_1P_pdgid);
   fChain->SetBranchAddress("truth_Chib1_1P_mass", &truth_Chib1_1P_mass, &b_truth_Chib1_1P_mass);
   fChain->SetBranchAddress("truth_Chib1_1P_UPSI_pt", &truth_Chib1_1P_UPSI_pt, &b_truth_Chib1_1P_UPSI_pt);
   fChain->SetBranchAddress("truth_Chib1_1P_UPSI_eta", &truth_Chib1_1P_UPSI_eta, &b_truth_Chib1_1P_UPSI_eta);
   fChain->SetBranchAddress("truth_Chib1_1P_UPSI_phi", &truth_Chib1_1P_UPSI_phi, &b_truth_Chib1_1P_UPSI_phi);
   fChain->SetBranchAddress("truth_Chib1_1P_UPSI_pdgid", &truth_Chib1_1P_UPSI_pdgid, &b_truth_Chib1_1P_UPSI_pdgid);
   fChain->SetBranchAddress("truth_Chib1_1P_UPSI_mass", &truth_Chib1_1P_UPSI_mass, &b_truth_Chib1_1P_UPSI_mass);
   fChain->SetBranchAddress("truth_Chib1_1P_photon_pt", &truth_Chib1_1P_photon_pt, &b_truth_Chib1_1P_photon_pt);
   fChain->SetBranchAddress("truth_Chib1_1P_photon_eta", &truth_Chib1_1P_photon_eta, &b_truth_Chib1_1P_photon_eta);
   fChain->SetBranchAddress("truth_Chib1_1P_photon_phi", &truth_Chib1_1P_photon_phi, &b_truth_Chib1_1P_photon_phi);
   fChain->SetBranchAddress("truth_Chib1_1P_photon_pdgid", &truth_Chib1_1P_photon_pdgid, &b_truth_Chib1_1P_photon_pdgid);
   fChain->SetBranchAddress("truth_Chib2_1P_UPSI_muon_pt", &truth_Chib2_1P_UPSI_muon_pt, &b_truth_Chib2_1P_UPSI_muon_pt);
   fChain->SetBranchAddress("truth_Chib2_1P_UPSI_muon_eta", &truth_Chib2_1P_UPSI_muon_eta, &b_truth_Chib2_1P_UPSI_muon_eta);
   fChain->SetBranchAddress("truth_Chib2_1P_UPSI_muon_phi", &truth_Chib2_1P_UPSI_muon_phi, &b_truth_Chib2_1P_UPSI_muon_phi);
   fChain->SetBranchAddress("truth_Chib2_1P_pt", &truth_Chib2_1P_pt, &b_truth_Chib2_1P_pt);
   fChain->SetBranchAddress("truth_Chib2_1P_eta", &truth_Chib2_1P_eta, &b_truth_Chib2_1P_eta);
   fChain->SetBranchAddress("truth_Chib2_1P_phi", &truth_Chib2_1P_phi, &b_truth_Chib2_1P_phi);
   fChain->SetBranchAddress("truth_Chib2_1P_pdgid", &truth_Chib2_1P_pdgid, &b_truth_Chib2_1P_pdgid);
   fChain->SetBranchAddress("truth_Chib2_1P_mass", &truth_Chib2_1P_mass, &b_truth_Chib2_1P_mass);
   fChain->SetBranchAddress("truth_Chib2_1P_UPSI_pt", &truth_Chib2_1P_UPSI_pt, &b_truth_Chib2_1P_UPSI_pt);
   fChain->SetBranchAddress("truth_Chib2_1P_UPSI_eta", &truth_Chib2_1P_UPSI_eta, &b_truth_Chib2_1P_UPSI_eta);
   fChain->SetBranchAddress("truth_Chib2_1P_UPSI_phi", &truth_Chib2_1P_UPSI_phi, &b_truth_Chib2_1P_UPSI_phi);
   fChain->SetBranchAddress("truth_Chib2_1P_UPSI_pdgid", &truth_Chib2_1P_UPSI_pdgid, &b_truth_Chib2_1P_UPSI_pdgid);
   fChain->SetBranchAddress("truth_Chib2_1P_UPSI_mass", &truth_Chib2_1P_UPSI_mass, &b_truth_Chib2_1P_UPSI_mass);
   fChain->SetBranchAddress("truth_Chib2_1P_photon_pt", &truth_Chib2_1P_photon_pt, &b_truth_Chib2_1P_photon_pt);
   fChain->SetBranchAddress("truth_Chib2_1P_photon_eta", &truth_Chib2_1P_photon_eta, &b_truth_Chib2_1P_photon_eta);
   fChain->SetBranchAddress("truth_Chib2_1P_photon_phi", &truth_Chib2_1P_photon_phi, &b_truth_Chib2_1P_photon_phi);
   fChain->SetBranchAddress("truth_Chib2_1P_photon_pdgid", &truth_Chib2_1P_photon_pdgid, &b_truth_Chib2_1P_photon_pdgid);
   fChain->SetBranchAddress("loop_enter_check", &loop_enter_check, &b_loop_enter_check);
   fChain->SetBranchAddress("mc_event_number", &mc_event_number, &b_mc_event_number);
   fChain->SetBranchAddress("mc_run_number", &mc_run_number, &b_mc_run_number);
   fChain->SetBranchAddress("mc_lumi_section", &mc_lumi_section, &b_mc_lumi_section);
   fChain->SetBranchAddress("eventHasZUpsiNTo4Mu_Count", &eventHasZUpsiNTo4Mu_Count, &b_eventHasZUpsiNTo4Mu_Count);
   fChain->SetBranchAddress("eventDoesNotHaveZUpsiNTo4Mu_Count", &eventDoesNotHaveZUpsiNTo4Mu_Count, &b_eventDoesNotHaveZUpsiNTo4Mu_Count);
   fChain->SetBranchAddress("eventHasUpsi1ToMuMu_Count", &eventHasUpsi1ToMuMu_Count, &b_eventHasUpsi1ToMuMu_Count);
   fChain->SetBranchAddress("eventHasUpsi2ToMuMu_Count", &eventHasUpsi2ToMuMu_Count, &b_eventHasUpsi2ToMuMu_Count);
   fChain->SetBranchAddress("eventHasUpsi3ToMuMu_Count", &eventHasUpsi3ToMuMu_Count, &b_eventHasUpsi3ToMuMu_Count);
   fChain->SetBranchAddress("eventHasZToMuMu_Count", &eventHasZToMuMu_Count, &b_eventHasZToMuMu_Count);
   fChain->SetBranchAddress("eventHasZUpsi1To4Mu_Count", &eventHasZUpsi1To4Mu_Count, &b_eventHasZUpsi1To4Mu_Count);
   fChain->SetBranchAddress("eventHasZUpsi2To4Mu_Count", &eventHasZUpsi2To4Mu_Count, &b_eventHasZUpsi2To4Mu_Count);
   fChain->SetBranchAddress("eventHasZUpsi3To4Mu_Count", &eventHasZUpsi3To4Mu_Count, &b_eventHasZUpsi3To4Mu_Count);
   fChain->SetBranchAddress("eventHasZUpsiNTo4MuButNoCandFound_Count", &eventHasZUpsiNTo4MuButNoCandFound_Count, &b_eventHasZUpsiNTo4MuButNoCandFound_Count);
   fChain->SetBranchAddress("eventHasZUpsiNTo4MuCandFound_Count", &eventHasZUpsiNTo4MuCandFound_Count, &b_eventHasZUpsiNTo4MuCandFound_Count);
   fChain->SetBranchAddress("truth_muon_pt", &truth_muon_pt, &b_truth_muon_pt);
   fChain->SetBranchAddress("truth_muon_eta", &truth_muon_eta, &b_truth_muon_eta);
   fChain->SetBranchAddress("truth_muon_phi", &truth_muon_phi, &b_truth_muon_phi);
   fChain->SetBranchAddress("truth_muHasUpsi1Ancestor", &truth_muHasUpsi1Ancestor, &b_truth_muHasUpsi1Ancestor);
   fChain->SetBranchAddress("truth_muHasZAncestor", &truth_muHasZAncestor, &b_truth_muHasZAncestor);
   fChain->SetBranchAddress("truth_muHasChib0_1PAncestor", &truth_muHasChib0_1PAncestor, &b_truth_muHasChib0_1PAncestor);
   fChain->SetBranchAddress("truth_muHasChib1_1PAncestor", &truth_muHasChib1_1PAncestor, &b_truth_muHasChib1_1PAncestor);
   fChain->SetBranchAddress("truth_muHasChib2_1PAncestor", &truth_muHasChib2_1PAncestor, &b_truth_muHasChib2_1PAncestor);
   fChain->SetBranchAddress("truth_muHasUpsi2Ancestor", &truth_muHasUpsi2Ancestor, &b_truth_muHasUpsi2Ancestor);
   fChain->SetBranchAddress("truth_muHasUpsi3Ancestor", &truth_muHasUpsi3Ancestor, &b_truth_muHasUpsi3Ancestor);
   fChain->SetBranchAddress("truth_muHasUpsi1FromUpsi2Ancestor", &truth_muHasUpsi1FromUpsi2Ancestor, &b_truth_muHasUpsi1FromUpsi2Ancestor);
   fChain->SetBranchAddress("truth_muHasUpsi1FromUpsi3Ancestor", &truth_muHasUpsi1FromUpsi3Ancestor, &b_truth_muHasUpsi1FromUpsi3Ancestor);
   fChain->SetBranchAddress("truth_muHasUpsi2FromUpsi3Ancestor", &truth_muHasUpsi2FromUpsi3Ancestor, &b_truth_muHasUpsi2FromUpsi3Ancestor);
   fChain->SetBranchAddress("truth_muHasUpsi1FromUpsi2FromUpsi3Ancestor", &truth_muHasUpsi1FromUpsi2FromUpsi3Ancestor, &b_truth_muHasUpsi1FromUpsi2FromUpsi3Ancestor);
   fChain->SetBranchAddress("truth_eventHasZUpsiNTo4Mu", &truth_eventHasZUpsiNTo4Mu, &b_truth_eventHasZUpsiNTo4Mu);
   fChain->SetBranchAddress("truth_eventHasZUpsi1To4Mu", &truth_eventHasZUpsi1To4Mu, &b_truth_eventHasZUpsi1To4Mu);
   fChain->SetBranchAddress("truth_eventHasZUpsi2To4Mu", &truth_eventHasZUpsi2To4Mu, &b_truth_eventHasZUpsi2To4Mu);
   fChain->SetBranchAddress("truth_eventHasZUpsi3To4Mu", &truth_eventHasZUpsi3To4Mu, &b_truth_eventHasZUpsi3To4Mu);
   fChain->SetBranchAddress("denominator_ZplusY", &denominator_ZplusY, &b_denominator_ZplusY);
   fChain->SetBranchAddress("SPS_LHE_Weight", &SPS_LHE_Weight, &b_SPS_LHE_Weight);
   fChain->SetBranchAddress("SPS_Subprocess_XSec", &SPS_Subprocess_XSec, &b_SPS_Subprocess_XSec);
   Notify();
}

Bool_t treeMC::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void treeMC::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t treeMC::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef treeMC_cxx
