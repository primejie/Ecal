//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Mar 11 10:16:09 2024 by ROOT version 6.24/08
// from TTree selected/selected
// found on file: /eos/cms/store/group/dpg_ecal/alca_ecalcalib/automation_repro/rereco202223_repro_v3/ecalelf/zskim/366727/ntuple_0.root
//////////////////////////////////////////////////////////

#ifndef selected_h
#define selected_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class selected {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          runNumber;
   UShort_t        lumiBlock;
   ULong64_t       eventNumber;
   UInt_t          eventTime;
   UShort_t        nBX;
   Char_t          isTrain;
   Float_t         mcGenWeight;
   Char_t          HLTfire;
   Float_t         rho;
   UChar_t         nPV;
   UChar_t         nPU;
   Float_t         vtxX;
   Float_t         vtxY;
   Float_t         vtxZ;
   UInt_t          eleID[3];
   Short_t         chargeEle[3];
   UChar_t         recoFlagsEle[3];
   Float_t         etaEle[3];
   Float_t         phiEle[3];
   Float_t         fbremEle[3];
   Float_t         R9Ele[3];
   Float_t         gsfTrackLengthFromVtxP[3];
   Float_t         gsfTrackLengthFromTangents[3];
   Float_t         etaSCEle[3];
   Float_t         phiSCEle[3];
   Int_t           nHitsSCEle[3];
   Float_t         avgLCSC[3];
   Float_t         rawEnergySCEle[3];
   Float_t         mustEnergySCEle[3];
   Float_t         energy_ECAL_ele[3];
   Float_t         energy_ECAL_pho[3];
   Float_t         energyUncertainty_ECAL_ele[3];
   Float_t         energyUncertainty_ECAL_pho[3];
   Float_t         energy_5x5SC[3];
   Float_t         pModeGsfEle[3];
   Float_t         pAtVtxGsfEle[3];
   Float_t         pNormalizedChi2Ele[3];
   Float_t         trackMomentumErrorEle[3];
   Short_t         xSeedSC[3];
   Short_t         ySeedSC[3];
   Int_t           eeRingNoSeedSC[3];
   UChar_t         gainSeedSC[3];
   Float_t         energySeedSC[3];
   Float_t         energySecondToSeedSC[3];
   Float_t         amplitudeSeedSC[3];
   Float_t         amplitudeSecondToSeedSC[3];
   Float_t         timeSeedSC[3];
   Float_t         timeSecondToSeedSC[3];
   Float_t         icSeedSC[3];
   Float_t         laserSeedSC[3];
   Float_t         alphaSeedSC[3];
   Float_t         pedestalSeedSC[3];
   Float_t         noiseSeedSC[3];
   Float_t         esEnergySCEle[3];
   Float_t         esEnergyPlane2SCEle[3];
   Float_t         esEnergyPlane1SCEle[3];
   Float_t         rawESEnergyPlane2SCEle[3];
   Float_t         rawESEnergyPlane1SCEle[3];
   Float_t         etaMCEle[3];
   Float_t         phiMCEle[3];
   Float_t         energyMCEle[3];
   Float_t         invMass_MC;
   Bool_t          ZEvent;
   Float_t         invMass;
   Float_t         invMass_ECAL_ele;
   Float_t         invMass_ECAL_pho;
   Float_t         invMass_5x5SC;
   Float_t         invMass_rawSC;
   Float_t         invMass_rawSC_esSC;
   Float_t         invMass_highEta;
   Float_t         ele1E;
   Float_t         ele2E;
   Float_t         ele1ecalE;
   Float_t         ele2ecalE;
   Float_t         angleEle12;

   // List of branches
   TBranch        *b_runNumber;   //!
   TBranch        *b_lumiBlock;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_eventTime;   //!
   TBranch        *b_nBX;   //!
   TBranch        *b_isTrain;   //!
   TBranch        *b_mcGenWeight;   //!
   TBranch        *b_HLTfire;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_nPU;   //!
   TBranch        *b_vtxX;   //!
   TBranch        *b_vtxY;   //!
   TBranch        *b_vtxZ;   //!
   TBranch        *b_eleID;   //!
   TBranch        *b_chargeEle;   //!
   TBranch        *b_recoFlagsEle;   //!
   TBranch        *b_etaEle;   //!
   TBranch        *b_phiEle;   //!
   TBranch        *b_fbremEle;   //!
   TBranch        *b_R9Ele;   //!
   TBranch        *b_gsfTrackLengthFromVtxP;   //!
   TBranch        *b_gsfTrackLengthFromTangents;   //!
   TBranch        *b_etaSCEle;   //!
   TBranch        *b_phiSCEle;   //!
   TBranch        *b_nHitsSCEle;   //!
   TBranch        *b_avgLCSC;   //!
   TBranch        *b_rawEnergySCEle;   //!
   TBranch        *b_mustEnergySCEle;   //!
   TBranch        *b_energy_ECAL_ele;   //!
   TBranch        *b_energy_ECAL_pho;   //!
   TBranch        *b_energyUncertainty_ECAL_ele;   //!
   TBranch        *b_energyUncertainty_ECAL_pho;   //!
   TBranch        *b_energy_5x5SC;   //!
   TBranch        *b_pModeGsfEle;   //!
   TBranch        *b_pAtVtxGsfEle;   //!
   TBranch        *b_pNormalizedChi2Ele;   //!
   TBranch        *b_trackMomentumErrorEle;   //!
   TBranch        *b_xSeedSC;   //!
   TBranch        *b_ySeedSC;   //!
   TBranch        *b_eeRingNoSeedSC;   //!
   TBranch        *b_gainSeedSC;   //!
   TBranch        *b_energySeedSC;   //!
   TBranch        *b_energySecondToSeedSC;   //!
   TBranch        *b_amplitudeSeedSC;   //!
   TBranch        *b_amplitudeSecondToSeedSC;   //!
   TBranch        *b_timeSeedSC;   //!
   TBranch        *b_timeSecondToSeedSC;   //!
   TBranch        *b_icSeedSC;   //!
   TBranch        *b_laserSeedSC;   //!
   TBranch        *b_alphaSeedSC;   //!
   TBranch        *b_pedestalSeedSC;   //!
   TBranch        *b_noiseSeedSC;   //!
   TBranch        *b_esEnergySCEle;   //!
   TBranch        *b_esEnergyPlane2SCEle;   //!
   TBranch        *b_esEnergyPlane1SCEle;   //!
   TBranch        *b_rawESEnergyPlane2SCEle;   //!
   TBranch        *b_rawESEnergyPlane1SCEle;   //!
   TBranch        *b_etaMCEle;   //!
   TBranch        *b_phiMCEle;   //!
   TBranch        *b_energyMCEle;   //!
   TBranch        *b_invMass_MC;   //!
   TBranch        *b_ZEvent;   //!
   TBranch        *b_invMass;   //!
   TBranch        *b_invMass_ECAL_ele;   //!
   TBranch        *b_invMass_ECAL_pho;   //!
   TBranch        *b_invMass_5x5SC;   //!
   TBranch        *b_invMass_rawSC;   //!
   TBranch        *b_invMass_rawSC_esSC;   //!
   TBranch        *b_invMass_highEta;   //!
   TBranch        *b_ele1E;   //!
   TBranch        *b_ele2E;   //!
   TBranch        *b_ele1ecalE;   //!
   TBranch        *b_ele2ecalE;   //!
   TBranch        *b_angleEle12;   //!

   selected(TTree *tree=0);
   virtual ~selected();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef selected_cxx
selected::selected(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/cms/store/group/dpg_ecal/alca_ecalcalib/automation_repro/rereco202223_repro_v3/ecalelf/zskim/366727/ntuple_0.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/eos/cms/store/group/dpg_ecal/alca_ecalcalib/automation_repro/rereco202223_repro_v3/ecalelf/zskim/366727/ntuple_0.root");
      }
      f->GetObject("selected",tree);

   }
   Init(tree);
}

selected::~selected()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t selected::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t selected::LoadTree(Long64_t entry)
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

void selected::Init(TTree *tree)
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
   fChain->SetBranchAddress("nBX", &nBX, &b_nBX);
   fChain->SetBranchAddress("isTrain", &isTrain, &b_isTrain);
   fChain->SetBranchAddress("mcGenWeight", &mcGenWeight, &b_mcGenWeight);
   fChain->SetBranchAddress("HLTfire", &HLTfire, &b_HLTfire);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("nPU", &nPU, &b_nPU);
   fChain->SetBranchAddress("vtxX", &vtxX, &b_vtxX);
   fChain->SetBranchAddress("vtxY", &vtxY, &b_vtxY);
   fChain->SetBranchAddress("vtxZ", &vtxZ, &b_vtxZ);
   fChain->SetBranchAddress("eleID", eleID, &b_eleID);
   fChain->SetBranchAddress("chargeEle", chargeEle, &b_chargeEle);
   fChain->SetBranchAddress("recoFlagsEle", recoFlagsEle, &b_recoFlagsEle);
   fChain->SetBranchAddress("etaEle", etaEle, &b_etaEle);
   fChain->SetBranchAddress("phiEle", phiEle, &b_phiEle);
   fChain->SetBranchAddress("fbremEle", fbremEle, &b_fbremEle);
   fChain->SetBranchAddress("R9Ele", R9Ele, &b_R9Ele);
   fChain->SetBranchAddress("gsfTrackLengthFromVtxP", gsfTrackLengthFromVtxP, &b_gsfTrackLengthFromVtxP);
   fChain->SetBranchAddress("gsfTrackLengthFromTangents", gsfTrackLengthFromTangents, &b_gsfTrackLengthFromTangents);
   fChain->SetBranchAddress("etaSCEle", etaSCEle, &b_etaSCEle);
   fChain->SetBranchAddress("phiSCEle", phiSCEle, &b_phiSCEle);
   fChain->SetBranchAddress("nHitsSCEle", nHitsSCEle, &b_nHitsSCEle);
   fChain->SetBranchAddress("avgLCSC", avgLCSC, &b_avgLCSC);
   fChain->SetBranchAddress("rawEnergySCEle", rawEnergySCEle, &b_rawEnergySCEle);
   fChain->SetBranchAddress("mustEnergySCEle", mustEnergySCEle, &b_mustEnergySCEle);
   fChain->SetBranchAddress("energy_ECAL_ele", energy_ECAL_ele, &b_energy_ECAL_ele);
   fChain->SetBranchAddress("energy_ECAL_pho", energy_ECAL_pho, &b_energy_ECAL_pho);
   fChain->SetBranchAddress("energyUncertainty_ECAL_ele", energyUncertainty_ECAL_ele, &b_energyUncertainty_ECAL_ele);
   fChain->SetBranchAddress("energyUncertainty_ECAL_pho", energyUncertainty_ECAL_pho, &b_energyUncertainty_ECAL_pho);
   fChain->SetBranchAddress("energy_5x5SC", energy_5x5SC, &b_energy_5x5SC);
   fChain->SetBranchAddress("pModeGsfEle", pModeGsfEle, &b_pModeGsfEle);
   fChain->SetBranchAddress("pAtVtxGsfEle", pAtVtxGsfEle, &b_pAtVtxGsfEle);
   fChain->SetBranchAddress("pNormalizedChi2Ele", pNormalizedChi2Ele, &b_pNormalizedChi2Ele);
   fChain->SetBranchAddress("trackMomentumErrorEle", trackMomentumErrorEle, &b_trackMomentumErrorEle);
   fChain->SetBranchAddress("xSeedSC", xSeedSC, &b_xSeedSC);
   fChain->SetBranchAddress("ySeedSC", ySeedSC, &b_ySeedSC);
   fChain->SetBranchAddress("eeRingNoSeedSC", eeRingNoSeedSC, &b_eeRingNoSeedSC);
   fChain->SetBranchAddress("gainSeedSC", gainSeedSC, &b_gainSeedSC);
   fChain->SetBranchAddress("energySeedSC", energySeedSC, &b_energySeedSC);
   fChain->SetBranchAddress("energySecondToSeedSC", energySecondToSeedSC, &b_energySecondToSeedSC);
   fChain->SetBranchAddress("amplitudeSeedSC", amplitudeSeedSC, &b_amplitudeSeedSC);
   fChain->SetBranchAddress("amplitudeSecondToSeedSC", amplitudeSecondToSeedSC, &b_amplitudeSecondToSeedSC);
   fChain->SetBranchAddress("timeSeedSC", timeSeedSC, &b_timeSeedSC);
   fChain->SetBranchAddress("timeSecondToSeedSC", timeSecondToSeedSC, &b_timeSecondToSeedSC);
   fChain->SetBranchAddress("icSeedSC", icSeedSC, &b_icSeedSC);
   fChain->SetBranchAddress("laserSeedSC", laserSeedSC, &b_laserSeedSC);
   fChain->SetBranchAddress("alphaSeedSC", alphaSeedSC, &b_alphaSeedSC);
   fChain->SetBranchAddress("pedestalSeedSC", pedestalSeedSC, &b_pedestalSeedSC);
   fChain->SetBranchAddress("noiseSeedSC", noiseSeedSC, &b_noiseSeedSC);
   fChain->SetBranchAddress("esEnergySCEle", esEnergySCEle, &b_esEnergySCEle);
   fChain->SetBranchAddress("esEnergyPlane2SCEle", esEnergyPlane2SCEle, &b_esEnergyPlane2SCEle);
   fChain->SetBranchAddress("esEnergyPlane1SCEle", esEnergyPlane1SCEle, &b_esEnergyPlane1SCEle);
   fChain->SetBranchAddress("rawESEnergyPlane2SCEle", rawESEnergyPlane2SCEle, &b_rawESEnergyPlane2SCEle);
   fChain->SetBranchAddress("rawESEnergyPlane1SCEle", rawESEnergyPlane1SCEle, &b_rawESEnergyPlane1SCEle);
   fChain->SetBranchAddress("etaMCEle", etaMCEle, &b_etaMCEle);
   fChain->SetBranchAddress("phiMCEle", phiMCEle, &b_phiMCEle);
   fChain->SetBranchAddress("energyMCEle", energyMCEle, &b_energyMCEle);
   fChain->SetBranchAddress("invMass_MC", &invMass_MC, &b_invMass_MC);
   fChain->SetBranchAddress("ZEvent", &ZEvent, &b_ZEvent);
   fChain->SetBranchAddress("invMass", &invMass, &b_invMass);
   fChain->SetBranchAddress("invMass_ECAL_ele", &invMass_ECAL_ele, &b_invMass_ECAL_ele);
   fChain->SetBranchAddress("invMass_ECAL_pho", &invMass_ECAL_pho, &b_invMass_ECAL_pho);
   fChain->SetBranchAddress("invMass_5x5SC", &invMass_5x5SC, &b_invMass_5x5SC);
   fChain->SetBranchAddress("invMass_rawSC", &invMass_rawSC, &b_invMass_rawSC);
   fChain->SetBranchAddress("invMass_rawSC_esSC", &invMass_rawSC_esSC, &b_invMass_rawSC_esSC);
   fChain->SetBranchAddress("invMass_highEta", &invMass_highEta, &b_invMass_highEta);
   fChain->SetBranchAddress("ele1E", &ele1E, &b_ele1E);
   fChain->SetBranchAddress("ele2E", &ele2E, &b_ele2E);
   fChain->SetBranchAddress("ele1ecalE", &ele1ecalE, &b_ele1ecalE);
   fChain->SetBranchAddress("ele2ecalE", &ele2ecalE, &b_ele2ecalE);
   fChain->SetBranchAddress("angleEle12", &angleEle12, &b_angleEle12);
   Notify();
}

Bool_t selected::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void selected::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t selected::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef selected_cxx
