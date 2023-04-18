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

void simular_comandos(const string& archivo_entrada, list <comandos> &comando) {
    ifstream archivo(archivo_entrada);
    float pi = 3.141592;
    int cambioA = 0;
    float grados = 0.0;
    int num_p;
    bool validar = true;
    int nuevas_coor [2]={0,0};
    list<comandos>::iterator it;

    try {
        stoi(archivo_entrada);
        stoi(archivo_entrada);
    } 
    catch (const std::invalid_argument &ex) {
        validar = false;
    }

    if (archivo.is_open()) {
        string opcion;
        while (getline(archivo, opcion)) { 
            
            num_p = opcion.length();
            cout<<num_p;
            if (!opcion.empty()) {
                nuevas_coor[0] = opcion[2]; //stoi(opcion);
                nuevas_coor[1] = opcion[3]; //stoi(opcion);

                for(it = comando.begin(); it != comando.end(); it++){

                    if (it->getMovimientos.getTipoMov() == "a" && opcion == "a") {
                        // Si son cm
                        if (it->getMovimientos.getUniMed() == "c"){   
                            cambioA = it->getMovimientos.getMagnitud() / 100;
                        }
                        // Si son metros
                        else if (it->getMovimientos.getUniMed() == "m" && opcion == "m"){
                            cambioA = it->getMovimientos.getMagnitud();
                        }
                        else{
                            cout<<"Error en la unidad de medida";
                        }
                        
                        nuevas_coor[0] +=  cambioA * cos(grados);
                        nuevas_coor[1] +=  cambioA * sin(grados);
                    
                    }
                    else if (it->getMovimientos.getTipoMov() == "g" && opcion == "g"){
                        // si son grados
                        if (it->getMovimientos.getUniMed() == "g"){   
                            grados += it->getMovimientos.getMagnitud() * (pi/180);
                        }
                        else{
                            cout<<"Error en la unidad de medida";
                        }
                    }

                    nuevas_coor[0] +=  cambioA * cos(grados);
                    nuevas_coor[1] +=  cambioA * sin(grados);   
                }

                cout << "\nLa simulacion de los comandos, a partir de la posicion ("
                <<opcion[2]<<opcion[3] << ", "<< opcion[3]<< "), deja al robot en la nueva posicion ("
                << nuevas_coor[0] << ", " << nuevas_coor[1] << ") ."
                << endl;
            }
            else {
                cout << "\nLa estructura del comando es incorrecta";
            }
        }

        archivo.close();
    }
    else {
        cout << "No se pudo abrir el archivo: " << archivo_entrada << endl;
    }
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
