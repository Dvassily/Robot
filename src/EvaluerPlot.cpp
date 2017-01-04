#include "EvaluerPlot.h"

EvaluerPlot EvaluerPlot::ep("EVALUERPLOT");

EvaluerPlot::EvaluerPlot(const std::string& s)
    : CommandeRobot(s)
{ }

EvaluerPlot::EvaluerPlot()
{ }

EvaluerPlot::~EvaluerPlot()
{ }

void EvaluerPlot::executer()
{
    robot->evaluerPlot();
}

void EvaluerPlot::desexecuter() const {
    
}

Commande* EvaluerPlot::constructeurVirtuel() const {
    return new EvaluerPlot();
}
