#ifndef __FIGE_H__
#define __FIGE_H__

#include "EtatRobot.h"

class Fige : public EtatRobot
{
private:
    EtatRobot* oldState;
    
public:
    Fige(EtatRobot* oldState);
    EtatRobot* repartir();
};

#endif // __FIGE_H__
