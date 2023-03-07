/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vuelo.cpp
 * Author: una
 * 
 * Created on 24 de octubre de 2019, 11:59 AM
 */

#include <sstream>
using std::stringstream;

#include "vuelo.h"

vuelo::vuelo(string aeropuertoSalida,string aeropuertoLlegada,avion* _avion,piloto* _piloto)
  : aeropuertoSalida(aeropuertoSalida), aeropuertoLlegada(aeropuertoLlegada), _avion(_avion), _piloto(_piloto) {
}

vuelo::~vuelo() {
}

string vuelo::toString(bool bandera) {
    stringstream r;
    
    if(bandera){
        r << "Salida: " <<aeropuertoSalida <<"\t";
        r << "Llegada: " <<aeropuertoLlegada<<"\t";
        r <<"\nAvion: "<< _avion->toString();
        r <<"\nPiloto: "<<_piloto->toString();
    }else{
        r <<aeropuertoSalida <<"\t";
        r <<aeropuertoLlegada<<"\t";
        r << _avion->getCodigo() <<"\t";
        r << _piloto->getCodigo();
    }
        
    return r.str();
}


