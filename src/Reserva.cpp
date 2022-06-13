#include "../include/Reserva.h"

Reserva::Reserva(int codigo, DataFecha checkIn, DataFecha checkOut, Habitacion hab, Huesped hues){
    this->codigo = codigo;
    this->checkIn = checkIn;
    this->checkOut = checkOut;
    this->habitacion = hab;
    this->huespedes.insert(hues);
}


DataFecha Reserva::getCheckIn(){
    return this->checkIn;
}

DataFecha Reserva::getCheckOut(){
    return this->checkOut;
}


