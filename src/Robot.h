#ifndef __ROBOT_H__
#define __ROBOT_H__

#include "Objet.h"
#include "EtatRobot.h"

class Robot
{
public:
    // void avancer(unsigned x, unsigned y);
    // void tourner(string direction y);
    void saisir(const Objet& O);
    // void poser();
    // int peser();
    // void rencontrerPlot(const Plot& p);a
    // void evaluerPlot(const Plot& p);
    void figer();
    void repartir();
    // void afficher();
};

#endif // __ROBOT_H__
