//EL CODIGO COMPLETO ESTA EN LECTURADEARCHIVOS/CURIOSITYPABLO.CPP
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
#include <fstream>
#include <list>
#include <cmath>

using namespace std;
/*
co0mandos comandos::consstructor(std::string comando){

    this->comando=comando;

}

*/
curiosity curiosity::constructor()
  {
        
   }

//Funciones 

list<string> ponerenlista(string comando){
    std::list<string> listacomandos;
    listacomandos.push_back(comando);
    return listacomandos;
}

void cargar_comandos(string ruta){
    fstream newfile;
    newfile.open(ruta, ios::in);
    if (newfile.peek() == ifstream::traits_type::eof())
    {
        cout << ruta << " no contiene elementos (esta vacio)"<<endl;
    }
    else if (newfile.is_open())
    {
        string infoarch;
        int contador_comandos = 0;
        while (getline(newfile, infoarch))
        {
            //cout << infoarch << "\n";
            ponerenlista(infoarch);
            contador_comandos++;
        }
        cout << contador_comandos << " comandos cargados correctamente desde " << ruta <<endl;
        newfile.close();
    }
    else
    {
        cout << ruta << " no se encuentra o no puede leerse."<<endl;
    }
}


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


  elemento agregar_elemento(string input) {
    string tipo_comp, unidad_med;
    int tamano, coordX, coordY;

    vector<string> tokens;
    istringstream iss(input);
    string token;
    while (getline(iss, token, ' ')) {
        tokens.push_back(token);
    }

    if (tokens.size() != 5) {
        // Si el input no tiene la información adecuada, no se puede agregar el elemento
        cout<<"La información del elemento es incompleta o incorrecta."<<endl;
        return;
    }

    tipo_comp = tokens[0];
    tamano = stoi(tokens[1]);
    unidad_med = tokens[2];
    coordX = stoi(tokens[3]);
    coordY = stoi(tokens[4]);

   elemento elem;
   elem.cosntructor(tipo_comp, tamano, unidad_med, coordX, coordY);
    return elem;
}









//Getters y Setters
    std::list<movimientos> curiosity::getMovs(){
        return listMov;
    }

std::list<elemento> curiosity::getElems()
{
    return listElem;
}

std::list<analisis> curiosity::getAnals()
{
    return listAnalisis;
}

std::list<comandos> curiosity::getCums()
{
    return listCum;
}
