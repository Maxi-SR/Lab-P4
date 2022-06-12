#include "../include/Calificacion.h"

Calificacion::Calificacion(int id, int cal, string com){
    this->idCalificacion = id;
    this->calificacion = cal;
    this->comentario = com;
}

int Calificacion::getCalificacion(){
    return this->calificacion;
}

string Calificacion::getComentario(){
    return this->comentario;
}

Responde* Calificacion::getRespuestas(){
    return this->Respuesta;
}

void Calificacion::setRespuestas(Responde* r){
    this->Respuesta = r;
}

bool Calificacion::noRespuesta(){
    return (this->Respuesta != NULL);
}

DataComentario Calificacion::darDatos(){
    DataComentario res(this->idCalificacion, this->comentario);
    return res;
}

void Calificacion::responder(string respuesta){
}

int Calificacion::getIdCalificacion(){
    return this->idCalificacion;
}

void Calificacion::borrarRespuestas(){
    delete this->Respuesta;
}

Calificacion::~Calificacion(){
    
}
