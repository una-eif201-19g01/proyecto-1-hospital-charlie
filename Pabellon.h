#ifndef PABELLON_H
#define PABELLON_H

#include "Cama.h"

class Pabellon {
private:
	Cama** pabellon;
public:
	Pabellon();
	Pabellon(Cama*);
	~Pabellon();

	void setPabellon(Cama*);
	Cama getPabellon();

	char vereficarGeneroPabellon();
	bool hayDisponibilidad();	
	int totalDisponibilidad();
	void cambiarPacienteCama();
	string toStringPabellon();
};

#endif // !PABELLON_H
