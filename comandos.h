#ifndef COMANDOS_H
#define COMANDOS_H

#include <string>
class comandos {
private:
    std::string ruta;
public:
   comandos consstructor(std::string comando);
    
   
    //Getters y Setters
    std::string getComando() const;

    void setComando(std::string laruta);


};

#endif