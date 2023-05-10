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
  //ArbolQuad arbol;

  std::list<movimientos> cargar_comandos(std::string ruta);

  std::list<elemento>cargar_elementos(std::string ruta);

  void guardar(std::string input, std::list<movimientos> listacomandos, std::list<elemento> listaelemen);

  void ayuda(std::string input);

  std::list<comandos> ponerenlistacomandos(std::string comando);

  std::list<elemento> ponerenlistaelems(std::string comando);

  curiosity constructor();

  movimientos agregar_movimiento(std::string input);

  analisis agregar_analisis(std::string input);

  elemento agregar_elemento(std::string input);

  void simular_comandos(std::string input, std::list <movimientos> listaMovimiento,std::list<elemento> listaelemen);

  void testfun();

  
  void ubicar_elementos(std::list<elemento>& elElem);
  //void enCoordenada(string input);

  // Getters y Setters

  std::list<movimientos> getMovs();

  std::list<elemento> getElems();

  std::list<analisis> getAnals();

  std::list<comandos> getCums();
};

#endif