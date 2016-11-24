#include "enChargeFacePlot.h"

enChargeFacePlot* enChargeFacePlot::instance = nullptr;

std::string enChargeFacePlot::getNomEtat() const {
    return "enChargeFacePlot";
}

enChargeFacePlot* enChargeFacePlot::getInstance() {
    if (instance == nullptr) {
	instance = new enChargeFacePlot();
    }
    
    return instance;
}
