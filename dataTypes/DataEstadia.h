#ifndef DATAESTADIA
#define DATAESTADIA
#include <string>
#include "DataFecha.h"

class DataEstadia
{
private:
	string hostal;
	string huesped;
	int habitacion;
	Fecha checkIn;
	Fecha checkOut;
	string codigoEstadia;

public:
	DataEstadia();
	string getHostal();
	string getHuesped();
	int getHabitacion();
	Fecha getCheckIn();
	Fecha getCheckOut();
	string getCodigoEstadia();
};

#endif
