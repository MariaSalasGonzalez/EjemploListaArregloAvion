/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodo.h
 * Author: ESCINF
 *
 * Created on 16 de septiembre de 2019, 15:34
 */

#ifndef NODO_H
#define NODO_H

#include "piloto.h"

class nodo {
public:
    nodo(piloto*,nodo*);
    virtual ~nodo();
    virtual piloto* obtenerDato();
    virtual nodo* obtenerSiguiente();
    virtual void fijarSiguiente(nodo*);
private:
    piloto* dato;
    nodo* siguiente;

};

#endif /* NODO_H */

