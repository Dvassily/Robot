#ifndef __AVIDEFACEPLOT_H__
#define __AVIDEFACEPLOT_H__

#include "EtatRobot.h"
#include "EnRoute.h"

class aVideFacePlot : public EnRoute
{
public:
    EtatRobot* saisir();
};

#endif // __AVIDEFACEPLOT_H__
