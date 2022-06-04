#ifndef DATARESERVAGRUPAL
#define DATARESERVAGRUPAL
#include "DataFecha.h"
#include "DataReserva.h"
#include <iostream>
using namespace std;

class DataReservaGrupal : public DataReserva
{
private:
	int canthuespedes;

public:
	DataReservaGrupal();
	DataReservaGrupal(int, Fecha, Fecha, int);
	int getCanthuespedes();
	// bool operator==(DataReservaGrupal); tiene sentido esto?
};

ostream &operator<<(ostream &os, DataReservaGrupal *rg);

#endif
