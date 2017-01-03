#include "RencontrerPlot.h"
#include "Objet.h"

RencontrerPlot RencontrerPlot::rp("RENCONTRERPLOT");

RencontrerPlot::RencontrerPlot(const std::string& s)
    : CommandeRobot(s)
{ }

RencontrerPlot::~RencontrerPlot()
{ }

RencontrerPlot::RencontrerPlot()
{ }

void RencontrerPlot::executer() const
{
    robot->rencontrerPlot(*plot);
}

Commande* RencontrerPlot::constructeurVirtuel() const {
    return new RencontrerPlot();
}

void RencontrerPlot::setArgs(std::vector<std::string> tokens,
			    const std::map<std::string, Plot*> &plots,
			    const std::map<std::string, Objet*> &objets) {
    std::cout << tokens[0] << std::endl;
    std::string key = tokens[1];

    if (plots.find(tokens[1]) != plots.end())
	this->plot = plots.at(key);
}
