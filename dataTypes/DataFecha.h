#ifndef FECHA
#define FECHA
#include <iostream>
#include <string>
using namespace std;

class Fecha
{
private:
	int dia, mes, anio, hora;

public:
	Fecha();
	Fecha(int, int, int, int);
	int getDia();
	int getMes();
	int getAnio();
	int getHora();
	bool operator==(Fecha);
};

ostream &operator<<(ostream &os, Fecha &f);

#endif
