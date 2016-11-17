#include "Fige.h"

Fige::Fige(EtatRobot* oldState)
    : oldState(oldState)
{ }

EtatRobot* Fige::repartir() {
    return oldState;
}
