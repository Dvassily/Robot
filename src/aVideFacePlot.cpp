#include "aVideFacePlot.h"
#include "enChargeFacePlot.h"
#include "aVide.h"

aVideFacePlot* aVideFacePlot::instance = nullptr;

EtatRobot* aVideFacePlot::saisir() const {
    return enChargeFacePlot::getInstance();
}

EtatRobot* aVideFacePlot::tourner(std::string nvelledirection, std::string directionInitiale) const {
    if (directionInitiale != nvelledirection)
	return aVide::getInstance();
    return instance;
}

EtatRobot* aVideFacePlot::evaluerPlot() const {
    return instance;
}

std::string aVideFacePlot::getNomEtat() const {
    return "aVideFacePlot";
}

aVideFacePlot* aVideFacePlot::getInstance() {
    if (instance == nullptr) {
	instance = new aVideFacePlot();
    }
    
    return instance;
}

