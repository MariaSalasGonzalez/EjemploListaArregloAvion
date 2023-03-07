/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vuelo.h
 * Author: una
 *
 * Created on 24 de octubre de 2019, 11:59 AM
 */

#ifndef VUELO_H
#define VUELO_H


#include <sstream>
using std::string;

#include "avion.h"
#include "piloto.h"

class vuelo {
public:
    vuelo(string,string,avion*,piloto*);
    virtual ~vuelo();
    virtual string toString(bool=true);
private:
    string aeropuertoSalida;
    string aeropuertoLlegada;
    avion* _avion;
    piloto* _piloto;

};

#endif /* VUELO_H */

