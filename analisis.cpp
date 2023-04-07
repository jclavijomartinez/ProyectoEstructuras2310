#include "analisis.h"
#include <iostream>

using namespace std;

analisis analisis::cosstructor(string tipo, string objeto, std::string comentario){

                this ->tipo_analisis=tipo;
                this->objeto_analisis=objeto;
                this->comentario=comentario;

}


void agregar_analisis ( string input ) {
	
   char tipo_analisis = input[17];
                char objeto_analisis = input[19];
                string comentario = input.substr(input.find(" ", 20) + 1);

                cout << "Opción elegida: agregar_analisis" << endl;

                if (tipo_analisis != 'f' && tipo_analisis != 'c' && tipo_analisis != 'p') {
                    cout << "Tipo de análisis inválido" << endl;
                    return;
                }

                if (objeto_analisis != 'r' && objeto_analisis != 'a' && objeto_analisis != 'm') {
                    cout << "Objeto de análisis inválido" << endl;
                    return;
                }

                cout << "Tipo de análisis: " << tipo_analisis << endl;
                cout << "Objeto de análisis: " << objeto_analisis << endl;
                cout << "Comentario: " << comentario << endl;
}


//Getters Setters

string analisis::getTipo(){
      return this->tipo_analisis;
    }

    string analisis::getObjeto(){
      return this->objeto_analisis;
    }

std::string analisis::getComentario() const {
    return this->comentario;
}