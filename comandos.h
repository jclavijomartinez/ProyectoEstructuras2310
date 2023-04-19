#ifndef COMANDOS_H
#define COMANDOS_H

#include <string>
#include "movimientos.h"
class comandos {
private:
    std::string ruta;
    movimientos Movimientos;
public:
   comandos consstructor(std::string comando);
    
   void cargar_comando(std::string input); //AGREGAR COMANDO

    //Getters y Setters
    std::string getComando() const;

    void setMovimientos(movimientos mov);
    movimientos getMovimientos();
};

#endif