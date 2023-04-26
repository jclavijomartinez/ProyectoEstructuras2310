#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
#include "curiosity.cpp"

using namespace std;

void imprimirSimbolo()
{
  cout << "$ ";
}

string queQuiereConsola(string input)
{
  istringstream iss(input);
  string loQueQuiere;
  iss >> loQueQuiere;
  return loQueQuiere;
}

int main()
{

  string input;
  string funcion;
  curiosity jorgeElCurioso;
  ArbolQuad arbolAux;
  while (true)
  {
    // Conseguir la linea de comandos
    imprimirSimbolo();
    getline(cin, input);
    // jorgeElCurioso.testfun();

    // Conseguir identificar lo que quiere la consola
    funcion = queQuiereConsola(input);

    if (funcion == "cargar_comandos")
    {
     jorgeElCurioso.listMov.splice( jorgeElCurioso.listMov.end(),jorgeElCurioso.cargar_comandos(input));
    }
    if (funcion == "cargar_elementos")
    {
     jorgeElCurioso.listElem.splice(jorgeElCurioso.listElem.end(), jorgeElCurioso.cargar_elementos(input));
    }
    if (funcion == "agregar_movimiento")
    {
      jorgeElCurioso.listMov.clear();
      cout << "lista limpiada correctamente" << endl;
      jorgeElCurioso.agregar_movimiento(input);
    }
    if (funcion == "agregar_analisis")
    {
      jorgeElCurioso.listAnalisis.clear();
      cout << "lista limpiada correctamente" << endl;
      jorgeElCurioso.listAnalisis.push_back(jorgeElCurioso.agregar_analisis(input));
    }

    if (funcion == "agregar_elemento")
    {
      jorgeElCurioso.listElem.clear();
      cout << "lista limpiada correctamente" << endl;
      jorgeElCurioso.listElem.push_back(jorgeElCurioso.agregar_elemento(input));
    }
    if (funcion == "guardar")
    {
      jorgeElCurioso.guardar(input,jorgeElCurioso.listMov,jorgeElCurioso.listElem);
    }
    if (funcion == "simular_comandos")
    {
      jorgeElCurioso.simular_comandos(input, jorgeElCurioso.listMov);
    }

    if (funcion == "ayuda")
    {
      jorgeElCurioso.ayuda(input);
    }

    if (funcion == "ubicar_elementos")
    {

      for (auto &elemento : jorgeElCurioso.listElem)
      {
        jorgeElCurioso.arbol.insertar(elemento);
      }
      cout << "Lista de Elementos guardada satisfactoriamente en el Arbol" << endl;
    }

    if (funcion == "en_cuadrante")
    {

      std::istringstream iss(input);
      std::vector<std::string> tokens;
      std::string token;
      while (iss >> token)
      {
        tokens.push_back(token);
      }

      std::list<elemento> listaElementos;
      // Recorremos el árbol utilizando un ciclo for mejorado
      NodoQuad *actual = jorgeElCurioso.arbol.obtenerRaiz();
      list<NodoQuad *> pila;
      bool fin = false;

      while (!fin)
      {
        if (actual != nullptr)
        {
          pila.push_back(actual);
          actual = actual->obtenerHijoSupIzq();
        }
        else if (!pila.empty())
        {
          actual = pila.back();

          elemento elemento = actual->obtenerDato();
          if (elemento.getCoordX() >= stoi(tokens[1]) && elemento.getCoordX() <= stoi(tokens[2]) &&
              elemento.getCoordY() >= stoi(tokens[3]) && elemento.getCoordY() <= stoi(tokens[4]))
          {
            cout<<elemento.getCoordX()<<"x"<<elemento.getCoordY()<<"y";
            listaElementos.push_back(elemento);
          }
          actual = actual->obtenerHijoSupDer();
        }

        if (actual != nullptr)
        {
          pila.push_back(actual);
          actual = actual->obtenerHijoInfIzq();
        }
        else if (!pila.empty())
        {
          actual = pila.back();

          elemento elemento = actual->obtenerDato();
          if (elemento.getCoordX() >= stoi(tokens[1]) && elemento.getCoordX() <= stoi(tokens[2]) &&
              elemento.getCoordY() >= stoi(tokens[3]) && elemento.getCoordY() <= stoi(tokens[4]))
          {
            cout<<elemento.getCoordX()<<"xexterno"<<elemento.getCoordY()<<"yexterno";
            listaElementos.push_back(elemento);
          }
          actual = actual->obtenerHijoInfDer();
        }

        else
        {
          fin = true;
        }
      }

    }

    if (input == "salir")
      break;
  }
  return 0;
} // Cierre Main