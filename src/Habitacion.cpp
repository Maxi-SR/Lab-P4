#include "../include/Habitacion.h"
#include "../include/Reserva.h"
#include "../include/ReservaIndividual.h"



Habitacion::Habitacion(int numHab, float precio, int capacidad, Hostal* hostal){
    this->numHab = numHab;
    this->precio = precio;
    this->capacidad = capacidad;
    this->hostal = hostal;
}

int Habitacion::getNumHab(){
    return this->numHab;
}

bool Habitacion::getReservas(DataFecha checkIn, DataFecha checkOut){
    bool res = true;
    for (std::set<Reserva>::iterator it = this->reservas.begin(); it != this->reservas.end(); ++it){
        //una habitacion esta disponible para una fecha si todas sus reservas terminan antes del checkIn o comienzan luego del checkOut
        ReservaIndividual res = *it;
        ReservaIndividual* newPtr = dynamic_cast<ReservaIndividual*>(*it);

        res = res && (it->getCheckOut() < checkIn) && (it->getCheckIn() < checkOut);
    }

}

