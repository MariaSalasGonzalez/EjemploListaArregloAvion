/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ESCINF
 *
 * Created on 16 de septiembre de 2019, 15:33
 */

#include <iostream>
using namespace std;

#include "lista.h"
#include "gestorArchivos.h"
#include "aerolinea.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    aerolinea aero("datos.txt");
    
    aero.agregarPiloto(new piloto("Kenneth","123"));
    aero.agregarPiloto(new piloto("Emmanuel","456"));
    aero.agregarPiloto(new piloto("Sofia","789"));
    
    aero.agregarAvion(new avion("AV01", "Boeing 747"));
    aero.agregarAvion(new avion("AV02", "Airbus A330"));
    
    piloto* p = aero.recuperarPilotoPorCodigo("456");
    avion* a = aero.recuperarAvionPorCodigo("AV01");
    
    aero.agregarVuelo(new vuelo("SAN-JOSE", "ORLANDO",a,p));
    aero.agregarVuelo(new vuelo("SAN-JOSE", "PANAMA",a,p));
    
    aero.guardarDatosAplicacion();
    
    aero.recuperarDatosAplicacion();
    
    
    cout << aero.listarPilotos()<<"\n";
    cout << aero.listarAviones()<<"\n";
    cout << aero.listarVuelos();
//    
//    gestor.abrirFlujoModoLectura();
//    lista* listaPilotosRecuperados = gestor.recuperarPilotos();
//    gestor.cerrarFlujo();
//    
//    cout << listaPilotosRecuperados->toString();
    

    return 0;
}

