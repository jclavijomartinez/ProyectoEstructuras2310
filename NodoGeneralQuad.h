#ifndef __NODOGENERALQUAD__H__
#define __NODOGENERALQUAD__H__

#include <iostream>
#include "elemento.h"

class NodoQuad {
  protected:
    elemento elElemen;
    NodoQuad* hijoSupIzq;
    NodoQuad* hijoSupDer;
    NodoQuad* hijoInfIzq;
    NodoQuad* hijoInfDer;
  public:
    //constructores
    NodoQuad();
    NodoQuad(elemento &val);
    //destructor
    ~NodoQuad();
    //manipuladores del nodo
    elemento& obtenerDato();
    void fijarDato(elemento &val);
    NodoQuad* obtenerHijoSupIzq();
    NodoQuad* obtenerHijoSupDer();
    NodoQuad* obtenerHijoInfIzq();
    NodoQuad* obtenerHijoInfDer();
    void fijarHijoSupIzq(NodoQuad* sizq);
    void fijarHijoSupDer(NodoQuad* sder);
    void fijarHijoInfIzq(NodoQuad* iizq);
    void fijarHijoInfDer(NodoQuad* ider);
    //operaciones
    bool esHoja();
};

#endif 