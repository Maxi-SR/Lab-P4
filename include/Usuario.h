#ifndef USUARIO
#define USUARIO
#include <string>
using namespace std;

#include "../dataTypes/DataUsuario.h"

class Usuario
{
protected:
	string nombre;
	string email;
	string password;

public:
	Usuario(string, string, string);
	string getEmail();
	string getNombre();
	string getPassword();
	void setEmail(string);
	void setNombre(string);
	void setPassword(string);
	virtual DataUsuario *getDataUsuario() = 0;
	~Usuario();
};

#endif
