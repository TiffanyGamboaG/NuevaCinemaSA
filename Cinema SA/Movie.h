#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "colors.h"
using namespace std;

class Movie
{
private:
	string movieName;
	int year;
	int duration;
	string country;
	string review;
public:
	Movie();
	Movie(string newMovieName, int newYear, int newDuration, string newCountry, string newReview);
	void setMovieName(string newMovieName);
	void setYear(int newYear);
	void setDuration(int newDuration);
	void setCountry(string newCountry);
	void setReview(string newReview);
	string getMovieName();
	int getYear();
	int getDuration();
	string getCountry();
	string getReview();
	string toString();
};

