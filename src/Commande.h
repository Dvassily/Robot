#ifndef COMMANDE_H
#define COMMANDE_H

#include <map>
#include "Commande.h"

class Commande
{
 public:
    static std::map<std::string, Commande*> commandesInscrites; 
   
 public:
    virtual void executer() const = 0;
    virtual void setArgs(std::string args[]);
    virtual ~Commande();
};


#endif /* COMMANDE_H */





