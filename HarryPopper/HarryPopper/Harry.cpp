#include <iostream>
#include <string>
#include "NegativeGuests.h"
using namespace std;

int main()
{
int guests = 0;
double pieces = 0;



string again = "yes";

do
{
	cout << "how many guests attending " << endl;
	cin >> guests;
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	try
	{
	//protect this code
	if (guests == 0)
		throw guests;
	if (guests < 0)
		throw NegativeGuests(guests);
	//otherwise
	pieces = 50.0 / guests;
	cout << " Each person gets " << pieces << " portions of maggity haggis " << endl;
	}
	catch (int guests)
	{
		// what to do
		cout << "you cant divide by 0" << endl;
	}
	catch (NegativeGuests g)
	{
		cout << g.getGuests() << "is less than zero" << endl;
	}
	catch(...)
	{
		cout << "Unknown exception" << endl;
	}
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

	cout << " Each person gets " << pieces << " portions of maggity haggis " << endl;

	cout << "Do you want to do it again? " << endl;
	cin >> again;
}while (guests != -9);

system("PAUSE");
return 0;
}