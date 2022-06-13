#ifndef HOSTALCONTROLLER
#define HOSTALCONTROLLER
#include <string>
#include <set>
#include <vector>
#include "../dataTypes/DataEstadia.h"
#include "../dataTypes/DataHostal.h"
#include "Hostal.h"
#include "../dataTypes/DataComentario.h"
#include "../dataTypes/DataEmpleado.h"
#include "Cargo.h"
#include "../dataTypes/DataDescripcion.h"
#include "IHostalController.h"

using namespace std;

class Hostal;


class HostalController : public IHostalController
{
private:
	map<string, Hostal*> hostales;
	Hostal* recordado;
	
public:
	static HostalController *getInstance();
	void ingresarDatosHostal(string, string, int);
	set<string> obtenerNombresHostalesRegistrados();
	set<DataHostal> obtenerHostalesRegistrados();
	set<DtaHostal> obtener_Hostales_Registrados();
	void seleccionarHostal(string);
	void ingresarDatosHab(int, float, int);
	void darAltaHabitacion();
	void cancelarAlta();
	set<DataEmpleado> obtenerEmpleadosNoAsignados();
	void seleccionarEmpleado(string, Cargo);
	void cancelarAsignacion();
	void confirmarAsignacion();
	vector<string> consultarTop3Hostales();
	DtDescripcion verDetalles(string);
	void ingresarEmailHuesped(string);
	set<DataEstadia> obtenerEstadiasFinalizadasHuesped();
	void seleccionarEstadia(int);
	void ingresarMensaje(string, int);
	void ingresarEmail(string);
	set<DataComentario> obtenerComentariosSInRespuesta();
	void seleccionComentario(int);
	void ingresarComentario(string);
	DataHostal obtenerInformacionBasicaHostal();
	// set<DataHostal> obtenerHostalesRegistrados();
	void seleccionarHostal(string, DataFecha, DataFecha, bool);
	set<int> obtenerHabitacionesDisponibles();
};

#endif
