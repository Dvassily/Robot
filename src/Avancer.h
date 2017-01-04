#ifndef AVANCER_H
#define AVANCER_H

#include "CommandeRobot.h"

class Avancer : public CommandeRobot
{
 private:
    static Avancer a;
    unsigned x;
    unsigned y;
    Position position;
    
 public:
    Avancer(const std::string& s);
    Avancer();
    virtual ~Avancer();
    virtual void executer();
    virtual void desexecuter() const;
    virtual Commande* constructeurVirtuel() const;
    virtual void setArgs(std::vector<std::string> tokens,
			 const std::map<std::string, Plot*> &plots,
			 const std::map<std::string, Objet*> &objets);
};

#endif /* AVANCER_H */
