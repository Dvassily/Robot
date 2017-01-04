#include "Tourner.h"

Tourner Tourner::t("TOURNER");

Tourner::Tourner(const std::string& s)
    : CommandeRobot(s)
{

}

Tourner::Tourner()
{ }

Tourner::~Tourner()
{ }

void Tourner::executer()
{
    this->oldDirection = robot->getDirection();
    robot->tourner(direction);
}

void Tourner::desexecuter() const {
    robot->tourner(this->oldDirection);
}

Commande* Tourner::constructeurVirtuel() const {
    return new Tourner();
}

void Tourner::setArgs(std::vector<std::string> tokens,
		     const std::map<std::string, Plot*> &plots,
		     const std::map<std::string, Objet*> &objets) {
    this->direction = tokens[1];
}
