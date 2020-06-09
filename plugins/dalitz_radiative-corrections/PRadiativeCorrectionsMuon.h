#ifndef _PRADIATIVECORRECTIONSMUON_H_
#define _PRADIATIVECORRECTIONSMUON_H_

#include "PRadiativeCorrections.h"

class PRadiativeCorrectionsMuon : public PRadiativeCorrections {

  public:
    PRadiativeCorrectionsMuon(){}
    PRadiativeCorrectionsMuon(const Char_t *id, const Char_t *de, Int_t key);
    PDistribution* Clone(const char*delme=NULL) const;

    Double_t GetWeight() override;

  private:
    TGraph2D *corrections_pi0, *corrections_eta, *corrections_etap;
    bool eta, etap;

    ClassDef(PRadiativeCorrectionsMuon,0)
};

#endif
