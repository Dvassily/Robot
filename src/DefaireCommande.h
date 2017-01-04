#ifndef DEFAIRECOMMANDE_H
#define DEFAIRECOMMANDE_H

#include "CommandeRobot.h"

class DefaireCommande : public CommandeRobot {
 private:
    static DefaireCommande d;
    Commande* commande;

 public:
    DefaireCommande(Commande* commande);
    DefaireCommande(const std::string &s);
    virtual ~DefaireCommande();
    virtual void executer();
    virtual void desexecuter() const;
    virtual Commande* constructeurVirtuel() const;
};

#endif /* DEFAIRECOMMANDE_H */
