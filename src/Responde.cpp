#include <map>
#include <set>

using namespace std;

#include "../include/Calificacion.h"
#include "../include/Empleado.h"
#include "../include/Responde.h"

Responde :: Responde(string com, Empleado* emp, Calificacion* cal){
	this->comentario=com;
	this->empl=emp;
	this->calif=cal;
}

string Responde :: getComentario(){
	return (this->comentario);
}

Empleado* Responde :: getEmpleado(){
	return (this->empl);
}

Calificacion* Responde :: getCalificacion(){
	return (this->calif);
}