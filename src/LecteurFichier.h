#ifndef __LECTEURFICHIER_H__
#define __LECTEURFICHIER_H__

#include "Robot.h"

class LecteurFichier {
 private:
    Robot& robot;
    const std::string filePath;
    
 public:
    LecteurFichier(Robot& robot, const std::string& filePath);
    void lireFichier() const;
};

#endif // __LECTEURFICHIER_H__
