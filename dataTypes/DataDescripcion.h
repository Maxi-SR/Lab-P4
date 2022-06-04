#ifndef DATADESCRIPCION
#define DATADESCRIPCION
#include <string>

using namespace std;

#include "DataHabitacion.h"


class DataDescripcion{
	private:
		string comentarios;
		string calificaciones;
		float promedio;
		DataHabitacion habitacion;
	public:
		DataDescripcion();
		string getComentarios();
		string getCalificaciones();
		float getPromedio();
		DataHabitacion getHabitacion();
};

#endif
