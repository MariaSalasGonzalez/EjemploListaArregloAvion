/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoVuelo.cpp
 * Author: una
 * 
 * Created on 24 de octubre de 2019, 01:53 PM
 */

#include "nodoVuelo.h"


#include <sstream>
using std::string;

nodoVuelo::nodoVuelo(vuelo* dato, nodoVuelo* siguiente)
    : dato(dato), siguiente(siguiente) {
}

nodoVuelo::~nodoVuelo() {
    if(dato != NULL){
        delete dato;
    }
    if(siguiente != NULL){
        delete siguiente;
    }
}

vuelo* nodoVuelo::obtenerDato(){
    return dato;
}

nodoVuelo* nodoVuelo::obtenerSiguiente(){
    return siguiente;
}


void nodoVuelo::fijarSiguiente(nodoVuelo* sig){
    siguiente = sig;
}

