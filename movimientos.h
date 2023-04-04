#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H

#include <string>

class movimientos {
private:
   char tipoMov;
  float magnitud;
  char uniMed;

public:
   movimientos(char tipoMov, float magnitud, char uniMed);
    
   void agregar_mov (std::string input); //AGREGAR MOVIMIENTO

    //Getters y Setters
    char getTipoMov();
    float getMagnitud();
    char getUniMed();
};

#endif
