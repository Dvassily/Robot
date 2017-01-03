#include "RencontrerPlot.h"
#include "Objet.h"

Plot RencontrerPlot::plot(5, new Objet(3));

RencontrerPlot::~RencontrerPlot()
{ }


void RencontrerPlot::executer() const
{
    robot->rencontrerPlot(plot);
}
