#include "movimientos.h"
#include <iostream>
#include <cstring>
#include <fstream>
#include <string.h>

using namespace std;


movimientos movimientos::consstructor(std::string tipoMov,float magnitud, std::string uniMed){

    this->tipoMov=tipoMov;
    this->magnitud=magnitud;
    this->uniMed=uniMed;

}




string movimientos::getTipoMov(){

return this->tipoMov;

}


    float movimientos::getMagnitud(){

return this->magnitud;

    }

    string movimientos::getUniMed(){

return this->uniMed;

    }

    void movimientos::setTipoMov(std::string elTipoM){
    tipoMov=elTipoM;

    }
     void movimientos::setMagnitud(double laMagnitud){
magnitud=laMagnitud;
     }
     void movimientos::setUniMed(std::string laUniMed){
uniMed=laUniMed;
     }

