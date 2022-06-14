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
protected:
	int codigo;
	DataFecha checkIn;
	DataFecha checkOut;
	EstadoReserva estado;
	float precio;
	Habitacion *habitacion;
	set<Estadia> estadias;
	vector<Huesped*> huespedes;
	// Huesped* huesped;
public:
	Reserva();
	Reserva(int, DataFecha, DataFecha, Habitacion*, Huesped*);
	// int getCodigo();
	DataFecha getCheckIn();
	DataFecha getCheckOut();
	EstadoReserva getEstado();
	virtual float getPrecio() = 0;
	// Huesped getHuesped();
	vector<Huesped*> getHuespedes();
	DataFecha setCheckIn(DataFecha);
	DataFecha setCheckOut(DataFecha);
	// void setHuesped(Huesped);
	void setEstado(EstadoReserva);
	int obtenerIdReserva();
	void cerrarReserva();
	virtual DataReserva *getDatos() = 0;
	virtual ~Reserva(){};
};

#endif
