#include "Fige.h"

Fige::Fige(EtatRobot* oldState)
    : oldState(oldState)
{ }

EtatRobot* Fige::repartir() const {
    return oldState;
}
