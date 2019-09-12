#include "Pabellon.h"

Pabellon::Pabellon()
{
	//pabellon = new Cama***;
	fila = 10;
	colum = 20;
}

Pabellon::Pabellon(int f, int c, Cama*** pabellon)
{
	fila = f;
	colum = c;
	pabellon = new Cama * *[fila];
	for (int i = 0; i < fila; i++) {
		pabellon[i] = new Cama * [colum];
	}
}

Pabellon::~Pabellon()
{
	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < colum; j++) {
			delete pabellon[i][j];
		}
	}
	for (int i = 0; i < fila; i++) {
		delete[]pabellon[i];

	}

	delete[]pabellon;

}

void Pabellon::setPabellon(Cama** _cama)
{
	for (int i = 0; i < fila; i++)
		for (int j = 0; j < colum; j++)
		{
			pabellon[i][j] = *_cama;
		}
}

Cama Pabellon::getPabellon()
{
	return Cama();
}

char Pabellon::vereficarGeneroPabellon()
{

	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < colum; j++) {
			if (pabellon[i][j]->getPaciente().getGeneroPaciente() == 'M') {
				return 'M';
			}
			else {
				return 'F';
			}
		}
	}
}

bool Pabellon::hayDisponibilidad()
{
	bool disponible;

	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < colum; j++) {
			if (pabellon[i][j]->isDisponibilidad() == true)
				disponible = true;
			else
				disponible = false;
		}
	}
	return disponible;
}

int Pabellon::totalDisponibilidad()
{
	int contador = 0;

	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < colum; j++) {
			if (pabellon[i][j]->isDisponibilidad() == true)
				contador++;
		}
	}
	return contador;
}

void Pabellon::setCamaEnPosicion(Cama* cama, int _fila, int _columna)
{
	if (_fila < fila && _columna < colum)
		pabellon[_fila][_columna] = cama;
}

void Pabellon::cambiarPacienteCama(Paciente*)
{
}

string Pabellon::toStringPabellon()
{
	return string();
}