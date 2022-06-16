#ifndef ESTADIA
#define ESTADIA
#include <string>

#include "../dataTypes/DataFecha.h"
#include "../include/Huesped.h"
#include "../include/Reserva.h"
#include "../include/Calificacion.h"
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
	DataFecha* checkIn;
	DataFecha* checkOut;
	int codigoEstadia;
	int codigoPromo;

public:
	Estadia(string, Huesped, Reserva, int, DataFecha, int);
	string getHostal();
	Huesped *getHuesped();
	Reserva *getReserva();
	Calificacion *getCalificacion();
	int getHabitacion();
	DataFecha* getCheckIn();
	DataFecha* getCheckOut();
	int getCodigoEstadia();
	int getCodigoPromo();
	void setHostal(string);
	void setHuesped(Huesped);
	void setReserva(Reserva);
	void setCalificacion(Calificacion);
	void setHabitacion(int);
	void setCheckIn(DataFecha);
	void setCheckOut(DataFecha);
	void setCodigoEstadia(int);
	void setCodigoPromo(int);
	bool estaFinalizada();
	DataEstadia obtenerDataEstadia();
	bool existeActiva();
	DataEstadia getInfoEstadia();
	~Estadia();
};

#endif
