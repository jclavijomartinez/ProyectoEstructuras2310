#ifndef CURIOSITY_H
#define CURIOSITY_H

#include "comandos.h"
#include "elemento.h"
#include "movimientos.h"
#include "analisis.h"
#include "ArbolGeneralQuad.h"
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

  std::list<comandos> cargar_comandos(std::string ruta);

  std::list<elemento>cargar_elementos(std::string ruta);

  //void guardar(std::string input);

  void ayuda(std::string input);

  std::list<comandos> ponerenlistacomandos(std::string comando);

  std::list<elemento> ponerenlistaelems(std::string comando);

  curiosity constructor();

  movimientos agregar_movimiento(std::string input);

  analisis agregar_analisis(std::string input);

  elemento agregar_elemento(std::string input);

  void testfun();

  void curiosity::ubicar_elementos(list<elemento>& elementos, ArbolQuad& arbol);

  // Getters y Setters

  std::list<movimientos> getMovs();

  std::list<elemento> getElems();

  std::list<analisis> getAnals();

  std::list<comandos> getCums();
};

#endif