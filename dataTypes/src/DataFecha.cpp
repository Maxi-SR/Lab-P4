#include "../DataFecha.h"
#include <iostream>

Fecha::Fecha(){
}

Fecha::Fecha(int dia, int mes, int anio, int hora){
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
    this->hora = hora;
}

int Fecha::getDia(){
    return this->dia;
}

int Fecha::getMes(){
    return this->mes;
}

int Fecha::getAnio(){
    return this->anio;
}

int Fecha::getHora(){
    return this->hora;
}

bool Fecha::operator==(Fecha f){
    return (this->dia == f.getDia() && this->mes == f.getMes() && this->anio == f.getAnio() && this->hora == f.getHora());
}
