/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   aerolinea.cpp
 * Author: una
 * 
 * Created on 24 de octubre de 2019, 11:59 AM
 */

#include "aerolinea.h"
#include "listaVuelos.h"

aerolinea::aerolinea(string ruta) 
    : gestor(new gestorArchivos(ruta)), pilotos(new lista()), vuelos(new listaVuelos()), aviones(new arregloAviones(2)){
    
}

aerolinea::~aerolinea() {
    delete pilotos;
    delete aviones;
    delete vuelos;
}

string aerolinea::listarPilotos() {
    return pilotos->toString();
}

string aerolinea::listarVuelos() {
    return vuelos->toString();
}

string aerolinea::listarAviones() {
    return aviones->toString();
}


void aerolinea::agregarPiloto(piloto* p) {
    pilotos->agregarPiloto(p);
}

void aerolinea::agregarAvion(avion* a) {
    aviones->agregarAvion(a); 
}

void aerolinea::agregarVuelo(vuelo* v) {
    vuelos->agregarVuelo(v); 
}

avion* aerolinea::recuperarAvionPorCodigo(string codigo) {
    return aviones->recuperarAvionPorCodigo(codigo);
}

piloto* aerolinea::recuperarPilotoPorCodigo(string codigo) {
    return pilotos->recuperarPilotoPorCodigo(codigo);
}



void aerolinea::recuperarDatosAplicacion() {
    gestor->abrirFlujoModoLectura();
    pilotos = gestor->recuperarPilotos();
    aviones = gestor->recuperarAviones();
    vuelos = gestor->recuperarVuelos(this);
    gestor->cerrarFlujo();
}

void aerolinea::guardarDatosAplicacion() {
    gestor->abrirFlujoModoEscritura();
    gestor->guardarPilotos(pilotos);
    gestor->guardarAviones(aviones);
    gestor->guardarVuelos(vuelos);
    gestor->cerrarFlujo();
}






