#include "EvaluerPlot.h"

EvaluerPlot EvaluerPlot::ep("EVALUERPLOT");

EvaluerPlot::EvaluerPlot(const std::string& s)
    : CommandeRobot(s)
{ }

EvaluerPlot::EvaluerPlot()
{ }

EvaluerPlot::~EvaluerPlot()
{ }

void EvaluerPlot::executer() const
{
    robot->evaluerPlot();
}

Commande* EvaluerPlot::constructeurVirtuel() const {
    return new EvaluerPlot();
}
