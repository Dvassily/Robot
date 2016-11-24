#include "Fige.h"

Fige::Fige(EtatRobot* oldState)
    : oldState(oldState)
{ }

EtatRobot* Fige::repartir() const {
    return oldState;
}

std::string Fige::getNomEtat() const {
    return "Fige (old state : " + oldState->getNomEtat() + ")";
}
