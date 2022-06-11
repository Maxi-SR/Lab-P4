#include "../include/UsuarioController.h"

class Fabrica;

UsuarioController *UsuarioController::instancia = NULL;

UsuarioController *UsuarioController::getInstance() {
	if (instancia == NULL)
		instancia = new UsuarioController();

	return instancia;	
}


//----------------------------------

class DatosAlta{
    public:
        string nombre;
        string mail;
        string pass;
        bool *finger;
        string *cargo;
};

DatosAlta Obj;

//----------------------------------
void UsuarioController::ingresarDatosAlta(string nombre,string mail,string pass){

    Obj.nombre = nombre;
    Obj.mail = mail;
    Obj.pass = pass; 
    
}


void UsuarioController::ingresarDatoEmpleado(string cargo){
    auto *it = &cargo;
    Obj.cargo= it;
}


void UsuarioController::ingresarDatoHuesped(bool finger){
    //Obj.finger = &finger;
    cout<< Obj.nombre<<endl;
    cout<< Obj.mail<<endl;
    cout<< Obj.pass<<endl;
    cout<< Obj.finger<<endl;
    cout<< Obj.cargo<<endl;

}


//  set<string> UsuarioController::obtenerUsuariosRegistrados(){
//       set<string> res;
// //     // for(auto it = this->huespedes.begin(); it != this->huespedes.end(); ++it){
// //     //     res.insert(it->getNombre());
// //     // }

//  }

// void UsuarioController::cancelarAlta(){
// }

// void UsuarioController::reingresarEmail(string nuevoMail){
// }

// void UsuarioController::darAltaUsr(){
// }


