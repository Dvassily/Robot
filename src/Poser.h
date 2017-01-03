#ifndef POSER_H
#define POSER_H

#include "CommandeRobot.h"

class Poser : public CommandeRobot
{
 private:
    static Poser p;
    
public:
    Poser(const std::string& s);
    Poser();
    virtual ~Poser();
    virtual void executer() const;
    virtual Commande* constructeurVirtuel() const;
};


#endif /* POSER_H */
