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
#include "AfficheurTexte.h"

using namespace std;

LecteurFichier::LecteurFichier(Robot& robot, const string& filePath)
    : robot(robot), filePath(filePath)
{ }

void LecteurFichier::lireFichier() const {
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

	Commande* c = nullptr;
	
	if(command[0] == "SAISIR") {
	    c = new Saisir(robot, objet);
	} else if (command[0] == "FIGER") {
	    c = new Figer(robot);
	} else if (command[0] == "REPARTIR") {
	    c = new Repartir(robot);
	} else {
	    cerr << "ERROR" << endl;
	    return;
	}

	if (c != nullptr) {
	    c->executer();
	    delete c;
	}
    }
}
