/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   aerolinea.h
 * Author: una
 *
 * Created on 24 de octubre de 2019, 11:59 AM
 */

#ifndef AEROLINEA_H
#define AEROLINEA_H

#include "arregloAviones.h"
#include "lista.h"
#include "listaVuelos.h"
#include "gestorArchivos.h"

class aerolinea;
class gestorArchivos;

class aerolinea {
public:
    aerolinea(string);
    virtual ~aerolinea();
    virtual string listarPilotos();
    virtual string listarAviones();
    virtual string listarVuelos();
    virtual void agregarPiloto(piloto*);
    virtual void agregarAvion(avion*);
    virtual void agregarVuelo(vuelo*);
    virtual avion* recuperarAvionPorCodigo(string);
    virtual piloto* recuperarPilotoPorCodigo(string);
    
    virtual void recuperarDatosAplicacion();
    virtual void guardarDatosAplicacion();
private:
    lista* pilotos;
    listaVuelos* vuelos;
    arregloAviones* aviones;
    gestorArchivos* gestor;

};

#endif /* AEROLINEA_H */

