/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoVuelo.h
 * Author: una
 *
 * Created on 24 de octubre de 2019, 01:53 PM
 */

#ifndef NODOVUELO_H
#define NODOVUELO_H

#include "vuelo.h"

class nodoVuelo {
public:
    nodoVuelo(vuelo*,nodoVuelo*);
    virtual ~nodoVuelo();
    virtual vuelo* obtenerDato();
    virtual nodoVuelo* obtenerSiguiente();
    virtual void fijarSiguiente(nodoVuelo*);
private:
    vuelo* dato;
    nodoVuelo* siguiente;

};

#endif /* NODOVUELO_H */

