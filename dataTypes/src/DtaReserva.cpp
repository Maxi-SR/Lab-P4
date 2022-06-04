#include "../DtaReserva.h"

int DtaReserva::getCodigo(){
   return this->codigo;
}

Fecha *DtaReserva::getCheckIn(){
   return &this->checkIn;
}
Fecha *DtaReserva::getCheckOut(){
   return &this->checkOut;
}
EstadoReserva DtaReserva::getEstado(){ //va como puntero?
   return this->estado;
}
float DtaReserva::getPrecio(){
   return this->precio;
}


