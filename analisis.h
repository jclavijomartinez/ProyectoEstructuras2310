#ifndef ANALISIS_H
#define ANALISIS_H


class analisis {
private:
   
                char tipo_analisis;
                char objeto_analisis;
                std::string comentario ;

public:

   analisis cosstructor(char tipo, char objeto, std::string comentario);
    
   void agregar_analisis( string ); //AGREGAR ANALISIS



    //Getters y Setters

    char getTipo();

    char getObjeto();

    std::string getComentario() const;

    

};



#endif