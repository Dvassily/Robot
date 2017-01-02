#include "Tourner.h"

Tourner::Tourner(Robot& r, std::string d)
    : CommandeRobot(r), direction(d)
{ }

Tourner::~Tourner()
{ }

void Tourner::executer() const
{
    robot.tourner(direction);
}
