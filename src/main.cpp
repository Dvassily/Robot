#include <iostream>
#include "Robot.h"

using namespace std;

int main(int argc, char *argv[])
{
    Robot r;
    Objet o;

    r.saisir(o);
    //assert(typeid(*(r.etat)) == typeid(enChargeFacePlot));
    r.figer();
    r.repartir();
    //r.test();

    
    return 0;
}
