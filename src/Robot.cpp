#include "Robot.h"

void Robot::avancer(unsigned x, unsigned y){
    
}
/*
void Robot::tourner(string direction y){

}
*/

void Robot::saisir(const Objet& O){

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

}


void Robot::repartir(){

}


void Robot::afficher(){

}

/*
	Surcharge de l'opérateur d'affichage
*/
std::ostream& operator<<(std::ostream&os, const Person& p){

    os<<"Robot :";

    return os;
}
