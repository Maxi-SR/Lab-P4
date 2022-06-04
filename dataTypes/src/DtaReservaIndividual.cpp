#include "../DtaReservaIndividual.h"

DtaReservaIndividual::DtaReservaIndividual(int codigoReserva,Fecha checkInReserva,Fecha CheckOutReserva,EstadoReserva estadoReserva,float precioReserva){
    this->codigo = codigoReserva;
    this->checkIn = checkInReserva;
    this->checkOut = CheckOutReserva;
    this->estado = estadoReserva;
    this->precio = precioReserva;
}

ostream &operator<< (ostream &os, DtaReservaIndividual* reservaIndividual){
    Fecha* auxCI = reservaIndividual->getCheckIn();
    Fecha* auxCO = reservaIndividual->getCheckOut();

    os << "----INFORMACION BASICA DE UNA RESERVA INDIVIDUAL----\n"
       <<"Codigo:"<<reservaIndividual->getCodigo()<<endl
       <<"Fecha de CheckIn:"<<auxCI->getDia()<<"/"<< auxCI->getMes()<<"/"<<auxCI->getAnio()<<"/"<<auxCI->getHora() <<endl
       <<"Fecha de CheckOut:"<<auxCO->getDia()<<"/"<< auxCO->getMes()<<"/"<<auxCO->getAnio()<<"/"<<auxCO->getHora() <<endl
       <<"Estado:"<<reservaIndividual->getEstado()<<endl
       <<"Precio:"<<reservaIndividual->getPrecio()<<endl;
    os <<"---------------------------------------\n";

}
