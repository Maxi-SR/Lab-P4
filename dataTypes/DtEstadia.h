#ifndef DTESTADIA
#define DTESTADIA
#include <string>
using namespace std;

#include "DataFecha.h"

class DtEstadia
{
private:
	string hostal;
	string huesped;
	int habitacion;
	Fecha checkIn;
	Fecha checkOut;
	int codigoPromo;
	string codigoReserva;

public:
	DtEstadia();
	string getHostal();
	string getHuesped();
	int getHabitacion();
	Fecha getCheckIn();
	Fecha getCheckOut();
	int getCodigoPromo();
	string getCodigoReserva();
};

#endif
