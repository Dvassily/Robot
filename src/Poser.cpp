#include "Poser.h"

Poser::Poser(Robot& r)
    : CommandeRobot(r)
{ }


Poser::~Poser()
{ }


void Poser::executer() const
{
    robot.poser();
}

