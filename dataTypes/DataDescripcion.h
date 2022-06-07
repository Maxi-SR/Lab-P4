#ifndef DATADESCRIPCION
#define DATADESCRIPCION
#include <string>
#include <set>

using namespace std;

#include "DataHabitacion.h"

class DataDescripcion
{
private:
	set<string> comentarios;
	set<string> calificaciones;
	float promedio;
	DataHabitacion habitacion;

public:
	DataDescripcion();
	DataDescripcion(set<string>,set<string>,float,DataHabitacion);
	set<string> getComentarios();
	set<string> getCalificaciones();
	float getPromedio();
	DataHabitacion getHabitacion();
};

#endif
