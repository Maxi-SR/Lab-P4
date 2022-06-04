#ifndef HOSTAL
#define HOSTAL
#include <string>
#include <set>
#include "Habitacion.h"
#include "Calificacion.h"
#include "../dataTypes/DataComentario.h"
#include "../dataTypes/DataInfoBasicaHostal.h"
#include "Reserva.h"

class Hostal
{
private:
	string nombre;
	string direccion;
	string telefono;
	set<Habitacion> habitaciones;
	set<Calificacion> calificaciones;
	set<Reserva> reservas;

public:
	Hostal(string, string, string, Habitacion, Calificacion, Reserva);
	string getDireccion();
	string getNombre();
	string getTelefono();
	set<Habitacion> getHabitaciones();
	set<Calificacion> getCalificaciones();
	void setDireccion(string);
	void setNombre(string);
	void setTelefono(string);
	// void setHabitacion(Habitacion);
	// set<Calificacion> setCalificaciones();
	set<DataComentario> darComSinResp();
	void ingresarCom(string);
	DataInfoBasicaHostal getDataInfoBasicaHostal();
	void crearCalificacion(string, int);
	set<Reserva> getReservas();
	virtual ~Hostal();
};

#endif
