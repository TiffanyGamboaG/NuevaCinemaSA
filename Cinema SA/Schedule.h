#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "colors.h"
using namespace std;

class Schedule
{
private:
	string date;
	string startTime;
	string endTime;
public:
	Schedule();
	Schedule(string newDate, string newStartTime, string newEndTime);
	void setDate(string newDate);
	void setStartTime(string newStartTime);
	void setEndTime(string newEndTime);
	string getDate();
	string getStartTime();
	string getEndTime();
	string toString();
};

