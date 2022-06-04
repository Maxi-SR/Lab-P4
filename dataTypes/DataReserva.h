#ifndef DATARESERVA
#define DATARESERVA
#include "DataFecha.h"
#include <iostream>

class DataReserva
{
protected:
	int codigo;
	Fecha checkIn;
	Fecha checkOut;

public:
	DataReserva();
	int getCodigo();
	Fecha getCheckIn();
	Fecha getCheckOut();
	virtual ~DataReserva(){};
};

#endif
