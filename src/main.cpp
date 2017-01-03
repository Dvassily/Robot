#include <iostream>
#include "Robot.h"
#include "AfficheurTexte.h"
#include "Commande.h"
#include "LecteurFichier.h"

using namespace std;

int main(int argc, char *argv[])
{
    Robot r("E");
    AfficheurTexte* afficheurTexte = new AfficheurTexte();
    r.attacherAfficheur(afficheurTexte);
    
    map<string, Plot*> plots;
    plots["P1"] = new Plot(15);
    map<string, Objet*> objets;
    objets["O1"] = new Objet(25);
    //LecteurFichier lecteur(r, "commandes.txt", plots, objets);
    LecteurFichier lecteur(r, "commandes.txt", plots, objets);
    lecteur.lireFichier();
    /*
    Plot p(3);
    Objet o(7);
    r.avancer(2, 2);
    r.rencontrerPlot(p);
    r.tourner("W");
    r.rencontrerPlot(p);
    r.evaluerPlot(p);
    r.saisir(o);
    r.poser();
    r.saisir(o);
    r.evaluerPlot(p);
    r.tourner("S");
    r.avancer(3, 3);
    r.tourner("N");
    r.peser();
    r.rencontrerPlot(p);
    r.poser();
    r.figer();
    r.repartir();
    r.tourner("E");
    */

    delete afficheurTexte;

    return 0;
}
