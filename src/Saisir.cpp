#include "Saisir.h"

Saisir Saisir::s("SAISIR");

Saisir::Saisir(const std::string& s)
    : CommandeRobot(s)
{ }

Saisir::Saisir()
{ }

Saisir::~Saisir()
{ }

void Saisir::executer()
{
    robot->saisir(*objet);
}

void Saisir::desexecuter() const {
    robot->poser();
}

Commande* Saisir::constructeurVirtuel() const {
    return new Saisir();
}

void Saisir::setArgs(std::vector<std::string> tokens,
		     const std::map<std::string, Plot*> &plots,
		     const std::map<std::string, Objet*> &objets) {
    std::string key = tokens[1];
    if (objets.find(tokens[1]) != objets.end())
	this->objet = objets.at(key);
}
