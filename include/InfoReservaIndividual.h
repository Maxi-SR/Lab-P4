#ifndef INFORESERVAINDIVIDUAL
#define INFORESERVAINDIVIDUAL
#include "../dataTypes/DataFecha.h"
#include "../dataTypes/DataReserva.h"
#include "InfoReserva.h"
#include <iostream>
using namespace std;

class InfoReservaIndividual : public InfoReserva
{
public:
	InfoReservaIndividual(int, Fecha, Fecha, int);
	bool operator==(InfoReservaIndividual);
};

std::ostream &operator<<(std::ostream &os, InfoReservaIndividual *ri);

#endif
