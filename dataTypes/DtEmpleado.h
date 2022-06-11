#ifndef DATAEMPLEADO
#define DATAEMPLEADO 

#include "DataUsuario.h"
#include "Cargo.h"
using namespace std;
class DtEmpleado : public DataUsuario{
    private:
        Cargo tipoCargo;

    public:
        DtEmpleado(string,string,Cargo);
        Cargo getCargo();
};


#endif