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

   curiosity curiosity::consstructor(char tipoMov,float magnitud, char uniMed);
    
   void agregar_mov ( std::string ); //AGREGAR MOVIMIENTO

    //Getters y Setters

    char getTipoMov();

    float getMagnitud();

    char getUniMed();
    

};




#endif