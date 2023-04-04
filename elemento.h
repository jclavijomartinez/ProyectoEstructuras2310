#ifndef ELEMENTO_H
#define ELEMENTO_H

#include <string>

class elemento {
private:
    char tipo_componente;
    double tamano;
    char unidad_medida;
    int coord_x, coord_y;

public:
  
   elemento elemento::cosntructor(char tipo, double tamano, char unidad, int x, int y);
    
    void cargar_elemento(std::string input);

    //Getters y Setters
    char getTipoComponente();
    double getTamano();
    char getUnidadMedida();
    int getCoordX();
    int getCoordY();
};

#endif