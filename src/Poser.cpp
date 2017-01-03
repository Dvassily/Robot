#include "Poser.h"

Poser Poser::p("POSER");

Poser::Poser(const std::string& s)
    : CommandeRobot(s)
{ }

Poser::Poser()
{ }

Poser::~Poser()
{ }

void Poser::executer() const
{
    robot->poser();
}

Commande* Poser::constructeurVirtuel() const {
    return new Poser();
}
