#ifndef COMANDOS_H
#define COMANDOS_H

#include <string>
class comandos {
private:
    std::string ruta;
public:
   comandos consstructor(std::string comando);
    
   void cargar_comando(std::string input); //AGREGAR COMANDO

    //Getters y Setters
    std::string getComando() const;
};

#endif