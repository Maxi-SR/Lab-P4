#include "../DataReservaGrupal.h"
#include <iostream>



DataReservaGrupal::DataReservaGrupal(int codigo, DataFecha checkIn, DataFecha checkOut, EstadoReserva estado, float precio, int numHab, int canthuespedes, set<string> huespedes){
    this->codigo = codigo;
    this->checkIn = checkIn;
    this->checkOut = checkOut;
    this->estado = estado;
    this->precio = precio;
    this->numHab = numHab;
    this->canthuespedes = canthuespedes;
    this->huespedes = huespedes;
}


