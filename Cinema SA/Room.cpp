#include "Room.h"

Room::Room()
{
	number = 0;
	numberSeats = 0;
	price = 0;
}

Room::Room(int newNumber, int newNumberSeats, int newPrice)
{
	number = newNumber;
	numberSeats = newNumberSeats;
	price = newPrice;
}

void Room::setNumber(int newNumber)
{
	number = newNumber;
}

void Room::setNumberSeats(int newNumberSeats)
{
	numberSeats = newNumberSeats;
}

void Room::setPrice(int newPrice)
{
	price = newPrice;
}

int Room::getNumber()
{
	return number;
}

int Room::getNumberSeats()
{
	return numberSeats;
}

int Room::getPrice()
{
	return price;
}

string Room::toString()
{
	ostringstream text;
	text << "Numero de sala: " << number << "\n"
		<< "Candidad de butacas: " << numberSeats << "\n"
		<< "Precio: " << price << "\n";

	return text.str();
}


