#ifndef DATARESERVAINDIVIDUAL
#define DATARESERVAINDIVIDUAL
#include "DataFecha.h"
#include "DataReserva.h"
#include <iostream>
using namespace std;

class DataReservaIndividual : public DataReserva
{
public:
	DataReservaIndividual();
	DataReservaIndividual(int, DataFecha, DataFecha, EstadoReserva, float, int);
	bool operator==(DataReservaIndividual);
};

ostream &operator<<(ostream &os, DataReservaIndividual *ri);

#endif
