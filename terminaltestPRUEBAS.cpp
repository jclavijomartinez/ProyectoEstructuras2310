#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
// #include "movimientos.h"
// #include "comandos.h"
// #include "analisis.h"
// #include "elemento.h"
// #include "curiosity.h"
#include "curiosity.cpp"

using namespace std;

void imprimirSimbolo()
{
  cout << "$ ";
}

string queQuiereConsola(string input)
{
  istringstream iss(input);
  string loQueQuiere;
  iss >> loQueQuiere;
  return loQueQuiere;
}

int main()
{

  string input;
  string funcion;
  curiosity jorgeElCurioso;
  while (true)
  {
    // Conseguir la linea de comandos
    imprimirSimbolo();
    getline(cin, input);

    // Conseguir identificar lo que quiere la consola
    funcion = queQuiereConsola(input);

    if (funcion == "cargar_comandos"){
      
    }
    if (funcion == "cargar_elementos"){

    }
    if (funcion == "agregar_movimiento")
    {
      //jorgeElCurioso.testfun();
      jorgeElCurioso.agregar_movimiento(input);
    }
    if (funcion == "agregar_analisis")
    {
      // jorgeElCurioso.listAnalisis.push_back(jorgeElCurioso.agregar_analisis(input));
    }

    if (funcion == "agregar_elemento")
    {
      // jorgeElCurioso.listElem.push_back(jorgeElCurioso.agregar_elemento(input));
    }
    if (funcion == "guardar"){

    }

    if (input == "salir")
      break;
  }
  return 0;
} // Cierre Main
//test commnet A