/*#include "ArbolGeneralQuad.h"

ArbolQuad::ArbolQuad() {
  raiz = nullptr;
}

ArbolQuad::ArbolQuad(elemento &val) {
  raiz = new NodoQuad(val);
}

ArbolQuad::~ArbolQuad() {
  delete raiz;
}

elemento& ArbolQuad::datoRaiz() {
  return raiz->obtenerDato();
}

NodoQuad* ArbolQuad::obtenerRaiz() {
  return raiz;
}

void ArbolQuad::fijarRaiz(NodoQuad* n_raiz) {
  raiz = n_raiz;
}

bool ArbolQuad::esVacio() {
  return (raiz == nullptr);
}

bool ArbolQuad::insertar(elemento &val) {
    if (esVacio()) {
        raiz = new NodoQuad(val);
        return true;
    }
    NodoQuad* nodoActual = raiz;
    while (true) {
        elemento puntoActual = nodoActual->obtenerDato();
      if (val.getCoordX() < puntoActual.getCoordX()) {
            if (val.getCoordY() < puntoActual.getCoordY()) {
                if (nodoActual->obtenerHijoInfIzq() == NULL) {
                    nodoActual->fijarHijoInfIzq(new NodoQuad(val));
                    return true;
                }
                nodoActual = nodoActual->obtenerHijoInfIzq();
            } else {
                if (nodoActual->obtenerHijoSupIzq() == NULL) {
                    nodoActual->fijarHijoSupIzq(new NodoQuad(val));
                    return true;
                }
                nodoActual = nodoActual->obtenerHijoSupIzq();
            }
        } else {
            if (val.getCoordY() < puntoActual.getCoordY()) {
                if (nodoActual->obtenerHijoInfDer() == NULL) {
                    nodoActual->fijarHijoInfDer(new NodoQuad(val));
                    return true;
                }
                nodoActual = nodoActual->obtenerHijoInfDer();
            } else {
                if (nodoActual->obtenerHijoSupDer() == NULL) {
                    nodoActual->fijarHijoSupDer(new NodoQuad(val));
                    return true;
                }
                nodoActual = nodoActual->obtenerHijoSupDer();
            }
        }
    }
}

// Recorrido en preorden
void ArbolQuad::preOrden() {
  preOrdenAux(raiz);
}

void ArbolQuad::preOrdenAux(NodoQuad* nodo) {
  if (nodo != nullptr) {
    nodo->obtenerDato();
    preOrdenAux(nodo->obtenerHijoSupIzq());
    preOrdenAux(nodo->obtenerHijoSupDer());
    preOrdenAux(nodo->obtenerHijoInfIzq());
    preOrdenAux(nodo->obtenerHijoInfDer());
  }
}

// Recorrido en inorden
void ArbolQuad::inOrden() {
  inOrdenAux(raiz);
}

void ArbolQuad::inOrdenAux(NodoQuad* nodo) {
  if (nodo != nullptr) {
    inOrdenAux(nodo->obtenerHijoSupIzq());
    nodo->obtenerDato() ;
    inOrdenAux(nodo->obtenerHijoSupDer());
    inOrdenAux(nodo->obtenerHijoInfIzq());
    inOrdenAux(nodo->obtenerHijoInfDer());
  }
}

// Recorrido en posorden
void ArbolQuad::posOrden() {
  posOrdenAux(raiz);
}

void ArbolQuad::posOrdenAux(NodoQuad* nodo) {
  if (nodo != nullptr) {
    posOrdenAux(nodo->obtenerHijoSupIzq());
    posOrdenAux(nodo->obtenerHijoSupDer());
    posOrdenAux(nodo->obtenerHijoInfIzq());
    posOrdenAux(nodo->obtenerHijoInfDer());
    nodo->obtenerDato() ;
  }
}*/
