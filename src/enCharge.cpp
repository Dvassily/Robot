#include "enCharge.h"
#include "enChargeFacePlot.h"

enCharge* enCharge::instance = nullptr;

EtatRobot* enCharge::avancer(unsigned x, unsigned y) const {
    return instance;
}

EtatRobot* enCharge::tourner(std::string nvelledirection, std::string directionInitiale) const {
    return instance;
}

EtatRobot* enCharge::peser() const {
    return instance;
}

EtatRobot* enCharge::rencontrerPlot(const Plot& p) const {
    return enChargeFacePlot::getInstance();
}

std::string enCharge::getNomEtat() const {
    return "enCharge";
}

enCharge* enCharge::getInstance() {
    if (instance == nullptr) {
	instance = new enCharge();
    }
    
    return instance;
}
