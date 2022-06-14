#ifndef FECHA
#define FECHA
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
	void setDia(int);
	void setMes(int);
	void setAnio(int);
	void setHora(int);
	bool operator==(DataFecha);
	bool operator<(DataFecha);
};

ostream &operator<<(ostream &os, DataFecha &f);

#endif