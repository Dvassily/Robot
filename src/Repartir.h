#ifndef REPARTIR_H
#define REPARTIR_H

#include "CommandeRobot.h"

class Repartir : public CommandeRobot
{
 private:
    static Repartir s;
    
public:
    Repartir(const std::string& s);
    Repartir();
    virtual ~Repartir();
    virtual void executer();
    virtual void desexecuter() const;
    virtual Commande* constructeurVirtuel() const;
};


#endif /* REPARTIR_H */
