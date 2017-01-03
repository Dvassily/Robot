#include <iostream>
#include "Commande.h"
#include "Avancer.h"

std::map<std::string, Commande*> Commande::commandesInscrites; 

Commande::~Commande()
{
}

void Commande::setArgs(std::string args[]) {

}
