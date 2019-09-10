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
	Medico(string nombre, Especialidad _especialidad );
		~Medico();
	void setNombre(string _nombre);
	void setEspecialidad(Especialidad);
	string getNombre();
	Especialidad getEspecialidad();
	void agregarPaciente(Paciente*);
	Paciente getPacientes();
	string reporteMedico();
};

#endif // !MEDICO_H