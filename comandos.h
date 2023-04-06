#ifndef COMANDOS_H
#define COMANDOS_H

#include <string>
class comandos {
private:
    std::string ruta;
public:
<<<<<<< HEAD
   comandos consstructor(std::string comando);
    
   void cargar_comando(std::string input); //AGREGAR COMANDO

    //Getters y Setters
    std::string getComando() const;
=======
    comandos(){}
    //comandos(string ruta){};
    ~comandos(){}
    void cargarComandos(string ruta);
>>>>>>> origin/Juan
};

#endif