#ifndef AVANCER_H
#define AVANCER_H

#include "CommandeRobot.h"

class Avancer : public CommandeRobot
{
 private:
    unsigned x;
    unsigned y;
    
 public:
    //Avancer(unsigned x, unsigned y);
    virtual ~Avancer();
    virtual void executer() const;
};

#endif /* AVANCER_H */
