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
            
            case 7:{

            }
            break;
            
            case 8:{
                
            }
            break;
            
            case 9:{

            }
            break;

            case 10:{
                
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