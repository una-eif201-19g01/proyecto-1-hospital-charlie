#include "Paciente.h"

Paciente::Paciente()
{
	cedula, nombre, direccion, patologia, tipoCirugia, prioridadPaciente, fechaCirugia = "NULL";
	estadoPaciente = false;
	generoPaciente = 'X';
}

Paciente::Paciente(string _cedula, string _nombre, string _dirrecion, string _patologia, string _tipoCirugia, string _prioridadPaciente, string _fechaCirugia, bool _estadoPaciente, char _generoPaciente)
{
	cedula = _cedula;
	nombre = _nombre;
	direccion = _dirrecion;
	patologia = _patologia;
	tipoCirugia = _tipoCirugia;
	prioridadPaciente = _prioridadPaciente;
	fechaCirugia = _fechaCirugia;
	estadoPaciente = _estadoPaciente;
	generoPaciente = _generoPaciente;

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

void Paciente::setFechaCirugia(string _fechaCirugia)
{
	fechaCirugia = _fechaCirugia;
}

void Paciente::setEstadoPaciente(bool _estadoPaciente)
{
	estadoPaciente = _estadoPaciente;
}

void Paciente::setGeneroPaciente(char _generoPaciente)
{
	generoPaciente = _generoPaciente;
}

std::string Paciente::reportePaciente() {
	string reporte;
	reporte = "\n Reporte de los paciente: [" + getEstadoPaciente(); +"]: ";
	return reporte;
}