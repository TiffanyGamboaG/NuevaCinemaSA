#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "colors.h"
using namespace std;

class Movie
{
private:
	string name;
	int year;
	int duration;
	string country;
	string review;
public:
	Movie();
	Movie(string newName, int newYear, int newDuration, string newCountry, string newReview,int newNumberMovies);
	void setName(string newName);
	void setYear(int newYear);
	void setDuration(int newDuration);
	void setCountry(string newCountry);
	void setReview(string newReview);
	string getName();
	int getYear();
	int getDuration();
	string getCountry();
	string getReview();
	string toString();
};

