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

  void agregar_mov(std::string input); // AGREGAR MOVIMIENTO

  // Getters y Setters
   std::string getTipoMov();
  float getMagnitud();
   std::string getUniMed();

   void setTipoMov(std::string elTipoM);
     void setMagnitud(double laMagnitud);
     void setUniMed(std::string laUniMed);
};

#endif
