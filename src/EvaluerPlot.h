#ifndef EVALUERPLOT_H
#define EVALUERPLOT_H

#include "CommandeRobot.h"

class EvaluerPlot : public CommandeRobot
{
 private:
    static EvaluerPlot ep;
    
public:
    EvaluerPlot(const std::string& s);
    EvaluerPlot();
    virtual ~EvaluerPlot();
    virtual void executer() const;
    virtual Commande* constructeurVirtuel() const;
};


#endif /* EVALUERPLOT_H */
