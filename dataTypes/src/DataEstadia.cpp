#include "../DataEstadia.h"
#include <iostream>

DataEstadia::DataEstadia(){
}

DataEstadia::DataEstadia(string hostal,string huesped, int habitacion, Fecha checkIn, Fecha checkOut, string codigoEstadia, int codigoPromo, string codigoReserva){
    this->hostal = hostal;
    this->huesped = huesped;
    this->habitacion = habitacion;
    this->checkIn = checkIn;
    this->checkOut = checkOut;
    this->codigoEstadia = codigoEstadia;
    this->codigoPromo = codigoPromo;
    this->codigoReserva = codigoReserva;
}

string DataEstadia::getHostal(){
    return this->hostal;
}

string DataEstadia::getHuesped(){
    return this->huesped;
}

int DataEstadia::getHabitacion(){
    return this->habitacion;
}

Fecha DataEstadia::getCheckIn(){
    return this->checkIn;
}

Fecha DataEstadia::getCheckOut(){
    return this->checkOut;
}

string DataEstadia::getCodigoEstadia(){
    return this->codigoEstadia;
}

int DataEstadia::getCodigoPromo(){
    return this->codigoPromo;
}

string DataEstadia::getCodigoReserva(){
    return this->codigoReserva;
}





