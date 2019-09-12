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
	Pabellon(int, int, Cama***);
	~Pabellon();

	void setPabellon(Cama** _cama);
	Cama getPabellon();
	void setCamaEnPosicion(Cama* cama, int fila, int _columna);

	char vereficarGeneroPabellon();
	bool hayDisponibilidad();
	int totalDisponibilidad();
	void cambiarPacienteCama(Paciente*);
	string toStringPabellon();
};

#endif // !PABELLON_H
