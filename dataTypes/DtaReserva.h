#ifndef DTARESERVA
#define DTARESERVA
#include "DataFecha.h"
#include "../include/EstadoReserva.h"
#include <iostream>

class DtaReserva
{
protected:
	int codigo;
	Fecha checkIn;
	Fecha checkOut;
	EstadoReserva estado;
	float precio;

public:
	DtaReserva(); // nose si va

	int getCodigo();
	Fecha *getCheckIn();
	Fecha *getCheckOut();
	EstadoReserva getEstado();
	float getPrecio();
	// virtual void aux() {}; ????
};

#endif