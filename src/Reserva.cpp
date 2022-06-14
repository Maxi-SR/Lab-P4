#include "../include/Reserva.h"

Reserva::Reserva(){
    
}


Reserva::Reserva(int codigo, DataFecha checkIn, DataFecha checkOut, Habitacion* hab, Huesped* hues){
    this->codigo = codigo;
    this->checkIn = checkIn;
    this->checkOut = checkOut;
    this->habitacion = hab;
    this->huespedes.push_back(hues);
}


DataFecha Reserva::getCheckIn(){
    return this->checkIn;
}

DataFecha Reserva::getCheckOut(){
    return this->checkOut;
}

EstadoReserva Reserva::getEstado(){
    return this->estado;
}

vector<Huesped*> Reserva::getHuespedes(){
    return this->huespedes;
}

DataFecha Reserva::setCheckIn(DataFecha d){
    this->checkIn = d;
}

DataFecha Reserva::setCheckOut(DataFecha d){
    this->checkOut = d;
}

void Reserva::setEstado(EstadoReserva e){
    this->estado = e;
}

int Reserva::obtenerIdReserva(){
    return this->codigo;
}

void Reserva::cerrarReserva(){
    this->estado = Cerrada;
}



