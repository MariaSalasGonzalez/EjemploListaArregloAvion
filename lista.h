/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lista.h
 * Author: ESCINF
 *
 * Created on 16 de septiembre de 2019, 15:34
 */

#ifndef LISTA_H
#define LISTA_H

#include <sstream>
using std::string;

#include "nodo.h"

class lista {
public:
    lista();
    virtual ~lista();
    //agregar al inicio
    virtual void agregarPiloto(piloto*);
    virtual string toString();
    
    virtual void inicializarActual();
    virtual piloto* recuperarPiloto();
    virtual piloto* recuperarPilotoPorCodigo(string);
    virtual int obtenerN();
    
private:
    nodo* primero;
    nodo* actual;
    int n;

};

#endif /* LISTA_H */

