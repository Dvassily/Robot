#include "Saisir.h"

Saisir::Saisir(Objet& o)
    : objet(o)
{ }

Saisir::~Saisir()
{ }


void Saisir::executer() const
{
    robot->saisir(objet);
}
