#include "./include/Fabrica.h"
#include "./include/IEstadiaController.h"
#include "./include/IUsuarioController.h"
#include "./include/IReservaController.h"
#include "./include/IHostalController.h"
#include "./include/IReloj.h"

#include <iostream>
#include <set>

int main(){
    Fabrica *fabrica = Fabrica::getInstance();
    //IEstadiaController  *estadia = fabrica->getInstanceEstadiaController();
    //IUsuarioController *usuario = fabrica ->getInstanceUsuarioController();
    //IReservaController *reserva = fabrica->getInstanceReservaController();
    IHostalController *hostal = fabrica->getInstanceHostalController();
    //IReloj * reloj = fabrica->getInstanceReloj();
    int opcion;
        cout << "01: Alta de usuario" << endl;
        cout << "02: Alta de hostal" << endl;
        cout << "03: Alta de habitacion" << endl;
        cout << "04: Asignar empleado a hostal" << endl;
        cout << "05: Realizar reserva" << endl;
        cout << "06: Consultar top 3 de hostales" << endl;
        cout << "07: Registrar estadia" << endl;
        cout << "08: Finalizar Estadia" << endl;
        cout << "09: Calificar estadia" << endl;
        cout << "10: Comentar calificación" << endl;
        cout << "11: Consulta de Usuario" << endl;
        cout << "12: Consulta de Hostal" << endl;
        cout << "13: Consulta de Reserva" << endl;
        cout << "14: Consulta de Estadía" << endl;
        cout << "15: Baja de reserva" << endl;
        cout << "16: Suscribirse a notificaciones" << endl;
        cout << "17: Consulta de notificaciones" << endl;
        cout << "18: Eliminar Suscripción" << endl;
        cout << "19: Modificar Fecha del Sistema" << endl;
        cout << "20: Cargar datos" << endl;
        cout << "00: Salir" << endl;
        
    do{
        cout<<"\nIngrese una opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1: {
                
            }
            break;
            
            case 2: {
                cout << "Ingresar nombre de hostal" << endl;
                string nombre;
                cin >> nombre;
                cout << "Ingresar direccion de hostal" << endl;
                string direccion;
                cin >> direccion;
                cout << "Ingresar telefono de hostal" << endl;
                int telefono;
                cin >> telefono;
                hostal->ingresarDatosHostal(nombre,direccion,telefono);
            }
            break;
            
            case 3: {
                
            }
            break;
            
            case 4: {
                
            }
            break;
            
            case 5: {
                
            }
            break;
            
            case 6: {
                string nombre;
                cin >> nombre;
                DataDescripcion d = hostal->verDetalles(nombre);
                cout << d.getPromedio();
            }
            break;
            
            case 7:{//REGISTRAR ESTADIA

                cout << "Los Hostales registrados son:";
                set<string> hostalesReg = reserva->obtenerHostalesRegistrados();

                //MUESTRO HOSTALES REGISTRADOS
                set<string>::iterator it;
                for (it=hostalesReg.begin();it!=hostalesReg.end();++it){
                    cout << *it << end;
                }
                //SELECCIONO HOSTAL
                cout << "Ingrese el nombre del Hostal seleccionado";
                string nombreHostal;
                cin >> nombreHostal;
                reserva->seleccionarHostal(nombreHostal);

                //INGRESO EMAIL HUESPED
                cout << "Ingrese el email del huesped";
                string emailHuesped;
                cin >> emailHuesped;
                reserva->ingresarEmailHuesped(emailHuesped);

                //MUESTRO RESERVAS
                set<int> reservasReg = reserva->listarReservas();
                set<int> :: iterator itR;
                for (itR=reservasReg.begin();itR!=reservasReg.end();++itR){
                    cout << *itR << endl;
                }

                //SELECCIONO RESERVA
                cout << "Ingrese el id de la Reserva";
                string idReserva;
                cin >> idReserva;
                reserva->seleccionarReserva(idReserva);


            }
            break;
            
            case 8:{
                
            }
            break;
            
            case 9:{//CALIFICAR ESTADIA
                cout << "Los Hostales registrados son:";
                set<string> hostalesReg = hostal->obtenerHostalesRegistrados();

                //MUESTRO HOSTALES REGISTRADOS
                set<string>::iterator it;
                for (it=hostalesReg.begin();it!=hostalesReg.end();++it){
                    cout << *it << end;
                }
                //SELECCIONO HOSTAL
                cout << "Ingrese el nombre del Hostal seleccionado";
                string nombreHostal;
                cin >> nombreHostal;
                hostal->seleccionarHostal(nombreHostal);

                //INGRESO EMAIL HUESPED
                cout << "Ingrese el email del huesped";
                string emailHuesped;
                cin >> emailHuesped;
                hostal->ingresarEmailHuesped(emailHuesped);

                //OBTENER ESTADIAS FINALIZADAS
                set<DataEstadia> estadiasFinalizadas = hostal->obtenerEstadiasFinalizadasHuesped();
                set<DataEstadia> :: iterator itE;
                for (itE=estadiasFinalizadas.begin();itE!=estadiasFinalizadas.end();++itE){
                    cout << *itE << endl;
                }

                //SELECCIONO ESTADIA
                cout << "Ingrese el id de la Estadia";
                string idEstadia;
                cin >> idEstadia;
                hostal->seleccionarEstadia(idEstadia);


                //INGRESO MENSAJE
                cout << "Ingrese el Mensaje";
                string mensaje;
                cin >> mensaje;
                cout << "Ingrese la Calificacion (entre 1 y 5)";
                int calificacion;
                cin >> calificacion;
                hostal->ingresarMensaje(mensaje,calificacion);


            }
            break;

            case 10:{//COMENTAR CALIFICACION
                //INGRESO EMAIL EMPLEADO
                cout << "Ingrese el email del empleado";
                string emailEmpleado;
                cin >> emailEmpleado;
                hostal->ingresarEmail(emailEmpleado);

                //OBTENER COMENTARIOS SIN RESPUESTA
                set<DataComentario> comSinResp = hostal->obtenerComentariosSinRespuesta();
                set<DataComentario> :: iterator it;
                for (it=comSinResp.begin();it!=comSinResp.end();++it){
                    cout << *it << endl;
                }

                //SELECCIONAR COMENTARIO
                cout << "Ingrese el id del Comentario seleccionado";
                int idComentario;
                cin >> idComentario;
                hostal->seleccionarComentario(idComentario);

                //INGRESARCOMENTARIO
                cout << "Ingrese su comentario";
                string comentario;
                cin >> comentario;
                hostal->ingresarComentario(comentario);
                
            }
            break;
            
            case 11:{
                
            }
            break;
            
            case 12:{

            }
            break;

            case 13:{
                
            }
            break;
            
            case 14:{

            }
            break;
            
            case 15:{
                
            }
            break;

            case 16:{
                
            }
            break;
            
            case 17:{
                
            }
            break;
            
            case 18:{
                
            }
            break;
            
            case 19:{
                
            }
            break;
            
            case 20:{
                
            }
            break;
            
            case 0:{
                
            } 
            break;        
        }
    }while(opcion != 0);
    
}