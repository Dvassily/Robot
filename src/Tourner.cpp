#include "Tourner.h"
/*
Tourner::Tourner(std::string d)
    : direction(d)
{ }
*/
Tourner::~Tourner()
{ }

void Tourner::executer() const
{
    //robot->tourner(direction);
    robot->tourner("EST");
}
