#ifndef __ENROUTE_H__
#define __ENROUTE_H__

#include "EtatRobot.h"
#include "Fige.h"

class EnRoute : public EtatRobot
{
public:
    virtual EtatRobot* figer();
};

#endif // __ENROUTE_H__


