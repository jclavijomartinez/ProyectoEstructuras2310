#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H

#include <string>

class movimientos
{
private:
   std::string tipoMov;
  float magnitud;
  std::string uniMed;

public:
  movimientos constructor(std::string tipoMov, float magnitud, std::string uniMed);
    
   void agregar_mov (std::string input); //AGREGAR MOVIMIENTO

    //Getters y Setters
	void setTipoMov(std::string c);
	void setMagnitud(float c);
	void setUniMed(std::string c);
	std::string getTipoMov();		
	float getMagnitud();		
	std::string getUniMed();
};

#endif
