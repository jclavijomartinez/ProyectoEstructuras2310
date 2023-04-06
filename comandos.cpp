#include "comandos.h"
#include <iostream>
#include <fstream>

using namespace std;

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