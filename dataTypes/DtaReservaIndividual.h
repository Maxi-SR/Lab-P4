#ifndef DTARESERVAINDIVIDUAL
#define DTARESERVAINDIVIDUAL
#include "DataFecha.h"
#include "DtaReserva.h"
#include "../include/EstadoReserva.h"
#include <iostream>

using namespace std;

class DtaReservaIndividual : public DtaReserva
{
public:
	DtaReservaIndividual(int, Fecha, Fecha, EstadoReserva, float);
	// bool operator==(DtaReservaIndividual);
	friend ostream &operator<<(ostream &os, DtaReservaIndividual *ri);
};

#endif
