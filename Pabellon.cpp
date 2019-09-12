#include "Pabellon.h"

Pabellon::Pabellon()
{
	fila = 10;
	colum = 20;
}

Pabellon::Pabellon(int f,int c,cama*cama)
{
	fila = f;
	colum = c;
	pabellon = new cama **[fila];
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

void Pabellon::setPabellon(Cama**_cama)
{
	for (int i = 0; i < fila; i++)
		for (int j = 0; j < colum; j++)
		{
			pabellon[i][j] = **_cama;
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
			if (pabellon[i][j]->getPaciente()->getGeneroPaciente() == "M") {
				return M;
			}
			else {
				return F;
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
	int contador;

	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < colum; j++) {
			if (pabellon[i][j]->isDisponibilidad() == true)
				contador++;
		}
	}
	return contador;
}

void Pabellon::setCamaEnPosicion(Cama* cama, int fila, int _columna)
{
	if (fila < fila && columna < colum)
		pabellon[_fila][_columna] = _cama;
}

void Pabellon::cambiarPacienteCama()
{
}

string Pabellon::toStringPabellon()

{
	stringstream _reporte

		_reporte << "Pabellon" << endl;
	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < colum; j++) {
			reporte << pabellon[i][j] << endl;

		}
	}

	return _reporte.str();
}


