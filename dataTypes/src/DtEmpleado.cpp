#include "DtEmpleado.h"


DtEmpleado::DtEmpleado(string nombre,string email,Cargo tipoCargo)
{
    this->nombre = getNombre();
    this->email = getEmail();
    this->tipoCargo = tipoCargo;


}

Cargo DtEmpleado::getCargo(){
    return this->tipoCargo;
}