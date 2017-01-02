#ifndef RENCONTRERPLOT_H
#define RENCONTRERPLOT_H

#include "CommandeRobot.h"

class RencontrerPlot : public CommandeRobot
{
 private:
    Plot& plot;
    
 public:
    RencontrerPlot(Robot &r, Plot& plot);
    virtual ~RencontrerPlot();
    virtual void executer() const;
};

#endif /* RENCONTRERPLOT_H */
