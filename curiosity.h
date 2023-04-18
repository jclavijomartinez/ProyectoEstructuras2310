#ifndef CURIOSITY_H
#define CURIOSITY_H

#include "comandos.h"
#include "elemento.h"
#include "movimientos.h"
#include "analisis.h"
#include <list>
#include <string.h>

class curiosity
{
private:
public:
public:
public:
  std::list<movimientos> listMov;
  std::list<elemento> listElem;
  std::list<analisis> listAnalisis;
  std::list<comandos> listCum;

  curiosity constructor();

  movimientos agregar_movimiento(string input);

  analisis agregar_analisis(std::string input);

  elemento agregar_elemento(string input);

  // Getters y Setters

  std::list<movimientos> getMovs();

  std::list<elemento> getElems();

  std::list<analisis> getAnals();

  std::list<comandos> getCums();
};

#endif