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
    nuevoNodo.infoVertice = v;
    vertices.push_back(nuevoNodo);
}

template<typename T>
void Grafo<T>::InsArco(int v1, int v2, int c)
{
    for (auto& nodo : vertices)
	{
	    if (nodo.infoVertice == v1)
	    {
	        nodo.arcos.push_back(typename NodoG<T>::Arco(v2, costo));
	        break;
	    }
	}
}

template<typename T>
void Grafo<T>::ElimArco(int v1, int v2)
{
    for (auto& nodo : vertices)
    {
        if (nodo.infoVertice == v1)
        {
            for (auto it = nodo.arcos.begin(); it != nodo.arcos.end(); ++it)
            {
                if (it->verticeDestino == v2)
                {
                    nodo.arcos.erase(it);
                    break;
                }
            }
            break;
        }
    }
}

template<typename T>
void Grafo<T>::ElimVertice(int v)
{
    for (auto it = vertices.begin(); it != vertices.end(); ++it)
    {
        if (it->infoVertice == v)
        {
            vertices.erase(it);
            break;
        }
    }
}

template<typename T>
void Grafo<T>::MarcarVertice(int v)
{
    for (auto& nodo : vertices)
    {
        if (nodo.infoVertice == v)
        {
            nodo.marcado = true;
            break;
        }
    }
}

template<typename T>
void Grafo<T>::DesmarcarVertice(int v)
{
    for (auto& nodo : vertices)
    {
        if (nodo.infoVertice == v)
        {
            nodo.marcado = false;
            break;
        }
    }
}

template<typename T>
void Grafo<T>::DesmarcarGrafo()
{
    for (auto& nodo : vertices)
    {
        nodo.marcado = false;
    }
}

template<typename T>
bool Grafo<T>::MarcadoVertice(int v)
{
    for (const auto& nodo : vertices)
    {
        if (nodo.infoVertice == v)
        {
            return nodo.marcado;
        }
    }
    
    return false;
}

template<typename T>
T Grafo<T>::InfoVertice(int v)
{
    for (const auto& nodo : vertices)
    {
        if (nodo.infoVertice == v)
        {
            return nodo.infoVertice;
        }
    }
}

template<typename T>
int Grafo<T>::OrdenGrafo() const
{
    return vertices.size();
}

template<typename T>
int Grafo<T>::CostoArco(int v1, int v2)
{
    for (const auto& nodo : vertices)
    {
        if (nodo.infoVertice == v1)
        {
            for (const auto& arco : nodo.arcos)
            {
                if (arco.destino == v2)
                {
                    return arco.costo;
                }
            }
            break;
        }
    }
    
    return -1;
}

template<typename T>
std::list<int> Grafo<T>::sucesores(int v1)
{
    std::list<int> sucesoresList;

    for (const auto& nodo : vertices)
    {
        if (nodo.infoVertice == v1)
        {
            for (const auto& arco : nodo.arcos)
            {
                sucesoresList.push_back(arco.destino);
            }
            break;
        }
    }

    return sucesoresList;
}

template<typename T>
std::list<T> Grafo<T>::getvertices()
{
    std::list<T> verticesList;

    for (const auto& nodo : vertices)
    {
        verticesList.push_back(nodo.infoVertice);
    }

    return verticesList;
}
