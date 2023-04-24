#include "curiosity.h"
#include "movimientos.cpp"
#include "comandos.cpp"
#include "analisis.cpp"
#include "elemento.cpp"
#include "ArbolGeneralQuad.cpp"
#include "NodoGeneralQuad.cpp"
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
std::list<movimientos> curiosity::cargar_comandos(std::string ruta)
{
  fstream newfile;
  std::list<movimientos> listadev;
  movimientos elCum;
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
    int contador_comandos = 0;
    while (getline(newfile, infoarch))
    {
      stringstream ss(infoarch);
      string primera_palabra;
      ss >> primera_palabra;
      if (primera_palabra == "avanzar")
      {
        elCum.setTipoMov(infoarch);
        //elCum.setMagnitud();Aquí agregas el infoarch[2] como en mi función que
        // tendría la magnitud con la misma de str para convertirlo a float
        //elCum.setUniMed(); Igual aquí con el infoarch[3] o lo que sea, pero para la unidad
        listadev.push_back(elCum);
        contador_comandos++;
      }
      else if (primera_palabra == "girar")
      {
        elCum.setTipoMov(infoarch);
                //elCum.setMagnitud();Aquí agregas el infoarch[2] como en mi función que
        // tendría la magnitud con la misma de str para convertirlo a float
        //elCum.setUniMed(); Igual aquí con el infoarch[3] o lo que sea, pero para la unidad
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

// void guardar(std::string tipo, std::string nombre, std::list<string> listacomandos, std::list<string> listaelems);
/*void guardar(std::string input) {
  std::istringstream iss(input);
  std::vector<std::string> tokens;
  std::string token;
  while (iss >> token)
  {
    tokens.push_back(token);
  }
  std::string tipo = tokens[0];
  std::string nombre = tokens[1];
  //faltan las listas
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
        cout << "La informacion requerida no esta almacenada en memoria." << endl;
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
}*/

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

  // Tokenizacion del input
  std::getline(ss, token, ' ');
  tipo_analisis = token;

  std::getline(ss, token, ' ');
  objeto = token;

  std::getline(ss, token, '\'');
  std::getline(ss, comentario, '\'');

  // Verificacion de informacion completa
  if (tipo_analisis.empty() || objeto.empty() || comentario.empty())
  {

    std::cout << "Falta informacion para agregar el comando de analisis." << std::endl;
    exit;
  }

  // Creacion del comando de analisis y agregado a la lista
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
    // Si el input no tiene la informacion adecuada, no se puede agregar el elemento
    cout << "La informacion del elemento es incompleta o incorrecta." << endl;
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

void curiosity::ayuda(std::string input)
{
  std::string funcdeayuda = input.substr(input.find_last_of(" ") + 1);
  if (input == "ayuda")
  {
    cout << "Estos son los comandos disponibles, si necesitas mas ayuda, no dudes en usar ayuda [Comando] " << endl;
    cout << "" << endl;
    cout << "cargar_comandos [ruta]: Carga los comandos de movimiento y analisis desde el archivo ubicado en la ruta especificada." << endl;
    cout << "" << endl;
    cout << "cargar_elementos [ruta]: Carga los elementos desde el archivo ubicado en la ruta especificada." << endl;
    cout << "" << endl;
    cout << "agregar_movimiento [tipo_mov] [magnitud] [unidad_med]: Agrega el comando de movimiento a la lista de comandos, siendo el movimiento de dos tipos: avanzar o girar, con su respectiva magnitud y unidad de medida. Si la informacion del comando no es completa o adecuada, se muestra un mensaje de error." << endl;
    cout << "" << endl;
    cout << "agregar_analisis [tipo_analisis] [objeto] [comentario]: Agregar comando de analisis a la lista de comandos del robot. El analisis puede ser de tres tipos: fotografiar, composicion o perforar. El objeto es el nombre del elemento que se quiere analizar (roca, arena, monticulo, ...). El comentario es opcional y se escribe entre comillas simples (ejemplo: 'roca_cuadrante_32')." << endl;
    cout << "" << endl;
    cout << "agregar_elemento [tipo_comp] tamanio [unidad_med] [coordX] [coordY]: Agregar elemento a la lista de puntos de interes del robot. Requiere tipo, tamanio, unidad, coordenadas x e y. Si la informacion no es completa o adecuada, no se agrega. Salida: Formato erroneo o Resultado exitoso." << endl;
    cout << "" << endl;
    cout << "guardar [tipo_archivo] [nombre_archivo]: Guarda en el archivo nombre_archivo la informacion solicitada de acuerdo al tipo de archivo: comandos almacena en el archivo la informacion de comandos de movimiento y de analisis que debe ejecutar el robot, elementos almacena en el archivo la informacion de los componentes o puntos de interes conocidos en el suelo marciano." << endl;
    cout << "" << endl;
    cout << "simular_comandos [coordX] [coordY]: Esta funcion simula los comandos de movimiento que se enviaran al robot. Muestra la nueva posicion del vehiculo en base a las coordenadas dadas. Solo se necesitan los comandos de movimiento para ejecutar la simulacion." << endl;
    cout << "" << endl;
    cout << "salir: Termina la ejecucion de la aplicacion." << endl;
  }
  else if (funcdeayuda == "cargar_comandos")
  {
    cout << "Descripcion:" << endl;
    cout << "Carga en memoria los comandos de desplazamiento contenidos en el archivo identificado por nombre_archivo, sobrescribiendo cualquier informacion previamente cargada en memoria" << endl;
    cout << "" << endl;
    cout << "Uso" << endl;
    cout << "    - cargar_comandos [nombre_archivo]" << endl;
    cout << "Parametros" << endl;
    cout << "    - [nombre_archivo]: el nombre o ruta del archivo que contiene los comandos de desplazamiento" << endl;
    cout << "Salida en pantalla" << endl;
    cout << "    - Si el archivo esta vacio: [nombre_archivo] no contiene elementos" << endl;
    cout << "    - Si no se puede abrir el archivo: [nombre_archivo] no se encuentra o no puede leerse" << endl;
    cout << "    - Si se puede abrir el archivo exitosamente y cargar los comandos: n comandos cargados correctamente desde [nombre_archivo]" << endl;
    cout << "Ejemplos de uso" << endl;
    cout << "    - cargar_comandos comandos.csv" << endl;
    cout << "    - cargar_comandos C:/Documentos/comandos.csv" << endl;
  }
  else if (funcdeayuda == "cargar_elementos")
  {
    cout << "Descripcion:" << endl;
    cout << "La funcion cargar_elementos carga en memoria los datos de puntos de interes o elementos contenidos en el archivo identificado por [nombre_archivo]. " << endl;
    cout << "Si dentro de la misma sesion de trabajo ya se han cargado otros archivos de puntos de interes, la informacion se sobreescribira en memoria." << endl;
    cout << "" << endl;
    cout << "Uso:" << endl;
    cout << "    cargar_elementos [nombre_archivo]" << endl;
    cout << "Parametros:" << endl;
    cout << "    [nombre_archivo]: nombre del archivo que contiene la informacion de los elementos a cargar en memoria (puede ser un .txt o .csv)" << endl;
    cout << "Salida en pantalla:" << endl;
    cout << "    - Si el archivo esta vacio: [nombre_archivo] no contiene elementos." << endl;
    cout << "    - Si no se puede abrir el archivo: [nombre_archivo] no se encuentra o no puede leerse." << endl;
    cout << "    - Si los comandos se cargan correctamente: n elementos cargados correctamente desde [nombre_archivo]." << endl;
    cout << "Ejemplo de uso:" << endl;
    cout << "    - cargar_elementos elementos.txt" << endl;
  }
  else if (funcdeayuda == "agregar_movimiento")
  {
    cout << "Descripcion:" << endl;
    cout << "La funcion  agregar_movimiento  agrega un comando de movimiento a la lista de comandos del robot  Curiosity." << endl;
    cout << "El movimiento puede ser de dos tipos:  avanzar  o  girar. " << endl;
    cout << "La magnitud corresponde al valor del movimiento; si es avanzar, el numero de unidades que se espera avanzar, si es girar la cantidad de grados que debe girar. " << endl;
    cout << "La unidad de medida corresponde a la convencion con la que se mide la magnitud del movimiento (centimetros, metros, grados...). " << endl;
    cout << "Si no se envia la informacion completa y adecuada del comando de movimiento, este no puede agregarse a la lista de los comandos que se enviaran al robot desde la tierra." << endl;
    cout << "Uso:" << endl;
    cout << "    - agregar_movimiento tipo_mov magnitud unidad_med" << endl;
    cout << "Parametros:" << endl;
    cout << "    - tipo_mov: tipo de movimiento, puede ser avanzar o girar." << endl;
    cout << "    - magnitud: magnitud del movimiento, un numero entero o decimal." << endl;
    cout << "    - unidad_med: unidad de medida de la magnitud, una cadena de caracteres." << endl;
    cout << "Salida en pantalla:" << endl;
    cout << "    - Si hay un formato erroneo: La informacion del movimiento no corresponde a los datos esperados (tipo, magnitud, unidad)." << endl;
    cout << "    - Si se agrega el comando de movimiento exitosamente: El comando de movimiento ha sido agregado exitosamente." << endl;
    cout << "Ejemplos de uso:" << endl;
    cout << "    - Para agregar un movimiento de avanzar 10 metros:" << endl;
    cout << "        * agregar_movimiento avanzar 10 metros" << endl;
    cout << "    - Para agregar un movimiento de girar 90 grados:" << endl;
    cout << "        * agregar_movimiento girar 90 grados" << endl;
  }
  else if (funcdeayuda == "agregar_analisis")
  {
    cout << "Descripcion:" << endl;
    cout << "Agrega el comando de analisis descrito a la lista de comandos del robot “Curiosity”. " << endl;
    cout << "El analisis puede ser de tres tipos: fotografiar, composicion o perforar. " << endl;
    cout << "El objeto es el nombre del elemento que se quiere analizar (roca, arena, monticulo, ...). " << endl;
    cout << "El comentario es opcional y permite agregar mas informacion sobre el elemento o el analisis, este comentario estara encerrado entre comillas simples (ejemplo: 'roca_cuadrante_32')." << endl;
    cout << "Uso:" << endl;
    cout << "    - agregar_analisis tipo_analisis objeto comentario" << endl;
    cout << "Parametros:" << endl;
    cout << "    - tipo_analisis: tipo de analisis que se quiere realizar. Puede ser  fotografiar, composicion o perforar." << endl;
    cout << "    - objeto: nombre del elemento que se quiere analizar (roca, arena, monticulo, etc.)." << endl;
    cout << "    - comentario (opcional): informacion adicional sobre el elemento o el analisis. Se debe encerrar entre comillas simples." << endl;
    cout << "Salida en pantalla:" << endl;
    cout << "    - Si el formato es erroneo: La informacion del analisis no corresponde a los datos esperados (tipo, objeto, comentario)." << endl;
    cout << "    - Si se agrega el comando de analisis exitosamente: El comando de analisis ha sido agregado exitosamente." << endl;
    cout << "Ejemplos de uso:" << endl;
    cout << "    - agregar_analisis fotografiar roca_cuadrante_32  Analizar la textura de la roca " << endl;
    cout << "    - agregar_analisis perforar monticulo  Tomar muestras para analisis quimico " << endl;
    cout << "    - agregar_analisis composicion arena  Realizar analisis de elementos en la arena " << endl;
  }
  else if (funcdeayuda == "agregar_elemento")
  {
    cout << "Descripcion:" << endl;
    cout << "La funcion  agregar_elemento  agrega el componente o elemento descrito a la lista de puntos de interes del robot Curiosity. " << endl;
    cout << "El tipo de componente puede ser uno entre roca, crater, monticulo o duna. " << endl;
    cout << "El tamanio es un valor real que da cuenta de que tan grande es el elemento; y la unidad de medida complementa este valor con la convencion que se uso para su medicion (centimetros, metros...). " << endl;
    cout << "Finalmente, las coordenadas x y y corresponden a numeros reales que permiten conocer la ubicacion del elemento en el sistema de coordenadas del suelo marciano utilizado por el vehiculo." << endl;
    cout << "Uso:" << endl;
    cout << " - agregar_elemento tipo_comp tamanio unidad_med coordX coordY" << endl;
    cout << "Parametros:" << endl;
    cout << "    - tipo_comp: tipo de componente (roca, crater, monticulo o duna)" << endl;
    cout << "    - tamanio: tamanio del elemento (valor real)" << endl;
    cout << "    - unidad_med: unidad de medida del tamanio (centimetros, metros, ...)" << endl;
    cout << "    - coordX: coordenada X del elemento (valor real)" << endl;
    cout << "    - coordY: coordenada Y del elemento (valor real)" << endl;
    cout << "Salida en pantalla:" << endl;
    cout << "    - Si hay un formato erroneo: La informacion del elemento no corresponde a los datos esperados (tipo, tamanio, unidad, x, y)." << endl;
    cout << "    - Si se agrega el elemento exitosamente: El elemento ha sido agregado exitosamente." << endl;
    cout << "Ejemplos de uso:" << endl;
    cout << "    - agregar_elemento roca 12.5 metros 23.4 45.6" << endl;
    cout << "    - agregar_elemento crater 8.2 centimetros -12.3 6.7" << endl;
    cout << "    - agregar_elemento monticulo 5.0 metros 0.0 0.0" << endl;
  }
  else if (funcdeayuda == "guardar")
  {
    cout << "Descripcion:" << endl;
    cout << "Guarda en un archivo de texto (.txt) la informacion solicitada de acuerdo al tipo de archivo. " << endl;
    cout << "Los tipos de archivo disponibles son: comandos, que almacena la informacion de comandos de movimiento y de analisis que debe ejecutar el robot" << endl;
    cout << "y elementos, que almacena la informacion de los componentes o puntos de interes conocidos en el suelo marciano." << endl;
    cout << "Uso:" << endl;
    cout << "    - guardar tipo_archivo nombre_archivo" << endl;
    cout << "Parametros:" << endl;
    cout << "    - tipo_archivo: tipo de archivo a guardar (comandos o elementos)." << endl;
    cout << "    - nombre_archivo: nombre del archivo en el que se guardara la informacion. Debe tener la extension .txt." << endl;
    cout << "Salida en pantalla:" << endl;
    cout << "- Si no hay informacion: La informacion requerida no esta almacenada en memoria." << endl;
    cout << "- Si la escritura es exitosa: La informacion ha sido guardada en nombre_archivo." << endl;
    cout << "- Si hay problemas al guardar el archivo: Error guardando en nombre_archivo." << endl;
    cout << "Ejemplo de uso:" << endl;
    cout << "    guardar comandos comandos.txt" << endl;
  }
  else if (funcdeayuda == "simular")
  {
    cout << "Descripcion:" << endl;
    cout << "Permite simular el resultado de los comandos de movimiento que se enviaran al robot  Curiosity  desde la Tierra, facilitando asi la validacion de la nueva posicion en la que podria ubicarse. " << endl;
    cout << "Para ejecutarse adecuadamente, requiere conocer la posicion actual (coordenadas X y Y) del vehiculo. " << endl;
    cout << "Hay que tener en cuenta que solo los comandos de movimiento son necesarios, no los de analisis." << endl;
    cout << "Uso:" << endl;
    cout << "    simular_comandos coordX coordY" << endl;
    cout << "Parametros:" << endl;
    cout << "    - coordX: coordenada X actual del vehiculo." << endl;
    cout << "    - coordY: coordenada Y actual del vehiculo." << endl;
    cout << "Salida en pantalla:" << endl;
    cout << "    - Si no se tiene la informacion necesaria: La informacion requerida no esta almacenada en memoria." << endl;
    cout << "    - Si la simulacion es exitosa: La simulacion de los comandos, a partir de la posicion (coordX,coordY), deja al robot en la nueva posicion (nuevoX,nuevoY)." << endl;
    cout << "Ejemplo de uso:" << endl;
    cout << "    simular_comandos 10 5" << endl;
  }
  else if (funcdeayuda == "salir")
  {
    cout << "Termina la ejecucion de la aplicacion y regresa a la terminal de windows." << endl;
  }
  else
  {
    cout << "Esa funcion no existe, revisa lo que escribiste!" << endl;
  }
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



/// 2ndo Componente Árboles 


/*ArbolQuad curiosity::ubicar_elementos(list<elementos> elElem){

ArbolQuad arbolDev;
arbolDev();

for mejorado para la lista{

arbolDev.insertar(elementoFor);


}

return arbolDev;

}
*/


