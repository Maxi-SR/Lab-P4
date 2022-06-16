#ifndef RELOJ
#define RELOJ
#include <string>
#include "../dataTypes/DataFecha.h"
#include "../include/IReloj.h"
#include "../include/Reloj.h"

Reloj * Reloj :: instancia :: NULL;

Reloj * Reloj :: getInstance(){
	if (instancia == NULL){
		instancia = new Reloj();
	}
	return instancia;
}

void Reloj :: modificarFechaSistema(int dia, int mes, int anio, int hora){
	DataFecha *f = DataFecha(dia,mes,anio,hora);
	this->fecha = f;
}


