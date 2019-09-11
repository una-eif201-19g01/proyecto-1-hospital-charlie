#include "Especialidad.h"

Especialidad::Especialidad()
{
	for (int i = 0; i < 10; i++)
		especialidades[i] = "TBA";
}

Especialidad::Especialidad(string _especialidad)
{
	for (int i = 0; i < 10; i++)
		especialidades[i] = _especialidad;
}

Especialidad::~Especialidad()
{
	for (int i = 0; i < 10; i++)
	{
		delete especialidades[i];
	}
	delete especialidades;
}

void Especialidad::setEspecialidades(string _especialidad)
{
	for (int i = 0; i < 10; i++)
		especialidades[i] = _especialidad;
}

string Especialidad::getEspecialidades()
{
	for (int i = 0; i < 10; i++)
		return especialidades[i];
}

void Especialidad::cambiarEspecialidadEnPosicion(int posicion, string _especialidad)
{
	if (posicion = < 10 && posicion >= 1)
		especialidades[posicion - 1] = _especialidad;
}

string Especialidad::getEspecialidadEnPosicion(int posicion)
{
	if (posicion = < 10 && posicion >= 1)
		return especialidades[posicion - 1];
}

string Especialidad::toStringEspecialidades()
{
	stringstream reporte;

	reporte << "Lista de especialidades:" << endl;
	for (int i = 0; i < 10; i++)
	{
		reporte << "[" << i+1 << "]:" << especialidades[i] << endl;
	}
	return reporte.str();
}
