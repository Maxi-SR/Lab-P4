#ifndef CALIFICACION
#define CALIFICACION
#include <set>
#include <vector>
#include "../dataTypes/DataComentario.h"
#include "Responde.h"
#include "Hostal.h"

#include <string>
using namespace std;

class Calificacion{
	private:
		int idCalificacion;
		int calificacion;
		string comentario;
		Responde* Respuesta;
	public:
		Calificacion(int, int, string);
		int getCalificacion();
		string getComentario();
		Responde* getRespuesta();
		bool noRespuesta();
		DataComentario darDatos();
		void setRespuesta(Responde*);
		int getIdCalificacion();
		float obtenerPromedioCalificaciones();
		void borrarRespuestas();
		 ~Calificacion();
};

#endif
