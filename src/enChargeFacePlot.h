#ifndef __ENCHARGEFACEPLOT_H__
#define __ENCHARGEFACEPLOT_H__

#include "EnRoute.h"

class enChargeFacePlot : public EnRoute {
 private:
    static enChargeFacePlot* instance;
    
 public:
    virtual std::string getNomEtat() const;
    static enChargeFacePlot* getInstance();
};

#endif // __ENCHARGEFACEPLOT_H__
