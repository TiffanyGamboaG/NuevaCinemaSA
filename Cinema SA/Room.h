#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "colors.h"
#include "CinemaSystem.h"
using namespace std;

class Room
{
private:
	int roomNumber;
	int numberSeats;
	int seatPrice;
	void createRoom();
public:
	Room();
	Room(int newRoomNumber, int newNumberSeats, int newSeatPrice);
	void setRoomNumber(int newRoomNumber);
	void setNumberSeats(int newNumberSeats);
	void setSeatPrice(int newSeatPrice);
	int getRoomNumber();
	int getNumberSeats();
	int getSeatPrice();
	string toString();
};

