#include <string>
using namespace std;
#include <map>
#include <set>

#include "../include/Huesped.h"

Huesped :: Huesped(string nombre, string email, string password, bool finger){
	this->nombre=nombre;
	this->email=email;
	this->password=password;
	this->finger=finger;
}

bool Huesped :: getFinger(){
	return(this->finger);
}

void Huesped :: setFinger(bool f){
	this->finger=f;
}

map<int,Calificacion*> Huesped :: getCalificacion(){
	return(this->calificacion);
}

void Huesped :: addCalificacion(Calificacion c){
	map<int,Calificacion*> :: iterator it;
	it=calificacion.end();
	calificacion.insert(it,c);
}

set<Estadia> Huesped :: getEstadias(){
	return(this->estadias);
}

void Huesped :: setEstadias(){

}

set<Reserva> Huesped :: getReservas(){
	return(this->reservas);
}

set<DataEstadia> Huesped :: obtenerEstadias(){
		set<DataEstadia> ret;
		set<DataEstadia> :: iterator it;
		it=ret.end();
		set<DataEstadia> :: iterator itE;
		fot(itE=estadias.begin();itE!=estadias.end();++itE){
			if itE->estaFinalizada(){
				DataEstadia est=itE->obtenerDataEstadia();
				ret.insert(it,es);
				it++;

			}
		}

}
bool Huesped :: estadiaUsrActiva(){

}

DataReserva * Huesped :: getDatos(){

}

DataUsuario * Huesped :: getDataUsuario(){

}