#include <iostream>
#include <list>
#include "Grafo.h"

template<typename T>
Grafo<T>::Grafo()
{
}

template<typename T>
void Grafo<T>::InsVertice(T v)
{
    NodoG<T> nuevoNodo;
    nuevoNodo.setInfoVertice(v);
    vertices.push_back(nuevoNodo);
}

template<typename T>
void Grafo<T>::InsArco(int v1, int v2, int c) {
    for (auto& nodo : vertices) {
        if (nodo.getInfoVertice() == v1) {
            nodo.setArcos(nodo.getArcos().push_back(typename NodoG<T>::Arco(v2, c)));
            break;
        }
    }
}

template<typename T>
void Grafo<T>::ElimArco(int v1, int v2) {
    for (auto& nodo : vertices) {
        if (nodo.getInfoVertice() == v1) {
            for (auto it = nodo.getArcos().begin(); it != nodo.getArcos().end(); ++it) {
                if (it->verticeDestino == v2) {
                    nodo.setArcos(nodo.getArcos().erase(it));
                    break;
                }
            }
            break;
        }
    }
}

template<typename T>
void Grafo<T>::ElimVertice(int v) {
    for (auto it = vertices.begin(); it != vertices.end(); ++it) {
        if (it->getInfoVertice() == v) {
            vertices.erase(it);
            break;
        }
    }
}

template<typename T>
void Grafo<T>::MarcarVertice(int v) {
    for (auto& nodo : vertices) {
        if (nodo.getInfoVertice() == v) {
            nodo.setMarcado(true);
            break;
        }
    }
}


template<typename T>
void Grafo<T>::DesmarcarVertice(int v) {
    for (auto& nodo : vertices) {
        if (nodo.getInfoVertice() == v) {
            nodo.setMarcado(false);
            break;
        }
    }
}


template<typename T>
void Grafo<T>::DesmarcarGrafo() {
    for (auto& nodo : vertices) {
        nodo.setMarcado(false);
    }
}


template<typename T>
bool Grafo<T>::MarcadoVertice(int v) {
    for (const auto& nodo : vertices) {
        if (nodo.getInfoVertice() == v) {
            return nodo.getMarcado();
        }
    }
    return false;
}

template<typename T>
T Grafo<T>::InfoVertice(int v) {
    for (const auto& nodo : vertices) {
        if (nodo.getInfoVertice() == v) {
            return nodo.getInfoVertice();
        }
    }
}

template<typename T>
int Grafo<T>::OrdenGrafo() const {
    return vertices.size();
}

template<typename T>
int Grafo<T>::CostoArco(int v1, int v2) {
    for (const auto& nodo : vertices) {
        if (nodo.getInfoVertice() == v1) {
            for (const auto& arco : nodo.getArcos()) {
                if (arco.verticeDestino == v2) {
                    return arco.costo;
                }
            }
            break;
        }
    }
    
    return -1;
}

template<typename T>
std::list<int> Grafo<T>::sucesores(int v1) {
    std::list<int> sucesoresList;

    for (const auto& nodo : vertices) {
        if (nodo.getInfoVertice() == v1) {
            for (const auto& arco : nodo.getArcos()) {
                sucesoresList.push_back(arco.verticeDestino);
            }
            break;
        }
    }

    return sucesoresList;
}


template<typename T>
std::list<T> Grafo<T>::getvertices() {
    std::list<T> verticesList;

    for (const auto& nodo : vertices) {
        verticesList.push_back(nodo.getInfoVertice());
    }

    return verticesList;
}
