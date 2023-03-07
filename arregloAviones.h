/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arregloAviones.h
 * Author: una
 *
 * Created on 24 de octubre de 2019, 12:05 PM
 */

#ifndef ARREGLOAVIONES_H
#define ARREGLOAVIONES_H

#include "avion.h"

class arregloAviones {
public:
    arregloAviones(int);
    virtual ~arregloAviones();
    virtual void agregarAvion(avion*);
    virtual avion* recuperarAvion(int);
    virtual avion* recuperarAvionPorCodigo(string);
    virtual string toString();
    virtual int obtenerK();
    
private:
    avion** aviones;
    int n;
    int k;

};

#endif /* ARREGLOAVIONES_H */

