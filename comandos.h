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
    
   
    //Getters y Setters
    std::string getComando() const;

    void setComando(std::string laruta);


};

#endif