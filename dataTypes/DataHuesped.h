#ifndef DATAHUESPED
#define DATAHUESPED
#include <string>
#include "DataUsuario.h"

using namespace std;

class DataHuesped : public DataUsuario{
	private:
		bool finger;
	public:
		DataHuesped();
		DataHuesped(string, string, bool);
		bool getFinger();
};

#endif
