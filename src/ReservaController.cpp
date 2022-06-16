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

set<string> ReservaController::obtenerNombresHostalesRegistrados(){
    HostalController *h = HostalController::getInstance();
    set<string> ret = h->obtenerNombresHostalesRegistrados();
    return ret;
}

void ReservaController::seleccionarHostal(string nombre, DataFecha checkIn, DataFecha checkOut, bool tipo){
    HostalController *h = HostalController::getInstance();
    h->seleccionarHostal(nombre, checkIn, checkOut, tipo); 
    this->nombre = nombre;
	this->checkIn = checkIn;
	this->checkOut = checkOut;
	this->tipo = tipo;
    //this->codigo = 0;
}

void ReservaController:: seleccionarHostal(strin nombreHostal){
    this->datos.push_back(nombreHostal);
}
void ReservaController:: ingresarEmailHuesped(string emailHuesped){
    this->datos.push_back(emailHuesped);
}

set<int> ReservaController:: listarReservas(){
    map<int,Reserva*> :: iterator itR;
    set<int> ret;
    set<int> :: iterator it;
    it=ret.end();
    for(itR=reservas.begin();itR!=reservas.end();++itR){
        EstadoReserva er=itR->getEstado();
        if (er!=Cancelada){
            ret.insert(it,itR->obtenerIdReserva());
            ++it;
        }
    }
    return ret;
}

void ReservaController:: seleccionarReserva(int idR){
    UsuarioController *u = UsuarioController::getInstance();
    map<int,Reserva*> :: iterator itR;
    itR=reservas.find(idR);
    itR->setEstado(Cerrada);
    u->crearEstadia(*itR,datos.back());


}

void ReservaController::seleccionarHostal(string nombre, DataFecha checkIn, DataFecha checkOut, bool tipo){
    HostalController *h = HostalController::getInstance();
    h->seleccionarHostal(nombre, checkIn, checkOut, tipo); 
    this->nombre = nombre;
    this->checkIn = checkIn;
    this->checkOut = checkOut;
    this->tipo = tipo;
    //this->codigo = 0;
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
    HostalController *h = HostalController::getInstance(); 
    this->recordada = h->seleccionarHabitacion(numHab);
}

set<DataHuesped> ReservaController::obtenerHuepedesRegistrados(){
    UsuarioController *u = UsuarioController::getInstance();
    return u->obtenerHuespedesRegistrados();
}

void ReservaController::seleccionarHuesped(string email){
    UsuarioController *u = UsuarioController::getInstance();
    Huesped* h = u->getHuespedes(email);
    this->recordado.push_back(h);
}

void ReservaController::cancelarAsignacion(){
    delete this->recordada;
}

void ReservaController::confirmarAsignacion(){
    UsuarioController *u = UsuarioController::getInstance();
    //como genero el codigo??
    if (this->tipo == 0){
        ReservaIndividual nueva(this->codigo, this->checkIn, this->checkOut, this->recordada, this->recordado.front());     
        this->reservas.insert(nueva);
        this->recordado.front()->agregarReserva(&nueva); //unico huesped
    }
    else {
        ReservaGrupal nueva(this->codigo, this->checkIn, this->checkOut, this->recordada, this->recordado, this->recordado.size());
        this->reservas.insert(nueva);
        for (std::vector<Huesped*>::iterator it = this->recordado.begin(); it != this->recordado.end(); ++it){
            Huesped* actual = *it;
            actual->agregarReserva(&nueva);
        }
    }
}
