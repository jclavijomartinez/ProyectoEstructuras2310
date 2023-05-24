#ifndef GRAFO_H
#define GRAFO_H

#include <iostream>
#include <list>
#include "NodoGrafo.h"

template<typename T>

class Grafo {
	private:
		std::list<NodoG<T>> vertices;
	public:
		Grafo();
		void InsVertice(T v);
		void InsArco(int v1, int v2, int c);
		void ElimArco(int v1, int v2);
		void ElimVertice(int v);
		void MarcarVertice(int v);
		void DesmarcarVertice(int v);
		void DesmarcarGrafo();
		bool MarcadoVertice(int v);
		T InfoVertice(int v);
		int OrdenGrafo() const;
		int CostoArco(int v1, int v2);
		std::list<int> sucesores(int v1);
		std::list<T> getvertices();
};

#endif
