#include "../DataUsuario.h"
//Se implementa el destructor en los data?

DataUsuario::DataUsuario(string nombreUsr,string emailUsr){
    this->nombre = nombreUsr;
    this->email = emailUsr;
}

string DataUsuario::getEmail(){
   return this->email;
}
string DataUsuario::getNombre(){
   return this->nombre;
}

ostream &operator<< (ostream &os, DataUsuario* usr){
    os << "----INFORMACION BASICA DEL USUARIO----\n"
       <<"Nombre:"<<usr->getNombre()<<endl
       <<"Email:"<<usr->getEmail()<<endl;
    os <<"---------------------------------------\n";

}