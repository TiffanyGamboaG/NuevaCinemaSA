#include "CinemaSystem.h"

string CinemaSystem::showFile()
{
	system("cls");

	cout << WHITE << " .................." << endl;
	cout << " 1. Acerca de " << endl;
	cout <<" 2. "<<RED<< "Salir " << WHITE<<endl << endl;
	cout << " ";
	cin >> option;
	cout << " .................." << endl;
	cout << endl;

	if (option == 1) {
		cout << CYAN << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
		cout << ROSE << " Tiffany Gabriell Gamboa Gonzalez " << endl;
		cout << CYAN << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
		cout << WHITE << endl;
		system("PAUSE");
		system("cls");
	}
	else if (option == 2) {
		showMenu();
	}

	return "Opcion invalida";
    
}

string CinemaSystem::showMaintenance()
{
	system("cls");
	option = 0;

	cout << WHITE << " .................." << endl;
	cout << " 1. Peliculas " << endl;
	cout << " 2. Salas " << endl;
	cout << " 3. Horarios" << endl;
	cout << " 4. " RED << "Salir " << WHITE << endl << endl;
	cin >> option;
	cout << " .................." << endl;
	cout << endl;

	if (option == 1) {
		return "Peliculas";
	}
	else if (option == 2) {
		return "Salas";
	}
	else if (option == 3) {
		return "Horarios";
	}
	else if (option == 4) {
		return "Salir";
	}

	return "Opcion invalida";
}

string CinemaSystem::showMenu()
{
	option = 0;

	system("cls");

	cout << YELLOW << "................. " << endl;
	cout << " Nueva Cinema SA " << endl;
	cout << "................. " << endl;

	cout << endl;
	cout << WHITE << " 1. Achivo" << endl;
	cout << " 2. Mantenimiento" << endl;
	cout << " 3. Reserva" << endl;
	cout << " 4. Venta" << endl;
	cout <<" 5. "<<RED << "Salir"<<WHITE << endl << endl;
	cout << " ";
	cin >> option;

	if (option == 1) {
		showFile();
	}
	else if (option == 2) {
		showMaintenance();
	}
	else if (option == 3) {
		return "Reserva";
	}
	else if (option == 4) {
		return "venta";
	}
	else if (option == 5) {
		return "salio";
	}
	return "opcion invalida";
}
