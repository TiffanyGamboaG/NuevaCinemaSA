#pragma once
#include <iostream>
#include <string>
#include "colors.h"
#include "Movie.h"
#include "Room.h"
#include "Schedule.h"
using namespace std;

class System
{

private:
	int numberMovies;
	int option;
	int numberRooms;
	int numberSchedule;
	void showFile();
	void showMaintenance();
	void showReservation();
	void showTicketSales();
	void addMovieInformation();
	void showMovies();
	void addRoomInformation();
	void showRooms();
	void addScheduleInformacion();
	void showSchedule();
	void reservation();
	void room();
	void assingRoom();
public:
	System();
	System(int newNumberMovies, int newOption, int newNumberRooms, int newNumberSchedule);
	void setNumberMovies(int newNumberMovies);
	void setOption(int newOption);
	void setNumberRooms(int newNumberRooms);
	void setSchedule(int newNumberSchedule);
	int getNumberMovies();
	int getOption();
	int getNumberRooms();
	int getNumberSchedule();
	void showMenu();
	~System();
};

