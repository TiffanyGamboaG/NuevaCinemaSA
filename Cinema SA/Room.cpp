#include "Room.h"

Room::Room()
{
	roomNumber = 0;
	numberSeats = 0;
	seatPrice = 0;
	assignMovie = nullptr;
	assignSchedule = nullptr;
}

Room::Room(int newRoomNumber, int newNumberSeats, int newSeatPrice)
{
	roomNumber = newRoomNumber;
	numberSeats = newNumberSeats;
	seatPrice = newSeatPrice;
	assignMovie = nullptr;
	assignSchedule = nullptr;
	
}

Room::~Room()
{
	delete[] assignMovie;
	delete[] assignSchedule;
}

void Room::setRoomNumber(int newRoomNumber)
{
	roomNumber = newRoomNumber;
}

void Room::setNumberSeats(int newNumberSeats)
{
	numberSeats = newNumberSeats;
}

void Room::setSeatPrice(int newSeatPrice)
{
	seatPrice = newSeatPrice;
}

int Room::getRoomNumber()
{
	return roomNumber;
}

int Room::getNumberSeats()
{
	return numberSeats;
}

int Room::getSeatPrice()
{
	return seatPrice;
}

string Room::toString()
{
	ostringstream text;
	text << "Numero de sala: " << roomNumber << "\n"
		<< "Candidad de butacas: " << numberSeats << "\n"
		<< "Precio: " << seatPrice << "\n";

	    return text.str();
}