#ifndef __ENCHARGE_H__
#define __ENCHARGE_H__

#include "EnRoute.h"

class enCharge : public EnRoute {
 private:
    static enCharge* instance;
    
 public:
    virtual EtatRobot* avancer(unsigned x, unsigned y) const;
    virtual EtatRobot* tourner(std::string nvelledirection, std::string directionInitiale) const;
    virtual EtatRobot* peser() const;
    virtual EtatRobot* rencontrerPlot(const Plot& p) const;
    
    virtual std::string getNomEtat() const;
    static enCharge* getInstance();
};

#endif // __ENCHARGE_H__
