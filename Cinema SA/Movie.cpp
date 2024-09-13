#include "Movie.h"

Movie::Movie()
{
	movieName = "";
	year = 0;
	duration = 0;
	country = "";
	review = " ";
	
}

Movie::Movie(string newMovieName, int newYear, int newDuration, string newCountry, string newReview)
{
	movieName = newMovieName;
	year = newYear;
	duration = newDuration;
	country = newCountry;
	review = newReview;
}

void Movie::setMovieName(string newMovieName)
{
	movieName = newMovieName;
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

string Movie::getMovieName()
{
	return string(movieName);
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
	text << "Pelicula: " << movieName << "\n"
		<< "Anyo: " << year << "\n"
		<< "Duracion: " << duration << "\n"
		<< "Pais: " << country << "\n"
		<< "Resena: " << review << "\n";

	return text.str();
}
