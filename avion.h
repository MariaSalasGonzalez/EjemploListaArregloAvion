/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   avion.h
 * Author: una
 *
 * Created on 24 de octubre de 2019, 11:59 AM
 */

#ifndef AVION_H
#define AVION_H

#include <sstream>
using std::string;

class avion {
public:
    avion(string,string);
    virtual ~avion();
    virtual string toString();
    virtual string getCodigo();
private:    
    string codigo;
    string descripcion;

};

#endif /* AVION_H */

