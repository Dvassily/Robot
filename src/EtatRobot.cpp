#include "EtatRobot.h"
#include "WrongStateException.h"

EtatRobot* EtatRobot::saisir() const {
    throw WrongStateException("saisir");
    return nullptr;
}

EtatRobot* EtatRobot::figer() const {
    throw WrongStateException("figer");
    return nullptr;    
}

EtatRobot* EtatRobot::repartir() const {
    throw WrongStateException("repartir");
    return nullptr;    
}
