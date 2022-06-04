#ifndef IESTADIACONTROLLER
#define IESTADIACONTROLLER
#include <string>
#include <set>
#include "../dataTypes/DtEstadia.h"
#include "Hostal.h"
#include "../dataTypes/DataComentario.h"
#include "../dataTypes/DtaReserva.h"

class IEstadiaController{
	public:
		virtual set<string> obtenerHostalesRegistrados()=0; 
		virtual void seleccionarHostal(string)=0;
		virtual set<DtEstadia> obtenerEstadiasRegistradas(Hostal)=0;
		virtual void seleccionarEstadia(int)=0;
		virtual DtEstadia verInformacionEstadia()=0;
		virtual bool esCalificadaEstadia()=0; 
		virtual bool existeRespuestaEmpleado()=0; 
		virtual int verCalificacionEstadia()=0; 
		virtual set<DataComentario> verRespuestaEstadia()=0; 
		virtual DtaReserva verReservaAsociada()=0;
		virtual int confirmarConsultaDeEstadia()=0;
		};

#endif
