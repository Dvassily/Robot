#include "RencontrerPlot.h"

RencontrerPlot::RencontrerPlot(Robot& r, Plot& p)
    : CommandeRobot(r), plot(p)
{ }

RencontrerPlot::~RencontrerPlot()
{ }


void RencontrerPlot::executer() const
{
    robot.rencontrerPlot(plot);
}
