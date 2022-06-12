#ifndef HOSTAL
#define HOSTAL
#include <string>
#include <set>
#include "Habitacion.h"
#include "Calificacion.h"
#include "../dataTypes/DataComentario.h"
#include "../dataTypes/DataHostal.h"
#include "Reserva.h"

class Habitacion;
class Calificacion;
class Reserva;

class Hostal
{
private:
	string nombre;
	string direccion;
	int telefono;
	set<Habitacion> *habitaciones; // no era un puntero a habitaciones, le puse yo(maxi) para poder hacer NULL
	set<Calificacion> *calificaciones;//no era un puntero a calificaciones, le puse yo(maxi) para poder hacer NULL
	set<Reserva> *reservas;//no era un puntero a reservas, le puse yo(maxi) para poder hacer NULL

public:
	Hostal(string, string, int ,set<Habitacion > *, set<Calificacion> *, set<Reserva> *);
	string getDireccion();
	string getNombre();
	int getTelefono();
	set<Habitacion>* getHabitaciones();
	set<Calificacion>* getCalificaciones();
	void setDireccion(string);
	void setNombre(string);
	void setTelefono(int);
	// void setHabitacion(Habitacion);
	// set<Calificacion> setCalificaciones();
	set<DataComentario> darComSinResp();
	void ingresarCom(string);
	DataHostal getDataInfoBasicaHostal();
	void crearCalificacion(string, int);
	set<Reserva> getReservas();
	virtual ~Hostal();
	float getPromedio();
};

#endif
