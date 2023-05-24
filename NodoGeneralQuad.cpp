#include "NodoGeneralQuad.h"

NodoQuad::NodoQuad() {
  hijoSupIzq = nullptr;
  hijoSupDer = nullptr;
  hijoInfIzq = nullptr;
  hijoInfDer = nullptr;
}

NodoQuad::NodoQuad(elemento &val) {
  elElemen = val;
  hijoSupIzq = nullptr;
  hijoSupDer = nullptr;
  hijoInfIzq = nullptr;
  hijoInfDer = nullptr;
}

NodoQuad::~NodoQuad() {
  delete hijoSupIzq;
  delete hijoSupDer;
  delete hijoInfIzq;
  delete hijoInfDer;
}

elemento& NodoQuad::obtenerDato() {
  return this->elElemen;
}

void NodoQuad::fijarDato(elemento &val) {
  elElemen = val;
}

NodoQuad* NodoQuad::obtenerHijoSupIzq() {
  return this->hijoSupIzq;
}

NodoQuad* NodoQuad::obtenerHijoSupDer() {
  return this->hijoSupDer;
}

NodoQuad* NodoQuad::obtenerHijoInfIzq() {
  return this->hijoInfIzq;
}

NodoQuad* NodoQuad::obtenerHijoInfDer() {
  return this->hijoInfDer;
}

void NodoQuad::fijarHijoSupIzq(NodoQuad* sizq) {
  hijoSupIzq = sizq;
}

void NodoQuad::fijarHijoSupDer(NodoQuad* sder) {
  hijoSupDer = sder;
}

void NodoQuad::fijarHijoInfIzq(NodoQuad* iizq) {
  hijoInfIzq = iizq;
}

void NodoQuad::fijarHijoInfDer(NodoQuad* ider) {
  hijoInfDer = ider;
}

bool NodoQuad::esHoja() {
  return (hijoSupIzq == nullptr && hijoSupDer == nullptr && hijoInfIzq == nullptr && hijoInfDer == nullptr);
}