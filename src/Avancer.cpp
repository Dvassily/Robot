#include "Avancer.h"
#include "Commande.h"
/*
Avancer::Avancer(unsigned x, unsigned y)
    : x(x), y(y)
{ }
*/
Avancer::~Avancer()
{ }


void Avancer::executer() const
{
    robot->avancer(0, 0);
}
