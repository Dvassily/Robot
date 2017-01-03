#ifndef EVALUERPLOT_H
#define EVALUERPLOT_H

#include "CommandeRobot.h"

class EvaluerPlot : public CommandeRobot
{
public:
    virtual ~EvaluerPlot();
    virtual void executer() const;
};


#endif /* EVALUERPLOT_H */
