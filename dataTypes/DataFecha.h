#ifndef DATAFECHA
#define DATAFECHA
#include <iostream>
#include <string>
using namespace std;

class DataFecha
{
private:
	int dia, mes, anio, hora;

public:
	DataFecha();
	DataFecha(int, int, int, int);
	int getDia();
	int getMes();
	int getAnio();
	int getHora();
	bool operator==(DataFecha);

friend ostream &operator<<(ostream &os, DataFecha &f);
};

#endif
