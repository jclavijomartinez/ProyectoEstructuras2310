#ifndef ANALISIS_H
#define ANALISIS_H

#include <string>

class analisis
{
private:
     std::string tipo_analisis;
     std::string objeto_analisis;
     std::string comentario;

public:
    analisis cosstructor( std::string tipo,  std::string objeto,   std::string comentario);

    void agregar_analisis( std::string input); // AGREGAR ANALISIS

    // Getters y Setters
     std::string getTipo();
     std::string getObjeto();
     std::string getComentario() const;

     void setTipo(std::string elTipo);
     void setObjeto(std::string elObj);
     void setComentario(std::string elCom);


};

#endif