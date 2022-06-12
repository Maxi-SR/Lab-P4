#include "../DataDescripcion.h"
#include <iostream>

//DataDescripcion::DataDescripcion(){
//}

DataDescripcion::DataDescripcion(set<string> com, set<int> cal,float prom, DataHabitacion hab){
    this->comentarios = com;
    this->calificaciones = cal;
    this->promedio = prom;
    this->habitacion = hab;
}

set<string> DataDescripcion::getComentarios(){
    return this->comentarios;
}

set<int> DataDescripcion::getCalificaciones(){
    return this->calificaciones;
}

float DataDescripcion::getPromedio(){
    return this->promedio;
}

DataHabitacion DataDescripcion::getHabitacion(){
    return this->habitacion;
}




