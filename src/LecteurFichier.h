#ifndef __LECTEURFICHIER_H__
#define __LECTEURFICHIER_H__

#include "Robot.h"

class LecteurFichier {
 private:
    Robot& robot;
    const std::string filePath;
    const std::map<std::string, Plot*> &plots;
    const std::map<std::string, Objet*> &objets;
    
 public:
    LecteurFichier(Robot& robot,
		   const std::string& filePath,
		   const std::map<std::string, Plot*> &plots,
		   const std::map<std::string, Objet*> &objets);
    void lireFichier() const;
};

#endif // __LECTEURFICHIER_H__
