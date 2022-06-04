#ifndef DATAINFOBASICAHOSTAL
#define DATAINFOBASICAHOSTAL
#include <string>
#include <iostream>
using namespace std;

class DataInfoBasicaHostal{
	private:
		string nombre;
		string direccion;
		int telefono;
	public:
		DataInfoBasicaHostal();
		DataInfoBasicaHostal(string,string,int);
		string getNombre();
		string getDireccion();
		int getTelefono();
		friend ostream &operator<<(ostream &os,DataInfoBasicaHostal*);
		
};

#endif
