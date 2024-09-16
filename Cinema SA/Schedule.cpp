#include "Schedule.h"

Schedule::Schedule()
{
	date = " ";
	startTime = " ";
	endTime = " ";
}

Schedule::Schedule(string newDate, string newStartTime, string newEndTime)
{
	date = newDate;
	startTime = newStartTime;
	endTime = newEndTime;
}

void Schedule::setDate(string newDate)
{
	date = newDate;
}

void Schedule::setStartTime(string newStartTime)
{
	startTime = newStartTime;
}

void Schedule::setEndTime(string newEndTime)
{
	endTime = newEndTime;
}

string Schedule::getDate()
{
	return string(date);
}

string Schedule::getStartTime()
{
	return string(startTime);
}

string Schedule::getEndTime()
{
	return string(endTime);
}

string Schedule::toString()
{
	ostringstream text;
	text << "Fecha: " << date << "\n"
		<< "Hora inical: " << startTime << "\n"
		<< "Hora final: " << endTime << "\n";

	return text.str();
}
