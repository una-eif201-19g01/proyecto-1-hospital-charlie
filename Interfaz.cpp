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

