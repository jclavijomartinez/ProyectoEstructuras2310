#include <iostream>
#include <string>
#include <sstream>
#include "movimientos.h"
#include "comandos.h"
#include "analisis.h"
#include "elemento.h"

using namespace std;

constexpr unsigned int str2int(const char* str, int h = 0)
{
    return !str[h] ? 5381 : (str2int(str, h+1) * 33) ^ str[h];
}

void imprimirSimbolo() {
  cout << "$ ";
}

//Prueba


int main() {
  std::string input;
    
    comandos elComando;
    movimientos elMov;
    analisis elAnal;
    elemento elElem;


  return 0;
}//Cierre Main