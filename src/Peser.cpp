#include "Peser.h"

Peser::Peser(Robot& r)
    : CommandeRobot(r)
{ }


Peser::~Peser()
{ }


void Peser::executer() const
{
    robot.peser();
}

