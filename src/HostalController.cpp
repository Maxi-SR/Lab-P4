#include "HostalController.h"
#include "../include/Fabrica.h"
#include <map>
#include <set>

using namespace std;

class DataDescripcion;

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
    Fabrica *fabrica = Fabrica::getInstance();
    IReservaController *r = fabrica->getInstanceReservaController();
    set<DataHostal> CalifHostales = r->obtenerHostalesRegistrados();  
    vector<string> resultado;
    set<DataHostal>::iterator it = CalifHostales.begin();
    DataHostal primero, segundo, tercero, actual;  //recorro los primero tres hostales
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
    set<DataHostal>::iterator i;
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
    resultado.push_back(primero.getNombre()); //esto accede al nombre del hostal?
    resultado.push_back(segundo.getNombre()); //necesito saber como inserta, si no puede ser que primero no quede primero
    resultado.push_back(tercero.getNombre()); //ARREGLO???
}

DataDescripcion HostalController::verDetalles(string nombreHostal){
    std::map<string, Hostal*>::iterator it;
    it = hostales.find(nombreHostal);
    Hostal* h = it->second;
    set<Calificacion> cal = h->getCalificaciones();
    set<int> calificaciones;
    set<string> comentarios;
    //recorrer el set de calificaciones
    for (std::set<Calificacion>::iterator it = cal.begin(); it!=cal.end(); ++it){
        Calificacion c = *it;
        int cal = c.getCalificacion();
        string com = c.getComentario();
        calificaciones.insert(cal);
        comentarios.insert(com);
    }
    DataHabitacion hab;
    float f = -1;
    DataDescripcion d(comentarios,calificaciones,f,hab);
    return d;
}