#ifndef INFORESERVAGRUPAL
#define INFORESERVAGRUPAL
#include "../dataTypes/DataFecha.h"
#include "InfoReserva.h"
#include <iostream>
#include <string>

class InfoReservaGrupal : public InfoReserva
{
private:
	int canthuespedes;
	set<string> huespedes;

public:
	InfoReservaGrupal(int, Fecha, Fecha, int, int, set<string>);
	int getCanthuespedes();
	set<string> getHuespedes();
	bool operator==(InfoReservaGrupal);
};

std::ostream &operator<<(std::ostream &os, InfoReservaGrupal *rg);

#endif
