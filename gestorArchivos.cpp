/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gestorArchivos.cpp
 * Author: ESCINF
 * 
 * Created on 7 de octubre de 2019, 18:11
 */



#include "gestorArchivos.h"
#include "piloto.h"
#include "lista.h"

#include <sstream>

gestorArchivos::gestorArchivos(string ruta)
: ruta(ruta) {
}


gestorArchivos::~gestorArchivos() {
}

void gestorArchivos::abrirFlujoModoEscritura(){
    archivo.open(ruta.c_str(), ios::out);
}

void gestorArchivos::abrirFlujoModoLectura(){
    archivo.open(ruta.c_str(), ios::in);
}

void gestorArchivos::cerrarFlujo(){
    archivo.close();
}


int gestorArchivos::obtenerInt(std::string s){
    int v;
    std::stringstream r(s);
    r >> v;
    return v;
}
double gestorArchivos::obtenerDouble(std::string s){
    double v;
    std::stringstream r(s);
    r >> v;
    return v;
}

void gestorArchivos::guardarInt(int i, char delimitador){
    archivo<<i<<delimitador;
}

void gestorArchivos::guardarDouble(double d, char delimitador){
    archivo<<d<<delimitador;
}

void gestorArchivos::guardarString(string s, char delimitador){
    archivo<<s<<delimitador;
}

int gestorArchivos::recuperarInt(char delimitador){
    string r;
    getline(archivo,r,delimitador);
    return obtenerInt(r);   
}
double gestorArchivos::recuperarDouble(char delimitador){
    string r;
    getline(archivo,r,delimitador);
    return obtenerDouble(r);
}
string gestorArchivos::recuperarString(char delimitador){
    string r;
    getline(archivo,r,delimitador);
    return r;
}

void gestorArchivos::guardarPiloto(piloto* p) {
    guardarString(p->toString(),'\n');
}

piloto* gestorArchivos::recuperarPiloto() {
    piloto* p;    
    string codigo, nombre;
    codigo = recuperarString('\t');
    nombre = recuperarString('\n');
    p = new piloto(nombre,codigo);
    return p;
}

void gestorArchivos::guardarAvion(avion* a) {
    guardarString(a->toString(),'\n');
}

avion* gestorArchivos::recuperarAvion() {
    avion* a;    
    string codigo, descripcion;
    codigo = recuperarString('\t');
    descripcion = recuperarString('\n');
    a = new avion(codigo,descripcion);
    return a;
}

void gestorArchivos::guardarVuelo(vuelo* v) {
    guardarString(v->toString(false),'\n');
}

vuelo* gestorArchivos::recuperarVuelo(aerolinea* aero) {
    vuelo* v; 
    avion* a;
    piloto* p;
    string aeropuertoSalida, aeropuertoLlegada, codigoAvion, codigoPiloto;
    aeropuertoSalida = recuperarString('\t');
    aeropuertoLlegada = recuperarString('\t');
    codigoAvion = recuperarString('\t');
    codigoPiloto = recuperarString('\n');
    a = aero->recuperarAvionPorCodigo(codigoAvion);
    p = aero->recuperarPilotoPorCodigo(codigoPiloto);
    
    v = new vuelo(aeropuertoSalida,aeropuertoLlegada,a,p);
    return v;
}


void gestorArchivos::guardarPilotos(lista* listaPilotos) {
    listaPilotos->inicializarActual();    
    piloto* p;
    
    int n = listaPilotos->obtenerN();
    guardarInt(n,'\n');
    
    int i=0; 
    while(i < n){
        p = listaPilotos->recuperarPiloto();
        guardarPiloto(p);
        i++;
    }
}


lista* gestorArchivos::recuperarPilotos() {
    int cantidadPilotos;
    lista* listaPilotos = new lista();
    piloto* p;
    cantidadPilotos = recuperarInt('\n');
    
    int i = 0;
    while(i < cantidadPilotos){
        p = recuperarPiloto();
        listaPilotos->agregarPiloto(p);
        i++;
    }    
    return listaPilotos;
}

void gestorArchivos::guardarAviones(arregloAviones* vectorAviones) {   
    avion* a;
    
    int n = vectorAviones->obtenerK();
    guardarInt(n,'\n');
    
    int i=1; 
    while(i <= n){
        a = vectorAviones->recuperarAvion(i);
        guardarAvion(a);
        i++;
    }
}


arregloAviones* gestorArchivos::recuperarAviones() {
    int cantidadAviones;
    arregloAviones* aviones = new arregloAviones(2);
    avion* a;
    cantidadAviones = recuperarInt('\n');
    
    int i = 0;
    while(i < cantidadAviones){
        a = recuperarAvion();
        aviones->agregarAvion(a);
        i++;
    }    
    return aviones;
}


void gestorArchivos::guardarVuelos(listaVuelos* vuelos) {  
    vuelos->inicializarActual(); 
    vuelo* v;
    
    int n = vuelos->obtenerN();
    guardarInt(n,'\n');
    
    int i=0; 
    while(i < n){
        v = vuelos->recuperarVuelo();
        guardarVuelo(v);
        i++;
    }
}


listaVuelos* gestorArchivos::recuperarVuelos(aerolinea* aero) {
    int cantidadVuelos;
    listaVuelos* vuelos = new listaVuelos();
    vuelo* v;
    cantidadVuelos = recuperarInt('\n');
    
    int i = 0;
    while(i < cantidadVuelos){
        v = recuperarVuelo(aero);
        vuelos->agregarVuelo(v);
        i++;
    }    
    return vuelos;
}





