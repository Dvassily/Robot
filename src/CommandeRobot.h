#ifndef COMMANDEROBOT_H
#define COMMANDEROBOT_H

#include "Robot.h"
#include "Commande.h"

class CommandeRobot : public Commande
{
protected:
    Robot& robot;
    
public:
    CommandeRobot(Robot& robot);
    virtual ~CommandeRobot();
    virtual void executer() const = 0;
};


#endif /* COMMANDEROBOT_H */
