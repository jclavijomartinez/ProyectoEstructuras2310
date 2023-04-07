#include "curiosity.h"
#include "movimientos.h"
#include "comandos.h"
#include "analisis.h"
#include "elemento.h"
#include <iostream>
#include <list>
#include <string>
#include <sstream>
#include <cstring>
#include <vector>

using namespace std;
/*
comandos comandos::consstructor(std::string comando){

    this->comando=comando;

}

*/
curiosity curiosity::constructor()
  {
        
   }

//Funciones 

movimientos agregar_movimiento(string input) {
  
  movimientos auxMov;
   
    //Separar el input en pedazos
   std::istringstream iss(input);
    std::vector<std::string> tokens;
    std::string token;
    while (iss >> token) {
        tokens.push_back(token);
    }

  if (tokens[1] == "avanzar" || tokens[1] == "girar") {
    auxMov.consstructor(tokens[1], stoi(tokens[2]), tokens[3]);
    std::cout << "Movimiento agregado correctamente" << std::endl;
    return auxMov;
  } else {
    std::cout << "Error: El tipo de movimiento debe ser 'avanzar' o 'girar'" << std::endl;
  }
}


analisis agregar_analisis(std::string input) {
    std::istringstream ss(input);
    std::string token;

    string tipo_analisis;
    std::string objeto;
    std::string comentario;

    // Tokenización del input
    std::getline(ss, token, ' ');
    tipo_analisis = token;

    std::getline(ss, token, ' ');
    objeto = token;

    std::getline(ss, token, '\'');
    std::getline(ss, comentario, '\'');

    // Verificación de información completa
    if (tipo_analisis.empty() || objeto.empty() || comentario.empty()) {
        std::cout << "Falta información para agregar el comando de análisis." << std::endl;
        return;
    }

    // Creación del comando de análisis y agregado a la lista
    analisis auxAnalisis; 
    auxAnalisis.cosstructor(tipo_analisis, objeto, comentario);
    return auxAnalisis;
   
}







//Getters y Setters
    std::list<movimientos> curiosity::getMovs(){
        return listMov;
    }

    std::list<elemento> curiosity::getElems(){
        return listElem;
    }

    std::list<analisis> curiosity::getAnals(){
        return listAnalisis;
    }

    std::list<comandos> curiosity::getCums(){
        return listCum;
    }
