#ifndef DTAHOSTAL
#define DTAHOSTAÑ

#include "DatasHostal.h"


class DtaHostal: public DatasHostal {
    private:
        int calPromedio;

    public:

        DtaHostal(string,string,int);
        int getCalPromedio();


};

#endif