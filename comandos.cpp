#include "comandos.h"
#include <iostream>
#include <list>
#include <string>
#include <sstream>

using namespace std;

comandos comandos::consstructor(std::string comando){

    this->comando=comando;

}



void cargar_comando ( string input ) {
	
    string nombre_archivo = input.substr(15);
                cout << "Opción elegida: cargar_comandos" << endl;
                cout << "Nombre de archivo: " << nombre_archivo << endl;
	
//Introducir logica de cargar todos los comandos con archivos
list<string> comandos;

    // Abrir archivo
    std::ifstream archivo(nombre_archivo);
    if (!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo " << nombre_archivo << endl;
        //return comandos;
    }

    // Leer cada línea del archivo y agregarla al vector
    string linea;
    while (getline(archivo, linea)) {
        comandos.push_back(linea);
    }

    // Cerrar archivo
    archivo.close();

   // return comandos;


}

std::string comandos::getComando() const {
    return this->comando;
}
