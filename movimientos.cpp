#include "movimientos.h"
#include <iostream>
#include <cstring>
#include <fstream>
#include <string.h>

using namespace std;


movimientos movimientos::constructor(std::string tipoMov,float magnitud, std::string uniMed){

    this->tipoMov=tipoMov;
    this->magnitud=magnitud;
    this->uniMed=uniMed;

}


void movimientos ::setTipoMov(std::string c){
	tipoMov=c;
}
void movimientos ::setMagnitud(float c){
	magnitud=c;
}
void movimientos ::setUniMed(std::string c){
	uniMed=c;
}

std::string movimientos ::getTipoMov(){
	return tipoMov;
}
float movimientos ::getMagnitud(){
	return magnitud;
}
std::string movimientos ::getUniMed(){
	return uniMed;
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

