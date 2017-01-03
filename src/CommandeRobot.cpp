#include "CommandeRobot.h"

CommandeRobot::CommandeRobot(Robot& robot)
    : robot(&robot)
{ }

CommandeRobot::CommandeRobot()
{ }

CommandeRobot::~CommandeRobot()
{ }

void CommandeRobot::setRobot(Robot& robot)
{
    this->robot = &robot;
}
