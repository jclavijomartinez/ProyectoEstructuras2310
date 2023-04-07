#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H

#include <string>

class movimientos {
private:
   string tipoMov;
  float magnitud;
  string uniMed;

public:
  movimientos consstructor(string tipoMov, float magnitud, string uniMed);
    
   void agregar_mov (std::string input); //AGREGAR MOVIMIENTO

    //Getters y Setters
    string getTipoMov();
    float getMagnitud();
    string getUniMed();
};

#endif
