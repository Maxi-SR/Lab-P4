#include <string>
#include <map>
#include <set>
#include "../include/Estadia.h"

using namespace std;



Estadia :: Estadia(string hostal, Huesped h, Reserva r, int habitacion, DataFecha checkIn, int codigoEstadia){
	this->hostal=hostal;
	*this->huesped=h;
	*this->reserva=r;
	*this->calificacion=NULL;
	this->habitacion=habitacion;
	*this->checkIn=checkIn;
	*this->checkOut=NULL;
	this->codigoEstadia=codigoEstadia;
	this->codigoPromo=0;
}
string Estadia :: getHostal(){
	return (this->hostal);
}
Huesped * Estadia :: getHuesped(){
	return (this->huesped);
}
Reserva *Estadia :: getReserva(){
	return (this->reserva);
}
Calificacion *Estadia :: getCalificacion(){
	return (this->calificacion);
}
int Estadia :: getHabitacion(){
	return (this->habitacion);
}
DataFecha* Estadia :: getCheckIn(){
	return (this->checkIn);
}
DataFecha* Estadia :: getCheckOut(){
	return (this->checkOut);
}
int Estadia :: getCodigoEstadia(){
	return (this->codigoEstadia);
}
int Estadia :: getCodigoPromo(){
	return (this->codigoPromo);
}	

void Estadia :: setHostal(string hostal){
	this->hostal=hostal;
}
void Estadia :: setHuesped(Huesped huesped){
	Huesped *h=this->huesped;
	this->huesped=huesped;
	delete h;
}
void Estadia :: setReserva(Reserva reserva){
	Reserva *r=this->reserva;
	this->reserva=reserva;
	delete r;
}
void Estadia :: setCalificacion(Calificacion calificacion){
	Calificacion *c=this->calificacion;
	this->calificacion=calificacion;
	delete c;
}
void Estadia :: setHabitacion(int habitacion){
	this->habitacion=habitacion;
}
void Estadia :: setCheckIn(DataFecha fecha){
	DataFecha *c=this->checkIn;
	this->checkIn=fecha;
	delete c;
}
void Estadia :: setCheckOut(DataFecha fecha){
	DataFecha *c=this->checkOut;
	this->checkOut=fecha;
	delete c;
}
void Estadia :: setCodigoEstadia(int codigo){
	this->codigoEstadia = codigo;
}
void Estadia :: setCodigoPromo(int codigo){
	this->codigoPromo = codigo;
}
bool Estadia :: estaFinalizada(){
	return (this->checkOut!=NULL);
}
DataEstadia Estadia :: obtenerDataEstadia(){
	Huesped *h=this->huesped;
	DataEstadia est=DataEstadia(this->hostal,h->getEmail(),this->habitacion,this->checkIn,this->checkOut,this->codigoEstadia);
	return est;
}

bool Estadia :: existeActiva(){
	return (this->checkOut==NULL);
}
DataEstadia Estadia :: getInfoEstadia(){

}
