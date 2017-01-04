#ifndef TOURNER_H
#define TOURNER_H

#include "CommandeRobot.h"

class Tourner : public CommandeRobot
{
 private:
    static Tourner t;
    std::string direction;
    
 public:
    Tourner(const std::string& s);
    Tourner();
    virtual ~Tourner();
    virtual void executer();
    virtual void desexecuter() const;
    virtual Commande* constructeurVirtuel() const;
    virtual void setArgs(std::vector<std::string> tokens,
			 const std::map<std::string, Plot*> &plots,
			 const std::map<std::string, Objet*> &objets);
};

#endif /* TOURNER_H */
