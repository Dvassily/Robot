#include "EtatRobot.h"
#include "WrongStateException.h"

EtatRobot* EtatRobot::saisir() const {
    throw new WrongStateException("saisir");
    return nullptr;
}

EtatRobot* EtatRobot::evaluerPlot() const {
    throw new WrongStateException("evaluerPlot");
    return nullptr;    
}

EtatRobot* EtatRobot::figer() const {
    throw new WrongStateException("figer");
    return nullptr;    
}
