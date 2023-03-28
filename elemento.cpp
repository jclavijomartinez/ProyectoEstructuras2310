#include <iostream>
#include "elemento.h"

using namespace std;



//Constructor

elemento elemento::cosntructor(char tipo, double tamano, char unidad, int x, int y){

   this ->tipo_componente=tipo;
            this->tamano=tamano;
                this->unidad_medida=unidad;
                this->coord_x=x;
            this->coord_y=y;
}

void cargar_elemento( string input ) {
	
  char tipo_componente;
                double tamano;
                char unidad_medida;
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

   /*elemento elElemento= elemento::cosntructor(tipo_componente, tamano, coord_x, coord_y );*/

}