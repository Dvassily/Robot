#ifndef PESER_H
#define PESER_H

#include "CommandeRobot.h"

class Peser : public CommandeRobot
{
public:
    Peser(Robot& r);
    virtual ~Peser();
    virtual void executer() const;
};


#endif /* PESER_H */
