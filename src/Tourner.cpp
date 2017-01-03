#include "Tourner.h"

Tourner Tourner::t("TOURNER");

Tourner::Tourner(const std::string& s)
    : CommandeRobot(s)
{ }

Tourner::Tourner()
{ }

Tourner::~Tourner()
{ }

void Tourner::executer() const
{
    robot->tourner(direction);
}

Commande* Tourner::constructeurVirtuel() const {
    return new Tourner();
}

void Tourner::setArgs(std::vector<std::string> tokens,
		     const std::map<std::string, Plot*> &plots,
		     const std::map<std::string, Objet*> &objets) {
    this->direction = tokens[1];
}
