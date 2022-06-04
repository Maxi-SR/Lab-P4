#ifndef HABITACION
#define HABITACION
#include <string>
#include "Hostal.h"
#include "Reserva.h"
#include "../dataTypes/DataFecha.h"

class Habitacion
{
private:
	int numHab;
	float precio;
	int capacidad;
	Hostal *hostal;
	set<Reserva> reservas;

public:
	Habitacion(int, float, int, Hostal);
	int getNumHab();
	float getPrecio();
	int getCapacidad();
	Hostal *getHostal();
	set<Reserva> getReservas();
	int setNumHab();
	float setPrecio();
	int setCapacidad();
	set<Reserva> setReservas();
	set<Reserva> getReservas(Fecha, Fecha);
	~Habitacion();
};

#endif
