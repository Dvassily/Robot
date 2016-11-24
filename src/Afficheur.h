#ifndef __AFFICHEUR_H__
#define __AFFICHEUR_H__

#include "Robot.h"

class Robot;

class Afficheur {
 public:
    virtual void afficher(const Robot& robot) const = 0;
};

#endif // __AFFICHEUR_H__
