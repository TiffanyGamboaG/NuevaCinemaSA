#pragma once
#include <iostream>
#include <string>
#include "colors.h"
#include "Movie.h"
#include "Room.h"
#include "Schedule.h"
using namespace std;

class CinemaSystem
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
	void showRoomsInformation();
	void addScheduleInformation();
	void showSchedule();
	void reservation();
	char*** createRoom();
	void showRoom();
	void assignRoom();
public:
	CinemaSystem();
	CinemaSystem(int newNumberMovies, int newOption, int newNumberRooms, int newNumberSchedule);
	void setNumberMovies(int newNumberMovies);
	void setOption(int newOption);
	void setNumberRooms(int newNumberRooms);
	void setSchedule(int newNumberSchedule);
	int getNumberMovies();
	int getOption();
	int getNumberRooms();
	int getNumberSchedule();
	void showMenu();
	~CinemaSystem();
};

