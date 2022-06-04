#ifndef DTARESERVAGRUPAL
#define DTARESERVAGRUPAL
#include "DataFecha.h"
#include "DtaReserva.h"
#include <iostream>
using namespace std;

class DtaReservaGrupal : public DtaReserva
{
private:
	int canthuespedes;

public:
	DtaReservaGrupal(int, Fecha, Fecha, EstadoReserva, float, int);
	int getCanthuespedes();
	// bool operator==(DtaReservaGrupal);
	friend ostream &operator<<(ostream &os, DtaReservaGrupal *);
};

#endif
