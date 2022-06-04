#ifndef ESTADIACONTROLLER
#define ESTADIACONTROLLER
#include <string>
using namespace std;

#include <set>
#include "Estadia.h"
#include "../dataTypes/DtEstadia.h"
#include "Hostal.h"
#include "../dataTypes/DataComentario.h"
#include "../dataTypes/DtaReserva.h"
#include "Calificacion.h"
#include "Habitacion.h"
#include "IEstadiaController.h"

class EstadiaController: public IEstadiaController{
	private:
		set<Estadia> estadias;
		set<Habitacion> habitaciones;
	public:
		set<string> obtenerHostalesRegistrados(); 
		void seleccionarHostal(string);
		set<DtEstadia> obtenerEstadiasRegistradas(Hostal);
		void seleccionarEstadia(int);
		DtEstadia verInformacionEstadia();	
		set<Habitacion> getHabitaciones();
		void setHabitaciones(Habitacion);
		bool esCalificadaEstadia(); 
		bool existeRespuestaEmpleado(); 
		int verCalificacionEstadia(); 
		set<DataComentario> verRespuestaEstadia(); 
		DtaReserva verReservaAsociada();
		int confirmarConsultaDeEstadia();
		void ingresarMensaje(Calificacion,string);
		void getEstadia(Estadia);
		};

#endif
