#include <iostream>
#include <string>

using namespace std;

struct Calender
{
	int day, year, weekI, monthI;

	string week[7];
	string month[12];
	int daysMonth[12];

	Calender();

	void operator++(int);
};