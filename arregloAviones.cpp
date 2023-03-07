/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arregloAviones.cpp
 * Author: una
 * 
 * Created on 24 de octubre de 2019, 12:05 PM
 */

#include <sstream>
using std::stringstream;

#include "arregloAviones.h"

arregloAviones::arregloAviones(int n): n(n), k(0), aviones(new avion*[n]) {
    for(int i=0; i < n; i++){
        aviones[i] = NULL;
    }
}


arregloAviones::~arregloAviones() {
    for(int i=0; i < k; i++){
        if(aviones[i]){
            delete aviones[i];
        }
    }
    delete [] aviones;
}

void arregloAviones::agregarAvion(avion* a) {
    aviones[k++] = a;    
}

avion* arregloAviones::recuperarAvion(int i) {
    return aviones[i-1];
}

avion* arregloAviones::recuperarAvionPorCodigo(string codigo) {
    for(int i=0; i < k; i++){
        if(aviones[i]->getCodigo() == codigo){
            return aviones[i];
        }
    } 
    return NULL;
}


string arregloAviones::toString() {
    stringstream r;
    for(int i=0; i < k; i++){
        r << i+1 <<". " << aviones[i]->toString() <<"\n";;
    }    
    return r.str();
}

int arregloAviones::obtenerK() {
    return k;
}





