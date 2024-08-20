#include "Movie.h"

Movie::Movie()
{
	name = "";
	year = 0;
	duration = 0;
	country = "";
	review = " ";
	
}

Movie::Movie(string newName, int newYear, int newDuration, string newCountry, string newReview,int newNumberMovies)
{
	name = newName;
	year = newYear;
	duration = newDuration;
	country = newCountry;
	review = newReview;
}

void Movie::setName(string newName)
{
	name = newName;
}

void Movie::setYear(int newYear)
{
	year = newYear;
}

void Movie::setDuration(int newDuration)
{
	duration = newDuration;
}

void Movie::setCountry(string newCountry)
{
	country = newCountry;
}

void Movie::setReview(string newReview)
{
	review = newReview;
}

string Movie::getName()
{
	return string(name);
}

int Movie::getYear()
{
	return year;
}

int Movie::getDuration()
{
	return duration;
}

string Movie::getCountry()
{
	return string(country);
}

string Movie::getReview()
{
	return string(review);
}

string Movie::toString()
{
	ostringstream text;
	text << "Pelicula: " << name << "\n"
		<< "Anyo: " << year << "\n"
		<< "Duracion: " << duration << "\n"
		<< "Pais: " << country << "\n"
		<< "Resena: " << review << "\n";

	return text.str();
}
