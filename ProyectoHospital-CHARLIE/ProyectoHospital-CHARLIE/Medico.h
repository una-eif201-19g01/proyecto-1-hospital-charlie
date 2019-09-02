#ifndef MEDICO_H
#define MEDICO_H

#include <string>
#include <iostream>
#include <vector>
#include <sstream>

#include "Paciente.h"

class Paciente;

class Medico
{
private:
	string nombre;
	//especialidad 
	vector<Paciente*> paciente;
public:
	Medico();
	void setNombre(string _nombre);
	string getNombre();
	string reporteMedico();
	void agregarPaciente(Paciente*);
	Paciente getPacientes();
};

#endif // !MEDICO_H