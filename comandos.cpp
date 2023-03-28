#include "comandos.h"
#include <iostream>

using namespace std;

comandos comandos::consstructor(std::string comando){

    this->comando=comando;

}



void cargar_comando ( string input ) {
	
    string nombre_archivo = input.substr(15);
                cout << "Opción elegida: cargar_comandos" << endl;
                cout << "Nombre de archivo: " << nombre_archivo << endl;
	
//Introducir logica de cargar todos los comandos con archivos



}

std::string comandos::getComando() const {
    return this->comando;
}
