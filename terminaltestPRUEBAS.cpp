#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
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
      jorgeElCurioso.listMov.clear();
      cout<<"lista limpiada correctamente"<<endl;
      jorgeElCurioso.agregar_movimiento(input);
    }
    if (funcion == "agregar_analisis")
    {
      jorgeElCurioso.listAnalisis.push_back(jorgeElCurioso.agregar_analisis(input));
    }

    if (funcion == "agregar_elemento")
    {
      jorgeElCurioso.listElem.clear();
      cout<<"lista limpiada correctamente"<<endl;
      jorgeElCurioso.listElem.push_back(jorgeElCurioso.agregar_elemento(input));
    }
    if (funcion == "guardar"){
      jorgeElCurioso.guardar(input,jorgeElCurioso.listCum,jorgeElCurioso.listElem);
    }
    if (funcion == "ayuda"){
      jorgeElCurioso.ayuda(input);
    }

    if (input == "salir")
      break;
  }
  return 0;
} // Cierre Main