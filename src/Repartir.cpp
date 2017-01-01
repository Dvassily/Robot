#include "Repartir.h"

Repartir::Repartir(Robot& r)
    : CommandeRobot(r)
{ }


Repartir::~Repartir()
{ }


void Repartir::executer() const
{
    robot.repartir();
}

