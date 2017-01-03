#ifndef __ENCHARGEFACEPLOT_H__
#define __ENCHARGEFACEPLOT_H__

#include "EnRoute.h"

class enChargeFacePlot : public EnRoute {
 private:
    static enChargeFacePlot* instance;
    
 public:
    virtual EtatRobot* poser() const;
    virtual EtatRobot* peser() const;
    virtual EtatRobot* evaluerPlot() const;
    virtual EtatRobot* tourner(std::string nvelledirection, std::string directionInitiale) const;
    virtual std::string getNomEtat() const;
    static enChargeFacePlot* getInstance();
};

#endif // __ENCHARGEFACEPLOT_H__
