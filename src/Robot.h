#ifndef __ROBOT_H__
#define __ROBOT_H__

#include <iostream>
#include <vector>
#include "Objet.h"
#include "EtatRobot.h"
#include "Afficheur.h"
#include "Position.h"
#include "Plot.h"

class Afficheur;

class Robot
{
private:
    std::string direction;
    EtatRobot* etat;
    Objet* objet;
    Position position;
    Plot* plot;
    
    std::vector<Afficheur*> afficheurs;

public:
    Robot(std::string direction);
    void avancer(unsigned x, unsigned y);
    void tourner(std::string direction);
    void saisir(Objet& o);
    void poser();
    int peser();
    void rencontrerPlot(Plot& p);
    void evaluerPlot();
    void figer();
    void repartir();
    void afficher();

    void attacherAfficheur(Afficheur* afficheur);
    void detacherAfficheur(Afficheur* afficheur);

    std::string getDirection() const;
    std::string getNomEtat() const;
    Objet* getObjet() const;
    Position getPosition() const;
    const Plot* getPlot() const;

    void setPosition(const Position& position);
};

#endif // __ROBOT_H__
