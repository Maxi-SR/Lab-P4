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
	DataFecha checkIn;
	DataFecha checkOut;
	string codigoEstadia;
	int codigoPromo;
	string codigoReserva;

public:
	DataEstadia();
	DataEstadia(string,string,int,DataFecha,DataFecha,string,int,string);
	string getHostal();
	string getHuesped();
	int getHabitacion();
	DataFecha getCheckIn();
	DataFecha getCheckOut();
	string getCodigoEstadia();
	int getCodigoPromo();
	string getCodigoReserva();
};

#endif
