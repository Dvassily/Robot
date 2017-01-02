#ifndef TOURNER_H
#define TOURNER_H

#include "CommandeRobot.h"

class Tourner : public CommandeRobot
{
 private:
    std::string direction;
    
 public:
    Tourner(Robot &r, std::string direction);
    virtual ~Tourner();
    virtual void executer() const;
};

#endif /* TOURNER_H */
