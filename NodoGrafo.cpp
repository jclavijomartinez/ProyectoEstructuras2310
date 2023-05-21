#include <iostream>
#include <vector>
#include "NodoGrafo.h"

template<class T>
T NodoG<T>::getInfoVertice() const {
    return infoVertice;
}

template<class T>
void NodoG<T>::setInfoVertice(const T& info) {
    infoVertice = info;
}

template<class T>
bool NodoG<T>::getMarcado() const {
    return marcado;
}

template<class T>
void NodoG<T>::setMarcado(bool value) {
    marcado = value;
}

template<class T>
std::vector<typename NodoG<T>::Arco> NodoG<T>::getArcos() const {
    return arcos;
}

template<class T>
void NodoG<T>::setArcos(const std::vector<Arco>& listaArcos) {
    arcos = listaArcos;
}
