#ifndef __PLOT_H__
#define __PLOT_H__

#include "Objet.h"

class Plot
{
 private:
    int hauteur;
    Objet* objet;
    
 public:
    Plot(int hauteur, Objet* objet);
    Plot(int hauteur);
    int getHauteur() const; 
};

#endif // __PLOT_H__
