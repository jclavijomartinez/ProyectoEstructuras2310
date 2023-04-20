#ifndef CURIOSITY_H
#define CURIOSITY_H

#include "comandos.h"
#include "elemento.h"
#include "movimientos.h"
#include "analisis.h"
#include <list>
#include <string>

class curiosity
{
private:

public:
  std::list<movimientos> listMov;
  std::list<elemento> listElem;
  std::list<analisis> listAnalisis;
  std::list<comandos> listCum;

  curiosity constructor();

  movimientos agregar_movimiento( std::string input);

  analisis agregar_analisis(std::string input);

  elemento agregar_elemento( std::string input);

  //void simular_comandos(const string& archivo_entrada, list <comandos> comando);

  // Getters y Setters

  std::list<movimientos> getMovs();

  std::list<elemento> getElems();

  std::list<analisis> getAnals();

  std::list<comandos> getCums();
};

#endif