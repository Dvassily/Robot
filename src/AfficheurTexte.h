#ifndef __AFICHEURTEXTE_H__
#define __AFICHEURTEXTE_H__

#include "Afficheur.h"

class AfficheurTexte : public Afficheur {
 public:
    virtual ~AfficheurTexte();
    virtual void afficher(const Robot& robot) const;
};

#endif // __AFFICHEURTEXTE_H__
