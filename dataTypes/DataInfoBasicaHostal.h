#ifndef DATAINFOBASICAHOSTAL
#define DATAINFOBASICAHOSTAL

#include "DatasHostal.h"

class DataInfoBasicaHostal: public DatasHostal
{
private:
    int telefono;
public:
    DataInfoBasicaHostal(string,string,int);
    int getTelefono();
    ~DataInfoBasicaHostal();
};










#endif