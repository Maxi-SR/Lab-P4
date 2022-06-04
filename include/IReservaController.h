#ifndef IRESERVACONTROLLER
#define IRESERVACONTROLLER
#include <string>
using namespace std;

#include <set>
#include "../dataTypes/DataHuesped.h"
#include "../dataTypes/DtaHostal.h"
#include "../dataTypes/DataFecha.h"
#include "InfoReserva.h"

class IReservaController
{
public:
	virtual set<DtaHostal> obtenerHostalesRegistrados() = 0;
	virtual void seleccionarHostal(string, Fecha, Fecha, bool) = 0;
	virtual set<int> obtenerHabitacionesDisponibles() = 0;
	virtual void seleccionarHabitacion(int) = 0;
	virtual set<DataHuesped> obtenerHuepedesRegistrados() = 0;
	virtual void seleccionarHuesped(string) = 0;
	virtual void cancelarAsignacion() = 0;
	virtual void confirmarAsignacion() = 0;
	virtual set<string> obtenerNombresHostalesRegistrados() = 0;
	virtual void seleccionarHostal(string) = 0;
	virtual void ingresarEmailHuesped(string) = 0;
	virtual set<int> listarReservas() = 0;
	virtual void seleccionarReserva(int) = 0;
	virtual set<InfoReserva> obtenerReservas() = 0;
	virtual void cancelarBajaDeReserva() = 0;
	virtual void confirmarBajaDeReserva() = 0;
};

#endif
