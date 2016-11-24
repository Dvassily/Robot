#ifndef __AVIDEFACEPLOT_H__
#define __AVIDEFACEPLOT_H__

#include "EtatRobot.h"
#include "EnRoute.h"

class aVideFacePlot : public EnRoute
{
public:
    virtual EtatRobot* saisir() const;
    virtual std::string getNomEtat() const;
};

#endif // __AVIDEFACEPLOT_H__
