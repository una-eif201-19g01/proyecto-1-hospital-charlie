#include "Cama.h"

Cama::Cama()
{
	codigo = "NULL";
	disponibilidad = true;
	*paciente = new Paciente();
}

Cama::Cama(string _codigo, Paciente* _paciente)
{
	codigo = _codigo;
	disponibilidad = false;
	*paciente = _paciente;
}

Cama::~Cama()
{
	codigo = "NULL";
	disponibilidad = true;
	delete *paciente;
}

void Cama::setDisponibilidad(bool _disponibilidad)
{
	disponibilidad = _disponibilidad;
}

void Cama::setCodigo(string _codigo)
{
	codigo = codigo;
}

void Cama::setPaciente(Paciente* _paciente)
{
	*pacitente=_paciente
}

string Cama::getCodigo()
{
	return codigo;
}

bool Cama::isDisponibilidad()
{
	return disponibilidad;
}

Paciente Cama::getPaciente()
{
	return *paciente;
}

string Cama::toStringCama()
{
	stringstream reporte;

	reporte << "Codigo: " << getCodigo() << endl;
	if (isDisponibilidad() == false)
	{
		reporte << "Paciente: " << paciente->getNombre() << endl;
	}
	else
		reporte << "Cama desocupada." << endl;

	return reporte.str();
}
