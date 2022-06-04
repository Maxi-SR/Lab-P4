#ifndef INFORESERVA
#define INFORESERVA
#include "Huesped.h"
#include "../dataTypes/DataFecha.h"
#include <iostream>

class InfoReserva
{
protected:
	int codigo;
	Fecha checkIn;
	Fecha checkOut;
	int numHab;

public:
	InfoReserva();
	int getCodigo();
	Fecha getCheckIn();
	Fecha getCheckOut();
	int getNumHab();
	virtual void aux(){};
};

#endif