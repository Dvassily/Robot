#include "Figer.h"

Figer::Figer(Robot& r)
    : CommandeRobot(r)
{ }


Figer::~Figer()
{ }


void Figer::executer() const
{
    robot.figer();
}

