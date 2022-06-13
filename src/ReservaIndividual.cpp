#include "../include/ReservaIndividual.h"

ReservaIndividual::ReservaIndividual(int codigo, DataFecha checkIn, DataFecha checkOut, EstadoReserva estado, float precio){
    this->codigo = codigo;
    this->checkIn = checkIn;
    this->checkOut = checkOut;
    this->estado = estado;
    this->precio = precio;
}


