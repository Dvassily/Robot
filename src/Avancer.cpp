#include "Avancer.h"
#include "Commande.h"

Avancer Avancer::a("AVANCER");

Avancer::Avancer(const std::string& s)
    : CommandeRobot(s)
{ }

Avancer::Avancer()
{ }

Avancer::~Avancer()
{ }

void Avancer::executer() const
{
    robot->avancer(x, y);
}

Commande* Avancer::constructeurVirtuel() const {
    return new Avancer();
}

void Avancer::setArgs(std::vector<std::string> tokens) {
    x = stoi(tokens[1]);
    y = stoi(tokens[2]);
}
