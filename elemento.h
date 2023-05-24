#ifndef ELEMENTO_H
#define ELEMENTO_H

#include <string>

class elemento
{
private:
   std::string tipo_componente;
  double tamano;
   std::string unidad_medida;
  float coord_x, coord_y;

public:
  elemento constructor( std::string tipo, double tamano,  std::string unidad, float x, float y);
  elemento consstructor(elemento);

  void cargar_elemento( std::string input);

  // Getters y Setters
   std::string getTipoComponente();
  double getTamano();
   std::string getUnidadMedida();
  float getCoordX();
  float getCoordY();

      void setTipo(std::string elTipo);
     void setTamano(double tamano);
     void setUnidad(std::string laUni);
     void setCoordX(float laX);
     void setCoordY(float laY);
     
};

#endif