#ifndef COMANDOS_H
#define COMANDOS_H

#include <string>
class comandos {
private:
    std::string ruta;
public:
    comandos(){}
    //comandos(string ruta){};
    ~comandos(){}
    void cargarComandos(string ruta);
};

#endif