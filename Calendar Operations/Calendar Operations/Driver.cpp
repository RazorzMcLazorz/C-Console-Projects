#include "Vector2.h"

using namespace std;

int main()
{
	// type of day
	int day = 0, mon = 0;
	string ay, mo;
	Vector2 Month(0, 0);
	Vector2 Day(0, 0);
	Vector2 Year(2017, 2000);
helo:
	int hi = 0;
	cout << mo  << " ,";
	cout << ay << " " << Day.x << " ,";
	cout << Year.x << endl;
	cin >> hi;
	switch (mon)
	{
	case 1:
		mo = "January";
		break;
	case 2:
		mo = "Febuary";
		break;
	case 3:
		mo = "March";
		break;
	case 4:
		mo = "April";
		break;
	case 5:
		mo = "May";
		break;
	case 6:
		mo = "June";
		break;
	case 7:
		mo = "July";
		break;
	case 8:
		mo = "August";
		break;
	case 9:
		mo = "September";
		break;
	case 10:
		mo = "October";
		break;
	case 11:
		mo = "November";
		break;
	case 12:
		mo = "December";
		break;
	}
	switch (day)
	{
		case 1:
			ay = "Sunday";
			break;
		case 2:
			ay = "Monday";
			break;
		case 3:
			ay = "Tuesday";
			break;
		case 4:
			ay = "Wednesday";
			break;
		case 5:
			ay = "Thursday";
			break;
		case 6:
			ay = "Friday";
			break;
		case 7:
			ay = "Saturday";
			break;
	}

	if (day = 7)
		day = 1;
	if (mon = 12)
		mon = 1;

	if (hi >= 1)
	{
		
		Day.x++;
		hi = 0;
	}
	if (Day.x == 31)
	{
		
		Day.x = 1;
		Month.x++;
	}
	if (Month.x == 13)
	{
		Month.x = 1;
		Year.x++;
	}
	goto helo;
	system("PAUSE");
	return 0;
}