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
	set<int> calificaciones;
	float promedio;
	DataHabitacion habitacion;

public:
	//DataDescripcion();
	DataDescripcion(set<string>,set<int>,float,DataHabitacion);
	set<string> getComentarios();
	set<int> getCalificaciones();
	float getPromedio();
	DataHabitacion getHabitacion();
};

#endif
