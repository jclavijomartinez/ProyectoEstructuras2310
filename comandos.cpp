#include "comandos.h"
#include <iostream>
#include <fstream>

using namespace std;
<<<<<<< HEAD

comandos comandos::consstructor(std::string comando){

    this->comando=comando;

}



void cargar_comando ( string input ) {
	
    string nombre_archivo = input.substr(15);
                cout << "Opción elegida: cargar_comandos" << endl;
                cout << "Nombre de archivo: " << nombre_archivo << endl;
	

   // return comandos;


}

std::string comandos::getComando() const {
    return this->comando;
}
=======

void cargarComandos(string ruta){
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
            contador_comandos++;
            //la funcion que lleva esta info a memoria
        }
        cout << contador_comandos << " comandos cargados correctamente desde " << ruta <<endl;
        newfile.close();
    }
    else
    {
        cout << ruta << " no se encuentra o no puede leerse."<<endl;
    }
};
>>>>>>> origin/Juan
