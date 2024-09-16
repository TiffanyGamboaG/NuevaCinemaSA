#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
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
	Movie* movies;
	Room* rooms;
	Schedule* schedules;
	
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
	void createRoom();
	void showRoom(int roomIndex);
	void assignRoom();
	void showAssign(int roomIndex);
	void selectSeats(int roomIndex);
	void calculatePrice(int roomIndex,int num);
	int roomIndex(int code);
	void ticketSales();
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

