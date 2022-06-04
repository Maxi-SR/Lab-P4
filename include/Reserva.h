#ifndef RESERVA
#define RESERVA
#include "../dataTypes/DataFecha.h"
#include "EstadoReserva.h"
#include "Habitacion.h"
#include "Estadia.h"
#include "Huesped.h"
#include "../dataTypes/DataReserva.h"
#include <iostream>

class Reserva
{
private:
	int codigo;
	Fecha checkIn;
	Fecha checkOut;
	EstadoReserva estado;
	float precio;
	Habitacion *habitacion;
	set<Estadia> estadias;
	set<Huesped> huespedes;
	// Huesped* huesped;
public:
	Reserva(int, Fecha, Fecha, Habitacion, Huesped);
	// int getCodigo();
	Fecha getCheckIn();
	Fecha getCheckOut();
	EstadoReserva getEstado();
	virtual float getPrecio() = 0;
	// Huesped getHuesped();
	set<Huesped> getHuespedes();
	Fecha setCheckIn(Fecha);
	Fecha setCheckOut(Fecha);
	// void setHuesped(Huesped);
	void setEstado(EstadoReserva);
	int obtenerIdReserva();
	void cerrarReserva();
	virtual DataReserva getDatos() = 0;
	virtual ~Reserva(){};
};

#endif
