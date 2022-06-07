#ifndef IHOSTALCONTROLLER
#define IHOSTALCONTROLLER
#include <string>
using namespace std;

#include <set>
#include "../dataTypes/DataEstadia.h"
#include "../dataTypes/DataHostal.h"
#include "../dataTypes/DataComentario.h"
#include "../dataTypes/DataEmpleado.h"
#include "Cargo.h"
#include "../dataTypes/DataDescripcion.h"
#include "../dataTypes/DataHostal.h"

class IHostalController
{
public:
	virtual void ingresarDatosHostal(string, string, int) = 0;
	virtual set<string> obtenerNombresHostalesRegistrados() = 0;
	virtual set<DataHostal> obtenerHostalesRegistrados() = 0;
	virtual void seleccionarHostal(string) = 0;
	virtual void ingresarDatosHab(int, float, int) = 0;
	virtual void darAltaHabitacion() = 0;
	virtual void cancelarAlta() = 0;
	virtual set<DataEmpleado> obtenerEmpleadosNoAsignados() = 0;
	virtual void seleccionarEmpleado(string, Cargo) = 0;
	virtual void cancelarAsignacion() = 0;
	virtual void confirmarAsignacion() = 0;
	virtual set<string> consultarTop3Hostales() = 0;
	virtual DataDescripcion verDetalles(string) = 0;
	virtual void ingresarEmailHuesped(string) = 0;
	virtual set<DataEstadia> obtenerEstadiasFinalizadasHuesped() = 0;
	virtual void seleccionarEstadia(int) = 0;
	virtual void ingresarMensaje(string, int) = 0;
	virtual void ingresarEmail(string) = 0;
	virtual set<DataComentario> obtenerComentariosSInRespuesta() = 0;
	virtual void seleccionComentario(int) = 0;
	virtual void ingresarComentario(string) = 0;
	virtual DataHostal obtenerInformacionBasicaHostal() = 0;
};

#endif
