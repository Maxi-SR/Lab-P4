#include "HostalController.h"

void HostalController::ingresarDatosHostal(string nom,string dir,int tel){

    //el controlador se encarga de decirle a 
    //la clase hostal que cree una instancia de hostal
    Hostal h = Hostal(nom,dir,tel,NULL,NULL,NULL); //alta de hostal solo pide los primeros 3 parametros,
                                                  //lo otro se va a ir agregando a medida que avanza

    //creada la instancia h
    //se agrega a la coleccion de hostales
    hostales.push_back(&h); // hay que ver si tenemos un arreglo de objetos o un arreglo de punteros a objetos,
                            //en este caso tengo un arreglo de punteros a objetos, por eso en el parametro
                            //de push_back le paso la direccion de memoria donde apunta h (el objeto) 
                            //no estoy seguro de esto que puse.

}