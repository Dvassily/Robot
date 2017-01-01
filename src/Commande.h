
#ifndef COMMANDE_H
#define COMMANDE_H

class Commande
{
public:
    virtual void executer() const = 0;
    virtual ~Commande();
};


#endif /* COMMANDE_H */





