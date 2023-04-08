#ifndef ANALISIS_H
#define ANALISIS_H

#include <string>

class analisis {
private:
    string tipo_analisis;
    string objeto_analisis;
    std::string comentario ;

public:
   analisis cosstructor(string tipo, string objeto, std::string comentario);
    
   void agregar_analisis(std::string input); //AGREGAR ANALISIS

    //Getters y Setters
    string getTipo();
    string getObjeto();
    std::string getComentario() const;
};

#endif