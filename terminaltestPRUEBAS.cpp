#include <iostream>
#include <string>
#include <sstream>
// #include "movimientos.h"
// #include "comandos.h"
// #include "analisis.h"
// #include "elemento.h"
using namespace std;

<<<<<<< HEAD

void imprimirSimbolo() {
=======
void imprimirSimbolo()
{
>>>>>>> origin/Juan
  cout << "$ ";
}

int main()
{
  // comandos elComando;
  // movimientos elMov;
  // analisis elAnal;
  // elemento elElem;
  string input;
  while (true)
  {
    imprimirSimbolo();
    getline(cin, input);
    if (input == "salir")
      break;
  }
  return 0;
} // Cierre Main