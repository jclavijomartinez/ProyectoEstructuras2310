/*#ifndef __ARBOLGENERALQUAD__H__
#define __ARBOLGENERALQUAD__H__

#include "NodoGeneralQuad.h"

class ArbolQuad {
  protected:
    NodoQuad* raiz;
  public:
    //constructores
    ArbolQuad();
    ArbolQuad(elemento &val);
    //destructor
    ~ArbolQuad();
    //manipuladores del arbol
    elemento& datoRaiz();
    NodoQuad* obtenerRaiz();
    void fijarRaiz(NodoQuad* n_raiz);
    //operaciones del arbol
    bool esVacio();
    bool insertar(elemento &val);
    void preOrden();
    void inOrden();
    void posOrden();
    void nivelOrden();
    void inOrdenAux(NodoQuad* nodo);
    void posOrdenAux(NodoQuad* nodo);
    void preOrdenAux(NodoQuad* nodo);
};

#endif*/