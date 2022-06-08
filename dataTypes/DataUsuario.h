#ifndef DATAUSUARIO
#define DATAUSUARIO
#include <string>
#include <iostream>
using namespace std;

class DataUsuario{
	protected:
		string nombre;
		string email;
	public:
		DataUsuario();
	
		string getEmail();
		string getNombre();
		virtual ~DataUsuario(){};
		friend ostream &operator<< (ostream &os, DataUsuario* );
};

#endif
