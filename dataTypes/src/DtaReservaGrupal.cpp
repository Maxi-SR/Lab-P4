// class DtaReservaGrupal : public DtaReserva{
// 	private:
// 		int canthuespedes;
// 	public:
// 		DtaReservaGrupal(int, Fecha, Fecha, EstadoReserva, float, int); 
// 		int getCanthuespedes();
// 		bool operator==(DtaReservaGrupal);
// };
// std::ostream& operator<<(std::ostream& os, DtaReservaGrupal* rg);

#include "../DtaReservaGrupal.h"

DtaReservaGrupal::DtaReservaGrupal(int codigoReserva,Fecha checkInReserva,Fecha CheckOutReserva,EstadoReserva estadoReserva,float precioReserva,int cantidadHuesp){
    this->codigo = codigoReserva;
    this->checkIn = checkInReserva;
    this->checkOut = CheckOutReserva;
    this->estado = estadoReserva;
    this->precio = precioReserva;
    this->canthuespedes = cantidadHuesp;
}

int DtaReservaGrupal::getCanthuespedes(){
   return this->canthuespedes;
}

ostream &operator<< (ostream &os, DtaReservaGrupal* reservaGrupal){
    Fecha* auxCI = reservaGrupal->getCheckIn();
    Fecha* auxCO = reservaGrupal->getCheckOut();

    os << "----INFORMACION BASICA DE UNA RESERVA GRUPAL----\n"
       <<"Codigo:"<<reservaGrupal->getCodigo()<<endl
       <<"Fecha de CheckIn:"<<auxCI->getDia()<<"/"<< auxCI->getMes()<<"/"<<auxCI->getAnio()<<"/"<<auxCI->getHora() <<endl
       <<"Fecha de CheckOut:"<<auxCO->getDia()<<"/"<< auxCO->getMes()<<"/"<<auxCO->getAnio()<<"/"<<auxCO->getHora() <<endl
       <<"Estado:"<<reservaGrupal->getEstado()<<endl
       <<"Precio:"<<reservaGrupal->getPrecio()<<endl
       <<"Cantidad de huespedes:"<<reservaGrupal->getCanthuespedes()<<endl;
    os <<"---------------------------------------\n";

}