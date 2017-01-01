#ifndef REPARTIR_H
#define REPARTIR_H

#include "CommandeRobot.h"

class Repartir : public CommandeRobot
{
public:
    Repartir(Robot& r);
    virtual ~Repartir();
    virtual void executer() const;
};


#endif /* REPARTIR_H */
