/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaVuelos.h
 * Author: una
 *
 * Created on 24 de octubre de 2019, 01:48 PM
 */

#ifndef LISTAVUELOS_H
#define LISTAVUELOS_H

#include <sstream>
using std::string;

#include "nodoVuelo.h"

class listaVuelos {
public:
    listaVuelos();
    virtual ~listaVuelos();
    //agregar al inicio
    virtual void agregarVuelo(vuelo*);
    virtual string toString();
    
    virtual void inicializarActual();
    virtual vuelo* recuperarVuelo();
    virtual int obtenerN();
    
private:
    nodoVuelo* primero;
    nodoVuelo* actual;
    int n;

};


#endif /* LISTAVUELOS_H */

