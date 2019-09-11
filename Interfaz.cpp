#include"Interfaz.h"

Interfaz::interfaz(){

}

int Interfaz::menu(){
	int opc;
	do {
		system("cls");
		cout << "Menu" << endl;
		cout << "1. Pacientes " << endl;
		cout << "2. Camas " << endl;
		cout << "3. Especialidad" << endl;
		cout << "4. Pablellon" << endl;
		cout << "5. Salir " << endl;
		opc = validarOpc();
	} while (rango(6, 0, opc));
	return opc;
}

