#include "Peser.h"

Peser Peser::p("PESER");

Peser::Peser(const std::string& s)
    : CommandeRobot(s)
{ }

Peser::Peser()
{ }

Peser::~Peser()
{ }

void Peser::executer()
{
    robot->peser();
}

void Peser::desexecuter() const {
    
}

Commande* Peser::constructeurVirtuel() const {
    return new Peser();
}
