#include "Avancer.h"

Avancer::Avancer(Robot &r, unsigned x, unsigned y)
    : CommandeRobot(r), x(x), y(y)
{ }

Avancer::~Avancer()
{ }


void Avancer::executer() const
{
    robot.avancer(x, y);
}
