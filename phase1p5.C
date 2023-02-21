//How to run
// root -b -l -q 'phase1p5.C++("<nameOfFile>.root")'

#include <vector>
#include <iostream>
#include <string>
using namespace std;
#include "TH1.h"
#include "TH2.h"
#include "TFile.h"
#include "TLorentzVector.h"

#include <math.h>
#include <TMath.h>

TFile *root_file;
#include "tree.C"
#include "treeMC.C"

tree *TREE;
treeMC *TREEMC;


void phase1p5 (string file){

  root_file = TFile::Open(file.c_str(),"READ");
  TREE   = new tree((TTree*)root_file->Get("tree"));
  TREEMC = new treeMC((TTree*)root_file->Get("treemc"));
   
//   double dummyBranch; //Must declare it here, thanks to Taeun for clearing this up for me :-)
   bool denominator_ZplusY;
   
   TFile *file2 = TFile::Open("myNewFile_test.root", "RECREATE");
   TTree* tree2 = TREE->fChain->CloneTree(0); //Clone this with the 0 so you get a skeleton of the tree with all the right branches but no entries
   //later you will call Fill() on this tree and because of the magic of CloneTree, it will restore the information that was in each branch of the original tree
   //this is the tree that you are going to add a branch to, hence the reason for filling it in the loop

//   std::cout << "tree2:  " << std::endl;
//   tree2->Print();

   TTree* treemc2 = TREEMC->fChain->CloneTree(); //Clone this without the zero because you want a clone of the treemc and all its entries since you aren't going
   //to touch it within the loop, you're not adding any branchees to this treemc, you want it back exactly as it was
   
//   tree2->Branch("dummyBranch", &dummyBranch, "dummyBranch/D");
   tree2->Branch("denominator_ZplusY", &denominator_ZplusY, "denominator_ZplusY/O"); //O (the letter, not the number 0) for booleans, see: https://root.cern.ch/doc/master/classTTree.html#addcolumnoffundamentaltypes (thanks to Kevin Pedro for pointing me to this link)
   
  //Announce what root_file is
  std::cout << "////////////////////////////////////////" << std::endl;
  std::cout << "Processing file:  " << file.c_str() << std::endl;
  std::cout << "////////////////////////////////////////" << std::endl;
  
  int my_counter = 0;
  int entries = (TREE->fChain)->GetEntries();
  int my_entriesMC = (TREEMC->fChain)->GetEntries();
  std::cout << "entries:  " << entries << std::endl;
  std::cout << "entriesMC:  " << my_entriesMC << std::endl;
  
  
  for(int iEntry=0; iEntry<entries; iEntry++) {
    (TREE->fChain)->GetEntry(iEntry);
    
    int entriesMC = (TREEMC->fChain)->GetEntries();
    for(int jEntry=0; jEntry<entriesMC; jEntry++) {
        (TREEMC->fChain)->GetEntry(jEntry);
         // std::cout << "iEntry is: " << iEntry << std::endl;
         // std::cout << "jEntry is: " << jEntry << std::endl;
         // std::cout << TREE->event_number_of_event->at(0) << std::endl;
          if (TREE->run_number_of_event->at(0) == TREEMC->mc_run_number->at(0) && TREE->event_number_of_event->at(0) == TREEMC->mc_event_number->at(0) && TREE->lumi_section_of_event->at(0) == TREEMC->mc_lumi_section->at(0)){
            //std::cout << "SUCCESS" << std::endl;
            //std::cout << "########################" << std::endl;
            my_counter++;
           // dummyBranch =  -99;
            denominator_ZplusY = TREEMC->denominator_ZplusY->at(0);
            tree2->Fill();
            break;
          }
          
          
    }
                
  
  }
  
//  TFile *file2 = TFile::Open("myNewFile.root", "RECREATE"); //Do NOT put this here, you need to put it up above, before you declare the tree that is associated with it
//Order is declare file, then declare tree //If you do it wrong, ROOT actually throws a reasonably useful error message that allowed me to deduce that it needed to be
//file, then tree
  file2->cd();
  tree2->Write();
  treemc2->Write();
  file2->Close();
  
  std::cout << "my_counter:  " << my_counter << std::endl;
}