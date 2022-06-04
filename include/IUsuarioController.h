#ifndef IUSUARIOCONTROLLER
#define IUSUARIOCONTROLLER
#include <string>
#include <set>

#include "../dataTypes/DataUsuario.h"

class IUsuarioController{
	public:
		virtual void ingresarDatosAlta(string, string, string)=0; 
		virtual void ingresarDatoEmpleado(string)=0; 
		virtual void ingresarDatoHuesped(bool)=0; 
		virtual void cancelarAlta()=0; 
		virtual void reingresarEmail(string)=0; 
		virtual void darAltaUsr()=0; 
		virtual set<string> obtenerHostalesRegistrados()=0; 
		virtual void seleccionarHostal(string)=0; 
		virtual void ingresarEmailHuesped(string)=0; 
		virtual bool estadiaActiva()=0; 
		virtual void confirmarFinalizarEstadia()=0; 
		virtual void cancelarFinalizarEstadia()=0; 
		virtual set<string> obtenerUsuariosRegistrados()=0; 
		virtual string seleccionarUsuario(string)=0; 
		virtual DataUsuario obtenerInformacionUsuario()=0; 
		};

#endif
