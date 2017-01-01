#include "Saisir.h"

Saisir::Saisir(Robot& r, Objet& o)
    : CommandeRobot(r), objet(o)
{ }

Saisir::~Saisir()
{ }


void Saisir::executer() const
{
    robot.saisir(objet);
}
