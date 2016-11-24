#ifndef __ROBOT_H__
#define __ROBOT_H__

#include <iostream>
#include <vector>
#include "Objet.h"
#include "EtatRobot.h"
#include "Afficheur.h"

class Afficheur;

class Robot
{
private:
    std::string direction;
    EtatRobot* etat;
    Objet o;
    std::vector<Afficheur*> afficheurs;

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

    void attacherAfficheur(Afficheur* afficheur);
    void detacherAfficheur(Afficheur* afficheur);
};

#endif // __ROBOT_H__
