#include "CinemaSystem.h"
int movie;
char*** room;
int*** numberSeats;
int* roomRows;    
int* roomColumns;
int*** reservationCode;

void CinemaSystem::showFile()
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

void CinemaSystem::showMaintenance()
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
		showRoomsInformation();
		system("PAUSE");
		showMaintenance();
	}
	else if (option == 3) {
		addScheduleInformation();
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
	
	
}

void CinemaSystem::showReservation()
{
	option = 0;
	system("cls");

	printf(" 1. Reservar \n");
	printf(" 2. Volver al inicio \n");
	scanf_s("%d", &option);

	if (option == 1) {
		assignRoom();
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

void CinemaSystem::showTicketSales()
{
	option = 0;
	system("cls");

	printf(" 1. Venta \n");
	printf(" 2. Volver al inicio \n");
	scanf_s("%d", &option);

	if (option == 1) {
		ticketSales();
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

void CinemaSystem::addMovieInformation()
{
	string movieName = " ", country = " ", review = " ";
	int year = 0, duration = 0;

	cout << "Cuantas peliculas quiere llenar: ";
	cin >> numberMovies;
	cin.ignore();

	movies = new Movie[numberMovies];

	for (int i = 0; i < numberMovies; i++) {

		cout << "Digite el nombre de la pelicula " << i + 1 << " :" << endl;
		getline(cin, movieName);
		movies[i].setMovieName(movieName);


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

void CinemaSystem::showMovies()
{
	for (int i = 0; i < numberMovies; i++) {
		cout << "Pelicula " << i + 1 << endl;
		cout << movies[i].toString() << endl;

	}
}

void CinemaSystem::addRoomInformation()
{
	int roomNumber = 0, numberSeats = 0, seatPrice = 0;

	cout << "Cuantas salas tiene el cine: ";
	cin >> numberRooms;
	cin.ignore();

	rooms = new Room[numberRooms];

	for (int i = 0; i < numberRooms; i++) {
		cout << "Digite el numero de la sala "<<i+1<<": ";
		cin >> roomNumber;
		rooms[i].setRoomNumber(roomNumber);

		cout << "Digite el numero de butacas " << i + 1 << ": ";
		cin >> numberSeats;
		rooms[i].setNumberSeats(numberSeats);

		cout << "Digite el precio " << i + 1 << ": ";
		cin >> seatPrice;
		rooms[i].setSeatPrice(seatPrice);
	}
	createRoom();
}

void CinemaSystem::showRoomsInformation()
{
	for (int i = 0; i < numberRooms; i++) {
		cout << "Sala " << endl;
		cout << rooms[i].toString() << endl;
	}
}

void CinemaSystem::addScheduleInformation()
{
	string date, startTime, endTime;
	cout << "Cuantos horarios posee el cine: ";
	cin >> numberSchedule;
	cin.ignore();

	schedules = new Schedule[numberSchedule];

	for (int i = 0; i < numberSchedule; i++) {
		cout << "Digite la fecha " << i + 1 << ":"<< endl;
		getline(cin, date);
		schedules[i].setDate(date);


		cout << "Digite la hora inicial " << i + 1 << ":" << endl;
		getline(cin, startTime);
		schedules[i].setStartTime(startTime);


		cout << "Digite la hora final " << i + 1 << ":" << endl;
		getline(cin, endTime);
		schedules[i].setEndTime(endTime);
	}
}

void CinemaSystem::showSchedule()
{
	for (int i = 0; i < numberSchedule; i++) {
		cout << "Horario: " << endl;
		cout << schedules[i].toString() << endl;
	}
}

void CinemaSystem::createRoom()
{
	room = new char** [numberRooms];
	numberSeats = new int** [numberRooms];
	roomRows = new int[numberRooms];
	roomColumns = new int[numberRooms];
	reservationCode = new int** [numberRooms];

	for (int i = 0; i < numberRooms; i++) {
		int seats = rooms[i].getNumberSeats();
		 int rows = 0, columns = 0;


		for (int j = 1; j * j <= seats; j++) {
			if (seats % j == 0) {
				rows = j;
				columns = seats / j;
			}
		}
		roomRows[i] = rows;
		roomColumns[i] = columns;

		room[i] = new char* [rows];
		numberSeats[i] = new int* [rows];
		reservationCode[i] = new int* [rows];
		for (int m = 0; m < rows; m++) {
			room[i][m] = new char[columns];
			numberSeats[i][m] = new int[columns];
			reservationCode[i][m] = new int[columns];
		}

		int number = 1;
		for (int g = 0; g < rows; g++) {
			for (int s = 0; s < columns; s++) {
				room[i][g][s] = 'D';
				numberSeats[i][g][s] = number;
				reservationCode[i][g][s] = 0;
				number++;
			}
		}
	}
}

void CinemaSystem::showRoom(int roomIndex){
	

	if (roomIndex >= 0 && roomIndex < numberRooms) {
		int seats = rooms[roomIndex].getNumberSeats();
		int rows = 0, columns = 0;

		
		for (int j = 1; j * j <= seats; j++) {
			if (seats % j == 0) {
				rows = j;
				columns = seats / j;
			}
		}

		
		if (rows > 0 && columns > 0) {
			printf("Sala %d\n", roomIndex + 1);  

			
			for (int m = 0; m < rows; m++) {
				for (int s = 0; s < columns; s++) {
					printf("%d", numberSeats[roomIndex][m][s]);
					printf("%c ", room[roomIndex][m][s]);
					printf("  ");
				}
				printf("\n");
			}
		}
	}
}

void CinemaSystem::assignRoom()
{
	int roomIndex = 0;  
	for (int i = 0; i < numberMovies; i++) {
		int scheduleIndex = i % numberSchedule;  

		rooms[roomIndex].assignMovie = &movies[i];
		rooms[roomIndex].assignSchedule = &schedules[scheduleIndex];

		roomIndex = (roomIndex + 1) % numberRooms;
	}
	
}

void CinemaSystem::showAssign(int roomIndex)
{
	if (roomIndex >= 0 && roomIndex < numberRooms) {
		
		if (rooms[roomIndex].assignMovie) {
			cout << "Pelicula: " << rooms[roomIndex].assignMovie->toString() << endl;
		}
		cout << rooms[roomIndex].toString()<<endl;
		
		if (rooms[roomIndex].assignSchedule) {
			cout << "Horario: " << rooms[roomIndex].assignSchedule->toString() << endl;
		}
		showRoom(roomIndex);
	}
	
}

void CinemaSystem::selectSeats(int roomIndex)
{
	srand(time(NULL));

	int rows = roomRows[roomIndex];   
	int columns = roomColumns[roomIndex]; 
	int numSeats = 0;
	int code= rand() %(9000 - 1000+1) + 1000;
	printf("Digite la cantidad de asientos que desea reservar: ");
	scanf_s("%d", &numSeats);

	for (int i = 0; i < numSeats; i++) {
		int num = 0;
		printf("Digite el numero del asiento %d que desea reservar: ",i+1);
		scanf_s("%d", &num);

		for (int j = 0; j < rows;j++) {
			for (int k= 0; k < columns; k++) {
				if (numberSeats[roomIndex][j][k]==num) {
					if (room[roomIndex][j][k] == 'D') {
						room[roomIndex][j][k] = 'R';
						reservationCode[roomIndex][j][k] = code;
						printf("Asiento %d reservado exitosamente \n", num);
					}
					else {
						printf("El asiento ya está reservado");
						i--; 
					}
					
				}
			}
		}

	}
	calculatePrice(roomIndex, numSeats);
	printf("Su codigo para la compra es: %d \n", code);
}

void CinemaSystem::calculatePrice(int roomIndex, int num)
{
	int price = 0;
	for (int i = 0; i < num; i++) {
		price += rooms[roomIndex].getSeatPrice();
	}

	printf("El precio total a pagar es de: %d \n", price);
}

int CinemaSystem::roomIndex(int code)
{
	for (int i = 0; i < numberRooms; i++) {
		for (int j = 0; j < roomRows[i]; j++) {
			for (int k = 0; k < roomColumns[i]; k++) {
				if (reservationCode[i][j][k] == code) {
					return i;
				}
			}
		}
	}
	return -1;
}

void CinemaSystem::ticketSales()
{
	int code = 0, card = 0, ID = 0;
	printf("Digite el codigo para la venta: ");
	scanf_s("%d",&code);
	printf("Digite su cedula: ");
	scanf_s("%d", &ID);
	printf("Digite su numero de tarjeta: ");
	scanf_s("%d", &card);

	int index = roomIndex(code);

	for (int i = 0; i < roomRows[index]; i++) {
		for (int j = 0; j < roomColumns[index]; j++) {
			if (reservationCode[index][i][j] == code) {
				room[index][i][j] = 'V';
			}
		}
	}
	printf("Pago realizado exitosamente \n");
}

void CinemaSystem::reservation()
{
	
	if (movies == NULL) {
		printf("La informacion de las peliculas no esta llena \n");
		system("PAUSE");
		system("cls");
		addMovieInformation();
	}
	else if (rooms == NULL) {
		printf("La informacion de las salas no esta llena \n");
		system("PAUSE");
		system("cls");
		addRoomInformation();
	}
	else if (schedules == NULL) {
		printf("La informacion de los horarios no esta llena \n");
		system("PAUSE");
		system("cls");
		addScheduleInformation();
	}

	showMovies();
	printf("Digite el numero de la pelicula que quiere reservar: \n");
	scanf_s("%d", &movie);
	movie--;

	bool roomFound = false;
	int roomIndex = -1;

	for (int i = 0; i < numberRooms; i++) {
		if (rooms[i].assignMovie == &movies[movie]) { 
			roomIndex = i;
			roomFound = true;
			break;
		}
	}

	if (roomFound) {

		showAssign(roomIndex);
		selectSeats(roomIndex);
	}
}

CinemaSystem::CinemaSystem()
{
	numberMovies = 0;
	option = 0;
	numberRooms = 0;
	numberSchedule = 0;
	movies = new Movie[numberMovies];
	rooms = new Room[numberRooms];
	schedules = new Schedule[numberSchedule];
	
	
	
}

CinemaSystem::CinemaSystem(int newNumberMovies, int newOption, int newNumberRooms, int newNumberSchedule)
{
	numberMovies = newNumberMovies;
	option = newOption;
	numberRooms = newNumberRooms;
	numberSchedule = newNumberSchedule;
	movies = nullptr;
	rooms = nullptr;
	schedules = nullptr;
	movies = new Movie[numberMovies];
	rooms = new Room[numberRooms];
	schedules = new Schedule[numberSchedule];
	
	
	
}

void CinemaSystem::setNumberMovies(int newNumberMovies)
{
	numberMovies = newNumberMovies;
}

void CinemaSystem::setOption(int newOption)
{
	option = newOption;
}

void CinemaSystem::setNumberRooms(int newNumberRooms)
{
	numberRooms = newNumberRooms;
}

void CinemaSystem::setSchedule(int newNumberSchedule)
{
	numberSchedule = newNumberSchedule;
}

int CinemaSystem::getNumberMovies()
{
	return numberMovies;
}

int CinemaSystem::getOption()
{
	return option;
}

int CinemaSystem::getNumberRooms()
{
	return numberRooms;
}

int CinemaSystem::getNumberSchedule()
{
	return numberSchedule;
}

void CinemaSystem::showMenu()
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

CinemaSystem::~CinemaSystem()
{
	delete[] movies;
	delete[] rooms;
	delete[] schedules;
	delete[]room;
	delete[] numberSeats;
	delete[] roomRows;
	delete[] roomColumns;
}
