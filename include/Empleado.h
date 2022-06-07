#ifndef EMPLEADO
#define EMPLEADO
#include <string>
#include "Usuario.h"
#include <set>
#include "Cargo.h"
#include "Responde.h"
#include "Notificacion.h"
#include "Hostal.h"
using namespace std;

// agregar public observer
class Empleado : public Usuario
{
private:
	Cargo cargo;
	set<Notificacion> notificaciones;
	Hostal *hostal;
	set<Responde> respuestas;

public:
	Empleado(string, string, std::string, Cargo, Hostal);
	Cargo getCargo();
	void setCargo(Cargo);
	Hostal *getHostal();
	void setHostal(Hostal);
	set<Responde> getRespuestas();
	void setRespuestas(Responde);
	set<Notificacion> getNotificaciones();
	void setNotificaciones(Notificacion);
	set<Notificacion> Notificaciones();
	~Empleado();
};

#endif
