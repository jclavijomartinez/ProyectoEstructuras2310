#include "movimientos.h"
#include <iostream>

using namespace std;

/*
movimientos consstructor(char tipoMov,float magnitud, char uniMed){

    this->tipoMov=tipoMov;
    this->magnitud=magnitud;
    this->uniMed=uniMed;

}
*/

void agregar_mov (  string input ) {
	
	char tipo_movimiento = input[18];
                double magnitud = stod(input.substr(20, input.find(" ", 20) - 20));
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


/*movimientos elMovimiento= movimientos::consstructor(tipo_movimiento, magnitud, unidad);*/


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

