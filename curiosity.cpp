#include "curiosity.h"
#include <iostream>
#include <list>
#include <string>
#include <sstream>

using namespace std;
/*
comandos comandos::consstructor(std::string comando){

    this->comando=comando;

}

*/
curiosity curiosity::constructor(std::list<movimientos> listMov, std::list<elemento> listElem, std::list<analisis> listAnalisis, std::list<comandos> listCum)
{
    this->listMov = listMov;
    this->listElem = listElem;
    this->listAnalisis = listAnalisis;
    this->listCum = listCum;
}

std::list<movimientos> curiosity::getMovs()
{
    return listMov;
}

std::list<elemento> curiosity::getElems()
{
    return listElem;
}

std::list<analisis> curiosity::getAnals()
{
    return listAnalisis;
}

std::list<comandos> curiosity::getCums()
{
    return listCum;
}
