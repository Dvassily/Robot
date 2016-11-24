#include "aVideFacePlot.h"
#include "enChargeFacePlot.h"

EtatRobot* aVideFacePlot::saisir() const {
    return new enChargeFacePlot();
}

std::string aVideFacePlot::getNomEtat() const {
    return "aVideFacePlot";
}


