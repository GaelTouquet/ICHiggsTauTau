#ifndef ICHiggsTauTau_Module_L1TFilterPlots_h
#define ICHiggsTauTau_Module_L1TFilterPlots_h

#include "UserCode/ICHiggsTauTau/Analysis/Core/interface/TreeEvent.h"
#include "UserCode/ICHiggsTauTau/Analysis/Core/interface/ModuleBase.h"
#include "UserCode/ICHiggsTauTau/interface/GenParticle.hh"
#include <string>
#include <cmath>

#include "TH1D.h"
#include "TH2D.h"
#include "TFile.h"
#include "TLorentzVector.h"
#include "TDirectory.h"
#include "PhysicsTools/FWLite/interface/TFileService.h"

// ICHiggsTauTau Objects
#include "UserCode/ICHiggsTauTau/interface/L1TObject.hh"
#include "UserCode/ICHiggsTauTau/interface/L1TEGamma.hh"
#include "UserCode/ICHiggsTauTau/interface/L1TMuon.hh"
#include "UserCode/ICHiggsTauTau/interface/L1TTau.hh"
#include "UserCode/ICHiggsTauTau/interface/L1TJet.hh"
#include "UserCode/ICHiggsTauTau/interface/L1TSum.hh"
#include "UserCode/ICHiggsTauTau/interface/GenJet.hh"
#include "UserCode/ICHiggsTauTau/interface/Met.hh"
#include "UserCode/ICHiggsTauTau/interface/Candidate.hh"

#include "Modules/interface/L1Cuts.h"


namespace ic {
    
class L1TFilterPlots : public ModuleBase {
   public:
      L1TFilterPlots(std::string const& name, std::string channel, fwlite::TFileService *fs, L1Cuts l1Cuts, std::string dirName, int filterOpt);
      virtual ~L1TFilterPlots(); 
      
      virtual int PreAnalysis();
      virtual int Execute(TreeEvent *event);
      virtual int PostAnalysis();
      virtual void PrintInfo();

   private:
      std::string channel_;
      std::string l1jets_label_;
      std::string l1electrons_label_;
      std::string l1muons_label_;
      std::string l1taus_label_;
      std::string l1met_label_;
    
      unsigned n_l1jets_;
      unsigned n_l1electrons_;
      unsigned n_l1muons_;
      unsigned n_l1taus_;
      
      double Jet1PtCut;
      double Jet2PtCut;
      double DeltaEtaCut;
      double MjjCut;
      double EGPtCut;
      double Tau1PtCut;
      double Tau2PtCut;
      double MuPtCut;
      
      bool JetFilter;
      bool IsoTauFilter;
      bool IsoEGFilter;
      bool IsoMuFilter;
      bool CancelFilter;
      
      TH1D *h_L1Filter_Efficiency;
      
      TH1D *h_lead_l1Index_1;
      TH1D *h_sublead_l1Index_1;
      TH1D *h_lead_l1Index_2;
      TH1D *h_sublead_l1Index_2;
      
      TH2D *h_jets_l1Index_1;
      TH2D *h_jets_l1Index_2;
      TH2D *h_jets_l1IndexGenMatch_1;
      TH2D *h_jets_l1IndexGenMatch_2;
      TH2D *h_jets_OfflineIndexGenMatch_1;
      
      TH1D *h_SignalEfficiency;
      
      TH1D *h_CorrectVBFJets;
      TH1D *h_VBFMultiplicity;

};
}

#endif