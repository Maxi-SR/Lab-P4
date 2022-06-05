#ifndef DATARESERVA
#define DATARESERVA
#include "DataFecha.h"
#include "../include/EstadoReserva.h"
#include <iostream>

class DataReserva
{
protected:
	int codigo;
	Fecha checkIn;
	Fecha checkOut;
	EstadoReserva estado;
	float precio;
	int numHab;

public:
	DataReserva();
	int getCodigo();
	Fecha getCheckIn();
	Fecha getCheckOut();
	EstadoReserva getEstado();
	float getPrecio();
	int getNumHab();
	virtual ~DataReserva(){};
};

#endif
