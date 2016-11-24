#ifndef __ROBOT_H__
#define __ROBOT_H__

#include <iostream>
#include "Objet.h"
#include "EtatRobot.h"

class Robot
{
private:
    std::string direction;
    EtatRobot* etat;
    Objet o;

public:
    Robot();
    // void avancer(unsigned x, unsigned y);
    // void tourner(string direction y);
    void saisir(const Objet& o);
    // void poser();
    // int peser();
    // void rencontrerPlot(const Plot& p);a
    // void evaluerPlot(const Plot& p);
    void figer();
    void repartir();
    void afficher();

    void test();
};

#endif // __ROBOT_H__
