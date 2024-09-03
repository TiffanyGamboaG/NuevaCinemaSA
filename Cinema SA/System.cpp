#include "System.h"
Movie* movies;
Room* rooms;
Schedule* schedules;
int movie;

void System::showFile()
{
	option = 0;
	system("cls");

	printf(WHITE " .................. \n");
	printf(" 1. Acerca de \n");
	printf(" 2. "  RED "Salir \n"  WHITE);
	printf(" ");
	scanf_s("%d", &option);
	printf(" .................. \n");

	if (option == 1) {
		printf(CYAN " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
		printf(ROSE  " Tiffany Gabriell Gamboa Gonzalez \n");
		printf(CYAN " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
		printf(WHITE);

		system("PAUSE");
		system("cls");
		showMenu();
	}
	else if (option == 2) {
		exit(0);
	}

	printf("Opcion invalida \n");
	system("PAUSE");
	showFile();
}

void System::showMaintenance()
{
	system("cls");
	option = 0;

	printf(WHITE  " .................. \n");
	printf(" 1. Peliculas \n");
	printf(" 2. Salas \n");
	printf(" 3. Horarios \n");
	printf(" 4. Volver al inicio \n");
	printf(" ");
	scanf_s("%d", &option);
	printf(" .................. \n \n");

	if (option == 1) {
		addMovieInformation();
		printf(" \n");
		showMovies();
		system("PAUSE");
		showMaintenance();
	}
	else if (option == 2) {
		addRoomInformation();
		printf("\n");
		showRooms();
		system("PAUSE");
		showMaintenance();
	}
	else if (option == 3) {
		addScheduleInformacion();
		printf("\n");
		showSchedule();
		system("PAUSE");
		showMaintenance();
	}
	else if (option == 4) {
		showMenu();
	}
	printf("Opcion invalida \n");
	system("PAUSE");
	showMaintenance();
}

void System::showReservation()
{
	option = 0;
	system("cls");

	printf(" 1. Reservar \n");
	printf(" 2. Volver al inicio \n");
	scanf_s("%d", &option);

	if (option == 1) {
		reservation();
		system("PAUSE");
		showReservation();
	}
	else if (option == 2) {
		showMenu();
	}
	printf("Opcion invalida \n");
	system("PAUSE");
	showReservation();
}

void System::showTicketSales()
{
	option = 0;
	system("cls");

	printf(" 1. Venta \n");
	printf(" 2. Volver al inicio \n");
	scanf_s("%d", &option);

	if (option == 1) {
		printf("Venta \n");
		system("PAUSE");
		showTicketSales();
	}
	else if (option == 2) {
		showMenu();
	}
	printf("Opcion invalida \n");
	system("PAUSE");
	showTicketSales();
}

void System::addMovieInformation()
{
	string name = " ", country = " ", review = " ";
	int year = 0, duration = 0;

	cout << "Cuantas peliculas quiere llenar: ";
	cin >> numberMovies;
	cin.ignore();

	movies = new Movie[numberMovies];

	for (int i = 0; i < numberMovies; i++) {

		cout << "Digite el nombre de la pelicula " << i + 1 << " :" << endl;
		getline(cin, name);
		movies[i].setName(name);


		cout << "Digite el pais " << i + 1 << " :" << endl;
		getline(cin, country);
		movies[i].setCountry(country);


		cout << "Diginte la resena " << i + 1 << " :" << endl;
		getline(cin, review);
		movies[i].setReview(review);

		cout << "Digite anyo de la pelicula " << i + 1 << " :" << endl;
		cin >> year;
		movies[i].setYear(year);

		cin.ignore();

		cout << "Digite la duracion de la pelicula en minutos " << i + 1 << " :" << endl;
		cin >> duration;
		movies[i].setDuration(duration);
		cin.ignore();

	}
}

void System::showMovies()
{
	for (int i = 0; i < numberMovies; i++) {
		cout << "Pelicula " << i + 1 << endl;
		cout << movies[i].toString() << endl;

	}
}

void System::addRoomInformation()
{
	int number = 0, numberSeats = 0, price = 0;

	cout << "Cuantas salas tiene el cine: ";
	cin >> numberRooms;
	cin.ignore();

	rooms = new Room[numberRooms];

	for (int i = 0; i < numberRooms; i++) {
		cout << "Digite el numero de la sala: ";
		cin >> number;
		rooms[i].setNumber(number);

		cout << "Digite el numero de butacas: ";
		cin >> numberSeats;
		rooms[i].setNumberSeats(numberSeats);

		cout << "Digite el precio: ";
		cin >> price;
		rooms[i].setPrice(price);
	}
}

void System::showRooms()
{
	for (int i = 0; i < numberRooms; i++) {
		cout << "Sala " << endl;
		cout << rooms[i].toString() << endl;
	}
}

void System::addScheduleInformacion()
{
	string date, startTime, endTime;
	cout << "Cuantos horarios posee el cine: ";
	cin >> numberSchedule;
	cin.ignore();

	schedules = new Schedule[numberSchedule];

	for (int i = 0; i < numberSchedule; i++) {
		cout << "Digite la fecha: " << endl;
		getline(cin, date);
		schedules[i].setDate(date);


		cout << "Digite la hora inicial: " << endl;
		getline(cin, startTime);
		schedules[i].setStartTime(startTime);


		cout << "Digite la hora final:  " << endl;
		getline(cin, endTime);
		schedules[i].setEndTime(endTime);
	}
}

void System::showSchedule()
{
	for (int i = 0; i < numberSchedule; i++) {
		cout << "Horarios " << endl;
		cout << schedules[i].toString() << endl;
	}
}

void System::reservation()
{
	if (movies == NULL) {
		system("cls");
		addMovieInformation();
	}
	showMovies();
	printf("Digite el numero de la pelicula que quiere reservar: \n");
	scanf_s("%d", &movie);
}

void System::room()
{
	int rows = 0;
	int columns = 0;
}

void System::assingRoom()
{

}

System::System()
{
	numberMovies = 0;
	option = 0;
	numberRooms = 0;
	numberSchedule = 0;
}

System::System(int newNumberMovies, int newOption, int newNumberRooms, int newNumberSchedule)
{
	numberMovies = newNumberMovies;
	option = newOption;
	numberRooms = newNumberRooms;
	numberSchedule = newNumberSchedule;
}

void System::setNumberMovies(int newNumberMovies)
{
	numberMovies = newNumberMovies;
}

void System::setOption(int newOption)
{
	option = newOption;
}

void System::setNumberRooms(int newNumberRooms)
{
	numberRooms = newNumberRooms;
}

void System::setSchedule(int newNumberSchedule)
{
	numberSchedule = newNumberSchedule;
}

int System::getNumberMovies()
{
	return numberMovies;
}

int System::getOption()
{
	return option;
}

int System::getNumberRooms()
{
	return numberRooms;
}

int System::getNumberSchedule()
{
	return numberSchedule;
}

void System::showMenu()
{
	option = 0;

	system("cls");

	printf(YELLOW " .................\n ");
	printf(" Nueva Cinema SA \n");
	printf(YELLOW " .................\n ");
	printf("\n");

	printf(WHITE " 1. Achivo \n");
	printf(" 2. Mantenimiento \n");
	printf(" 3. Reserva \n");
	printf(" 4. Venta \n");
	printf(" ");
	scanf_s("%d", &option);

	if (option == 1) {
		showFile();
	}
	else if (option == 2) {
		showMaintenance();
	}
	else if (option == 3) {
		showReservation();
	}
	else if (option == 4) {
		showTicketSales();
	}

	printf("Opcion invalida: ");
	system("PAUSE");
	showMenu();
}

System::~System()
{
	delete[] movies;
	delete[] rooms;
	delete[] schedules;
}
