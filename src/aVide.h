#ifndef __AVIDE_H__
#define __AVIDE_H__

#include "EtatRobot.h"
#include "EnRoute.h"

class aVide : public EnRoute
{
 private:
    static aVide* instance;
    
 public:
    virtual EtatRobot* avancer(unsigned x, unsigned y) const;
    virtual EtatRobot* tourner(std::string nvelledirection, std::string directionInitiale) const;
    virtual EtatRobot* rencontrerPlot(const Plot& p) const;
    virtual std::string getNomEtat() const;
    static aVide* getInstance();
};

#endif // __AVIDE_H__

