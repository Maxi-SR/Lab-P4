#ifndef HUESPED
#define HUESPED
#include <string>
using namespace std;

#include <set>
#include "Reserva.h"
#include "../dataTypes/DataDescripcion.h"
#include "Calificacion.h"
#include "Estadia.h"
#include "Usuario.h"

class Estadia;
class Usuario;
class Reserva;
class DataReserva;

class Huesped : public Usuario
{
private:
	bool finger;
	Calificacion *calificacion;
	set<Estadia*> estadias;
	set<Reserva*> reservas;

public:
	Huesped(string, string, string, bool);
	bool getFinger();
	void setFinger(bool);
	Calificacion getCalificacion();
	void setCalificacion(Calificacion);
	set<Estadia*> getEstadias();
	void setEstadias();
	set<Reserva*> getReservas();
	set<DataDescripcion> obtenerEstadias();
	bool estadiaUsrActiva();
	void crearEstadia(Reserva *);
	DataReserva *getDatos();
	DataUsuario *getDataUsuario();
	void agregarReserva(Reserva*);
	~Huesped();
};

#endif
