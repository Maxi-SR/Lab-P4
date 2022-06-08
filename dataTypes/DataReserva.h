#ifndef DATARESERVA
#define DATARESERVA
#include "DataFecha.h"
#include "../include/EstadoReserva.h"
#include <iostream>

class DataReserva
{
protected:
	int codigo;
	DataFecha checkIn;
	DataFecha checkOut;
	EstadoReserva estado;
	float precio;
	int numHab;

public:
	DataReserva();

	int getCodigo();
	DataFecha getCheckIn();
	DataFecha getCheckOut();
	EstadoReserva getEstado();
	float getPrecio();
	int getNumHab();
	virtual ~DataReserva()=0;
};

#endif
