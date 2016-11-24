#ifndef __ETATROBOT_H__
#define __ETATROBOT_H__

#include <string>

class EtatRobot
{
public:
    // virtual EtatRobot* avancer(unsigned x, unsigned y) const;
    // virtual EtatRobot* tourner(string direction y) const;
    virtual EtatRobot* saisir() const;
    // virtual EtatRobot* poser() const;
    // virtual EtatRobot* peser() const;
    // virtual EtatRobot* rencontrerPlot(const Plot& p) const;a
    // virtual EtatRobot* evaluerPlot() const;
    virtual EtatRobot* figer();
    virtual EtatRobot* repartir() const;

    virtual std::string getStateName() const = 0;
};

#endif // __ETATROBOT_H__
