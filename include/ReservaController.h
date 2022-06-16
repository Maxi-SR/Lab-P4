#ifndef RESERVACONTROLLER
#define RESERVACONTROLLER
#include <string>
#include <set>
#include <list>
#include "Reserva.h"
#include "../dataTypes/DataHostal.h"
#include "../dataTypes/DtaHostal.h"
#include "../dataTypes/DataFecha.h"
#include "../dataTypes/DataHuesped.h"
#include "../dataTypes/DataReserva.h"
#include "IReservaController.h"
class ReservaController : public IReservaController
{
private:
	set<Reserva> reservas;
	map<int, Habitacion*> habitaciones;
	string nombre;
	DataFecha checkIn;
	DataFecha checkOut;
	bool tipo;
	Habitacion* recordada;
	list<string> datos;
	Huesped* recordado;
	int idCodigo;

public:
	static ReservaController *getInstance();
	list<string> getDatos();
	int getIdCodigo();
	void setIdCodigo();
	set<DtaHostal> obtenerHostalesRegistrados();
	void seleccionarHostal(string, DataFecha, DataFecha, bool);
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
	DataReserva *verReservaAsociada();
};

#endif
