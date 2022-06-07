#include "../DataEmpleado.h"
#include "../DataUsuario.h"
#include <iostream>

DataEmpleado::DataEmpleado(){

}

DataEmpleado::DataEmpleado(string nombre, string email, string hostal, Cargo cargo){
    this->nombre = nombre;
    this->email = email;
    this->hostal = hostal;
    this->cargo = cargo;
}

string DataEmpleado::getHostal(){
    return this->hostal;
}

Cargo DataEmpleado::getCargo(){
    return this->cargo;
}


