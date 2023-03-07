/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodo.cpp
 * Author: ESCINF
 * 
 * Created on 16 de septiembre de 2019, 15:34
 */

#include "nodo.h"


#include <sstream>
using std::string;

nodo::nodo(piloto* dato, nodo* siguiente)
    : dato(dato), siguiente(siguiente) {
}

nodo::~nodo() {
    if(dato != NULL){
        delete dato;
    }
    if(siguiente != NULL){
        delete siguiente;
    }
}

piloto* nodo::obtenerDato(){
    return dato;
}

nodo* nodo::obtenerSiguiente(){
    return siguiente;
}


void nodo::fijarSiguiente(nodo* sig){
    siguiente = sig;
}

