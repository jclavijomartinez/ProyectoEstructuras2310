#include "comandos.h"
#include <iostream>
#include <fstream>
#include <string.h>


using namespace std;

comandos comandos::consstructor(std::string comando){

    this->ruta=comando;

}



std::string comandos::getComando() const {
    return this->ruta;
}

void comandos::setComando(std::string laruta) {
    ruta = laruta;
}