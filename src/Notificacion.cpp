#include ".../include/Notificacion.h"
#include <string>
using namespace std;


	private:
		string autor;
		string comentario;
		int puntaje;
	public:
Notificacion :: Notificacion(string autor, string comentario,int puntaje){
	this->autor=autor;
	this->comentario=comentario;
	this->puntaje=puntaje;
}
string Notificacion :: getAutor(){
		return (this->autor);
}
string Notificacion :: getComentario(){	
	return (this->comentario);
}
int Notificacion :: getPuntaje(){
		return (this->puntaje);
}

std::ostream &operator<<(std::ostream &os, DTFecha &f)
{
    os
        << f.getAutor() << "\n" << f.getComentario() << "\n" << f.getPuntaje() << endl;
    return os;
}