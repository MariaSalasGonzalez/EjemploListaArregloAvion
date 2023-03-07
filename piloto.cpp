/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   piloto.cpp
 * Author: ESCINF
 * 
 * Created on 16 de septiembre de 2019, 15:34
 */
#include <sstream>
using std::stringstream;

#include "piloto.h"

piloto::piloto(string nombre
  , string codigo)
  : nombre(nombre),codigo(codigo) {
}

piloto::~piloto() {
}

string piloto::toString() {
    stringstream r;
    r << codigo << "\t" << nombre;   
    return r.str();
}

string piloto::getCodigo() {
    return codigo;
}


