#ifndef RENCONTRERPLOT_H
#define RENCONTRERPLOT_H

#include "CommandeRobot.h"

class RencontrerPlot : public CommandeRobot
{
 private:
    static RencontrerPlot rp;
    Plot *plot;
    
 public:
    RencontrerPlot(const std::string& s);
    RencontrerPlot();
    virtual ~RencontrerPlot();
    virtual void executer();
    virtual void desexecuter() const;
    virtual Commande* constructeurVirtuel() const;
    virtual void setArgs(std::vector<std::string> tokens,
			 const std::map<std::string, Plot*> &plots,
			 const std::map<std::string, Objet*> &objets);
};

#endif /* RENCONTRERPLOT_H */
