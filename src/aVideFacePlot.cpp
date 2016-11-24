#include "aVideFacePlot.h"
#include "enChargeFacePlot.h"

aVideFacePlot* aVideFacePlot::instance = nullptr;

EtatRobot* aVideFacePlot::saisir() const {
    return enChargeFacePlot::getInstance();
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

