#include "../include/Hostal.h"


 Hostal::Hostal(string nombre,string direccion,int telefono,set<Habitacion> *habs,
                set<Calificacion> *cals,set<Reserva> *reservas){
        this->nombre = nombre;
        this->telefono = telefono;
        this->direccion = direccion;
        this->habitaciones = habs;
        this->calificaciones = cals;
        this->reservas = reservas;
 }

 string Hostal::getDireccion(){
     return this->direccion;
 };

string Hostal::getNombre(){
    return this->nombre;
}

int Hostal::getTelefono(){
    return this->telefono;
}

set<Habitacion>* Hostal::getHabitaciones(){
    return this->habitaciones;
}

set<Calificacion>* Hostal::getCalificaciones(){
    return this->calificaciones;

}

set<DataComentario> Hostal::darComSinResp(){

}

void Hostal::ingresarCom(string com){
    
}

DataHostal Hostal::getDataInfoBasicaHostal(){

}

void Hostal::crearCalificacion(string com,int cal ){

}

set<Reserva> Hostal::getReservas(){

}

//HACER DESTRUCTOR 


