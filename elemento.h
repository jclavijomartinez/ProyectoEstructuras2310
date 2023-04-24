#ifndef ELEMENTO_H
#define ELEMENTO_H

#include <string>

class elemento
{
private:
   std::string tipo_componente;
  double tamano;
   std::string unidad_medida;
  int coord_x, coord_y;

public:
  elemento constructor( std::string tipo, double tamano,  std::string unidad, int x, int y);
  elemento constructor(elemento);

  void cargar_elemento( std::string input);

  // Getters y Setters
   std::string getTipoComponente();
  double getTamano();
   std::string getUnidadMedida();
  int getCoordX();
  int getCoordY();

      void setTipo(std::string elTipo);
     void setTamano(double tamano);
     void setUnidad(std::string laUni);
     void setCoordX(int laX);
     void setCoordY(int laY);
     
};

#endif