#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include "movimientos.h"
#include "comandos.h"
#include "analisis.h"
#include "elemento.h"
#include "curiosity.h"

using namespace std;


void imprimirSimbolo() {
  cout << "$ ";
}

string queQuiereConsola(string input){
  std::istringstream iss(input);
    std::string loQueQuiere;
    iss >> loQueQuiere;
    return loQueQuiere;
}

int main()
{
  
  string input;
  string funcion;
  curiosity jorgeElCurioso;
  jorgeElCurioso.constructor();


  while (true)
  {
    //Conseguir la linea de comandos
    imprimirSimbolo();
    getline(cin, input);

    //Conseguir identificar lo que quiere la consola
    funcion=queQuiereConsola(input);

    //Ahora con el función entrar a un Switch o a puros if´s
if (funcion=="agregar_movimiento")
{
  jorgeElCurioso.listMov.push_back(jorgeElCurioso.agregar_movimiento(input));
}

    
    if (input == "salir")
      break;
  }
  return 0;
} // Cierre Main