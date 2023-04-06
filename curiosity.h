#ifndef CURIOSITY_H
#define CURIOSITY_H

#include "comandos.h"
#include "elemento.h"
#include "movimientos.h"
#include "analisis.h"
#include <list>

class curiosity {
private:

  std::list<movimientos>  listMov;
  std::list<elemento> listElem  ;
  std::list<analisis> listAnalisis;
  std::list<comandos> listCum; 

public:

   curiosity constructor(std::list<movimientos> listMov,std::list<elemento> listElem ,std::list<analisis> listAnalisis, std::list<comandos> listCum);
    

    void agregar_movimiento(std::string input); 



    //Getters y Setters

    std::list<movimientos> getMovs();

    std::list<elemento> getElems();

    std::list<analisis> getAnals();

    std::list<comandos> getCums();
    

};




#endif