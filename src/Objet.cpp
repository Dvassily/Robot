#include "Objet.h"

Objet::Objet(int poids)
    : poids(poids)
{ }

int Objet::getPoids() const {
    return poids;
}
