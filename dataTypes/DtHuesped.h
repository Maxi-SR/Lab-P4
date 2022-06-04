#ifndef DTHUESPED
#define DTHUESPED
#include <string>
using namespace std;


class DtHuesped{
	private:
		string nombre;
		string email;
	public:
		DtHuesped();
		string getNombre();
		string getEmail();
};

#endif
