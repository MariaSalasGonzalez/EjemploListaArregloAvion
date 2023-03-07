/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gestorArchivos.h
 * Author: ESCINF
 *
 * Created on 7 de octubre de 2019, 18:11
 */

#ifndef GESTORARCHIVOS_H
#define GESTORARCHIVOS_H

#include <sstream>
using std::string;

#include <fstream>
using namespace std;

#include "lista.h"
#include "listaVuelos.h"
#include "arregloAviones.h"
#include "aerolinea.h"

class aerolinea;
class gestorArchivos;

class gestorArchivos {
public:
    gestorArchivos(string);
    virtual ~gestorArchivos();
    
    //****Paso 1****
    virtual void abrirFlujoModoEscritura();
    virtual void abrirFlujoModoLectura();
    virtual void cerrarFlujo();
    
    //****Paso 2****
    static int obtenerInt(std::string);
    static double obtenerDouble(std::string);
    
    //****Paso 3****
    virtual void guardarInt(int,char);
    virtual void guardarDouble(double,char);
    virtual void guardarString(string, char);
    
    virtual int recuperarInt(char);
    virtual double recuperarDouble(char);
    virtual string recuperarString(char);
    
    //****Paso 4*****
    virtual void guardarPiloto(piloto*);
    virtual piloto* recuperarPiloto();
    virtual void guardarAvion(avion*);
    virtual avion* recuperarAvion();
    virtual void guardarVuelo(vuelo*);
    virtual vuelo* recuperarVuelo(aerolinea*);
    
    //****Paso 5****
    virtual void guardarPilotos(lista*);
    virtual lista* recuperarPilotos();
    virtual void guardarAviones(arregloAviones*);
    virtual arregloAviones* recuperarAviones();
    virtual void guardarVuelos(listaVuelos*);
    virtual listaVuelos* recuperarVuelos(aerolinea*);
    
private:
    string ruta;
    fstream archivo;

};

#endif /* GESTORARCHIVOS_H */

