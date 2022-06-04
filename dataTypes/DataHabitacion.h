#ifndef DATAHABITACION
#define DATAHABITACION

class DataHabitacion{
	private:
		int numero;
		float precio;
		int capacidad;
	public:
		DataHabitacion(int, float, int);
		int getNumero();
		float getPrecio();
		int getCapacidad();	
		bool operator==(DataHabitacion);
};

#endif
