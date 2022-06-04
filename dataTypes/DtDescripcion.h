#ifndef DTDESCRIPCION
#define DTDESCRIPCION
#include <string>
using namespace std;

#include <set>

class DtDescripcion{
	private:
		set<string> comentarios;
		set<string> calificaciones;
	public:
		DtDescripcion();
		set<string> getComentarios();
		set<string> getCalificaciones();
};

#endif
