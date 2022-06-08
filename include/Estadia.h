#ifndef ESTADIA
#define ESTADIA
#include <string>

#include "../dataTypes/DataFecha.h"
#include "Huesped.h"
#include "Reserva.h"
#include "Calificacion.h"
#include "../dataTypes/DataEstadia.h"
using namespace std;

class Estadia
{
private:
	string hostal;
	Huesped *huesped;
	Reserva *reserva;
	Calificacion *calificacion;
	int habitacion;
	DataFecha checkIn;
	DataFecha checkOut;
	string codigoEstadia;
	int codigoPromo;

public:
	Estadia(string, Huesped *, Reserva *, int, DataFecha, DataFecha, string);
	string getHostal();
	Huesped *getHuesped();
	Reserva *getReserva();
	Calificacion *getCalificacion();
	int getHabitacion();
	DataFecha getCheckIn();
	DataFecha getCheckOut();
	string getCodigoEstadia();
	int getCodigoPromo();
	string setHostal(string);
	Huesped *setHuesped(Huesped);
	Reserva *setReserva(Reserva);
	Calificacion *setCalificacion(Calificacion);
	int setHabitacion(int);
	DataFecha setCheckIn(DataFecha);
	DataFecha setCheckOut(DataFecha);
	string setCodigoEstadia(string);
	int setCodigoPromo(int);
	bool estaFinalizada();
	DataEstadia obtenerDataEstadia();
	bool existeActiva();
	DataEstadia getInfoEstadia();
	~Estadia();
};

#endif
