#include "ReservaController.h"
#include "Fabrica.h"
#include <map>
#include <set>

using namespace std;

class DtaHostal;

set<DtaHostal> ReservaController::obtenerHostalesRegistrados(){
    HostalController *h = HostalController::getInstance();
    set<DtaHostal> res = h->obtener_Hostales_Registrados();
    return res;
}

