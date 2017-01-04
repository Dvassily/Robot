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

void Avancer::executer()
{
    this->position = robot->getPosition();
    robot->avancer(x, y);
}

void Avancer::desexecuter() const {
    std::cout << "AvDes" << std::endl;
    robot->setPosition(this->position);
    robot->afficher();
}

Commande* Avancer::constructeurVirtuel() const {
    return new Avancer();
}

void Avancer::setArgs(std::vector<std::string> tokens,
		      const std::map<std::string, Plot*> &plots,
		      const std::map<std::string, Objet*> &objets) {
    x = stoi(tokens[1]);
    y = stoi(tokens[2]);
}
