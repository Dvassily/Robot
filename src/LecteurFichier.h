#ifndef __LECTEURFICHIER_H__
#define __LECTEURFICHIER_H__

#include <list>
#include "Robot.h"
#include "Commande.h"

class LecteurFichier {
 private:
    Robot& robot;
    const std::string filePath;
    const std::map<std::string, Plot*> &plots;
    const std::map<std::string, Objet*> &objets;
    std::list<Commande*> history;
    
 public:
    LecteurFichier(Robot& robot,
		   const std::string& filePath,
		   const std::map<std::string, Plot*> &plots,
		   const std::map<std::string, Objet*> &objets);
    void lireFichier();
};

#endif // __LECTEURFICHIER_H__
