#ifndef COMMANDEROBOT_H
#define COMMANDEROBOT_H

#include "Robot.h"
#include "Commande.h"

class CommandeRobot : public Commande
{
protected:
    Robot* robot;
    
public:
    CommandeRobot();
    CommandeRobot(const std::string& s);
    virtual ~CommandeRobot();
    virtual void executer() const = 0;
    virtual void setArgs(std::vector<std::string> tokens,
			 const std::map<std::string, Plot*> &plots,
			 const std::map<std::string, Objet*> &objets);
    void setRobot(Robot& robot);
};


#endif /* COMMANDEROBOT_H */
