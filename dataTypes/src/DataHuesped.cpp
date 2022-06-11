#include "DataHuesped.h"


DataHuesped::DataHuesped(string nombre,string email,bool finger){
    this->nombre = getNombre();
    this->email = getEmail();
    this->finger = finger;
}


bool DataHuesped::esFinger(){
    return this->finger;
}