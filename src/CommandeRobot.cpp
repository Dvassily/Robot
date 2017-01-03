#include "CommandeRobot.h"

CommandeRobot::CommandeRobot(const std::string& s)
    : Commande(s)
{ }

CommandeRobot::CommandeRobot()
{ }

CommandeRobot::~CommandeRobot()
{ }

void CommandeRobot::setRobot(Robot& robot)
{
    this->robot = &robot;
}

void CommandeRobot::setArgs(std::vector<std::string> tokens,
			    const std::map<std::string, Plot*> &plots,
			    const std::map<std::string, Objet*> &objets) {
    
}
