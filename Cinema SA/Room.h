#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "colors.h"
using namespace std;

class Room
{
private:
	int number;
	int numberSeats;
	int price;
public:
	Room();
	Room(int newNumber, int newNumberSeats, int newPrice);
	void setNumber(int newNumber);
	void setNumberSeats(int newNumberSeats);
	void setPrice(int newPrice);
	int getNumber();
	int getNumberSeats();
	int getPrice();
	string toString();
};

