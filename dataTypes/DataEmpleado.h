#ifndef DATAEMPLEADO
#define DATAEMPLEADO
#include "../include/Cargo.h"
#include "DataUsuario.h"
#include <string>


using namespace std;




class DataEmpleado : public DataUsuario{
	private:
		string hostal;
		Cargo cargo;
	public:
		DataEmpleado();
		DataEmpleado(string, string, string, Cargo);
		string getHostal();
		Cargo getCargo();

};

#endif
