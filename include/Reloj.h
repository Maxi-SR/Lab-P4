#ifndef RELOJ
#define RELOJ
#include <string>
#include "../dataTypes/DataFecha.h"
#include "IReloj.h"

class Reloj : public IReloj
{
private:
	static Reloj *instancia;
	Fecha *fecha;
	Reloj(int dia, int mes, int anio, int hora);

public:
	static Reloj *getInstance();
	void modificarFechaSistema(int, int, int, int);
};

#endif
