#ifndef RESERVACONTROLLER
#define RESERVACONTROLLER
#include <string>
#include <set>
#include "Reserva.h"
#include "../dataTypes/DataHostal.h"
#include "../dataTypes/DataFecha.h"
#include "../dataTypes/DataHuesped.h"
#include "DataReserva.h"
#include "../dataTypes/DataReserva.h"
#include "IReservaController.h"
class ReservaController : public IReservaController
{
private:
	set<Reserva> reservas;

public:
	set<DataHostal> obtenerHostalesRegistrados();
	void seleccionarHostal(string, Fecha, Fecha, bool);
	set<int> obtenerHabitacionesDisponibles();
	void seleccionarHabitacion(int);
	set<DataHuesped> obtenerHuepedesRegistrados();
	void seleccionarHuesped(string);
	void cancelarAsignacion();
	void confirmarAsignacion();
	set<string> obtenerNombresHostalesRegistrados();
	void seleccionarHostal(string);
	void ingresarEmailHuesped(string);
	set<int> listarReservas();
	void seleccionarReserva(int);
	set<DataReserva> obtenerReservas();
	void cancelarBajaDeReserva();
	void confirmarBajaDeReserva();
	DataReserva verReservaAsociada();
};

#endif
