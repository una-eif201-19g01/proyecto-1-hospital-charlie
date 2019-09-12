#ifndef PABELLON_H
#define PABELLON_H

#include "Cama.h"

class Pabellon {
private:
	int fila;
	int colum;
	Cama*** pabellon;
public:
	Pabellon();
	Pabellon(int,int);
	~Pabellon();

	void setPabellon(string);
	Cama getPabellon();

	char vereficarGeneroPabellon();
	bool hayDisponibilidad();	
	int totalDisponibilidad();
	void cambiarPacienteCama(paciente*);
	string toStringPabellon();
};

#endif // !PABELLON_H
