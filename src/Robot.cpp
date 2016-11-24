#include <typeinfo>
#include <iostream>
#include "Robot.h"
#include "aVideFacePlot.h"
#include "WrongStateException.h"

Robot::Robot()
    : direction("EST"), etat(aVideFacePlot::getInstance()), objet(nullptr), position(0, 0), plot(nullptr)
{ }

void Robot::saisir(Objet& o){
    try {
	etat = etat->saisir();
	this->objet = &o;
	afficher();
    } catch(const WrongStateException &e) {
	printf("-> %d\n", typeid(*etat) == typeid(aVideFacePlot));
	std::cout << e.what() << std::endl;
    }
}

void Robot::figer(){
    try {
	etat = etat->figer();
	afficher();
    } catch(WrongStateException e) {
	std::cout << e.what() << std::endl;
    }
}


void Robot::repartir(){
    try {
	etat = etat->repartir();
	afficher();
    } catch(WrongStateException e) {
	std::cout << e.what() << std::endl;
    }
}


void Robot::afficher(){
    for (unsigned i = 0; i < afficheurs.size(); ++i) {
	afficheurs.at(i)->afficher(*this);
    }
}

void Robot::attacherAfficheur(Afficheur* afficheur) {
    afficheurs.push_back(afficheur);
}

void Robot::detacherAfficheur(Afficheur* afficheur) {
    for (unsigned i = 0; i < afficheurs.size(); ++i) {
	if (afficheurs.at(i) == afficheur) {
	    afficheurs.erase(afficheurs.begin() + i);
	    return;
	}
    }
}

std::string Robot::getNomEtat() const {
    return etat->getNomEtat();
}

std::string Robot::getDirection() const {
    return direction;
}

Objet* Robot::getObjet() const {
    return objet;
}

const Position& Robot::getPosition() const {
    return position;
}

const Plot* Robot::getPlot() const {
    return plot;
}
