/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lista.cpp
 * Author: ESCINF
 * 
 * Created on 16 de septiembre de 2019, 15:34
 */

#include <sstream>
using std::stringstream;

#include "lista.h"

lista::lista(): primero(NULL), actual(NULL)
     , n(0) {
}

lista::~lista() {
    delete primero;
}

void lista::agregarPiloto(piloto* p) {
    primero  = new nodo(p,primero);
    n++;
}

string lista::toString() {
    stringstream r;
    inicializarActual();
    piloto* _piloto;
    
    while(actual != NULL){
        _piloto = actual->obtenerDato();
        r << _piloto->toString() <<"\n";
        actual = actual->obtenerSiguiente();
    }
    
    return r.str();
}

int lista::obtenerN() {
    return n;
}

void lista::inicializarActual() {
    actual = primero;
}


piloto* lista::recuperarPiloto() {
    piloto* p = actual->obtenerDato();
    actual = actual->obtenerSiguiente();
    return p;
}

piloto* lista::recuperarPilotoPorCodigo(string codigo) {
    piloto* p;
    inicializarActual();
    while(actual != NULL){
        p = actual->obtenerDato();
        if(p->getCodigo() == codigo){
            return p;
        }
        actual = actual->obtenerSiguiente();
    }
    return NULL;
}






