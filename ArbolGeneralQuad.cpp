#include "ArbolGeneralQuad.h"
#include <list>

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
  return this->raiz;
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
}

void ArbolQuad::buscarCuadrante(NodoQuad *nodo_actual, float x1, float y1, float x2, float y2, std::list<elemento> &elementos_e)
{
  if (nodo_actual == NULL) {
      return;
  }
  elemento punto_actual = nodo_actual->obtenerDato();
  if (punto_actual.getCoordX() >= x1 && punto_actual.getCoordX() <= x2 &&
      punto_actual.getCoordY() >= y1 && punto_actual.getCoordY() <= y2) {
      elementos_e.push_back(punto_actual);
  }
  buscarCuadrante(nodo_actual->obtenerHijoSupIzq(), x1, y1, x2, y2, elementos_e);
  buscarCuadrante(nodo_actual->obtenerHijoSupDer(), x1, y1, x2, y2, elementos_e);
  buscarCuadrante(nodo_actual->obtenerHijoInfIzq(), x1, y1, x2, y2, elementos_e);
  buscarCuadrante(nodo_actual->obtenerHijoInfDer(), x1, y1, x2, y2, elementos_e);
}
