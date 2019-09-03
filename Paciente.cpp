#include "Paciente.h"

Paciente::Paciente()
{
	cedula, nombre, direccion, patologia, tipoCirugia, prioridadPaciente, fechaCirugia = "NULL";
	estadoPaciente = false;
	generoPaciente = 'X';
}

string Paciente::getCedula()
{
	return cedula;
}

string Paciente::getNombre()
{
	return nombre;
}

string Paciente::getDireccion()
{
	return direccion;
}

string Paciente::getPatologia()
{
	return patologia;
}

string Paciente::getTipoCirugia()
{
	return tipoCirugia;
}

string Paciente::getPrioridadPaciente()
{
	return prioridadPaciente;
}

string Paciente::getFechaCirugia()
{
	return fechaCirugia;
}

char Paciente::getGeneroPaciente()
{
	return generoPaciente;
}

bool Paciente::getEstadoPaciente()
{
	return estadoPaciente;
}

void Paciente::setCedula(string _cedula)
{
	cedula = _cedula;
}

void Paciente::setNombre(string _nombre)
{
	nombre = _nombre;
}

void Paciente::setDireccion(string _direccion)
{
	direccion = _direccion;
}

void Paciente::setPatologia(string _patologia)
{
	patologia = _patologia;
}

void Paciente::setTipoCirugia(string _tipoCirugia)
{
	tipoCirugia = _tipoCirugia;
}

void Paciente::setPrioridadPaciente(string _prioridadPaciente)
{
	prioridadPaciente = _prioridadPaciente;
}
