#ifndef AVANCER_H
#define AVANCER_H

#include "CommandeRobot.h"

class Avancer : public CommandeRobot
{
 private:
    static Avancer a;
    unsigned x;
    unsigned y;
    
 public:
    Avancer(const std::string& s);
    Avancer();
    virtual ~Avancer();
    virtual void executer() const;
    virtual Commande* constructeurVirtuel() const;
    virtual void setArgs(std::vector<std::string> tokens);
};

#endif /* AVANCER_H */
