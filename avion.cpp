/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   avion.cpp
 * Author: una
 * 
 * Created on 24 de octubre de 2019, 11:59 AM
 */

#include <sstream>
using std::stringstream;

#include "avion.h"

avion::avion(string codigo, string descripcion): codigo(codigo), descripcion(descripcion) {
}


avion::~avion() {
}

string avion::toString() {
    stringstream r;
    r << codigo << "\t" << descripcion;   
    return r.str();
}

string avion::getCodigo() {
    return codigo;
}


