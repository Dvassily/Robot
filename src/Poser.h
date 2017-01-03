#ifndef POSER_H
#define POSER_H

#include "CommandeRobot.h"

class Poser : public CommandeRobot
{
public:
    virtual ~Poser();
    virtual void executer() const;
};


#endif /* POSER_H */
