#ifndef SAISIR_H
#define SAISIR_H

#include "CommandeRobot.h"

class Saisir : public CommandeRobot
{
 private:
    static Saisir s;
    Objet* objet;
    
 public:
    Saisir(const std::string& s);
    Saisir();
    virtual ~Saisir();
    virtual void executer();
    virtual void desexecuter() const;
    virtual Commande* constructeurVirtuel() const;
    virtual void setArgs(std::vector<std::string> tokens,
			 const std::map<std::string, Plot*> &plots,
			 const std::map<std::string, Objet*> &objets);
};

#endif /* SAISIR_H */
