#include "../DataInfoBasicaHostal.h"


DataInfoBasicaHostal::DataInfoBasicaHostal(string nombreHostal, string direccionHostal, int telefonoHostal){
    this->nombre = nombreHostal;
    this->direccion= direccionHostal;
    this->telefono= telefonoHostal;
}
string DataInfoBasicaHostal::getNombre(){
   return this->nombre;
}
string DataInfoBasicaHostal::getDireccion(){
   return this->direccion;
}
int DataInfoBasicaHostal::getTelefono(){
   return this->telefono;
}

ostream &operator<< (ostream &os, DataInfoBasicaHostal* data) {

	os 	<< "-------INFORMACION BASICA DEL HOSTAL-------\n"
		<< "Nombre: " << data->getNombre() << endl
		<< "Direccion: " << data->getDireccion() << endl
        << "Telefono:" << data->getTelefono()<< endl;
	os	<< "----------------------------------------\n";

	return os;
}
