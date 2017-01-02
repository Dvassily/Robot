#include "EvaluerPlot.h"

EvaluerPlot::EvaluerPlot(Robot& r)
    : CommandeRobot(r)
{ }


EvaluerPlot::~EvaluerPlot()
{ }


void EvaluerPlot::executer() const
{
    robot.evaluerPlot();
}

