#ifndef PESER_H
#define PESER_H

#include "CommandeRobot.h"

class Peser : public CommandeRobot
{
 private:
    static Peser p;
    
 public:
    Peser(const std::string& s);
    Peser();
    virtual ~Peser();
    virtual void executer();
    virtual void desexecuter() const;
    virtual Commande* constructeurVirtuel() const;
};


#endif /* PESER_H */
