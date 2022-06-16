#include <string>
using namespace std;

#include "../include/EstadiaController.h"
#include "../include/ReservaIndividual.h"
#include "../include/Fabrica.h"
#include "../include/Estadia.h"
#include "../dataTypes/DataEstadia.h"
#include "../include/Hostal.h"
#include "../dataTypes/DataComentario.h"
#include "../dataTypes/DataReserva.h"
#include "../include/Calificacion.h"
#include "../include/Habitacion.h"
#include "../include/IEstadiaController.h"
#include <map>
#include <set>

static EstadiaController EstadiaController ::*getInstance(){

}
set<string> EstadiaController ::obtenerHostalesRegistrados(){

}
void EstadiaController ::seleccionarHostal(string){

}
set<DataEstadia> EstadiaController :: obtenerEstadiasRegistradas(Hostal){

}
void EstadiaController :: seleccionarEstadia(int){

}
int EstadiaController :: getCodigoEstadia(){
	return(this->codigoEstadia);
}
void EstadiaController :: setCodigoEstadia(){
	this->codigoEstadia++;
}

DataEstadia EstadiaController :: verInformacionEstadia(){

}
set<Habitacion> EstadiaController :: getHabitaciones(){

}
void EstadiaController :: setHabitaciones(Habitacion){

}
bool EstadiaController :: esCalificadaEstadia(){

}
bool EstadiaController :: existeRespuestaEmpleado(){

}
int EstadiaController :: verCalificacionEstadia(){

}
set<DataComentario> EstadiaController :: verRespuestaEstadia(){

}
DataReserva *EstadiaController :: verReservaAsociada(){

}
int EstadiaController :: confirmarConsultaDeEstadia(){

}
void EstadiaController :: ingresarMensaje(Calificacion cal, string emailHuesped, int idEstadia){
	    UsuarioController *u = UsuarioController::getInstance();
	    map<int,Estadia*> :: iterator itE;
	    itE=estadias.find(idEstadia);
	    itE->setCalificacion(cal);
	    u->ingresarMensaje(cal,emailHuesped);



}
void EstadiaController :: getEstadia(Estadia){

}
