#include <iostream>
#include "Commande.h"
#include "Avancer.h"

//std::map<std::string, Commande*> Commande::commandesInscrites; 

std::map<std::string, Commande*>& Commande::commandesInscrites() {
    static std::map<std::string, Commande*> map;
    return map;
}

Commande::Commande()
{ }
    
Commande::Commande(const std::string& s) {
    commandesInscrites()[s] = this;
}

Commande::~Commande() {
}

void Commande::setArgs(std::string args[]) {

}

Commande* Commande::nouvelleCommande(const std::string& s) {
    if (commandesInscrites().find(s) != commandesInscrites().end())
	return Commande::commandesInscrites()[s]->constructeurVirtuel();
    return nullptr;
}


