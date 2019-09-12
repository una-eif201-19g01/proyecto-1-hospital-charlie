#include"Interfaz.h"

void Interfaz::menu(){
	int opcion=0;
	do {
		system("cls");
		cout << "Menu" << endl;
		cout << "1. Pacientes " << endl;
		cout << "2. Camas " << endl;
		cout << "3. Especialidad" << endl;
		cout << "4. Pablellon" << endl;
		cout << "5. Salir " << endl;
		cout << "Ingresa la opcion" << endl;
		cin >> opcion;

		switch (opcion)
		{
		case 1: {
			break;
		}
		case 2: {
			break;
		}
		case 3: {
			break;
		}
		case 4: {
			break;
		}
		case 5: {
			cout << "Hasta Luego";
			break;
		}
		default:
			cout << opcion << " es un numero invalido" <<endl;

			break;
		}
	} while (opcion != 5);
	return opcion;
}
//otro menu();
do {
	system("cls");
	int respuesta = 0;
	std::cout << "  Menú Hospital";
	std::cout << " Hospital Esperanza";
	std::cout << "  ====================================\n";
	std::cout << "  1.Menu doctor ";
	std::cout << "  2.Menu Paciente ";
	std::cout << "  3.Imprimir Pabellones  ";
	std::cout << "  4.Imprimir camas  ";
	std::cout << "\n";
	std::cout << "  3.  Exit\n";
	std::cout << "  ====================================\n";
	std::cout << "  Enter your selection: ";
	std::cin >> respuesta;
	std::cout << std::endl;
	switch (respuesta) {
	case 1:
		system("cls");
		int opcion;
		std::cout << "  Menú Doctor";
		std::cout << "  ====================================\n";
		std::cout << "  1.Ingresar doctor ";
		std::cout << "  2.Datos doctor    ";
		std::cout << "  2.Eliminar Doctor";

		break
	case 2:
		std::cout << "  Menú Paciente";
		std::cout << "  ====================================\n";
		std::cout << "  1.Ingresar Paciente ";
		std::cout << "   2.Imprimir Paciente";
		std::cout << "cambiar la cama";
		std::cout << "  3.Eliminar Doctor";


		break;

	case 3:
		cout << " Pabellones";
		cout << "tostring";
	case 4:
		cout << "camas";
		cout << "tostring";
	case 5:
		std::cout << "Hasta Luego.\n";
		break;

	default:
		std::cout << respuesta << " es un número inválido\n";

		std::cout << std::endl;

	} while (respuesta != 5)
		system("pause");
}

	}
