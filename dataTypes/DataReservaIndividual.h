#ifndef DATARESERVAINDIVIDUAL
#define DATARESERVAINDIVIDUAL
#include "DataFecha.h"
#include "DataReserva.h"
#include <iostream>
using namespace std;

class DataReservaIndividual : public DataReserva
{
public:
	DataReservaIndividual(int, Fecha, Fecha, int);
	bool operator==(DataReservaIndividual);
};

ostream &operator<<(ostream &os, DataReservaIndividual *ri);

#endif
