#ifndef __ETATROBOT_H__
#define __ETATROBOT_H__

#include <string>
#include "Plot.h"

class EtatRobot
{
public:
    virtual EtatRobot* avancer(unsigned x, unsigned y) const;
    virtual EtatRobot* tourner(std::string nvelledirection, std::string directionInitiale) const;
    virtual EtatRobot* saisir() const;
    virtual EtatRobot* poser() const;
    virtual EtatRobot* peser() const;
    virtual EtatRobot* rencontrerPlot(const Plot& p) const;
    virtual EtatRobot* evaluerPlot() const;
    virtual EtatRobot* figer();
    virtual EtatRobot* repartir() const;

    virtual std::string getNomEtat() const = 0;
};

#endif // __ETATROBOT_H__
