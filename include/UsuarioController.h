#ifndef USUARIOCONTROLLER
#define USUARIOCONTROLLER
#include <string>
using namespace std;
#include <set>
#include "../dataTypes/DataUsuario.h"
#include "../dataTypes/DataEmpleado.h"
#include "../dataTypes/DataHuesped.h"
#include "Cargo.h"
#include "Habitacion.h"
#include "Huesped.h"
#include "Calificacion.h"
#include "IUsuarioController.h"
class UsuarioController : public IUsuarioController
{
private:
	set<Huesped> huespedes;
	set<Empleado> empleados;

public:
	static UsuarioController *getInstance();
	void ingresarDatosAlta(string, string, string);
	void ingresarDatoEmpleado(string);
	void ingresarDatoHuesped(bool);
	void cancelarAlta();
	void reingresarEmail(string);
	void darAltaUsr();
	set<string> obtenerHostalesRegistrados();
	void seleccionarHostal(string);
	void ingresarEmailHuesped(string);
	bool estadiaActiva();
	void confirmarFinalizarEstadia();
	void cancelarFinalizarEstadia();
	set<string> obtenerUsuariosRegistrados();
	string seleccionarUsuario(string);
	DataUsuario obtenerInformacionUsuario();
	set<DataEmpleado> obtenerEmpleadosNoAsignados();
	void seleccionarEmpleado(string, Cargo);
	set<DataHuesped> obtenerHuespedesRegistrados();
	void asignarHabitacionUsuario(Huesped, Habitacion); // era Habitacion o int?
	void asignarHuespedReserva(Huesped);
	void ingresarMensaje(Calificacion, string);
	string darHostalTrabaja(string);
};

#endif
