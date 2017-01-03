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

	CommandeRobot* c = nullptr;
	
	if(command[0] == "SAISIR") {
	    c = new Saisir(objet);
	} else if (command[0] == "FIGER") {
	    c = new Figer();
	} else if (command[0] == "REPARTIR") {
	    c = new Repartir();
	} else if (command[0] == "AVANCER") {
	    //c = new Avancer(stoi(command[1]), stoi(command[2]));
	    c = new Avancer();
	} else if (command[0] == "TOURNER") {
	    //c = new Tourner(command[1]);
	    c = new Tourner();
	} else if (command[0] == "POSER") {
	    c = new Poser();
	} else if (command[0] == "PESER") {
	    c = new Peser();
	} else if (command[0] == "RENCONTRERPLOT") {
	    c = new RencontrerPlot();
	} else if (command[0] == "EVALUERPLOT") {
	    c = new EvaluerPlot();
	} else {
	    cerr << "UNKNOWN COMMAND" << endl;
	    return;
	}

	if (c != nullptr) {
	    c->setRobot(robot);
	    c->executer();
	    delete c;
	}
    }
}
