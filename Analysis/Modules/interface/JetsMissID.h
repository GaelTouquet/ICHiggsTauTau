#ifndef ICHiggsTauTau_Module_JetsMissID_h
#define ICHiggsTauTau_Module_JetsMissID_h

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

namespace ic {

  class JetsMissID : public ModuleBase {
  private:

    std::string genParticles_label_; 
    
    std::string jets_label_;
    std::string electrons_label_;
    std::string muons_label_;
    std::string taus_label_;
    std::string ditau_label_;
    std::string met_label_;
    
    std::string l1jets_label_;
    std::string l1electrons_label_;
    std::string l1muons_label_;
    std::string l1taus_label_;
    std::string l1met_label_;
    
    std::string genjets_label_;
 
    std::string output_name_;
    std::string output_name2_ = "JetsMissID";
    std::string output_folder_;
    
    
    unsigned n_genParticles_;
    unsigned n_genJets_;
    unsigned n_jets_;
    unsigned n_electrons_;
    unsigned n_muons_;
    unsigned n_taus_;
    
    unsigned n_l1jets_;
    unsigned n_l1electrons_;
    unsigned n_l1muons_;
    unsigned n_l1taus_;
    
    TH1D *h_Mjj_em;
    TH1D *h_Mjj_et;
    TH1D *h_Mjj_mt;
    TH1D *h_Mjj_tt;
    
    TH1D *h_DeltaEta_em;
    TH1D *h_DeltaEta_et;
    TH1D *h_DeltaEta_mt;
    TH1D *h_DeltaEta_tt;
    
    TH1D *h_jet1_em;
    TH1D *h_jet1_et;
    TH1D *h_jet1_mt;
    TH1D *h_jet1_tt;
    
    TH1D *h_jet2_em;
    TH1D *h_jet2_et;
    TH1D *h_jet2_mt;
    TH1D *h_jet2_tt;


  public:

    JetsMissID(std::string const& name, std::string output_name, std::string output_folder);
    virtual ~JetsMissID();

    virtual int PreAnalysis();
    virtual int Execute(TreeEvent *event);
    virtual int PostAnalysis();
    virtual void PrintInfo();
    
    TFile *fEff;
    
  };

}//namespace


#endif