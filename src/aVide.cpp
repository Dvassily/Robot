#include <iostream>
#include "aVide.h"
#include "aVideFacePlot.h"

aVide* aVide::instance = nullptr;

EtatRobot* aVide::avancer(unsigned x, unsigned y) const {
    return instance;
}

EtatRobot* aVide::tourner(std::string nvelledirection, std::string directionInitiale) const {
    return instance;    
}

EtatRobot* aVide::rencontrerPlot(const Plot& p) const {
    return aVideFacePlot::getInstance();
}

std::string aVide::getNomEtat() const {
    return "aVide";
}

aVide* aVide::getInstance() {
    if (instance == nullptr) {
	instance = new aVide();
    }
    
    return instance;
}
