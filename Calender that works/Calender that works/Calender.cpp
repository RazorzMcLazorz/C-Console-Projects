#include "Calender.h"

Calender::Calender()
{
	day = 31;
	year = 2016;
	monthI = 11;
	weekI = 6;
	week[0] = "Monday";
	week[1] = "Tuesday";
	week[2] = "Wednesday";
	week[3] = "Thursday";
	week[4] = "Friday";
	week[5] = "Saturday";
	week[6] = "Sunday";
	
	month[0] = "January";
	month[0] = "Febuary";
	month[0] = "March";
	month[0] = "April";
	month[0] = "May";
	month[0] = "June";
	month[0] = "July";
	month[0] = "August";
	month[0] = "September";
	month[0] = "October";
	month[0] = "November";
	month[0] = "December";
	
	daysMonth[0] = 31;
	daysMonth[1] = 28;
	daysMonth[2] = 31;
	daysMonth[3] = 30;
	daysMonth[4] = 31;
	daysMonth[5] = 30;
	daysMonth[6] = 31;
	daysMonth[7] = 31;
	daysMonth[8] = 30;
	daysMonth[9] = 31;
	daysMonth[10] = 30;
	daysMonth[11] = 31;
}
void Calender::operator++(int a)
{
	weekI++;
	if(weekI == 7)
		weekI = 0;
	day++;
	if (day > daysMonth[monthI])
	{
		day = 1;
		monthI++;
		if(monthI > 11)
		{
			monthI = 0;
			year++;
		}
	}
	cout << week[weekI] << ", " << month[monthI] << " " << day << ", " << year << endl;
}