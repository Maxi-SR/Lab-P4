#ifndef ESTADIA
#define ESTADIA
#include <string>

#include "../dataTypes/DataFecha.h"
#include "Huesped.h"
#include "Reserva.h"
#include "Calificacion.h"
#include "../dataTypes/DataEstadia.h"
#include "../dataTypes/DtEstadia.h"
using namespace std;

class Estadia
{
private:
	string hostal;
	Huesped *huesped;
	Reserva *reserva;
	Calificacion *calificacion;
	int habitacion;
	Fecha checkIn;
	Fecha checkOut;
	string codigoEstadia;
	int codigoPromo;

public:
	Estadia(string, Huesped *, Reserva *, int, Fecha, Fecha, string);
	string getHostal();
	Huesped *getHuesped();
	Reserva *getReserva();
	Calificacion *getCalificacion();
	int getHabitacion();
	Fecha getCheckIn();
	Fecha getCheckOut();
	string getCodigoEstadia();
	int getCodigoPromo();
	string setHostal(string);
	Huesped *setHuesped(Huesped);
	Reserva *setReserva(Reserva);
	Calificacion *setCalificacion(Calificacion);
	int setHabitacion(int);
	Fecha setCheckIn(Fecha);
	Fecha setCheckOut(Fecha);
	string setCodigoEstadia(string);
	int setCodigoPromo(int);
	bool estaFinalizada();
	DataEstadia obtenerDataEstadia();
	bool existeActiva();
	DtEstadia getInfoEstadia();
	~Estadia();
};

#endif
