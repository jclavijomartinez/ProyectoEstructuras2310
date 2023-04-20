// EL CODIGO COMPLETO ESTA EN LECTURADEARCHIVOS/CURIOSITYPABLO.CPP
#include "curiosity.h"
#include "movimientos.cpp"
#include "comandos.cpp"
#include "analisis.cpp"
#include "elemento.cpp"
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
curiosity curiosity::constructor()
{
}

// Funciones
list<comandos> ponerenlistacomandos(string comando){
  list<comandos> listacomandos;
  //listacomandos.push_back(comando);
  return listacomandos;
}

void cargar_comandos(std::string ruta){
  fstream newfile;
    newfile.open(ruta, ios::in);
    if (newfile.peek() == ifstream::traits_type::eof())
    {
        cout << ruta << " no contiene elementos (esta vacio)" << endl;
    }
    else if (newfile.is_open())
    {
        string infoarch;
        int contador_comandos = 0;
        while (getline(newfile, infoarch))
        {
            stringstream ss(infoarch);
            string primera_palabra;
            ss >> primera_palabra;
            if (primera_palabra == "avanzar")
            {
                ponerenlistacomandos(infoarch);
                contador_comandos++;
            }
            else if (primera_palabra == "girar")
            {
                ponerenlistacomandos(infoarch);
                contador_comandos++;
            }
        }
        cout << contador_comandos << " comandos cargados correctamente desde " << ruta << endl;
        newfile.close();
    }
    else
    {
        cout << ruta << " no se encuentra o no puede leerse." << endl;
    }
}

movimientos curiosity::agregar_movimiento(string input)
{

  movimientos auxMov;

  // Separar el input en pedazos
  std::istringstream iss(input);
  std::vector<std::string> tokens;
  std::string token;
  while (iss >> token)
  {
    tokens.push_back(token);
  }

  if (tokens[1] == "avanzar" || tokens[1] == "girar")
  {
    //cout<<"tipo: "<<tokens[1]<<"num"<< stoi(tokens[2])<<"tercer"<< tokens[3]<< endl;
    
    auxMov.consstructor(tokens[1], stoi(tokens[2]), tokens[3]);
    std::cout << "Movimiento agregado correctamente" << std::endl;
    return auxMov;
    
  }
  else
  {
    std::cout << "Error: El tipo de movimiento debe ser 'avanzar' o 'girar'" << std::endl;
  }
}

analisis curiosity::agregar_analisis(std::string input)
{
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
  if (tipo_analisis.empty() || objeto.empty() || comentario.empty())
  {
    std::cout << "Falta información para agregar el comando de análisis." << std::endl;
    // return;
  }

  // Creación del comando de análisis y agregado a la lista
  analisis auxAnalisis;
  auxAnalisis.cosstructor(tipo_analisis, objeto, comentario);
  return auxAnalisis;
}

elemento curiosity::agregar_elemento(string input)
{
  string tipo_comp, unidad_med;
  int tamano, coordX, coordY;

  vector<string> tokens;
  istringstream iss(input);
  string token;
  while (getline(iss, token, ' '))
  {
    tokens.push_back(token);
  }

  if (tokens.size() != 5)
  {
    // Si el input no tiene la información adecuada, no se puede agregar el elemento
    cout << "La información del elemento es incompleta o incorrecta." << endl;
    // return;
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

void curiosity::testfun()
{
  std::cout << "un superduper texto" << endl;
}

// Getters y Setters
std::list<movimientos> curiosity::getMovs()
{
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
    auxMov.constructor(tokens[1], stoi(tokens[2]), tokens[3]);
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
    int posX = 0,posY = 0;
    int posXArch = 0, posYArch = 0;
    bool validar = true;
    int nuevas_coor [2]={0,0};
    string d1,d2;
    list<comandos>::iterator it;


    if (comando.empty()){
        cout<<"Toy vacio";
    }
    else{
        // Que existan en la lista
        for(it = comando.begin(); it != comando.end(); it++){
            if (it->getMovimientos().getTipoMov() == "a" || it->getMovimientos().getTipoMov() == "g")
            {
                validar = false;
            }
                        
        }
    }

    

    if (archivo.is_open()) {
        string opcion;
        while (getline(archivo, opcion)) { 
            
            num_p = opcion.length();
            cout<<"\nTotal: "<<num_p;

            if (!opcion.empty() && validar == true) {
 
                stringstream input_stringstream(opcion);  // Separar datos del archivo despues de un espacio
                getline(input_stringstream, d1, ' ');
                getline(input_stringstream, d2, ' ');

                    posXArch = stoi(d1);   // Convertir los datos a enteros 
                    posYArch = stoi(d2);

                    cout<<"\n Posicion x: "<< posX;
                    cout<<"\n Posicion y: "<< posY;  

                    cout<<"\n Posicion Archivo x: "<< posXArch;
                    cout<<"\n Posicion Archivo y: "<< posYArch;             

                for(it = comando.begin(); it != comando.end(); it++){
                    nuevas_coor[0] = posX;
                    nuevas_coor[1] = posY;
                    cout<<"\ncm";

                    if (it->getMovimientos().getTipoMov() == "a" ) {
                        // Si son cm
                        
                        if (it->getMovimientos().getUniMed() == "c"){   
                            cambioA = it->getMovimientos().getMagnitud() / 100;
                        }
                        // Si son metros
                        else if (it->getMovimientos().getUniMed() == "m"){
                            cambioA = it->getMovimientos().getMagnitud();
                        }
                        else{
                            cout<<"Error en la unidad de medida";
                        }
                        
                        /*nuevas_coor[0] +=  cambioA * cos(grados);
                        nuevas_coor[1] +=  cambioA * sin(grados);*/
                    
                    }
                    else if (it->getMovimientos().getTipoMov() == "g"){
                        // si son grados
                        if (it->getMovimientos().getUniMed() == "g" ){   
                            grados += it->getMovimientos().getMagnitud() * (pi/180);
                        }
                        else{
                            cout<<"Error en la unidad de medida";
                        }
                    }
                    else {
                        cout<<"Error en el tipo de movimiento";
                    }

                    nuevas_coor[0] +=  cambioA * cos(grados);
                    nuevas_coor[1] +=  cambioA * sin(grados);   
                }

                cout << "\nLa simulacion de los comandos, a partir de la posicion ("
                <<posX<< ", "<< posY<< "), deja al robot en la nueva posicion ("
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
