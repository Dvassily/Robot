#include "aVideFacePlot.h"
#include "enChargeFacePlot.h"

EtatRobot* aVideFacePlot::saisir() {
    return new enChargeFacePlot();
}

