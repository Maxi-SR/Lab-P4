#include "HostalController.h"
#include "../include/Fabrica.h"
#include <map>
#include <set>

using namespace std;

class DtDescripcion;

class DatosCalyComEst{
    public:
        list<string> datos;
        int idSelect;
        Estadia *est;
};

DatosCalyComEst CalyComEst;
    

void HostalController::ingresarDatosHostal(string nom,string dir,int tel){

    //el controlador se encarga de decirle a 
    //la clase hostal que cree una instancia de hostal
    Hostal h = Hostal(nom,dir,tel,NULL,NULL,NULL); //alta de hostal solo pide los primeros 3 parametros,
                                                  //lo otro se va a ir agregando a medida que avanza

    //creada la instancia h
    //se agrega a la coleccion de hostales
    hostales.insert(std::pair<string,Hostal*>(nom,&h)); // hay que ver si tenemos un arreglo de objetos o un arreglo de punteros a objetos,
                            //en este caso tengo un arreglo de punteros a objetos, por eso en el parametro
                            //de push_back le paso la direccion de memoria donde apunta h (el objeto) 
                            //no estoy seguro de esto que puse.

}

vector<string> HostalController::consultarTop3Hostales(){
    //Fabrica *fabrica = Fabrica::getInstance();
    ReservaController *r = ReservaController::getInstance();
    set<DtaHostal> CalifHostales = r->obtenerHostalesRegistrados();  
    vector<string> resultado;
    set<DtaHostal>::iterator it = CalifHostales.begin();
    DtaHostal primero, segundo, tercero, actual;  //recorro los primero tres hostales
    primero = *it;       
    ++it;
    actual = *it;
    if (primero.getCalPromedio() > actual.getCalPromedio())
        segundo = *it;
    else{
        segundo = primero;
        primero = *it;
    }
    ++it;
    actual = *it;
    if (actual.getCalPromedio() > primero.getCalPromedio()){
        tercero = segundo;
        segundo = primero;
        primero = *it;
    }
    ++it; //termine de asignar los primero tres que se que existen
    set<DtaHostal>::iterator i;
    for (i = it; it!=CalifHostales.end(); ++it){ //para los que quedan
        actual = *it;
        if (actual.getCalPromedio() > tercero.getCalPromedio()){
            if (actual.getCalPromedio() > segundo.getCalPromedio()){
                if (actual.getCalPromedio() > primero.getCalPromedio()){
                    tercero = segundo;
                    segundo = primero;
                    primero = *it;
                } else {
                    tercero = segundo;
                    segundo = *it;
                }
            } else {
                tercero = *it;
            }
        }
    }
    resultado.push_back(primero.getNombre()); 
    resultado.push_back(segundo.getNombre()); 
    resultado.push_back(tercero.getNombre()); 
    return resultado;
}

DtDescripcion HostalController::verDetalles(string nombreHostal){
    std::map<string, Hostal*>::iterator it;
    it = hostales.find(nombreHostal);
    Hostal* h = it->second;
    set<Calificacion> *cal = h->getCalificaciones();
    set<int> calificaciones;
    set<string> comentarios;
    //recorrer el set de calificaciones
    for (std::set<Calificacion>::iterator it = cal->begin(); it!=cal->end(); ++it){
        Calificacion c = *it;
        int cal = c.getCalificacion();
        string com = c.getComentario();
        calificaciones.insert(cal);
        comentarios.insert(com);
    }
    DtDescripcion d(comentarios,calificaciones);
    return d;
}

set<DtaHostal> HostalController::obtener_Hostales_Registrados(){
    set<DtaHostal> res;
    for (std::map<string,Hostal*>::iterator it = hostales.begin(); it != hostales.end(); ++it){
        string nombre = it->second->getNombre();
        string direccion = it->second->getDireccion();
        float promCal = it->second->getPromedio();
        DtaHostal d(nombre, direccion, promCal);
        res.insert(d);
    }
    return res;
}

void HostalController::seleccionarHostal(string nombreHostal, DataFecha checkIn, DataFecha checkOut, bool tipo){
    std::map<string, Hostal*>::iterator it;
    it = hostales.find(nombreHostal);
    this->recordado = it->second;
    this->checkIn = checkIn;
    this->checkOut = checkOut;
}

map<int,Habitacion*> HostalController::obtener_Habitaciones_Disponibles(){
    //tengo guardado el hostal en memoria
    map<int,Habitacion*> res;
    set<Habitacion>* habs = this->recordado->getHabitaciones();
    for (std::set<Habitacion>::iterator it = habs->begin(); it != habs->end(); ++it){
        Habitacion actual = *it;
        if (actual.getReservas(this->checkIn, this->checkOut)){ //me dice si la habitacion esta disponible para esas fechas
            int num = actual.getNumHab();
            res.insert(std::pair<int,Habitacion*>(num,&actual)); 
        }      
    }
    this->habitaciones = res;
    return res;
}


//------Calificar Estadia ------//
set<string> HostalController::obtenerNombresHostalesRegistrados(){
    set<string> ret;
    for (std::map<string,Hostal*>::iterator it = hostales.begin(); it != hostales.end(); ++it){
        string nombre = it->second->getNombre();
        ret.insert(nombre);
    }
    return ret;
}

void HostalController::seleccionarHostal(string nombreHostal){
    CalyComEst.datos.push_back(nombreHostal);
}

void HostalController::ingresarEmailHuesped(string emailHuesped){
    CalyComEst.datos.push_back(emailHuesped);
}

set<DataEstadia> HostalController::obtenerEstadiasFinalizadasHuesped(){
 UsuarioController *u= UsuarioController :: getInstance();
 set<DataEstadia> ret = u->obtenerEstadiasFinalizadasHuesped();
 return ret;

}

void HostalController::seleccionarEstadia(int idEstadia){
    CalyComEst.idSelect=idEstadia;
}

void HostalController::ingresarMensaje(string comentario, int calif){
    EstadiaController *e = EstadiaController :: getInstance();
    map<string,Estadia*> :: iterator itE;
    itE=e->estadias;
    string nombreHostal=CalyComEst.datos.front();
    Hostal* h=hostales.find(nombreHostal)
    Calificacion ingresar= Calificacion(this->codigoCalificacion, calif, comentario);
    map<string,Calificacion*> :: iterator itC;
    itC=h->calificaciones->second.end();
    h->calificaciones->insert(itC,ingresar);

    CalyComEst.datos.pop_front();

    e->ingresarMensaje(ingresar,CalyComEst.datos.front(),CalyComEst.idSelect);//agrego idEstadia seleccionada

//lierar memoria
    while (!CalyComEst.datos.empty()){
        CalyComEst.datos.pop_front();
    }
}

//--------Comentar Calificacion-------//
void HostalController::ingresarEmail(string emailEmpleado){
    CalyComEst.datos.push_back(emailEmpleado);

}
set<DataComentario> HostalController::obtenerComentariosSInRespuesta(){
    
    UsuarioController *u = UsuarioController::getInstance();

    Empleado* e;
    e= u->empleados.find(CalyComEst.datos.front());

    Hostal * host=e->getHostal();
    string nombreHostal=host->getNombre();

    map<string,Hostal*> :: iterator itH;
    itH=hostales.find(nombreHostal);
    set<DataComentario> ret = itH->darComSinResp();
    return ret;

}

void HostalController::seleccionComentario(int idComentario){
    CalyComEst.idSelect=idComentario;

}
void HostalController::ingresarComentario(string comentario){
    UsuarioController *u = UsuarioController::getInstance();
    string hostal=u->darHostalTrabaja(CalyComEst.datos.front());
    Hostal *ho=hostales->second->find(hostal);
    ho->ingresarCom(comentario, CalyComEst.idSelect);

}