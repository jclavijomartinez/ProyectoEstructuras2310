#ifndef ELEMENTO_H
#define ELEMENTO_H

#include <string>

class elemento {
private:
    string tipo_componente;
    double tamano;
    string unidad_medida;
    int coord_x, coord_y;

public:
  
  elemento cosntructor(string tipo, double tamano, string unidad, int x, int y);
    
    void cargar_elemento(std::string input);

    //Getters y Setters
    string getTipoComponente();
    double getTamano();
    string getUnidadMedida();
    int getCoordX();
    int getCoordY();
};

#endif