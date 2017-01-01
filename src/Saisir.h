#ifndef SAISIR_H
#define SAISIR_H

#include "CommandeRobot.h"

class Saisir : public CommandeRobot
{
 private:
    Objet& objet;
    
 public:
    Saisir(Robot &r, Objet& o);
    virtual ~Saisir();
    virtual void executer() const;
};

#endif /* SAISIR_H */
