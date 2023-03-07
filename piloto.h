/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   piloto.h
 * Author: ESCINF
 *
 * Created on 16 de septiembre de 2019, 15:34
 */

#ifndef PILOTO_H
#define PILOTO_H

#include <sstream>
using std::string;

class piloto {
public:
    piloto(string,string);
    virtual ~piloto();
    virtual string toString();
    virtual string getCodigo();
private:
    string nombre;
    string codigo;

};

#endif /* PILOTO_H */

