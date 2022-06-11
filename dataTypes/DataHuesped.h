#ifndef DATAHUESPED
#define DATAHUESPED


#include "DataUsuario.h"

class DataHuesped : public DataUsuario {
    private: 
        bool finger;
    public:
        DataHuesped(string,string,bool);
        bool esFinger();
};


#endif