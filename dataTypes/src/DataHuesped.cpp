#include "../DataHuesped.h"
#include <iostream>

DataHuesped::DataHuesped(){
}

DataHuesped::DataHuesped(string nombre, string email, bool finger){
    this->nombre = nombre;
    this->email = email;
    this->finger = finger;
}

bool DataHuesped::getFinger(){
    return this->finger;
}

