#ifndef DATAHUESPED
#define DATAHUESPED
#include <string>
#include "DataUsuario.h"


class DataHuesped : public DataUsuario{
	private:
		bool finger;
	public:
		DataHuesped(std::string, std::string, bool);
		bool getFinger();
};

#endif
