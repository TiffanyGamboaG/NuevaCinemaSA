#pragma once
#include <iostream>
#include <string.h>
#include "colors.h"
using namespace std;

class CinemaSystem
{
private:
	int option;
	string showFile();
	string showMaintenance();


public:
	string showMenu();
};

