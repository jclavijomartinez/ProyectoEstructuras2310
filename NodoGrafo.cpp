#include <iostream>
#include <vector>
#include "NodoGrafo.h"

template<typename T>
T NodoG<T>::getInfoVertice() const {
    return infoVertice;
}

template<typename T>
void NodoG<T>::setInfoVertice(const T& info) {
    infoVertice = info;
}

template<typename T>
bool NodoG<T>::getMarcado() const {
    return marcado;
}

template<typename T>
void NodoG<T>::setMarcado(bool value) {
    marcado = value;
}

template<typename T>
std::vector<Arco<T>> NodoG<T>::getArcos() const {
    return arcos;
}

template<typename T>
void NodoG<T>::setArcos(const std::vector<Arco<T>>& listaArcos) {
    arcos = listaArcos;
}
