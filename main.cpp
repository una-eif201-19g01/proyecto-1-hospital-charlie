#include<iostream>
#include"Interfaz.h"

using namespace std;
int main() {
	//Interfaz* i = new Interfaz();
	//i->menu();

	vector<Medico*> vectorMedico; //aqui los 20 doctores

	Medico _medico;
	Especialidad _especialidad;
	Paciente* _paciente;
	Cama* _cama = new Cama();
	Pabellon _pabellon;
	
	//datos paciente
	string cedula, nombre, direccion, patologia, tipoCirugia, prioridadPaciente, fechaCirugia;
	bool estadoPaciente = true;
	char generoPaciente;
	
	//especialidad
	string especialidadd;

	cout << "Especialidad: "; cin >> especialidadd;
	_especialidad.setEspecialidades(especialidadd);
	cout << "Especialidad ha sido añadida, nombre de la especialidad: " << especialidadd << endl;
	system("pause");
	
	system("cls");
	cout << _especialidad.toStringEspecialidades() << endl;
	system("pause");

	return 0;
}