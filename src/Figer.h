#ifndef FIGER_H
#define FIGER_H

#include "CommandeRobot.h"

class Figer : public CommandeRobot
{
 private:
    static Figer s;
public:
    Figer(const std::string& s);
    Figer();
    virtual ~Figer();
    virtual void executer() const;
    virtual Commande* constructeurVirtuel() const;
};


#endif /* FIGER_H */
