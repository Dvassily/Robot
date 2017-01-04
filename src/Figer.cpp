#include "Figer.h"

Figer Figer::s("FIGER");

Figer::Figer(const std::string& s)
    : CommandeRobot(s)
{ }

Figer::Figer()
{ }

Figer::~Figer()
{ }

void Figer::executer()
{
    robot->figer();
}

void Figer::desexecuter() const {
    robot->repartir();
}

Commande* Figer::constructeurVirtuel() const {
    return new Figer();
}
