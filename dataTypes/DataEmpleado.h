#ifndef DATAEMPLEADO
#define DATAEMPLEADO
#include <string>
using namespace std;

#include "Cargo.h"
#include "DataUsuario.h"


class DataEmpleado : public DataUsuario{
	private:
		string hostal;
		Cargo cargo;
	public:
		DataEmpleado(string, string, string, Cargo);
		string getHostal();
		Cargo getCargo();

};

#endif
