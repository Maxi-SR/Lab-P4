#ifndef DATAUSUARIO
#define DATAUSUARIO
#include <string>
#include <iostream>
using namespace std;

class DataUsuario{
	private:
		string nombre;
		string email;
	public:
		DataUsuario();
		DataUsuario(string,string);
		string getEmail();
		string getNombre();
		virtual ~DataUsuario(){};
		friend ostream &operator<< (ostream &os, DataUsuario* );
};

#endif
