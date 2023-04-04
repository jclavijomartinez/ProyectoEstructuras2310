#include <iostream>
#include <string>
#include <sstream>
#include "movimientos.h"
#include "comandos.h"
#include "analisis.h"
#include "elemento.h"

using namespace std;

constexpr unsigned int str2int(const char* str, int h = 0)
{
    return !str[h] ? 5381 : (str2int(str, h+1) * 33) ^ str[h];
}

void imprimirSimbolo() {
  cout << "$ ";
}
void imprmirAyuda(){
  cout<<"estas son las funciones comunes que acepta la terminal de control:"<<endl;
  cout<< "alopolisia" <<endl;
}

//Prueba


int main() {
  std::string input;
    
    comandos elComando;
    movimientos elMov;
    analisis elAnal;
    elemento elElem;


  while (true) {
    imprimirSimbolo();
    getline(std::cin, input);



    
    switch (input[0]) {
        case 'c':
             if (input.substr(0, 14) == "cargar_comandos") {
                
                elComando.cargar_comando(input);

            }//fin cargar_comandos
             else if (input.substr(0, 15) == "cargar_elementos") {
                string nombre_archivo = input.substr(16);
                cout << "Opción elegida: cargar_elementos" << endl;
                cout << "Nombre de archivo: " << nombre_archivo << endl;
            }//fin cargar_elementos
            
             else {
                cout << "Opción inválida" << endl;
            }
            break;
        case 'a':
             if (input.substr(0, 17) == "agregar_movimiento") {
                
                elMov.agregar_mov(input);

            }//fin agregar_movimiento
            
              else if (input.substr(0, 16) == "agregar_analisis") {
                
                elAnal.agregar_analisis(input);

            }//fin agregar_análisis
            
             else if (input == "agregar_elemento") {
                cout << "Opción elegida: agregar_elemento" << endl;


                elElem.cargar_elemento(input);

   
    
    
            }//Agregar_elemento 
            else if (input == "ayuda") {
                
                cout << "Comándos válidos :" << endl;
                cout << "  cargar_comandos nombre_archivo" << endl;
                cout << "  cargar_elementos nombre_archivo" << endl;
                cout << "  agregar_movimiento tipo_mov magnitud unidad_med" << endl;
                cout << "  agregar_analisis tipo_analisis objeto comentario" << endl;
                cout << "  agregar_elemento tipo_comp tamaño unidad_med coordX coordY" << endl;
                cout << "  guardar tipo_archivo nombre_archivo" << endl;
                cout << "  simular_comandos coordX coordY" << endl;
                cout << "  salir" << endl;
                
                

            }//cierre ayuda 
            else {
                cout << "Opción inválida" << endl;
            }
            break;

        case 'g':

            if (input == "guardar") {
                cout << "input elegida: guardar" << endl;

                char tipo_archivo;
                string nombre_archivo;
                sscanf(input.c_str(), "%*c %c %s", &tipo_archivo, &nombre_archivo);
                switch(tipo_archivo){
        case 's': // Guardar archivo de simulación
            // Aquí puedes agregar la lógica para guardar el archivo de simulación con el nombre especificado
            cout << "Archivo de simulacion guardado exitosamente como " << nombre_archivo << endl;
            break;
        case 'e': // Guardar archivo de elemento
            // Aquí puedes agregar la lógica para guardar el archivo de elemento con el nombre especificado
            cout << "Archivo de elemento guardado exitosamente como " << nombre_archivo << endl;
            break;
        case 'a': // Guardar archivo de análisis
            // Aquí puedes agregar la lógica para guardar el archivo de análisis con el nombre especificado
            cout << "Archivo de analisis guardado exitosamente como " << nombre_archivo << endl;
            break;
        case 'm': // Guardar archivo de movimiento
            // Aquí puedes agregar la lógica para guardar el archivo de movimiento con el nombre especificado
            cout << "Archivo de movimiento guardado exitosamente como " << nombre_archivo << endl;
            break;
        case 'c': // Guardar archivo de comandos
            // Aquí puedes agregar la lógica para guardar el archivo de comandos con el nombre especificado
            cout << "Archivo de comandos guardado exitosamente como " << nombre_archivo << endl;
            break;
        case 'l': // Guardar archivo de elementos cargados
            // Aquí puedes agregar la lógica para guardar el archivo de elementos cargados con el nombre especificado
            cout << "Archivo de elementos cargados guardado exitosamente como " << nombre_archivo << endl;
            break;
        default:
            cout << "Tipo de archivo invalido, solo se aceptan s, e, a, m, c y l" << endl;
            break;
    }//Cierre mini switch guardar

            }//cierre if guardar
             else {
                cout << "input invalida" << endl;
            }
            break;
        case 's':
            if (input == "simular_comandos") {
                cout << "input elegida: simular_comandos" << endl;
                string simular;
                  int x, y;
    // Leer "simular_comandos" y coordenadas X e Y del string opcion
             stringstream ss (input);
             ss >> simular >> x >> y;
    // Llamar a la función para simular comandos
            // simularComandos(x, y);
             break;

            }//primer if simular_comandos
             else if (input == "salir") {
                cout << "input elegida: salir" << endl;
                break;
            } else {
                cout << "input invalida" << endl;
            }
            break;
        default:
            cout << "input invalida" << endl;
            break;
    }
    if (input == "exit") {
      break;
    }//Cierre exit
    
  }//Cierre While
  return 0;
}//Cierre Main