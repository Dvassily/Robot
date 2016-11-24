#include <iostream>
#include "AfficheurTexte.h"

using namespace std;

AfficheurTexte::~AfficheurTexte() { }

void AfficheurTexte::afficher(const Robot& robot) const {
    cout << "Etat courant : " << robot.getNomEtat() << endl
	 << "Direction : " << robot.getDirection() << endl
	 << "Position : (" << robot.getPosition().getx() << ", " << robot.getPosition().gety() << ")" << endl;
    
    if (robot.getPlot() != nullptr)
	cout << "Face à un plot ( hauteur : " << robot.getPlot()->getHauteur() << ")" << endl;
    
    if (robot.getObjet() != nullptr)
	cout << "Possède un objet ( poids : " << robot.getObjet()->getPoids() << ")" << endl;

    cout << endl;
}
