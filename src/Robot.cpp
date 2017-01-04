#include <typeinfo>
#include <iostream>
#include "Plot.h"
#include "Robot.h"
#include "aVide.h"
#include "aVideFacePlot.h"
#include "WrongStateException.h"

Robot::Robot(std::string direction)
    : direction(direction), etat(aVide::getInstance()), objet(nullptr), position(0, 0), plot(nullptr)
{

}

void Robot::avancer(unsigned x, unsigned y) {
    try {
	etat = etat->avancer(x, y);
	position.setx(x);
	position.sety(y);
	afficher();
    } catch(const WrongStateException &e) {
	std::cout << e.what() << std::endl;
    }
}

void Robot::tourner(std::string direction) {
    try {
	etat = etat->tourner(direction, this->direction);
	if ((plot != nullptr) && (direction != this->direction))
	    plot = nullptr;
	
	this->direction = direction;

	afficher();
    } catch(const WrongStateException &e) {
	std::cout << e.what() << std::endl;
    }
}

void Robot::saisir(Objet& o) {
    try {
	etat = etat->saisir();
	this->objet = &o;
	afficher();
    } catch(const WrongStateException &e) {
	std::cout << e.what() << std::endl;
    }
}

void Robot::poser(){
    try {
	etat = etat->poser();
	this->objet = nullptr;
	afficher();
    } catch(WrongStateException e) {
	std::cout << e.what() << std::endl;
    }
}

int Robot::peser(){
    try {
	etat = etat->peser();
	std::cout << "Poids objet : " << objet->getPoids() << std::endl << std::endl;
    } catch(WrongStateException e) {
	std::cout << e.what() << std::endl;
	return 0;
    }

    return objet->getPoids();
}


void Robot::rencontrerPlot(Plot& plot) {
    try {
	etat = etat->rencontrerPlot(plot);
	this->plot = &plot;
	afficher();	
    } catch (const WrongStateException &e) {
	std::cout << e.what() << std::endl;	
    }
}

void Robot::evaluerPlot() {
    try {
	etat = etat->evaluerPlot();
	std::cout << "Hauteur plot : " << plot->getHauteur() << std::endl << std::endl;
    } catch (const WrongStateException &e) {
	std::cout << e.what() << std::endl;		
    }
}

void Robot::figer() {
    try {
	etat = etat->figer();
	afficher();
    } catch(const WrongStateException &e) {
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

Position Robot::getPosition() const {
    return position;
}

Plot* Robot::getPlot() const {
    return plot;
}
