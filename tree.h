//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Jan 30 05:04:08 2023 by ROOT version 6.14/09
// from TTree tree/tree
// found on file: flatFile_short_1000Ev.root
//////////////////////////////////////////////////////////

#ifndef tree_h
#define tree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class tree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   vector<unsigned int> *event_number;
   vector<unsigned int> *run_number;
   vector<unsigned int> *lumi_section;
   vector<unsigned int> *bunch_crossing;
   vector<unsigned int> *orbit_number;
   vector<unsigned int> *event_number_of_event;
   vector<unsigned int> *run_number_of_event;
   vector<unsigned int> *lumi_section_of_event;
   vector<double>  *rho;
   vector<bool>    *flagZplusY;
   vector<bool>    *flagZOnly;
   vector<double>  *lepton1_pt;
   vector<vector<string> > *lepton1_trigger_filters;
   vector<double>  *lepton1_eta;
   vector<double>  *lepton1_phi;
   vector<double>  *lepton1_charge;
   vector<double>  *lepton1_d0;
   vector<double>  *lepton1_dxy;
   vector<double>  *lepton1_dz;
   vector<double>  *lepton1_iso03particle;
   vector<double>  *lepton1_iso04particle;
   vector<double>  *lepton1_iso03hadron;
   vector<double>  *lepton1_iso04hadron;
   vector<double>  *lepton1_iso03neutralHadron;
   vector<double>  *lepton1_iso03photon;
   vector<double>  *lepton1_iso03PU;
   vector<double>  *lepton1_impactParameterSignificance;
   vector<bool>    *lepton1_isLooseMuon;
   vector<bool>    *lepton1_isMediumMuon;
   vector<bool>    *lepton1_isSoftMuon;
   vector<bool>    *lepton1_isTightMuon;
   vector<bool>    *lepton1_isPFMuon;
   vector<bool>    *lepton1_isGlobalMuon;
   vector<bool>    *lepton1_isTrackerMuon;
   vector<double>  *lepton1_fromPV;
   vector<double>  *lepton1_pvassq;
   vector<double>  *lepton2_pt;
   vector<double>  *lepton2_eta;
   vector<double>  *lepton2_phi;
   vector<double>  *lepton2_charge;
   vector<double>  *lepton2_d0;
   vector<double>  *lepton2_dxy;
   vector<double>  *lepton2_dz;
   vector<double>  *lepton2_iso03particle;
   vector<double>  *lepton2_iso04particle;
   vector<double>  *lepton2_iso03hadron;
   vector<double>  *lepton2_iso04hadron;
   vector<double>  *lepton2_iso03neutralHadron;
   vector<double>  *lepton2_iso03photon;
   vector<double>  *lepton2_iso03PU;
   vector<double>  *lepton2_impactParameterSignificance;
   vector<bool>    *lepton2_isLooseMuon;
   vector<bool>    *lepton2_isSoftMuon;
   vector<bool>    *lepton2_isMediumMuon;
   vector<bool>    *lepton2_isTightMuon;
   vector<bool>    *lepton2_isPFMuon;
   vector<bool>    *lepton2_isGlobalMuon;
   vector<bool>    *lepton2_isTrackerMuon;
   vector<double>  *lepton2_fromPV;
   vector<double>  *lepton2_pvassq;
   vector<double>  *lepton3_pt;
   vector<double>  *lepton3_eta;
   vector<double>  *lepton3_phi;
   vector<double>  *lepton3_charge;
   vector<double>  *lepton3_d0;
   vector<double>  *lepton3_dxy;
   vector<double>  *lepton3_dz;
   vector<double>  *lepton3_iso03particle;
   vector<double>  *lepton3_iso04particle;
   vector<double>  *lepton3_iso03hadron;
   vector<double>  *lepton3_iso04hadron;
   vector<double>  *lepton3_iso03neutralHadron;
   vector<double>  *lepton3_iso03photon;
   vector<double>  *lepton3_iso03PU;
   vector<double>  *lepton3_impactParameterSignificance;
   vector<bool>    *lepton3_isLooseMuon;
   vector<bool>    *lepton3_isMediumMuon;
   vector<bool>    *lepton3_isSoftMuon;
   vector<bool>    *lepton3_isTightMuon;
   vector<bool>    *lepton3_isPFMuon;
   vector<bool>    *lepton3_isGlobalMuon;
   vector<bool>    *lepton3_isTrackerMuon;
   vector<double>  *lepton3_fromPV;
   vector<double>  *lepton3_pvassq;
   vector<double>  *lepton4_pt;
   vector<double>  *lepton4_eta;
   vector<double>  *lepton4_phi;
   vector<double>  *lepton4_charge;
   vector<double>  *lepton4_d0;
   vector<double>  *lepton4_dxy;
   vector<double>  *lepton4_dz;
   vector<double>  *lepton4_iso03particle;
   vector<double>  *lepton4_iso04particle;
   vector<double>  *lepton4_iso03hadron;
   vector<double>  *lepton4_iso04hadron;
   vector<double>  *lepton4_iso03neutralHadron;
   vector<double>  *lepton4_iso03photon;
   vector<double>  *lepton4_iso03PU;
   vector<double>  *lepton4_impactParameterSignificance;
   vector<bool>    *lepton4_isLooseMuon;
   vector<bool>    *lepton4_isMediumMuon;
   vector<bool>    *lepton4_isSoftMuon;
   vector<bool>    *lepton4_isTightMuon;
   vector<bool>    *lepton4_isPFMuon;
   vector<bool>    *lepton4_isGlobalMuon;
   vector<bool>    *lepton4_isTrackerMuon;
   vector<double>  *lepton4_fromPV;
   vector<double>  *lepton4_pvassq;
   vector<vector<double> > *dimuon1mass;
   vector<vector<double> > *dimuon2mass;
   vector<vector<double> > *dimuon1pt;
   vector<vector<double> > *dimuon2pt;
   vector<vector<double> > *dimuon1eta;
   vector<vector<double> > *dimuon2eta;
   vector<vector<double> > *dimuon1phi;
   vector<vector<double> > *dimuon2phi;
   vector<vector<double> > *dimuon1vtx;
   vector<vector<double> > *dimuon2vtx;
   vector<vector<double> > *dimuon1vtx_xpos;
   vector<vector<double> > *dimuon2vtx_xpos;
   vector<vector<double> > *dimuon1vtx_ypos;
   vector<vector<double> > *dimuon2vtx_ypos;
   vector<vector<double> > *dimuon1vtx_zpos;
   vector<vector<double> > *dimuon2vtx_zpos;
   vector<vector<double> > *dimuon1vtx_xposError;
   vector<vector<double> > *dimuon2vtx_xposError;
   vector<vector<double> > *dimuon1vtx_yposError;
   vector<vector<double> > *dimuon2vtx_yposError;
   vector<vector<double> > *dimuon1vtx_zposError;
   vector<vector<double> > *dimuon2vtx_zposError;
   vector<vector<double> > *dimuon1vtx_chi2;
   vector<vector<double> > *dimuon2vtx_chi2;
   vector<vector<int> > *dimuon1vtx_ndof;
   vector<vector<int> > *dimuon2vtx_ndof;
   vector<double>  *dimuon1lxy;
   vector<double>  *dimuon2lxy;
   vector<double>  *dimuon1lxysig;
   vector<double>  *dimuon2lxysig;
   vector<double>  *dimuon1lxyctauPV;
   vector<double>  *dimuon2lxyctauPV;
   vector<double>  *sixmuonvtx;
   vector<string>  *triggerlist;
   vector<unsigned int> *save_event_count;
   vector<double>  *numberOfVertices;
   vector<double>  *zOfVertices;
   vector<double>  *zOfVerticesError;
   vector<bool>    *pair_12_34_56;
   vector<bool>    *pair_13_24_56;
   vector<bool>    *pair_14_23_56;
   vector<bool>    *pair_12_34_ZOnly;
   vector<bool>    *pair_13_24_ZOnly;
   vector<bool>    *pair_14_23_ZOnly;
   vector<double>  *PVx;
   vector<double>  *PVy;
   vector<double>  *PVz;
   vector<int>     *quadComesFromEvtWithThisManyMu;
   vector<double>  *inv4MuMass;
   vector<double>  *big4MuVtx;
   vector<double>  *big4MuEta;
   vector<double>  *big4MuPhi;
   vector<double>  *big4MuPt;
   vector<double>  *big4MuVtx_chi2;
   vector<int>     *big4MuVtx_ndof;
   vector<double>  *big4MuVtx_xpos;
   vector<double>  *big4MuVtx_ypos;
   vector<double>  *big4MuVtx_zpos;
   vector<double>  *big4MuVtx_xposError;
   vector<double>  *big4MuVtx_yposError;
   vector<double>  *big4MuVtx_zposError;
   vector<int>     *numZplusYCandInEvent;
   vector<int>     *quadHasHowManyTrigMatches;
   vector<int>     *sum4LepCharges;
   vector<double>  *lepton1_validHits;
   vector<double>  *lepton2_validHits;
   vector<double>  *lepton3_validHits;
   vector<double>  *lepton4_validHits;

   // List of branches
   TBranch        *b_event_number;   //!
   TBranch        *b_run_number;   //!
   TBranch        *b_lumi_section;   //!
   TBranch        *b_bunch_crossing;   //!
   TBranch        *b_orbit_number;   //!
   TBranch        *b_event_number_of_event;   //!
   TBranch        *b_run_number_of_event;   //!
   TBranch        *b_lumi_section_of_event;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_flagZplusY;   //!
   TBranch        *b_flagZOnly;   //!
   TBranch        *b_lepton1_pt;   //!
   TBranch        *b_lepton1_trigger_filters;   //!
   TBranch        *b_lepton1_eta;   //!
   TBranch        *b_lepton1_phi;   //!
   TBranch        *b_lepton1_charge;   //!
   TBranch        *b_lepton1_d0;   //!
   TBranch        *b_lepton1_dxy;   //!
   TBranch        *b_lepton1_dz;   //!
   TBranch        *b_lepton1_iso03particle;   //!
   TBranch        *b_lepton1_iso04particle;   //!
   TBranch        *b_lepton1_iso03hadron;   //!
   TBranch        *b_lepton1_iso04hadron;   //!
   TBranch        *b_lepton1_iso03neutralHadron;   //!
   TBranch        *b_lepton1_iso03photon;   //!
   TBranch        *b_lepton1_iso03PU;   //!
   TBranch        *b_lepton1_impactParameterSignificance;   //!
   TBranch        *b_lepton1_isLooseMuon;   //!
   TBranch        *b_lepton1_isMediumMuon;   //!
   TBranch        *b_lepton1_isSoftMuon;   //!
   TBranch        *b_lepton1_isTightMuon;   //!
   TBranch        *b_lepton1_isPFMuon;   //!
   TBranch        *b_lepton1_isGlobalMuon;   //!
   TBranch        *b_lepton1_isTrackerMuon;   //!
   TBranch        *b_lepton1_fromPV;   //!
   TBranch        *b_lepton1_pvassq;   //!
   TBranch        *b_lepton2_pt;   //!
   TBranch        *b_lepton2_eta;   //!
   TBranch        *b_lepton2_phi;   //!
   TBranch        *b_lepton2_charge;   //!
   TBranch        *b_lepton2_d0;   //!
   TBranch        *b_lepton2_dxy;   //!
   TBranch        *b_lepton2_dz;   //!
   TBranch        *b_lepton2_iso03particle;   //!
   TBranch        *b_lepton2_iso04particle;   //!
   TBranch        *b_lepton2_iso03hadron;   //!
   TBranch        *b_lepton2_iso04hadron;   //!
   TBranch        *b_lepton2_iso03neutralHadron;   //!
   TBranch        *b_lepton2_iso03photon;   //!
   TBranch        *b_lepton2_iso03PU;   //!
   TBranch        *b_lepton2_impactParameterSignificance;   //!
   TBranch        *b_lepton2_isLooseMuon;   //!
   TBranch        *b_lepton2_isSoftMuon;   //!
   TBranch        *b_lepton2_isMediumMuon;   //!
   TBranch        *b_lepton2_isTightMuon;   //!
   TBranch        *b_lepton2_isPFMuon;   //!
   TBranch        *b_lepton2_isGlobalMuon;   //!
   TBranch        *b_lepton2_isTrackerMuon;   //!
   TBranch        *b_lepton2_fromPV;   //!
   TBranch        *b_lepton2_pvassq;   //!
   TBranch        *b_lepton3_pt;   //!
   TBranch        *b_lepton3_eta;   //!
   TBranch        *b_lepton3_phi;   //!
   TBranch        *b_lepton3_charge;   //!
   TBranch        *b_lepton3_d0;   //!
   TBranch        *b_lepton3_dxy;   //!
   TBranch        *b_lepton3_dz;   //!
   TBranch        *b_lepton3_iso03particle;   //!
   TBranch        *b_lepton3_iso04particle;   //!
   TBranch        *b_lepton3_iso03hadron;   //!
   TBranch        *b_lepton3_iso04hadron;   //!
   TBranch        *b_lepton3_iso03neutralHadron;   //!
   TBranch        *b_lepton3_iso03photon;   //!
   TBranch        *b_lepton3_iso03PU;   //!
   TBranch        *b_lepton3_impactParameterSignificance;   //!
   TBranch        *b_lepton3_isLooseMuon;   //!
   TBranch        *b_lepton3_isMediumMuon;   //!
   TBranch        *b_lepton3_isSoftMuon;   //!
   TBranch        *b_lepton3_isTightMuon;   //!
   TBranch        *b_lepton3_isPFMuon;   //!
   TBranch        *b_lepton3_isGlobalMuon;   //!
   TBranch        *b_lepton3_isTrackerMuon;   //!
   TBranch        *b_lepton3_fromPV;   //!
   TBranch        *b_lepton3_pvassq;   //!
   TBranch        *b_lepton4_pt;   //!
   TBranch        *b_lepton4_eta;   //!
   TBranch        *b_lepton4_phi;   //!
   TBranch        *b_lepton4_charge;   //!
   TBranch        *b_lepton4_d0;   //!
   TBranch        *b_lepton4_dxy;   //!
   TBranch        *b_lepton4_dz;   //!
   TBranch        *b_lepton4_iso03particle;   //!
   TBranch        *b_lepton4_iso04particle;   //!
   TBranch        *b_lepton4_iso03hadron;   //!
   TBranch        *b_lepton4_iso04hadron;   //!
   TBranch        *b_lepton4_iso03neutralHadron;   //!
   TBranch        *b_lepton4_iso03photon;   //!
   TBranch        *b_lepton4_iso03PU;   //!
   TBranch        *b_lepton4_impactParameterSignificance;   //!
   TBranch        *b_lepton4_isLooseMuon;   //!
   TBranch        *b_lepton4_isMediumMuon;   //!
   TBranch        *b_lepton4_isSoftMuon;   //!
   TBranch        *b_lepton4_isTightMuon;   //!
   TBranch        *b_lepton4_isPFMuon;   //!
   TBranch        *b_lepton4_isGlobalMuon;   //!
   TBranch        *b_lepton4_isTrackerMuon;   //!
   TBranch        *b_lepton4_fromPV;   //!
   TBranch        *b_lepton4_pvassq;   //!
   TBranch        *b_dimuon1mass;   //!
   TBranch        *b_dimuon2mass;   //!
   TBranch        *b_dimuon1pt;   //!
   TBranch        *b_dimuon2pt;   //!
   TBranch        *b_dimuon1eta;   //!
   TBranch        *b_dimuon2eta;   //!
   TBranch        *b_dimuon1phi;   //!
   TBranch        *b_dimuon2phi;   //!
   TBranch        *b_dimuon1vtx;   //!
   TBranch        *b_dimuon2vtx;   //!
   TBranch        *b_dimuon1vtx_xpos;   //!
   TBranch        *b_dimuon2vtx_xpos;   //!
   TBranch        *b_dimuon1vtx_ypos;   //!
   TBranch        *b_dimuon2vtx_ypos;   //!
   TBranch        *b_dimuon1vtx_zpos;   //!
   TBranch        *b_dimuon2vtx_zpos;   //!
   TBranch        *b_dimuon1vtx_xposError;   //!
   TBranch        *b_dimuon2vtx_xposError;   //!
   TBranch        *b_dimuon1vtx_yposError;   //!
   TBranch        *b_dimuon2vtx_yposError;   //!
   TBranch        *b_dimuon1vtx_zposError;   //!
   TBranch        *b_dimuon2vtx_zposError;   //!
   TBranch        *b_dimuon1vtx_chi2;   //!
   TBranch        *b_dimuon2vtx_chi2;   //!
   TBranch        *b_dimuon1vtx_ndof;   //!
   TBranch        *b_dimuon2vtx_ndof;   //!
   TBranch        *b_dimuon1lxy;   //!
   TBranch        *b_dimuon2lxy;   //!
   TBranch        *b_dimuon1lxysig;   //!
   TBranch        *b_dimuon2lxysig;   //!
   TBranch        *b_dimuon1lxyctauPV;   //!
   TBranch        *b_dimuon2lxyctauPV;   //!
   TBranch        *b_sixmuonvtx;   //!
   TBranch        *b_triggerlist;   //!
   TBranch        *b_save_event_count;   //!
   TBranch        *b_numberOfVertices;   //!
   TBranch        *b_zOfVertices;   //!
   TBranch        *b_zOfVerticesError;   //!
   TBranch        *b_pair_12_34_56;   //!
   TBranch        *b_pair_13_24_56;   //!
   TBranch        *b_pair_14_23_56;   //!
   TBranch        *b_pair_12_34_ZOnly;   //!
   TBranch        *b_pair_13_24_ZOnly;   //!
   TBranch        *b_pair_14_23_ZOnly;   //!
   TBranch        *b_PVx;   //!
   TBranch        *b_PVy;   //!
   TBranch        *b_PVz;   //!
   TBranch        *b_quadComesFromEvtWithThisManyMu;   //!
   TBranch        *b_inv4MuMass;   //!
   TBranch        *b_big4MuVtx;   //!
   TBranch        *b_big4MuEta;   //!
   TBranch        *b_big4MuPhi;   //!
   TBranch        *b_big4MuPt;   //!
   TBranch        *b_big4MuVtx_chi2;   //!
   TBranch        *b_big4MuVtx_ndof;   //!
   TBranch        *b_big4MuVtx_xpos;   //!
   TBranch        *b_big4MuVtx_ypos;   //!
   TBranch        *b_big4MuVtx_zpos;   //!
   TBranch        *b_big4MuVtx_xposError;   //!
   TBranch        *b_big4MuVtx_yposError;   //!
   TBranch        *b_big4MuVtx_zposError;   //!
   TBranch        *b_numZplusYCandInEvent;   //!
   TBranch        *b_quadHasHowManyTrigMatches;   //!
   TBranch        *b_sum4LepCharges;   //!
   TBranch        *b_lepton1_validHits;   //!
   TBranch        *b_lepton2_validHits;   //!
   TBranch        *b_lepton3_validHits;   //!
   TBranch        *b_lepton4_validHits;   //!

   tree(TTree *tree=0);
   virtual ~tree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef tree_cxx
// tree::tree(TTree *tree) : fChain(0) 
// {
// // if parameter tree is not specified (or zero), connect the file
// // used to generate this class and read the Tree.
//    if (tree == 0) {
//       TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("flatFile_short_1000Ev.root");
//       if (!f || !f->IsOpen()) {
//          f = new TFile("flatFile_short_1000Ev.root");
//       }
//       TDirectory * dir = (TDirectory*)f->Get("flatFile_short_1000Ev.root:/ZmuonAnalyzer");
//       dir->GetObject("tree",tree);
// 
//    }
//    Init(tree);
// }
tree::tree(TTree *tree) : fChain(0)
{
//if parameter tree is not specified (or zero), connect the file
//used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = root_file;
      if (!f || !f->IsOpen()) {
         f = root_file;
      }
      TDirectory * dir = (TDirectory*)f->Get("ZmuonAnalyzer");
      dir->GetObject("tree",tree);
   }
   Init(tree);
}

tree::~tree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t tree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t tree::LoadTree(Long64_t entry)
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

void tree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   event_number = 0;
   run_number = 0;
   lumi_section = 0;
   bunch_crossing = 0;
   orbit_number = 0;
   event_number_of_event = 0;
   run_number_of_event = 0;
   lumi_section_of_event = 0;
   rho = 0;
   flagZplusY = 0;
   flagZOnly = 0;
   lepton1_pt = 0;
   lepton1_trigger_filters = 0;
   lepton1_eta = 0;
   lepton1_phi = 0;
   lepton1_charge = 0;
   lepton1_d0 = 0;
   lepton1_dxy = 0;
   lepton1_dz = 0;
   lepton1_iso03particle = 0;
   lepton1_iso04particle = 0;
   lepton1_iso03hadron = 0;
   lepton1_iso04hadron = 0;
   lepton1_iso03neutralHadron = 0;
   lepton1_iso03photon = 0;
   lepton1_iso03PU = 0;
   lepton1_impactParameterSignificance = 0;
   lepton1_isLooseMuon = 0;
   lepton1_isMediumMuon = 0;
   lepton1_isSoftMuon = 0;
   lepton1_isTightMuon = 0;
   lepton1_isPFMuon = 0;
   lepton1_isGlobalMuon = 0;
   lepton1_isTrackerMuon = 0;
   lepton1_fromPV = 0;
   lepton1_pvassq = 0;
   lepton2_pt = 0;
   lepton2_eta = 0;
   lepton2_phi = 0;
   lepton2_charge = 0;
   lepton2_d0 = 0;
   lepton2_dxy = 0;
   lepton2_dz = 0;
   lepton2_iso03particle = 0;
   lepton2_iso04particle = 0;
   lepton2_iso03hadron = 0;
   lepton2_iso04hadron = 0;
   lepton2_iso03neutralHadron = 0;
   lepton2_iso03photon = 0;
   lepton2_iso03PU = 0;
   lepton2_impactParameterSignificance = 0;
   lepton2_isLooseMuon = 0;
   lepton2_isSoftMuon = 0;
   lepton2_isMediumMuon = 0;
   lepton2_isTightMuon = 0;
   lepton2_isPFMuon = 0;
   lepton2_isGlobalMuon = 0;
   lepton2_isTrackerMuon = 0;
   lepton2_fromPV = 0;
   lepton2_pvassq = 0;
   lepton3_pt = 0;
   lepton3_eta = 0;
   lepton3_phi = 0;
   lepton3_charge = 0;
   lepton3_d0 = 0;
   lepton3_dxy = 0;
   lepton3_dz = 0;
   lepton3_iso03particle = 0;
   lepton3_iso04particle = 0;
   lepton3_iso03hadron = 0;
   lepton3_iso04hadron = 0;
   lepton3_iso03neutralHadron = 0;
   lepton3_iso03photon = 0;
   lepton3_iso03PU = 0;
   lepton3_impactParameterSignificance = 0;
   lepton3_isLooseMuon = 0;
   lepton3_isMediumMuon = 0;
   lepton3_isSoftMuon = 0;
   lepton3_isTightMuon = 0;
   lepton3_isPFMuon = 0;
   lepton3_isGlobalMuon = 0;
   lepton3_isTrackerMuon = 0;
   lepton3_fromPV = 0;
   lepton3_pvassq = 0;
   lepton4_pt = 0;
   lepton4_eta = 0;
   lepton4_phi = 0;
   lepton4_charge = 0;
   lepton4_d0 = 0;
   lepton4_dxy = 0;
   lepton4_dz = 0;
   lepton4_iso03particle = 0;
   lepton4_iso04particle = 0;
   lepton4_iso03hadron = 0;
   lepton4_iso04hadron = 0;
   lepton4_iso03neutralHadron = 0;
   lepton4_iso03photon = 0;
   lepton4_iso03PU = 0;
   lepton4_impactParameterSignificance = 0;
   lepton4_isLooseMuon = 0;
   lepton4_isMediumMuon = 0;
   lepton4_isSoftMuon = 0;
   lepton4_isTightMuon = 0;
   lepton4_isPFMuon = 0;
   lepton4_isGlobalMuon = 0;
   lepton4_isTrackerMuon = 0;
   lepton4_fromPV = 0;
   lepton4_pvassq = 0;
   dimuon1mass = 0;
   dimuon2mass = 0;
   dimuon1pt = 0;
   dimuon2pt = 0;
   dimuon1eta = 0;
   dimuon2eta = 0;
   dimuon1phi = 0;
   dimuon2phi = 0;
   dimuon1vtx = 0;
   dimuon2vtx = 0;
   dimuon1vtx_xpos = 0;
   dimuon2vtx_xpos = 0;
   dimuon1vtx_ypos = 0;
   dimuon2vtx_ypos = 0;
   dimuon1vtx_zpos = 0;
   dimuon2vtx_zpos = 0;
   dimuon1vtx_xposError = 0;
   dimuon2vtx_xposError = 0;
   dimuon1vtx_yposError = 0;
   dimuon2vtx_yposError = 0;
   dimuon1vtx_zposError = 0;
   dimuon2vtx_zposError = 0;
   dimuon1vtx_chi2 = 0;
   dimuon2vtx_chi2 = 0;
   dimuon1vtx_ndof = 0;
   dimuon2vtx_ndof = 0;
   dimuon1lxy = 0;
   dimuon2lxy = 0;
   dimuon1lxysig = 0;
   dimuon2lxysig = 0;
   dimuon1lxyctauPV = 0;
   dimuon2lxyctauPV = 0;
   sixmuonvtx = 0;
   triggerlist = 0;
   save_event_count = 0;
   numberOfVertices = 0;
   zOfVertices = 0;
   zOfVerticesError = 0;
   pair_12_34_56 = 0;
   pair_13_24_56 = 0;
   pair_14_23_56 = 0;
   pair_12_34_ZOnly = 0;
   pair_13_24_ZOnly = 0;
   pair_14_23_ZOnly = 0;
   PVx = 0;
   PVy = 0;
   PVz = 0;
   quadComesFromEvtWithThisManyMu = 0;
   inv4MuMass = 0;
   big4MuVtx = 0;
   big4MuEta = 0;
   big4MuPhi = 0;
   big4MuPt = 0;
   big4MuVtx_chi2 = 0;
   big4MuVtx_ndof = 0;
   big4MuVtx_xpos = 0;
   big4MuVtx_ypos = 0;
   big4MuVtx_zpos = 0;
   big4MuVtx_xposError = 0;
   big4MuVtx_yposError = 0;
   big4MuVtx_zposError = 0;
   numZplusYCandInEvent = 0;
   quadHasHowManyTrigMatches = 0;
   sum4LepCharges = 0;
   lepton1_validHits = 0;
   lepton2_validHits = 0;
   lepton3_validHits = 0;
   lepton4_validHits = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("event_number", &event_number, &b_event_number);
   fChain->SetBranchAddress("run_number", &run_number, &b_run_number);
   fChain->SetBranchAddress("lumi_section", &lumi_section, &b_lumi_section);
   fChain->SetBranchAddress("bunch_crossing", &bunch_crossing, &b_bunch_crossing);
   fChain->SetBranchAddress("orbit_number", &orbit_number, &b_orbit_number);
   fChain->SetBranchAddress("event_number_of_event", &event_number_of_event, &b_event_number_of_event);
   fChain->SetBranchAddress("run_number_of_event", &run_number_of_event, &b_run_number_of_event);
   fChain->SetBranchAddress("lumi_section_of_event", &lumi_section_of_event, &b_lumi_section_of_event);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("flagZplusY", &flagZplusY, &b_flagZplusY);
   fChain->SetBranchAddress("flagZOnly", &flagZOnly, &b_flagZOnly);
   fChain->SetBranchAddress("lepton1_pt", &lepton1_pt, &b_lepton1_pt);
   fChain->SetBranchAddress("lepton1_trigger_filters", &lepton1_trigger_filters, &b_lepton1_trigger_filters);
   fChain->SetBranchAddress("lepton1_eta", &lepton1_eta, &b_lepton1_eta);
   fChain->SetBranchAddress("lepton1_phi", &lepton1_phi, &b_lepton1_phi);
   fChain->SetBranchAddress("lepton1_charge", &lepton1_charge, &b_lepton1_charge);
   fChain->SetBranchAddress("lepton1_d0", &lepton1_d0, &b_lepton1_d0);
   fChain->SetBranchAddress("lepton1_dxy", &lepton1_dxy, &b_lepton1_dxy);
   fChain->SetBranchAddress("lepton1_dz", &lepton1_dz, &b_lepton1_dz);
   fChain->SetBranchAddress("lepton1_iso03particle", &lepton1_iso03particle, &b_lepton1_iso03particle);
   fChain->SetBranchAddress("lepton1_iso04particle", &lepton1_iso04particle, &b_lepton1_iso04particle);
   fChain->SetBranchAddress("lepton1_iso03hadron", &lepton1_iso03hadron, &b_lepton1_iso03hadron);
   fChain->SetBranchAddress("lepton1_iso04hadron", &lepton1_iso04hadron, &b_lepton1_iso04hadron);
   fChain->SetBranchAddress("lepton1_iso03neutralHadron", &lepton1_iso03neutralHadron, &b_lepton1_iso03neutralHadron);
   fChain->SetBranchAddress("lepton1_iso03photon", &lepton1_iso03photon, &b_lepton1_iso03photon);
   fChain->SetBranchAddress("lepton1_iso03PU", &lepton1_iso03PU, &b_lepton1_iso03PU);
   fChain->SetBranchAddress("lepton1_impactParameterSignificance", &lepton1_impactParameterSignificance, &b_lepton1_impactParameterSignificance);
   fChain->SetBranchAddress("lepton1_isLooseMuon", &lepton1_isLooseMuon, &b_lepton1_isLooseMuon);
   fChain->SetBranchAddress("lepton1_isMediumMuon", &lepton1_isMediumMuon, &b_lepton1_isMediumMuon);
   fChain->SetBranchAddress("lepton1_isSoftMuon", &lepton1_isSoftMuon, &b_lepton1_isSoftMuon);
   fChain->SetBranchAddress("lepton1_isTightMuon", &lepton1_isTightMuon, &b_lepton1_isTightMuon);
   fChain->SetBranchAddress("lepton1_isPFMuon", &lepton1_isPFMuon, &b_lepton1_isPFMuon);
   fChain->SetBranchAddress("lepton1_isGlobalMuon", &lepton1_isGlobalMuon, &b_lepton1_isGlobalMuon);
   fChain->SetBranchAddress("lepton1_isTrackerMuon", &lepton1_isTrackerMuon, &b_lepton1_isTrackerMuon);
   fChain->SetBranchAddress("lepton1_fromPV", &lepton1_fromPV, &b_lepton1_fromPV);
   fChain->SetBranchAddress("lepton1_pvassq", &lepton1_pvassq, &b_lepton1_pvassq);
   fChain->SetBranchAddress("lepton2_pt", &lepton2_pt, &b_lepton2_pt);
   fChain->SetBranchAddress("lepton2_eta", &lepton2_eta, &b_lepton2_eta);
   fChain->SetBranchAddress("lepton2_phi", &lepton2_phi, &b_lepton2_phi);
   fChain->SetBranchAddress("lepton2_charge", &lepton2_charge, &b_lepton2_charge);
   fChain->SetBranchAddress("lepton2_d0", &lepton2_d0, &b_lepton2_d0);
   fChain->SetBranchAddress("lepton2_dxy", &lepton2_dxy, &b_lepton2_dxy);
   fChain->SetBranchAddress("lepton2_dz", &lepton2_dz, &b_lepton2_dz);
   fChain->SetBranchAddress("lepton2_iso03particle", &lepton2_iso03particle, &b_lepton2_iso03particle);
   fChain->SetBranchAddress("lepton2_iso04particle", &lepton2_iso04particle, &b_lepton2_iso04particle);
   fChain->SetBranchAddress("lepton2_iso03hadron", &lepton2_iso03hadron, &b_lepton2_iso03hadron);
   fChain->SetBranchAddress("lepton2_iso04hadron", &lepton2_iso04hadron, &b_lepton2_iso04hadron);
   fChain->SetBranchAddress("lepton2_iso03neutralHadron", &lepton2_iso03neutralHadron, &b_lepton2_iso03neutralHadron);
   fChain->SetBranchAddress("lepton2_iso03photon", &lepton2_iso03photon, &b_lepton2_iso03photon);
   fChain->SetBranchAddress("lepton2_iso03PU", &lepton2_iso03PU, &b_lepton2_iso03PU);
   fChain->SetBranchAddress("lepton2_impactParameterSignificance", &lepton2_impactParameterSignificance, &b_lepton2_impactParameterSignificance);
   fChain->SetBranchAddress("lepton2_isLooseMuon", &lepton2_isLooseMuon, &b_lepton2_isLooseMuon);
   fChain->SetBranchAddress("lepton2_isSoftMuon", &lepton2_isSoftMuon, &b_lepton2_isSoftMuon);
   fChain->SetBranchAddress("lepton2_isMediumMuon", &lepton2_isMediumMuon, &b_lepton2_isMediumMuon);
   fChain->SetBranchAddress("lepton2_isTightMuon", &lepton2_isTightMuon, &b_lepton2_isTightMuon);
   fChain->SetBranchAddress("lepton2_isPFMuon", &lepton2_isPFMuon, &b_lepton2_isPFMuon);
   fChain->SetBranchAddress("lepton2_isGlobalMuon", &lepton2_isGlobalMuon, &b_lepton2_isGlobalMuon);
   fChain->SetBranchAddress("lepton2_isTrackerMuon", &lepton2_isTrackerMuon, &b_lepton2_isTrackerMuon);
   fChain->SetBranchAddress("lepton2_fromPV", &lepton2_fromPV, &b_lepton2_fromPV);
   fChain->SetBranchAddress("lepton2_pvassq", &lepton2_pvassq, &b_lepton2_pvassq);
   fChain->SetBranchAddress("lepton3_pt", &lepton3_pt, &b_lepton3_pt);
   fChain->SetBranchAddress("lepton3_eta", &lepton3_eta, &b_lepton3_eta);
   fChain->SetBranchAddress("lepton3_phi", &lepton3_phi, &b_lepton3_phi);
   fChain->SetBranchAddress("lepton3_charge", &lepton3_charge, &b_lepton3_charge);
   fChain->SetBranchAddress("lepton3_d0", &lepton3_d0, &b_lepton3_d0);
   fChain->SetBranchAddress("lepton3_dxy", &lepton3_dxy, &b_lepton3_dxy);
   fChain->SetBranchAddress("lepton3_dz", &lepton3_dz, &b_lepton3_dz);
   fChain->SetBranchAddress("lepton3_iso03particle", &lepton3_iso03particle, &b_lepton3_iso03particle);
   fChain->SetBranchAddress("lepton3_iso04particle", &lepton3_iso04particle, &b_lepton3_iso04particle);
   fChain->SetBranchAddress("lepton3_iso03hadron", &lepton3_iso03hadron, &b_lepton3_iso03hadron);
   fChain->SetBranchAddress("lepton3_iso04hadron", &lepton3_iso04hadron, &b_lepton3_iso04hadron);
   fChain->SetBranchAddress("lepton3_iso03neutralHadron", &lepton3_iso03neutralHadron, &b_lepton3_iso03neutralHadron);
   fChain->SetBranchAddress("lepton3_iso03photon", &lepton3_iso03photon, &b_lepton3_iso03photon);
   fChain->SetBranchAddress("lepton3_iso03PU", &lepton3_iso03PU, &b_lepton3_iso03PU);
   fChain->SetBranchAddress("lepton3_impactParameterSignificance", &lepton3_impactParameterSignificance, &b_lepton3_impactParameterSignificance);
   fChain->SetBranchAddress("lepton3_isLooseMuon", &lepton3_isLooseMuon, &b_lepton3_isLooseMuon);
   fChain->SetBranchAddress("lepton3_isMediumMuon", &lepton3_isMediumMuon, &b_lepton3_isMediumMuon);
   fChain->SetBranchAddress("lepton3_isSoftMuon", &lepton3_isSoftMuon, &b_lepton3_isSoftMuon);
   fChain->SetBranchAddress("lepton3_isTightMuon", &lepton3_isTightMuon, &b_lepton3_isTightMuon);
   fChain->SetBranchAddress("lepton3_isPFMuon", &lepton3_isPFMuon, &b_lepton3_isPFMuon);
   fChain->SetBranchAddress("lepton3_isGlobalMuon", &lepton3_isGlobalMuon, &b_lepton3_isGlobalMuon);
   fChain->SetBranchAddress("lepton3_isTrackerMuon", &lepton3_isTrackerMuon, &b_lepton3_isTrackerMuon);
   fChain->SetBranchAddress("lepton3_fromPV", &lepton3_fromPV, &b_lepton3_fromPV);
   fChain->SetBranchAddress("lepton3_pvassq", &lepton3_pvassq, &b_lepton3_pvassq);
   fChain->SetBranchAddress("lepton4_pt", &lepton4_pt, &b_lepton4_pt);
   fChain->SetBranchAddress("lepton4_eta", &lepton4_eta, &b_lepton4_eta);
   fChain->SetBranchAddress("lepton4_phi", &lepton4_phi, &b_lepton4_phi);
   fChain->SetBranchAddress("lepton4_charge", &lepton4_charge, &b_lepton4_charge);
   fChain->SetBranchAddress("lepton4_d0", &lepton4_d0, &b_lepton4_d0);
   fChain->SetBranchAddress("lepton4_dxy", &lepton4_dxy, &b_lepton4_dxy);
   fChain->SetBranchAddress("lepton4_dz", &lepton4_dz, &b_lepton4_dz);
   fChain->SetBranchAddress("lepton4_iso03particle", &lepton4_iso03particle, &b_lepton4_iso03particle);
   fChain->SetBranchAddress("lepton4_iso04particle", &lepton4_iso04particle, &b_lepton4_iso04particle);
   fChain->SetBranchAddress("lepton4_iso03hadron", &lepton4_iso03hadron, &b_lepton4_iso03hadron);
   fChain->SetBranchAddress("lepton4_iso04hadron", &lepton4_iso04hadron, &b_lepton4_iso04hadron);
   fChain->SetBranchAddress("lepton4_iso03neutralHadron", &lepton4_iso03neutralHadron, &b_lepton4_iso03neutralHadron);
   fChain->SetBranchAddress("lepton4_iso03photon", &lepton4_iso03photon, &b_lepton4_iso03photon);
   fChain->SetBranchAddress("lepton4_iso03PU", &lepton4_iso03PU, &b_lepton4_iso03PU);
   fChain->SetBranchAddress("lepton4_impactParameterSignificance", &lepton4_impactParameterSignificance, &b_lepton4_impactParameterSignificance);
   fChain->SetBranchAddress("lepton4_isLooseMuon", &lepton4_isLooseMuon, &b_lepton4_isLooseMuon);
   fChain->SetBranchAddress("lepton4_isMediumMuon", &lepton4_isMediumMuon, &b_lepton4_isMediumMuon);
   fChain->SetBranchAddress("lepton4_isSoftMuon", &lepton4_isSoftMuon, &b_lepton4_isSoftMuon);
   fChain->SetBranchAddress("lepton4_isTightMuon", &lepton4_isTightMuon, &b_lepton4_isTightMuon);
   fChain->SetBranchAddress("lepton4_isPFMuon", &lepton4_isPFMuon, &b_lepton4_isPFMuon);
   fChain->SetBranchAddress("lepton4_isGlobalMuon", &lepton4_isGlobalMuon, &b_lepton4_isGlobalMuon);
   fChain->SetBranchAddress("lepton4_isTrackerMuon", &lepton4_isTrackerMuon, &b_lepton4_isTrackerMuon);
   fChain->SetBranchAddress("lepton4_fromPV", &lepton4_fromPV, &b_lepton4_fromPV);
   fChain->SetBranchAddress("lepton4_pvassq", &lepton4_pvassq, &b_lepton4_pvassq);
   fChain->SetBranchAddress("dimuon1mass", &dimuon1mass, &b_dimuon1mass);
   fChain->SetBranchAddress("dimuon2mass", &dimuon2mass, &b_dimuon2mass);
   fChain->SetBranchAddress("dimuon1pt", &dimuon1pt, &b_dimuon1pt);
   fChain->SetBranchAddress("dimuon2pt", &dimuon2pt, &b_dimuon2pt);
   fChain->SetBranchAddress("dimuon1eta", &dimuon1eta, &b_dimuon1eta);
   fChain->SetBranchAddress("dimuon2eta", &dimuon2eta, &b_dimuon2eta);
   fChain->SetBranchAddress("dimuon1phi", &dimuon1phi, &b_dimuon1phi);
   fChain->SetBranchAddress("dimuon2phi", &dimuon2phi, &b_dimuon2phi);
   fChain->SetBranchAddress("dimuon1vtx", &dimuon1vtx, &b_dimuon1vtx);
   fChain->SetBranchAddress("dimuon2vtx", &dimuon2vtx, &b_dimuon2vtx);
   fChain->SetBranchAddress("dimuon1vtx_xpos", &dimuon1vtx_xpos, &b_dimuon1vtx_xpos);
   fChain->SetBranchAddress("dimuon2vtx_xpos", &dimuon2vtx_xpos, &b_dimuon2vtx_xpos);
   fChain->SetBranchAddress("dimuon1vtx_ypos", &dimuon1vtx_ypos, &b_dimuon1vtx_ypos);
   fChain->SetBranchAddress("dimuon2vtx_ypos", &dimuon2vtx_ypos, &b_dimuon2vtx_ypos);
   fChain->SetBranchAddress("dimuon1vtx_zpos", &dimuon1vtx_zpos, &b_dimuon1vtx_zpos);
   fChain->SetBranchAddress("dimuon2vtx_zpos", &dimuon2vtx_zpos, &b_dimuon2vtx_zpos);
   fChain->SetBranchAddress("dimuon1vtx_xposError", &dimuon1vtx_xposError, &b_dimuon1vtx_xposError);
   fChain->SetBranchAddress("dimuon2vtx_xposError", &dimuon2vtx_xposError, &b_dimuon2vtx_xposError);
   fChain->SetBranchAddress("dimuon1vtx_yposError", &dimuon1vtx_yposError, &b_dimuon1vtx_yposError);
   fChain->SetBranchAddress("dimuon2vtx_yposError", &dimuon2vtx_yposError, &b_dimuon2vtx_yposError);
   fChain->SetBranchAddress("dimuon1vtx_zposError", &dimuon1vtx_zposError, &b_dimuon1vtx_zposError);
   fChain->SetBranchAddress("dimuon2vtx_zposError", &dimuon2vtx_zposError, &b_dimuon2vtx_zposError);
   fChain->SetBranchAddress("dimuon1vtx_chi2", &dimuon1vtx_chi2, &b_dimuon1vtx_chi2);
   fChain->SetBranchAddress("dimuon2vtx_chi2", &dimuon2vtx_chi2, &b_dimuon2vtx_chi2);
   fChain->SetBranchAddress("dimuon1vtx_ndof", &dimuon1vtx_ndof, &b_dimuon1vtx_ndof);
   fChain->SetBranchAddress("dimuon2vtx_ndof", &dimuon2vtx_ndof, &b_dimuon2vtx_ndof);
   fChain->SetBranchAddress("dimuon1lxy", &dimuon1lxy, &b_dimuon1lxy);
   fChain->SetBranchAddress("dimuon2lxy", &dimuon2lxy, &b_dimuon2lxy);
   fChain->SetBranchAddress("dimuon1lxysig", &dimuon1lxysig, &b_dimuon1lxysig);
   fChain->SetBranchAddress("dimuon2lxysig", &dimuon2lxysig, &b_dimuon2lxysig);
   fChain->SetBranchAddress("dimuon1lxyctauPV", &dimuon1lxyctauPV, &b_dimuon1lxyctauPV);
   fChain->SetBranchAddress("dimuon2lxyctauPV", &dimuon2lxyctauPV, &b_dimuon2lxyctauPV);
   fChain->SetBranchAddress("sixmuonvtx", &sixmuonvtx, &b_sixmuonvtx);
   fChain->SetBranchAddress("triggerlist", &triggerlist, &b_triggerlist);
   fChain->SetBranchAddress("save_event_count", &save_event_count, &b_save_event_count);
   fChain->SetBranchAddress("numberOfVertices", &numberOfVertices, &b_numberOfVertices);
   fChain->SetBranchAddress("zOfVertices", &zOfVertices, &b_zOfVertices);
   fChain->SetBranchAddress("zOfVerticesError", &zOfVerticesError, &b_zOfVerticesError);
   fChain->SetBranchAddress("pair_12_34_56", &pair_12_34_56, &b_pair_12_34_56);
   fChain->SetBranchAddress("pair_13_24_56", &pair_13_24_56, &b_pair_13_24_56);
   fChain->SetBranchAddress("pair_14_23_56", &pair_14_23_56, &b_pair_14_23_56);
   fChain->SetBranchAddress("pair_12_34_ZOnly", &pair_12_34_ZOnly, &b_pair_12_34_ZOnly);
   fChain->SetBranchAddress("pair_13_24_ZOnly", &pair_13_24_ZOnly, &b_pair_13_24_ZOnly);
   fChain->SetBranchAddress("pair_14_23_ZOnly", &pair_14_23_ZOnly, &b_pair_14_23_ZOnly);
   fChain->SetBranchAddress("PVx", &PVx, &b_PVx);
   fChain->SetBranchAddress("PVy", &PVy, &b_PVy);
   fChain->SetBranchAddress("PVz", &PVz, &b_PVz);
   fChain->SetBranchAddress("quadComesFromEvtWithThisManyMu", &quadComesFromEvtWithThisManyMu, &b_quadComesFromEvtWithThisManyMu);
   fChain->SetBranchAddress("inv4MuMass", &inv4MuMass, &b_inv4MuMass);
   fChain->SetBranchAddress("big4MuVtx", &big4MuVtx, &b_big4MuVtx);
   fChain->SetBranchAddress("big4MuEta", &big4MuEta, &b_big4MuEta);
   fChain->SetBranchAddress("big4MuPhi", &big4MuPhi, &b_big4MuPhi);
   fChain->SetBranchAddress("big4MuPt", &big4MuPt, &b_big4MuPt);
   fChain->SetBranchAddress("big4MuVtx_chi2", &big4MuVtx_chi2, &b_big4MuVtx_chi2);
   fChain->SetBranchAddress("big4MuVtx_ndof", &big4MuVtx_ndof, &b_big4MuVtx_ndof);
   fChain->SetBranchAddress("big4MuVtx_xpos", &big4MuVtx_xpos, &b_big4MuVtx_xpos);
   fChain->SetBranchAddress("big4MuVtx_ypos", &big4MuVtx_ypos, &b_big4MuVtx_ypos);
   fChain->SetBranchAddress("big4MuVtx_zpos", &big4MuVtx_zpos, &b_big4MuVtx_zpos);
   fChain->SetBranchAddress("big4MuVtx_xposError", &big4MuVtx_xposError, &b_big4MuVtx_xposError);
   fChain->SetBranchAddress("big4MuVtx_yposError", &big4MuVtx_yposError, &b_big4MuVtx_yposError);
   fChain->SetBranchAddress("big4MuVtx_zposError", &big4MuVtx_zposError, &b_big4MuVtx_zposError);
   fChain->SetBranchAddress("numZplusYCandInEvent", &numZplusYCandInEvent, &b_numZplusYCandInEvent);
   fChain->SetBranchAddress("quadHasHowManyTrigMatches", &quadHasHowManyTrigMatches, &b_quadHasHowManyTrigMatches);
   fChain->SetBranchAddress("sum4LepCharges", &sum4LepCharges, &b_sum4LepCharges);
   fChain->SetBranchAddress("lepton1_validHits", &lepton1_validHits, &b_lepton1_validHits);
   fChain->SetBranchAddress("lepton2_validHits", &lepton2_validHits, &b_lepton2_validHits);
   fChain->SetBranchAddress("lepton3_validHits", &lepton3_validHits, &b_lepton3_validHits);
   fChain->SetBranchAddress("lepton4_validHits", &lepton4_validHits, &b_lepton4_validHits);
   Notify();
}

Bool_t tree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void tree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t tree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef tree_cxx
