#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iterator>
#include <map>
#include "LecteurFichier.h"
#include "Commande.h"
#include "Saisir.h"
#include "Figer.h"
#include "Repartir.h"
#include "Avancer.h"
#include "Tourner.h"
#include "RencontrerPlot.h"
#include "AfficheurTexte.h"
#include "Poser.h"
#include "Peser.h"
#include "EvaluerPlot.h"
#include "DefaireCommande.h"
#include "DefaireException.h"

using namespace std;

LecteurFichier::LecteurFichier(Robot& robot,
			       const string& filePath,
			       const std::map<std::string, Plot*> &plots,
			       const std::map<std::string, Objet*> &objets)
    : robot(robot),
      filePath(filePath),
      plots(plots),
      objets(objets)
{ }

void LecteurFichier::lireFichier() {
    Plot plot(3);
    Objet objet(5);
    
    ifstream ifs(filePath);

    string line;

    while (getline(ifs, line)) {
	vector<string> command;
	istringstream iss(line);

	copy(istream_iterator<string>(iss),
	     istream_iterator<string>(),
	     back_inserter(command));

	CommandeRobot* c = nullptr;
	
	if (command[0] != "DEFAIRE") {
	    c = (CommandeRobot*) Commande::nouvelleCommande(command[0]);
	} else {
	    c = new DefaireCommande(history.back());
	    history.pop_back();
	}

	if (c != nullptr) {
	    c->setRobot(robot);
	    c->setArgs(command, plots, objets);

	    try {
		c->executer();
	    } catch(DefaireException& e) {
		std::cout << e.what() << std::endl;
	    }

	    if (command[0] != "DEFAIRE")
		history.push_back(c);
	}
    }

}
