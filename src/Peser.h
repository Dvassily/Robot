#ifndef PESER_H
#define PESER_H

#include "CommandeRobot.h"

class Peser : public CommandeRobot
{
public:
    virtual ~Peser();
    virtual void executer() const;
};


#endif /* PESER_H */
