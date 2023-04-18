#include "comandos.h"
#include <iostream>
#include <fstream>
#include <string.h>


using namespace std;

comandos comandos::consstructor(std::string comando){

    this->ruta=comando;

}



void cargar_comando ( string input ) {
	
    string nombre_archivo = input.substr(15);
                cout << "Opción elegida: cargar_comandos" << endl;
                cout << "Nombre de archivo: " << nombre_archivo << endl;
	

   // return comandos;


}

std::string comandos::getComando() const {
    return this->ruta;
}
