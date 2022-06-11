#include "DataInfoBasicaHostal.h"



DataInfoBasicaHostal::DataInfoBasicaHostal(string nombre, string direccion, int telefono)
{
    this->nombre = getNombre();
    this->direccion = getDireccion();
    this->telefono = telefono;
}

int DataInfoBasicaHostal::getTelefono(){
    return this->telefono;
}

