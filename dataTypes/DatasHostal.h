#ifndef DATASHOSTAL
#define DATASHOSTAL

#include <iostream>
using namespace std;


class DatasHostal
{
protected:
    string nombre;
    string direccion;
public:
    DatasHostal();
    string getNombre();
    string getDireccion();
    ~DatasHostal();
};




#endif