#include "../include/UsuarioController.h"
#include <map>

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

set<DataHuesped> UsuarioController::obtenerHuespedesRegistrados(){
    set<DataHuesped> res;
    for (std::map<string, Huesped*>::iterator it = this->huespedes.begin(); it != this->huespedes.end(); ++it){
        Huesped *actual = it->second;
        string nombre = actual->getNombre();
        string email = actual->getEmail();
        bool finger = actual->getFinger();
        DataHuesped h(nombre, email, finger);
        res.insert(h);
    }
    return res;
}

Huesped* UsuarioController::getHuespedes(string email){
    std::map<string, Huesped*>::iterator it;
    it = huespedes.find(email);
    return it->second;
}


string  UsuarioController :: darHostalTrabaja(string email){
    map<string,Empleado*> :: iterator itE;
    itE=empleados.find(email);
    Hostal *h=itE->getHostal();
    string ret=h->getNombre();
    return ret;

}

set<DataEstadia> UsuarioController :: obtenerEstadiasFinalizadasHuesped(string emailHuesped){
    map<string,Huesped*> :: iterator itH;
    itH=huespedes.find(emailHuesped);
    set<DataDescripcion> estadiasFinalizadas=itH->obtenerEstadias();
}


void UsuarioController::ingresarMensaje(Calificacion cal, string emailHuesped){
    map<string,Huesped> :: iterator itH;
    itH=huespedes.find(emailHuesped);
    itH->addCalificacion(cal);
}


void UsuarioController :: crearEstadia(Reserva r, string emailHuesped){
    EstadiaController ec=EstadiaController :: getInstance();
    Reloj rel= Reloj :: getInstance();
//Busco los datos para crear la estadia

    Habitacion* Habitacion=r.getHabitacion();
    int hab=Habitacion.getNumHab();//num hab

    Hostal *hostal=hab.getHostal();
    string host=hostal.getNombre();//nombre hostal

    int cod=ec->getCodigoEstadia();//codigo para la estadia
    ec->setCodigoEstadia();

    map<string,Huesped*> :: iterator itH;
    itH=huespedes.find(emailHuesped); //huesped

    DataFecha f =DataFecha(rel->getDia();rel->getMes(),rel->getAnio(),rel->getHora());//fecha actual sistema

    Estadia e=Estadia(host, *itH, r, hab, f, cod);

    set<Estadia> :: iterator itEstadias;
    itEstadias=itH->estadias.end();

    itH->estadias.insert(itEstadias,e);//agrego e a la coleccion estadias huesped

    ec->insert(itE,e);//agrego a la coleccion generica

    itEstadias=r->estadias.end();//agrego e a la coleccion de estadias de la reserva r
    r->estadias.insert(itEstadias,e);
}