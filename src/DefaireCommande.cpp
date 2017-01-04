#include "DefaireCommande.h"
#include <typeinfo>

DefaireCommande DefaireCommande::d("DEFAIRECOMMANDE");

DefaireCommande::DefaireCommande(const std::string& s)
    : CommandeRobot(s)
{ }

DefaireCommande::DefaireCommande(Commande* commande)
    : commande(commande)
{ }

DefaireCommande::~DefaireCommande()
{ }

void DefaireCommande::executer()
{
    std::cout << commande << std::endl;
    commande->desexecuter();
}

void DefaireCommande::desexecuter() const
{
    commande->executer();
}

Commande* DefaireCommande::constructeurVirtuel() const
{
    return nullptr;
}
