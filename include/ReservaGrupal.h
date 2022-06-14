#ifndef RESERVAGRUPAL
#define RESERVAGRUPAL
#include "../dataTypes/DataFecha.h"
#include "Reserva.h"
#include "EstadoReserva.h"
#include <iostream>

class ReservaGrupal : public Reserva
{
private:
	int canthuespedes;

public:
	ReservaIndividual(int, DataFecha, DataFecha, Habitacion*, Huesped*, int);
	int getCanthuespedes();
	DataReserva *getDatos();
	float getPrecio();
	~ReservaGrupal();
};

#endif
