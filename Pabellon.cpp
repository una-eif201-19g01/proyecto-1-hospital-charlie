#include "Pabellon.h"

Pabellon::Pabellon()
{		fila=10
		colum=20
}

Pabellon::Pabellon(int f,int c)
{
	fila = f;
	colum = c;
	pabellon = new cama * *[fila];
	for (int i = 0; i < fila; i++) {
		pabellon[i] = new cama * [colum];
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

void Pabellon::setPabellon(Cama**)
{
}

Cama Pabellon::getPabellon()
{
	return Cama();
}

char Pabellon::vereficarGeneroPabellon()
{
	return 0;
}

bool Pabellon::hayDisponibilidad()
{
	return false;
}

int Pabellon::totalDisponibilidad()
{
	return 0;
}

void Pabellon::cambiarPacienteCama()
{
}

string Pabellon::toStringPabellon()
{
	return string();
}
