#include "../include/Habitacion.h"
#include "../include/Reserva.h"
#include "../include/ReservaIndividual.h"
#include "../include/ReservaGrupal.h"



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
    for (std::set<Reserva*>::iterator it = this->reservas.begin(); it != this->reservas.end(); ++it){
        //una habitacion esta disponible para una fecha si todas sus reservas terminan antes del checkIn o comienzan luego del checkOut
        //ReservaIndividual result = it;
        ReservaIndividual* newPtr = dynamic_cast<ReservaIndividual*>(*it);
        if (newPtr != 0)
            res = res && (newPtr->getCheckOut() < checkIn) && (checkOut < newPtr->getCheckIn());
        else {
            ReservaGrupal* otroPtr = dynamic_cast<ReservaGrupal*>(*it);
            res = res && (newPtr->getCheckOut() < checkIn) && (checkOut < newPtr->getCheckIn());
        }
    }
    return res;
}

