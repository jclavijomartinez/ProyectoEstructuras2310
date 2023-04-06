#include "movimientos.h"
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;


movimientos movimientos::consstructor(string tipoMov,float magnitud, string uniMed){

    this->tipoMov=tipoMov;
    this->magnitud=magnitud;
    this->uniMed=uniMed;

}


void agregar_mov (std::string tipo_mov, double magnitud, std::string unidad_med) {

movimientos Movimiento= Movimiento.consstructor(tipo_mov, magnitud, unidad_med);
   
  if (tipo_mov == "avanzar" || tipo_mov == "girar") {
   
    Movimiento.push_back(Movimiento(tipo_mov, magnitud, unidad_med));
    std::cout << "Movimiento agregado correctamente" << std::endl;
  } else {
    std::cout << "Error: El tipo de movimiento debe ser 'avanzar' o 'girar'" << std::endl;
  }


/*	
	char tipo_movimiento = input[18];
                double magnitud ;
              //  magnitud= atof(strtok(input, " "));
                char unidad = input[input.find(" ", 20) + 1];

                cout << "Opción elegida: agregar_movimiento" << endl;

                if (tipo_movimiento != 'a' && tipo_movimiento != 'g') {
                    cout << "Tipo de movimiento inválido" << endl;
                    return;
                }

                if (magnitud <= 0 || magnitud > 100) {
                    cout << "Magnitud inválida" << endl;
                    return;
                }

                if (unidad != 'c' && unidad != 'm' && unidad != 'g') {
                    cout << "Unidad de medida inválida" << endl;
                    return;
                }

                cout << "Tipo de movimiento: " << tipo_movimiento << endl;
                cout << "Magnitud: " << magnitud << endl;
                cout << "Unidad de medida: " << unidad << endl;

*/

}



char movimientos::getTipoMov(){

return this->tipoMov;

}


    float movimientos::getMagnitud(){

return this->magnitud;

    }

    char movimientos::getUniMed(){

return this->uniMed;

    }

