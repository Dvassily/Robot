#ifndef __FIGE_H__
#define __FIGE_H__

#include "EtatRobot.h"

class Fige : public EtatRobot
{
private:
    EtatRobot* oldState;
    
public:
    Fige(EtatRobot* oldState);
    virtual EtatRobot* repartir() const;
    virtual std::string getNomEtat() const;
};

#endif // __FIGE_H__
