#include "Repartir.h"

Repartir Repartir::s("REPARTIR");

Repartir::Repartir(const std::string& s)
    : CommandeRobot(s)
{ }

Repartir::Repartir()
    : CommandeRobot(s)
{ }

Repartir::~Repartir()
{ }

void Repartir::executer() const
{
    robot->repartir();
}

Commande* Repartir::constructeurVirtuel() const {
    return new Repartir();
}

