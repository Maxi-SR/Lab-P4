#ifndef DATARESERVAGRUPAL
#define DATARESERVAGRUPAL
#include "DataFecha.h"
#include "DataReserva.h"
#include <iostream>
#include <set>

using namespace std;

class DataReservaGrupal : public DataReserva
{
private:
	int canthuespedes;
	set<string> huespedes;

public:
	DataReservaGrupal();
	DataReservaGrupal(int, Fecha, Fecha, EstadoReserva, float, int, int, set<string>);
	int getCanthuespedes();
	set<string> getHuespedes();
	// bool operator==(DataReservaGrupal); tiene sentido esto?
};

ostream &operator<<(ostream &os, DataReservaGrupal *rg);

#endif
