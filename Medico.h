#ifndef MEDICO_H
#define MEDICO_H

#include <string>
#include <iostream>
#include <vector>
#include <sstream>

#include "Paciente.h"
#include "Especialidad.h"

class Paciente;

class Medico
{
private:
	string nombre;
	Especialidad especialidad;
	vector<Paciente*> paciente;
public:
	Medico();
	Medico(string nombre, Especialidad _especialidad,)
	
	void setNombre(string _nombre);
	string getNombre();
	void agregarPaciente(Paciente*);
	Paciente getPacientes();
	
	string reporteMedico();
};

#endif // !MEDICO_H