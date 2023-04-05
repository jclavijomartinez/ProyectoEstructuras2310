#ifndef ANALISIS_H
#define ANALISIS_H

#include <string>

class analisis {
private:
    char tipo_analisis;
    char objeto_analisis;
    std::string comentario ;

public:
   //analisis analisis::cosstructor(char tipo, char objeto, std::string comentario);
    
   void agregar_analisis(std::string input); //AGREGAR ANALISIS

    //Getters y Setters
    char getTipo();
    char getObjeto();
    std::string getComentario() const;
};

#endif