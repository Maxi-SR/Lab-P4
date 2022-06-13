#include "ReservaController.h"
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
