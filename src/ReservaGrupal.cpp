#include "../include/ReservaGrupal.h"
#include "../include/Reserva.h"

ReservaGrupal::ReservaGrupal(int, DataFecha, DataFecha, Habitacion*, vector<Huesped*>, int){

}

int ReservaGrupal::getCanthuespedes(){
    return this->canthuespedes;
}

DataReserva* ReservaGrupal::getDatos(){
    return NULL;
}

float ReservaGrupal::getPrecio(){
    return (this->precio)*canthuespedes;
}

ReservaGrupal::~ReservaGrupal(){

}


