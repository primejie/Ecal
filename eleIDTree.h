//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Feb 21 07:25:51 2024 by ROOT version 6.10/09
// from TTree eleIDTree/eleIDTree
// found on file: /eos/cms/store/group/dpg_ecal/alca_ecalcalib/ecalelf/ntuples/wangchu/2023IC/13.6TeV/133X_dataRun3_Prompt_v2_IC_median/EGamma0_Run2023D-EcalUncalZElectron-PromptReco-v1/allRange/eleIDTree_-1-0-1-3cf6.root
//////////////////////////////////////////////////////////

#ifndef eleIDTree_h
#define eleIDTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class eleIDTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          runNumber;
   UShort_t        lumiBlock;
   ULong64_t       eventNumber;
   UInt_t          eventTime;
   Float_t         dr03TkSumPt[3];
   Float_t         dr03EcalRecHitSumEt[3];
   Float_t         dr03HcalTowerSumEt[3];
   Float_t         sigmaIEtaIEtaSCEle[3];
   Float_t         E1x5[3];
   Float_t         E2x5Max[3];
   Float_t         E1x3[3];
   Float_t         E2x2[3];
   Float_t         S4[3];
   Float_t         etaWidth[3];
   Float_t         phiWidth[3];
   Float_t         deltaEtaSuperClusterTrackAtVtx[3];
   Float_t         deltaPhiSuperClusterTrackAtVtx[3];
   Float_t         hOverE[3];
   Float_t         pfMVA[3];
   UChar_t         hasMatchedConversion[3];
   Int_t           maxNumberOfExpectedMissingHits[3];

   // List of branches
   TBranch        *b_runNumber;   //!
   TBranch        *b_lumiBlock;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_eventTime;   //!
   TBranch        *b_dr03TkSumPt;   //!
   TBranch        *b_dr03EcalRecHitSumEt;   //!
   TBranch        *b_dr03HcalTowerSumEt;   //!
   TBranch        *b_sigmaIEtaIEtaSCEle;   //!
   TBranch        *b_E1x5;   //!
   TBranch        *b_E2x5Max;   //!
   TBranch        *b_E1x3;   //!
   TBranch        *b_E2x2;   //!
   TBranch        *b_S4;   //!
   TBranch        *b_etaWidth;   //!
   TBranch        *b_phiWidth;   //!
   TBranch        *b_deltaEtaSuperClusterTrackAtVtx;   //!
   TBranch        *b_deltaPhiSuperClusterTrackAtVtx;   //!
   TBranch        *b_hOverE;   //!
   TBranch        *b_pfMVA;   //!
   TBranch        *b_hasMatchedConversion;   //!
   TBranch        *b_maxNumberOfExpectedMissingHits;   //!

   eleIDTree(TTree *tree=0);
   virtual ~eleIDTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef eleIDTree_cxx
eleIDTree::eleIDTree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/cms/store/group/dpg_ecal/alca_ecalcalib/ecalelf/ntuples/wangchu/2023IC/13.6TeV/133X_dataRun3_Prompt_v2_IC_median/EGamma0_Run2023D-EcalUncalZElectron-PromptReco-v1/allRange/eleIDTree_-1-0-1-3cf6.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/eos/cms/store/group/dpg_ecal/alca_ecalcalib/ecalelf/ntuples/wangchu/2023IC/13.6TeV/133X_dataRun3_Prompt_v2_IC_median/EGamma0_Run2023D-EcalUncalZElectron-PromptReco-v1/allRange/eleIDTree_-1-0-1-3cf6.root");
      }
      f->GetObject("eleIDTree",tree);

   }
   Init(tree);
}

eleIDTree::~eleIDTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t eleIDTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t eleIDTree::LoadTree(Long64_t entry)
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

void eleIDTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("lumiBlock", &lumiBlock, &b_lumiBlock);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("eventTime", &eventTime, &b_eventTime);
   fChain->SetBranchAddress("dr03TkSumPt", dr03TkSumPt, &b_dr03TkSumPt);
   fChain->SetBranchAddress("dr03EcalRecHitSumEt", dr03EcalRecHitSumEt, &b_dr03EcalRecHitSumEt);
   fChain->SetBranchAddress("dr03HcalTowerSumEt", dr03HcalTowerSumEt, &b_dr03HcalTowerSumEt);
   fChain->SetBranchAddress("sigmaIEtaIEtaSCEle", sigmaIEtaIEtaSCEle, &b_sigmaIEtaIEtaSCEle);
   fChain->SetBranchAddress("E1x5", E1x5, &b_E1x5);
   fChain->SetBranchAddress("E2x5Max", E2x5Max, &b_E2x5Max);
   fChain->SetBranchAddress("E1x3", E1x3, &b_E1x3);
   fChain->SetBranchAddress("E2x2", E2x2, &b_E2x2);
   fChain->SetBranchAddress("S4", S4, &b_S4);
   fChain->SetBranchAddress("etaWidth", etaWidth, &b_etaWidth);
   fChain->SetBranchAddress("phiWidth", phiWidth, &b_phiWidth);
   fChain->SetBranchAddress("deltaEtaSuperClusterTrackAtVtx", deltaEtaSuperClusterTrackAtVtx, &b_deltaEtaSuperClusterTrackAtVtx);
   fChain->SetBranchAddress("deltaPhiSuperClusterTrackAtVtx", deltaPhiSuperClusterTrackAtVtx, &b_deltaPhiSuperClusterTrackAtVtx);
   fChain->SetBranchAddress("hOverE", hOverE, &b_hOverE);
   fChain->SetBranchAddress("pfMVA", pfMVA, &b_pfMVA);
   fChain->SetBranchAddress("hasMatchedConversion", hasMatchedConversion, &b_hasMatchedConversion);
   fChain->SetBranchAddress("maxNumberOfExpectedMissingHits", maxNumberOfExpectedMissingHits, &b_maxNumberOfExpectedMissingHits);
   Notify();
}

Bool_t eleIDTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void eleIDTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t eleIDTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef eleIDTree_cxx
