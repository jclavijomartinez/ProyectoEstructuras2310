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
    //jorgeElCurioso.testfun();

    // Conseguir identificar lo que quiere la consola
    funcion = queQuiereConsola(input);

    if (funcion == "cargar_comandos"){
      jorgeElCurioso.cargar_comandos(input);
    }
    if (funcion == "cargar_elementos"){
      jorgeElCurioso.cargar_elementos(input);
    }
    if (funcion == "agregar_movimiento")
    {
      jorgeElCurioso.agregar_movimiento(input);
    }
    if (funcion == "agregar_analisis")
    {
       jorgeElCurioso.listAnalisis.push_back(jorgeElCurioso.agregar_analisis(input));
    }

    if (funcion == "agregar_elemento")
    {
      jorgeElCurioso.listElem.push_back(jorgeElCurioso.agregar_elemento(input));
    }
    if (funcion == "guardar"){
      //jorgeElCurioso.guardar(input);
    }
    if (funcion == "ayuda"){
      jorgeElCurioso.ayuda(input);
    }

    if (funcion == "ubicar_elemento"){
      
      list<elemento> elem;
      elem.splice(elem.end(),jorgeElCurioso.listElem);
  for (auto& elemen : elem) {
    if (!jorgeElCurioso.arbol.insertar(elemen)) {
      std::cout << "Problemas con elementos: " << elemen<< std::endl;
    }
  }
  if (jorgeElCurioso.arbol.esVacio()) {
    std::cout << "(No hay información) La información requerida no está almacenada en memoria." << std::endl;
  }  else {
    std::cout << "(Resultado exitoso) Los elementos han sido procesados exitosamente." << std::endl;
  }
    }

    if (input == "salir")
      break;
  }
  return 0;
} // Cierre Main