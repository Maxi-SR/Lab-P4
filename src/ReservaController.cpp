#include "ReservaController.h"
#include "../include/ReservaIndividual.h"
#include "Fabrica.h"
#include <map>
#include <set>

using namespace std;

class DtaHostal;

set<DtaHostal> ReservaController::obtenerHostalesRegistrados(){
    HostalController *h = HostalController::getInstance();
    set<DtaHostal> res = h->obtener_Hostales_Registrados();
    return res;
}

void ReservaController::seleccionarHostal(string nombre, DataFecha checkIn, DataFecha checkOut, bool tipo){
    HostalController *h = HostalController::getInstance();
    h->seleccionarHostal(nombre, checkIn, checkOut, tipo); 
    this->nombre = nombre;
	this->checkIn = checkIn;
	this->checkOut = checkOut;
	this->tipo = tipo;
}

set<int> ReservaController::obtenerHabitacionesDisponibles(){
    HostalController *h = HostalController::getInstance();
    return h->obtenerHabitacionesDisponibles();
}

set<int> ReservaController::obtenerHabitacionesDisponibles(){
    HostalController *h = HostalController::getInstance();
    return h->obtenerHabitacionesDisponibles();
}

void ReservaController::seleccionarHabitacion(int numHab){
    std::map<int, Habitacion*>::iterator it;
    it = habitaciones.find(numHab);
    this->recordada = it->second;
}

set<DataHuesped> ReservaController::obtenerHuepedesRegistrados(){
    UsuarioController *u = UsuarioController::getInstance();
    return u->obtenerHuespedesRegistrados();
}

void ReservaController::seleccionarHuesped(string email){
    UsuarioController *u = UsuarioController::getInstance();
    Huesped* h = u->getHuespedes(email);
    this->recordado = h;
}

void ReservaController::cancelarAsignacion(){
    delete this->recordado;
    delete this->recordada;
}

void ReservaController::confirmarAsignacion(){
    UsuarioController *u = UsuarioController::getInstance();
    //como genero el codigo??
    if (this->tipo == 0)
        ReservaIndividual nueva(this->checkIn, this->checkOut, this->recordada, this->recordado);     
}
