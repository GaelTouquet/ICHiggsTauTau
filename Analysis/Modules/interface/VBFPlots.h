#ifndef ICHiggsTauTau_Module_VBFPlots_h
#define ICHiggsTauTau_Module_VBFPlots_h

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
    
class VBFPlots : public ModuleBase {
   public:
      VBFPlots(std::string const& name, fwlite::TFileService *fs, std::string output_name, double JetsMinPt);
      virtual ~VBFPlots(); 
      
      virtual int PreAnalysis();
      virtual int Execute(TreeEvent *event);
      virtual int PostAnalysis();
      virtual void PrintInfo();

   private:
       
      unsigned n_genjets_;
      unsigned n_jets_;
      unsigned n_genParticles_;
      unsigned n_l1jets_;
      
      unsigned EventsTotal;
      double JetsOfflineMinPt;
      
      TH1D *h_q1_Pt;
      TH1D *h_q2_Pt;
      TH1D *h_qq_Mqq;
      TH1D *h_qq_DeltaEta;
      TH1D *h_qq_AvePt;
      TH1D *h_genj1_Pt;
      TH1D *h_genj2_Pt;
      TH1D *h_genjj_Mqq;
      TH1D *h_genjj_DeltaEta;
      TH1D *h_genjj_AvePt;
      TH1D *h_j1_Pt;
      TH1D *h_j2_Pt;
      TH1D *h_jj_Mqq;
      TH1D *h_jj_DeltaEta;
      TH1D *h_jj_AvePt;
      TH1D *h_l1j1_Pt;
      TH1D *h_l1j2_Pt;
      TH1D *h_l1jj_Mqq;
      TH1D *h_l1jj_DeltaEta;
      TH1D *h_l1jj_AvePt;
      
      TH1D *h_genj1_Pt_NonVBF;
      TH1D *h_genj2_Pt_NonVBF;
      TH1D *h_genjj_Mqq_NonVBF;
      TH1D *h_genjj_DeltaEta_NonVBF;
      
      TH1D *h_j1_Pt_NonVBF;
      TH1D *h_j2_Pt_NonVBF;
      TH1D *h_jj_Mqq_NonVBF;
      TH1D *h_jj_DeltaEta_NonVBF;
      
      TH1D *h_l1j1_Pt_NonVBF;
      TH1D *h_l1j2_Pt_NonVBF;
      TH1D *h_l1jj_Mqq_NonVBF;
      TH1D *h_l1jj_DeltaEta_NonVBF;
      
      TH1D *h_PercentOppSides;
      TH1D *h_PercentOppSidesVsSubPt;
      TH1D *h_PercentSameSidesVsSubPt;
      TH1D *h_TotalDiJetsVsSubPt;
      TH1D *h_PtDiff;
      TH2D *h_PtDiffVsSubPt;
      TH1D *h_LeadJetEta;
      TH1D *h_SubLeadJetEta;
      TH1D *h_LeadJetPtRes;
      TH1D *h_SubLeadJetPtRes;
      TH2D *h_LeadJetPtResVsPartonPt;
      TH2D *h_SubLeadJetPtResVsPartonPt;
      TH1D *h_MatchedToGenStats;
      
      TH2D *h_genjets_Index;
      TH2D *h_jets_Index;
      TH2D *h_l1jets_Index;
      
      TH2D *h_MjjVsDeltaEta_SOverB;
      TH2D *h_MjjVsDeltaEta_SOverB_S;
      TH2D *h_MjjVsDeltaEta_SOverB_B;
      TH2D *h_MjjVsDeltaEta_S;
      TH2D *h_MjjVsDeltaEta_B;
      
      TH1D *h_JetsDeltaEtaResGenJet;
      TH1D *h_JetsMjjResGenJet;
      TH1D *h_LeadJetPtResGenJet;
      TH1D *h_SubLeadJetPtResGenJet;
      TH1D *h_AveJetPtResGenJet;
  

};
}

#endif