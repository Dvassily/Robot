#include <iostream>
#include "Robot.h"
#include "AfficheurTexte.h"

using namespace std;

int main(int argc, char *argv[])
{
    Robot r;
    r.attacherAfficheur(new AfficheurTexte());
    Objet o(7);
    
    r.afficher();
    r.saisir(o);
    r.figer();
    r.repartir();
    
    return 0;
}
