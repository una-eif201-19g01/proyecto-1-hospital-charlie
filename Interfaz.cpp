#include"Interfaz.h"



vector<Medico*> vectorMedico;


void Interfaz::menu() {
	int respuesta = 0;

	do {                                    //metodo menu 
		system("cls");
		cout << "  Menu Hospital" << endl;
		cout << " Hospital Esperanza" << endl;
		cout << " ====================================\n" << endl;
		cout << "  1.Menu doctor " << endl;
		cout << "  2.Menu Paciente " << endl;
		cout << "  3.Menu Pabellones" << endl;
		cout << "  4.Menu camas  " << endl;
		cout << "  5.Menu Espeialidades  " << endl;
		cout << "\n";
		cout << "  6.  Salir \n";
		cout << "  ====================================\n";
		cout << "  Enter your selection: ";

		cin >> respuesta;
		//system("cls");
		switch (respuesta) {

		case 1:
			system("cls");
			menuDoctor();
			cin.ignore();
			cin.get();
			break;
		case 2:
			menuPaciente();
			cin.ignore();
			cin.get();
			break;
		case 3:
			menuPabellon();
			cin.ignore();
			cin.get();
			break;
		case 4:
			menuCamas();
			cin.ignore();
			cin.get();
			break;
		case 5:
			menuEspecialidades();
			cin.ignore();
			cin.get();
			break;
		case 6:
			cout << "Muchas Gracias";
			break;
		default:
			cout << respuesta << "Numero Invalido";
			break;
		}

		if (cin.fail()) {
			cout << "Entrada no permitida, use un numero" << endl;
			//menu();
		}
		if (respuesta <= 0 || respuesta >= 6)
			cout << "Estrada no permitida, no se aceptan numeros menores a 1 o mayores a 5" << endl;

		cout << endl;

	} while (respuesta != 6);
	system("pause");
}


void Interfaz::menuDoctor() {
	//system("cls");
	int respuesta = 0;
	cout << "  Menu Doctor" << endl;
	cout << "  ====================================\n" << endl;
	cout << "  1.Ingresar doctor " << endl;
	cout << "  2.Datos de un doctor especifico " << endl;
	cout << "  3.Datos de todos los doctores " << endl;
	cout << "  4.Eliminar Doctor" << endl;
	cout << "  5.Menu Principal" << endl;
	cin >> respuesta;

	Medico* _medico = new Medico();
	string nombre;
	Especialidad _especialidad;
	string nombreMedico;
	string especialidad;

	switch (respuesta) {
	case 1:
		//for (int i = 0; i < 20; i++)
		cout << "Nombre: "; cin >> nombre; cout << endl;
		if (_especialidad.getCantidadEspecialidad() == 0) {
			cout << "No hay Especialidades" << endl;
			system("pause");
			menu();
		}
		else
			cout << "Especialidad:";
		cin >> especialidad;//.setEspecialidades(); cout << endl;
		for (int j = 0; j < 10; j++)
			if (_especialidad.getEspecialidadEnPosicion(j) == especialidad) {
				vectorMedico[j] = new Medico(nombre, especialidad);

			}

		break;
	case 2:

		if (vectorMedico.size() == 0)
			cout << "No hay doctores registrados." << endl; menuDoctor();

		cout << "Nombre del Medico: "; cin >> nombreMedico; cout << endl;
		if (cin.fail()) {
			cout << "Entrada invalida" << endl; menuDoctor();
		}
		else

			for (int i = 0; i < 20; i++)
				if (vectorMedico[i]->getNombre() == nombreMedico)
					cout << vectorMedico[i]->reporteMedico();
		break;

	case 3:
		for (int i = 0; i < 20; i++)
		{
			cout << "[" << i + 1 << "]" << vectorMedico[i]->reporteMedico() << endl;
		}


	case 4:
		cout << "Nombre del medico a eliminar del sistema: "; cin >> nombreMedico; cout << endl;
		if (cin.fail()) {
			cout << "Entrada invalida" << endl; menuDoctor();
		}
		else
			for (int i = 0; i < 20; i++)
				if (vectorMedico[i]->getNombre() == nombreMedico /*&& vectorMedico[i].paciente.size() == 0*/)
					delete vectorMedico[i];
				else
					cout << "El doctor no se puede eliminar mientras tenga pacientes asignados" << endl;
	case 5:
		menu();

	default:
		std::cout << respuesta << " es un número inválido\n";

		std::cout << std::endl;

	} while (respuesta != 5)
		system("pause");
}




void Interfaz::menuPaciente() {
	system("cls");
	int respuesta = 0;
	std::cout << "  Menu Paciente" << endl;
	cout << "  ====================================\n";
	cout << "  1.Ingresar Paciente " << endl;
	cout << "  2.Imprimir Paciente" << endl;
	cout << "  3.cambiar la cama" << endl;
	cout << "  4.Dar alta paciente" << endl;
	cout << "   5.volver al menu" << endl;
	cin >> respuesta;
}

void Interfaz::menuPabellon() {
}

void Interfaz::menuCamas() {
}

void Interfaz::menuEspecialidades() {
	int respuesta = 0;
	cout << "  Especialidades" << endl;
	cout << "  ====================================\n";
	cout << "  1.Ingresar Especialidades" << endl;
	cout << "  2.Listado de Especialidades" << endl;
	cout << " 3.Menu " << endl;
	cin >> respuesta;
}









/*
void menuDoctor() {

int respuesta = 0;

cout << "  Menú Doctor";
cout << "  ====================================\n";
cout << "  1.Ingresar doctor " << endl;
cout << "  2.Datos de un doctor especifico " << endl;
cout << "  3.Datos de todos los doctores " << endl;
cout << "  4.Eliminar Doctor" << endl;
cout << "  5.Menu Principal" << endl;
cin >> respuesta;

Medico* _medico = new Medico();
string nombre;
Especialidad _especialidad;

switch (respuesta) {
case 1:
for (int i = 0; i < 20; i++)
cout << "Nombre: " << ; cin >> nombre; cout << endl;
if (_especialidad.size() == 0) {
cout << "No hay Especialidades"
menu();
}
else
cout << "Especialidad:" << ; cin >> _especialidad; << endl;
for (int j = 0; j < 10; j++)
if (_especialidad[j] == _especialidad) {
vectorMedico[i] = new Medico(nombre, _especialidad);
}

break
case 2:
string nombreMedico;
if (vectorMedico.size() == 0)
cout << "No hay doctores registrados." << endl; menuDoctor();

cout << "Nombre del Medico: "; cin >> nombreMedico; cout << endl;
if (cin.fail)
cout << "Entrada invalida" << endl; menuDoctor();
else
for (int i = 0; i < 20; i++)
if (vectorMedico[i] == nombreMedico)
cout << vectorMedico[i]->reporteMedico();
break;

case 3:
for (int i = 0; i < 20; i++)
{
cout << "[" << i + 1 << "]" << vectorMedico[i]->reporteMedico() << endl;
}


case 4:
cout << "Nombre del medico a eliminar del sistema: "; cin >> nombreMedico; cout << endl;
if (cin.fail())
cout "Entrada invalida" << endl; menuDoctor();
else
for (int i = 0; i < 20; i++)
if (vectorMedico[i]->getNombre() == nombreMedico && vectorMedico[i].paciente.size() == 0)
delete vectorMedico[i];
else
cout << "El doctor no se puede eliminar mientras tenga pacientes asignados" << endl;
case 5:
menu();

default:
std::cout << respuesta << " es un número inválido\n";

std::cout << std::endl;

} while (respuesta != 5)
system("pause");
}
}
}
}

void menuPaciente()
{
std::cout << "  Menú Paciente" << endl;
cout << "  ====================================\n";
cout << "  1.Ingresar Paciente " << endl;
cout << "  2.Imprimir Paciente" << endl;
cout << "  3.cambiar la cama" << endl;
cout << "  4.Dar alta paciente" << endl;
cout << "   5.volver al menu" << endl;
cin >> respuesta;

switch (respuesta) {
case 1:



break
case 2:



break;

case 3:

case 4:
menuCamas();
case 5:
menuEspecialidades();
case 6:
std::cout << "Hasta Luego.\n";
break;

default:
std::cout << respuesta << " es un número inválido\n";

std::cout << std::endl;

} while (respuesta != 5)
system("pause");
}

}





}

void menuPabellon()
{

}

void menuCamas()
{

}

void menuEspecialidades()
{


switch (respuesta) {
case 1:



break
case 2:



break;

case 3:
*/