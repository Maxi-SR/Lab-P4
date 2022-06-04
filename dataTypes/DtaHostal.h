#ifndef DTAHOSTAL
#define DTAHOSTAL
#include <string>
using namespace std;

class DtaHostal{
	private:
		string nombre;
		string direccion;
		int calPromedio;
	public:
		DtaHostal();
		string getNombre();
		string getDireccion();
		int getCalPromedio();
};

#endif
