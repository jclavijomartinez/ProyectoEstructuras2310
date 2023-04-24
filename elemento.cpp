#include <iostream>
#include "elemento.h"
#include <string.h>

using namespace std;



//Constructor

elemento elemento::constructor(string tipo, double tamano, string unidad, int x, int y){

   this ->tipo_componente=tipo;
            this->tamano=tamano;
                this->unidad_medida=unidad;
                this->coord_x=x;
            this->coord_y=y;
}


void cargar_elemento( string input ) {
	/*
  string tipo_componente;
                double tamano;
                string unidad_medida;
                int coord_x, coord_y;

    sscanf(input.c_str(), "%*c %c %lf %c %d %d", &tipo_componente, &tamano, &unidad_medida, &coord_x, &coord_y); //Separar el string
	

    if(tipo_componente == 'r' || tipo_componente == 'c' || tipo_componente == 'm' || tipo_componente == 'd'){
        if(tamano <= 100){
            if(unidad_medida == 'c' || unidad_medida == 'm'){
                if(coord_x >= 0 && coord_x <= 300 && coord_y >= 0 && coord_y <= 300){
                    // Aquí puedes agregar la lógica para agregar el elemento al sistema
                    cout << "Elemento agregado exitosamente" << endl;
                }
                else{
                    cout << "Coordenadas invalidas, deben ser entre 0 y 300" << endl;
                }
            }
            else{
                cout << "Unidad de medida invalida, solo se acepta c para centimetros y m para metros" << endl;
            }
        }
        else{
            cout << "Tamano invalido, debe ser menor o igual a 100" << endl;
        }
    }
    else{
        cout << "Tipo de componente invalido, solo se acepta r para Roca, c para Crater, m para Monticulo y d para Duna" << endl;
    }

   /*elemento elElemento= elemento::constructor(tipo_componente, tamano, coord_x, coord_y );*/



}

std::string elemento::getTipoComponente(){
return this->tipo_componente;
}
  double elemento::getTamano(){
return this->tamano;
  }
   std::string elemento::getUnidadMedida(){
return this->unidad_medida;
   }
  int elemento::getCoordX(){
return this->coord_x;
  }
  int elemento::getCoordY(){
return this->coord_y;
  }

void elemento::setTipo(std::string elTipo){

    tipo_componente=elTipo;
 
}
     void elemento::setTamano(double eltamano){
        tamano=eltamano;
     }
     void elemento::setUnidad(std::string laUni){
        unidad_medida =laUni;
     }
      void elemento::setCoordX(int laX){
        coord_x=laX;
     }
     void elemento::setCoordY(int laY){
        coord_y =laY;
     }