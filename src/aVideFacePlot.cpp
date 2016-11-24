#include "aVideFacePlot.h"
#include "enChargeFacePlot.h"

EtatRobot* aVideFacePlot::saisir() const {
    return new enChargeFacePlot();
}

std::string aVideFacePlot::getStateName() const = 0 {
    return "aVideFacePlot";
}


