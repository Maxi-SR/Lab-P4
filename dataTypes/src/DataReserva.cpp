#include "../DataReserva.h"
#include <iostream>

DataReserva::DataReserva(){
}

DataReserva::DataReserva(int codigo, Fecha checkIn, Fecha checkOut, EstadoReserva estado, float precio, int numHab){
    this->codigo = codigo;
    this->checkIn = checkIn;
    this->checkOut = checkOut;
    this->estado = estado;
    this->precio = precio;
    this->numHab = numHab;
}

int DataReserva::getCodigo(){
    return this->codigo;
}

Fecha DataReserva::getCheckIn(){
    this->checkIn;
}

Fecha DataReserva::getCheckOut(){
    this->checkOut;
}

EstadoReserva DataReserva::getEstado(){
    return this->estado;
}

float DataReserva::getPrecio(){
    return this->precio;
}

int DataReserva::getNumHab(){
    return this->numHab;
}






