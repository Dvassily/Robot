#ifndef RENCONTRERPLOT_H
#define RENCONTRERPLOT_H

#include "CommandeRobot.h"

class RencontrerPlot : public CommandeRobot
{
 private:
    static Plot plot;

    
 public:
    virtual ~RencontrerPlot();
    virtual void executer() const;
};

#endif /* RENCONTRERPLOT_H */
