#include <iostream>
#include "Robot.h"
#include "AfficheurTexte.h"

using namespace std;

int main(int argc, char *argv[])
{
    Robot r("EST");
    AfficheurTexte* afficheurTexte = new AfficheurTexte();
    r.attacherAfficheur(afficheurTexte);

    Objet o(7);
    
    r.afficher();
    r.saisir(o);
    r.figer();
    r.repartir();

    delete afficheurTexte;
    
    return 0;
}
