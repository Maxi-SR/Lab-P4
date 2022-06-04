#ifndef DTEMPLEADO
#define DTEMPLEADO
#include <string>
using namespace std;

#include <Cargo.h>

class DtEmpleado{
	private:
		string nombre;
		string email;
		Cargo cargo;
	public:
		DtEmpleado();
		string getNombre();
		string getEmail();
		Cargo getCargo();
};

#endif
