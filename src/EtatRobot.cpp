#include "EtatRobot.h"
#include "WrongStateException.h"

EtatRobot* EtatRobot::avancer(unsigned x, unsigned y) const {
    throw WrongStateException("avancer");
    return nullptr;
}

EtatRobot* EtatRobot::tourner(std::string nvelledirection, std::string directionInitiale) const {
    throw WrongStateException("tourner");
    return nullptr;
}

EtatRobot* EtatRobot::saisir() const {
    throw WrongStateException("saisir");
    return nullptr;
}

EtatRobot* EtatRobot::poser() const {
    throw WrongStateException("poser");
    return nullptr;
}

EtatRobot* EtatRobot::peser() const {
    throw WrongStateException("peser");
    return nullptr;
}

EtatRobot* EtatRobot::rencontrerPlot(const Plot& p) const {
    throw WrongStateException("rencontrerPlot");
    return nullptr;
}

EtatRobot* EtatRobot::evaluerPlot() const {
    throw WrongStateException("evaluerPlot");
    return nullptr;
}

EtatRobot* EtatRobot::figer()  {
    throw WrongStateException("figer");
    return nullptr;    
}

EtatRobot* EtatRobot::repartir() const {
    throw WrongStateException("repartir");
    return nullptr;    
}
