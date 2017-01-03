#include "aVideFacePlot.h"
#include "enChargeFacePlot.h"
#include "enCharge.h"

enChargeFacePlot* enChargeFacePlot::instance = nullptr;

EtatRobot* enChargeFacePlot::poser() const {
    return aVideFacePlot::getInstance();
}

EtatRobot* enChargeFacePlot::peser() const {
    return instance;
}

EtatRobot* enChargeFacePlot::evaluerPlot() const {
    return instance;
}

EtatRobot* enChargeFacePlot::tourner(std::string nvelledirection, std::string directionInitiale) const {
    if (directionInitiale != nvelledirection)
	return enCharge::getInstance();
    return instance;
}

std::string enChargeFacePlot::getNomEtat() const {
    return "enChargeFacePlot";
}

enChargeFacePlot* enChargeFacePlot::getInstance() {
    if (instance == nullptr) {
	instance = new enChargeFacePlot();
    }
    
    return instance;
}
