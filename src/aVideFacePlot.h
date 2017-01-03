#ifndef __AVIDEFACEPLOT_H__
#define __AVIDEFACEPLOT_H__

#include "EtatRobot.h"
#include "EnRoute.h"

class aVideFacePlot : public EnRoute
{
 private:
    static aVideFacePlot* instance;
    
 public:
    virtual EtatRobot* saisir() const;
    virtual EtatRobot* tourner(std::string nvelledirection, std::string directionInitiale) const;
    virtual EtatRobot* evaluerPlot() const;
    virtual std::string getNomEtat() const;
    static aVideFacePlot* getInstance();
};

#endif // __AVIDEFACEPLOT_H__

