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





string movimientos::getTipoMov(){

return this->tipoMov;

}


    float movimientos::getMagnitud(){

return this->magnitud;

    }

    string movimientos::getUniMed(){

return this->uniMed;

    }

