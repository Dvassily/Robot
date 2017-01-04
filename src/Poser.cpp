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
    this->oldObjet = robot->getObjet();
    robot->poser();
}

void Poser::desexecuter() const {
    robot->saisir(*this->oldObjet);
}

Commande* Poser::constructeurVirtuel() const {
    return new Poser();
}
