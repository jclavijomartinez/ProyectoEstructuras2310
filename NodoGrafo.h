#ifndef NODOGRAFO_H
#define NODOGRAFO_H

#include <iostream>
#include <vector>

template<typename T>

class NodoG {
private:
    T infoVertice;
    bool marcado;
    std::vector<Arco> arcos;

public:
    class Arco {
    public:
        int verticeDestino;
        int costo;

        Arco(int destino, int costo) : verticeDestino(destino), costo(costo) {}
    };

    NodoG() : marcado(false) {}

    T getInfoVertice() const;
    void setInfoVertice(const T& info);

    bool getMarcado() const;
    void setMarcado(bool value);

    std::vector<Arco> getArcos() const;
    void setArcos(const std::vector<Arco>& listaArcos);
};
#endif
