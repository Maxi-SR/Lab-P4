#ifndef DTAHOSTAL
#define DTAHOSTAÑ

#include "DatasHostal.h"


class DtaHostal: public DatasHostal {
    private:
        float calPromedio;

    public:
        DtaHostal();
        DtaHostal(string,string,float);
        int getCalPromedio();


};

#endif