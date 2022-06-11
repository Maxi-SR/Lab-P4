#include "DtaHostal.h"


DtaHostal::DtaHostal(string nombre,string direccion,int calPromedio)
{

    this->nombre = getNombre();
    this->direccion = getDireccion();
    this->calPromedio = calPromedio;

}

int DtaHostal::getCalPromedio(){
    return this->calPromedio;
}