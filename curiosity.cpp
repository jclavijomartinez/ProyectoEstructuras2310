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

using namespace std;
curiosity curiosity::constructor()
{
}

// Funciones
std::list<comandos> curiosity::cargar_comandos(std::string ruta)
{
  fstream newfile;
  std::list<comandos> listadev;
  comandos elCum;
  std::string nombre_archivo = ruta.substr(ruta.find_last_of(" ") + 1);
  newfile.open(nombre_archivo, ios::in);
  if (!newfile.is_open())
  {
    cout << "No se pudo abrir el archivo " << ruta << endl;
  }
  else if (newfile.peek() == ifstream::traits_type::eof())
  {
    cout << ruta << " no contiene elementos (está vacío)" << endl;
  }
  else if (newfile.is_open())
  {
    std::string infoarch;
    int contador_comandos = 0;
    while (getline(newfile, infoarch))
    {
      stringstream ss(infoarch);
      string primera_palabra;
      ss >> primera_palabra;
      if (primera_palabra == "avanzar")
      {
        elCum.setComando(infoarch);
        listadev.push_back(elCum);
        contador_comandos++;
      }
      else if (primera_palabra == "girar")
      {
        elCum.setComando(infoarch);
        listadev.push_back(elCum);
        contador_comandos++;
      }
    }
    cout << contador_comandos << " comandos cargados correctamente desde " << ruta << endl;
    newfile.close();
    return listadev;
  }
  else
  {
    cout << ruta << " no se encuentra o no puede leerse." << endl;
  }
}

std::list<elemento> curiosity::cargar_elementos(std::string ruta)
{
  fstream newfile;
  std::list<elemento> listadev;
  elemento elelem;
  std::string nombre_archivo = ruta.substr(ruta.find_last_of(" ") + 1);
  newfile.open(nombre_archivo, ios::in);
  if (!newfile.is_open())
  {
    cout << "No se pudo abrir el archivo " << ruta << endl;
  }
  else if (newfile.peek() == ifstream::traits_type::eof())
  {
    cout << ruta << " no contiene elementos (esta vacio)" << endl;
  }
  else if (newfile.is_open())
  {
    std::string infoarch;
    int contador_elementos = 0;
    while (getline(newfile, infoarch))
    {
      stringstream ss(infoarch);
      std::string primera_palabra;
      ss >> primera_palabra;
      if (primera_palabra == "roca")
      {
        std::istringstream iss(infoarch);
        std::vector<std::string> tokens;
        std::string token;
        while (iss >> token)
        {
          tokens.push_back(token);
        }
        elelem.constructor(primera_palabra, stod(tokens[1]), tokens[2], stoi(tokens[3]), stoi(tokens[4]));
        listadev.push_back(elelem);
        contador_elementos++;
      }
      else if (primera_palabra == "crater")
      {
        std::istringstream iss(infoarch);
        std::vector<std::string> tokens;
        std::string token;
        while (iss >> token)
        {
          tokens.push_back(token);
        }
        elelem.constructor(primera_palabra, stod(tokens[1]), tokens[2], stoi(tokens[3]), stoi(tokens[4]));
        listadev.push_back(elelem);
        contador_elementos++;
      }
      else if (primera_palabra == "monticulo")
      {
        std::istringstream iss(infoarch);
        std::vector<std::string> tokens;
        std::string token;
        while (iss >> token)
        {
          tokens.push_back(token);
        }
        elelem.constructor(primera_palabra, stod(tokens[1]), tokens[2], stoi(tokens[3]), stoi(tokens[4]));
        listadev.push_back(elelem);
        contador_elementos++;
      }
      else if (primera_palabra == "duna")
      {
        std::istringstream iss(infoarch);
        std::vector<std::string> tokens;
        std::string token;
        while (iss >> token)
        {
          tokens.push_back(token);
        }
        elelem.constructor(primera_palabra, stod(tokens[1]), tokens[2], stoi(tokens[3]), stoi(tokens[4]));
        listadev.push_back(elelem);
        contador_elementos++;
      }
    }
    cout << contador_elementos << " elementos cargados correctamente desde " << ruta << endl;
    newfile.close();
    return listadev;
  }
  else
  {
    cout << ruta << " no se encuentra o no puede leerse." << endl;
  }
}

void guardar(std::string tipo, std::string nombre, std::list<string> listacomandos, std::list<string> listaelems)
{
  ofstream file2write(nombre);
  if (!file2write)
  {
    cout << "Error guardando en " << nombre << endl;
  }
  else
  {
    if (tipo == "comandos")
    {
      if (listacomandos.empty())
      {
        cout << "La informacion requerida no esta almacenada en memoria." << endl;
      }
      else
      {
        for (std::string cmd : listacomandos)
        {
          file2write << cmd << endl;
        }
        cout << "La informacion ha sido guardada en " << nombre << endl;
      }
    }
    else if (tipo == "elementos")
    {
      if (listaelems.empty())
      {
        cout << "La información requerida no está almacenada en memoria." << endl;
      }
      else
      {
        for (std::string elem : listaelems)
        {
          file2write << elem << endl;
        }
        cout << "La informacion ha sido guardada en " << nombre << endl;
      }
    }
    else
    {
      cout << "tipo de archivo invalido" << endl;
    }
  }
}

movimientos curiosity::agregar_movimiento(std::string input)
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
    // cout<<"tipo: "<<tokens[1]<<"num"<< stoi(tokens[2])<<"tercer"<< tokens[3]<< endl;

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

  std::string tipo_analisis;
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

elemento curiosity::agregar_elemento(std::string input)
{
  std::string tipo_comp, unidad_med;
  int tamano, coordX, coordY;

  vector<string> tokens;
  istringstream iss(input);
  std::string token;
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
  elem.constructor(tipo_comp, tamano, unidad_med, coordX, coordY);
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
