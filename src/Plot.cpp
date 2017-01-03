#include "Plot.h"

Plot::Plot(int hauteur, Objet* objet)
    : hauteur(hauteur), objet(objet)
{ }

Plot::Plot(int hauteur)
    : Plot(hauteur, objet)
{ }

int Plot::getHauteur() const {
    return hauteur;
}
