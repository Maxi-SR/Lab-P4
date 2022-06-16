#include "../include/Hostal.h"


 Hostal::Hostal(string nombre,string direccion,int telefono,set<Habitacion> *habs,
                set<Calificacion> *cals,set<Reserva> *reservas){
        this->nombre = nombre;
        this->telefono = telefono;
        this->direccion = direccion;
        this->habitaciones = habs;
        this->calificaciones = cals;
        this->reservas = reservas;
 }

 string Hostal::getDireccion(){
     return this->direccion;
 };

string Hostal::getNombre(){
    return this->nombre;
}

int Hostal::getTelefono(){
    return this->telefono;
}

set<Habitacion>* Hostal::getHabitaciones(){
    return this->habitaciones;
}

set<Calificacion>* Hostal::getCalificaciones(){
    return this->calificaciones;

}

set<DataComentario> Hostal::darComSinResp(){
    set<DataComentario> ret;
    set<DataComentario> :: iterator it;
    it=ret.begin();
    set<Calificacion> :: iterator itC;
    for(itC=calificaciones->second->begin();itC!=calificaciones->second->end();++itC){
       if (itC->noRespuesta()){
            DataComentario dc=itC->darDatos();
            ret.insert(it,dc);
            it++;
        }
    }
    return ret;
}

void Hostal::ingresarCom(string com, int idCom, string email){
    map<int,Calificacion*> :: iterator itC;
    itC=this->calificaciones->find(idCom);
//ENCUENTRO LA INSTANCIA EMPLEADO
    UsuarioController *u=UsuarioController :: getInstancia();
    map<string,Empleado*> :: iterator itE;
    itE=u->empleados.find(email);
//CREO LA INSTANCIA RESPONDE y en responde se asocia el empleado y la calificacion al responde
    Responde *r=Responde(com, itE, itC);//acá asocio r con calificacion y empleado
    itE->addRespuestas(r);
    itC->setRespuesta(r);
    
}


DataHostal Hostal::getDataInfoBasicaHostal(){

}

void Hostal::crearCalificacion(string com,int cal ){

}

set<Reserva> Hostal::getReservas(){

}

float Hostal::getPromedio(){
    int contador = 0;
    float total = 0;
    for (std::set<Calificacion>::iterator it = calificaciones->begin(); it != calificaciones->end(); ++it){
        contador++;
        Calificacion actual = *it;
        total += actual.getCalificacion();
    }
    return total/contador;
}


//HACER DESTRUCTOR 


