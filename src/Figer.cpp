#include "Figer.h"

Figer Figer::s("FIGER");

Figer::Figer(const std::string& s)
    : CommandeRobot(s)
{ }

Figer::Figer()
{ }

Figer::~Figer()
{ }

void Figer::executer() const
{
    robot->figer();
}

Commande* Figer::constructeurVirtuel() const {
    return new Figer();
}
