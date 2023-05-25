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
void Grafo<T>::InsArco(T v1, T v2, double c) {
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

/*
void Dijkstra(Grafo g,int indice_origen, int indice_destino, double& distancia_maxima, std::vector<int>& ruta_mas_larga) {
    int num_vertices = g.OrdenGrafo();

    // Crear vector para almacenar las distancias mínimas desde el origen a cada vértice
    std::vector<double> distancias(num_vertices, 0);

    // Crear vector para almacenar los padres de cada vértice en la ruta más corta
    std::vector<int> padres(num_vertices, -1);

    // Marcar la distancia del origen como 0
    distancias[indice_origen] = 0.0;

    // Recorrer todos los vértices
    for (int i = 0; i < num_vertices - 1; ++i) {
        // Encontrar el vértice con la distancia mínima aún no visitado
        int vertice_actual = -1;
        double distancia_minima = 0;

        for (int v = 0; v < num_vertices; ++v) {
            if (!g.MarcadoVertice(v) && distancias[v] < distancia_minima) {
                vertice_actual = v;
                distancia_minima = distancias[v];
            }
        }

        // Marcar el vértice actual como visitado
        g.MarcarVertice(vertice_actual);

        // Actualizar las distancias mínimas y los padres de los vértices adyacentes al vértice actual
        for (int v = 0; v < num_vertices; ++v) {
            if (!g.MarcadoVertice(v)) {
                double peso_arco = g.CostoArco(vertice_actual, v);
                double distancia_acumulada = distancias[vertice_actual] + peso_arco;

                if (distancia_acumulada < distancias[v]) {
                    distancias[v] = distancia_acumulada;
                    padres[v] = vertice_actual;
                }
            }
        }
    }

    // Construir la ruta más larga desde el origen al destino
    ruta_mas_larga.clear();
    int vertice_actual = indice_destino;
    while (vertice_actual != -1) {
        ruta_mas_larga.insert(ruta_mas_larga.begin(), vertice_actual);
        vertice_actual = padres[vertice_actual];
    }

    // Actualizar la distancia máxima con la distancia del destino desde el origen
    distancia_maxima = distancias[indice_destino];
}*/

