#ifndef FIGER_H
#define FIGER_H

#include "CommandeRobot.h"

class Figer : public CommandeRobot
{
public:
    virtual ~Figer();
    virtual void executer() const;
};


#endif /* FIGER_H */
