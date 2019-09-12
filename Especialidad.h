#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Especialidad {
private:
	string especialidades[10];
public:
	Especialidad();
	Especialidad(string _especialidad);
	~Especialidad();

	void setEspecialidades(string _especialidad);
	string getEspecialidades();

	void cambiarEspecialidadEnPosicion(int posicion, string _especialidad);
	string getEspecialidadEnPosicion(int posicion);
	string toStringEspecialidades();
};

#endif // !ESPECIALIDAD_H

