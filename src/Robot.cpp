#include <typeinfo>
#include <iostream>
#include "Robot.h"
#include "aVideFacePlot.h"
#include "WrongStateException.h"

Robot::Robot()
    : etat(new aVideFacePlot())
{ }

/*
void Robot::avancer(unsigned x, unsigned y){
    
}

void Robot::tourner(string direction y){

}
*/

void Robot::saisir(const Objet& o){
    try {
	etat = etat->saisir();
	this->o = o;
    } catch(const WrongStateException &e) {
	printf("-> %d\n", typeid(*etat) == typeid(aVideFacePlot));
	std::cout << e.what() << std::endl;
    }
}

/*
void Robot::poser(){

}


int Robot::peser(){

}


void Robot::rencontrerPlot(const Plot& p){

}


void Robot::evaluerPlot(const Plot& p){

}
*/

void Robot::figer(){
    try {
	etat = etat->figer();
    } catch(WrongStateException e) {
	std::cout << e.what() << std::endl;
    }
}


void Robot::repartir(){
    try {
	etat = etat->repartir();
    } catch(WrongStateException e) {
	std::cout << e.what() << std::endl;
    }
}


void Robot::afficher(){
    
}
