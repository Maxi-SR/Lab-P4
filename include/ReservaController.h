#ifndef RESERVACONTROLLER
#define RESERVACONTROLLER
#include <string>
#include <set>
#include "Reserva.h"
#include "../dataTypes/DtaHostal.h"
#include "../dataTypes/DataFecha.h"
#include "../dataTypes/DataHuesped.h"
#include "InfoReserva.h"
#include "../dataTypes/DtaReserva.h"
#include "IReservaController.h"
class ReservaController : public IReservaController
{
private:
	set<Reserva> reservas;

public:
	set<DtaHostal> obtenerHostalesRegistrados();
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
	set<InfoReserva> obtenerReservas();
	void cancelarBajaDeReserva();
	void confirmarBajaDeReserva();
	DtaReserva verReservaAsociada();
};

#endif
