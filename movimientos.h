#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H

#include <string>

class movimientos
{
private:
   std::string tipoMov;
  float magnitud;
  string uniMed;

public:
  movimientos constructor(string tipoMov, float magnitud, string uniMed);
    
   void agregar_mov (std::string input); //AGREGAR MOVIMIENTO

    //Getters y Setters
    movimientos(std::string c, float f, std::string a);
	void setTipoMov(std::string c);
	void setMagnitud(float c);
	void setUniMed(std::string c);
	std::string getTipoMov();		
	float getMagnitud();		
	std::string getUniMed();
};

movimientos::movimientos(std::string c, float f, std::string a){
	tipoMov=c;
	magnitud=f;
	uniMed=a;
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


#endif
