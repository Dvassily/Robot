#include "RencontrerPlot.h"
#include "Objet.h"
#include "DefaireException.h"

RencontrerPlot RencontrerPlot::rp("RENCONTRERPLOT");

RencontrerPlot::RencontrerPlot(const std::string& s)
    : CommandeRobot(s)
{ }

RencontrerPlot::~RencontrerPlot()
{ }

RencontrerPlot::RencontrerPlot()
{ }

void RencontrerPlot::executer()
{
    this->oldPlot = robot->getPlot();
    robot->rencontrerPlot(*plot);
}

void RencontrerPlot::desexecuter() const {
    throw DefaireException("RENCONTRERPLOT");
}

Commande* RencontrerPlot::constructeurVirtuel() const {
    return new RencontrerPlot();
}

void RencontrerPlot::setArgs(std::vector<std::string> tokens,
			    const std::map<std::string, Plot*> &plots,
			    const std::map<std::string, Objet*> &objets) {
    std::string key = tokens[1];

    if (plots.find(tokens[1]) != plots.end())
	this->plot = plots.at(key);
}
