#ifndef COMMANDE_H
#define COMMANDE_H

#include <map>
#include "Commande.h"

class Commande
{
 private:
    static std::map<std::string, Commande*>& commandesInscrites();
   
 public:
    Commande();
    Commande(const std::string &s);
    virtual void executer() = 0;
    virtual void desexecuter() const = 0;
    virtual void setArgs(std::string args[]);
    virtual ~Commande();
    virtual Commande* constructeurVirtuel() const = 0;

    static Commande* nouvelleCommande(const std::string& s);
};


#endif /* COMMANDE_H */





