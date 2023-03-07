/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaVuelos.cpp
 * Author: una
 * 
 * Created on 24 de octubre de 2019, 01:48 PM
 */

#include <sstream>
using std::stringstream;

#include "listaVuelos.h"

listaVuelos::listaVuelos(): primero(NULL), actual(NULL)
     , n(0) {
}

listaVuelos::~listaVuelos() {
    delete primero;
}

void listaVuelos::agregarVuelo(vuelo* v) {
    primero  = new nodoVuelo(v,primero);
    n++;
}

string listaVuelos::toString() {
    stringstream r;
    inicializarActual();
    vuelo* _vuelo;
    
    while(actual != NULL){
        _vuelo = actual->obtenerDato();
        r << _vuelo->toString() <<"\n";
        actual = actual->obtenerSiguiente();
    }
    
    return r.str();
}

int listaVuelos::obtenerN() {
    return n;
}

void listaVuelos::inicializarActual() {
    actual = primero;
}


vuelo* listaVuelos::recuperarVuelo() {
    vuelo* v = actual->obtenerDato();
    actual = actual->obtenerSiguiente();
    return v;
}


