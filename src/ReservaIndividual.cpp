#include "../include/ReservaIndividual.h"
#include "../include/Reserva.h"

ReservaIndividual::ReservaIndividual(int codigo, DataFecha checkIn, DataFecha checkOut, Habitacion* hab, Huesped* h){
    this->codigo = codigo;
    this->checkIn = checkIn;
    this->checkOut = checkOut;
    this->estado = Abierta;
    this->habitacion = hab;
    this->huespedes.push_back(h);
}	

DataReserva* ReservaIndividual::getDatos(){
    return NULL;
}

float ReservaIndividual::getPrecio(){
    return this->precio;
}

ReservaIndividual::~ReservaIndividual(){

}
