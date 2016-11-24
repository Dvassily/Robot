#ifndef __ENROUTE_H__
#define __ENROUTE_H__

#include "EtatRobot.h"
#include "Fige.h"

class EnRoute : public EtatRobot
{
public:
    //virtual EtatRobot* saisir() const;
    virtual EtatRobot* figer();
    //virtual EtatRobot* repartir() const;
};

#endif // __ENROUTE_H__


