#include "Poser.h"

Poser Poser::p("POSER");

Poser::Poser(const std::string& s)
    : CommandeRobot(s)
{ }

Poser::Poser()
{ }

Poser::~Poser()
{ }

void Poser::executer()
{
    robot->poser();
}

void Poser::desexecuter() const {
    
}

Commande* Poser::constructeurVirtuel() const {
    return new Poser();
}
