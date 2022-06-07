#include "../DataReservaIndividual.h"
#include <iostream>

DataReservaIndividual::DataReservaIndividual(){
}

DataReservaIndividual::DataReservaIndividual(int codigo, Fecha checkIn, Fecha checkOut, EstadoReserva estado, float precio, int numHab){
    this->codigo = codigo;
    this->checkIn = checkIn;
    this->checkOut = checkOut;
    this->estado = estado;
    this->precio = precio;
    this->numHab = numHab;
}

bool DataReservaIndividual::operator==(DataReservaIndividual r){
    return (this->codigo == r.getCodigo() && this->checkIn == r.getCheckIn() && this->checkOut == r.getCheckOut() && this->estado == r.getEstado() && this->precio == r.getPrecio() && this->numHab == r.getNumHab());
}

