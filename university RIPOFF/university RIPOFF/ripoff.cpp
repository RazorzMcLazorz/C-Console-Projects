#include <string>
#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	int gp;
	double gpa = 1;
	cout << "Please enter your gpa for financial assistance" << endl;
	cin >> gpa;

	if (gpa >= 1 && gpa <= 1.99)
	{
		//student loans
		gpa = 1;
		gp = gpa;
	}
	else if (gpa >= 2 && gpa <= 2.99)
	{
		//university employment
		gpa = 2;
		gp = gpa;
	}
	else if ( gpa >= 3 && gpa <= 3.49)
	{
		//free tuition
		gpa = 3;
		gp = gpa;
	}
else if (gpa >= 3.5 && gpa <= 4)
	{
		//free room and board
		gpa = 4;
		gp = gpa;
	}
else
{
	cout << endl;
}

	switch (gp)
	{
		case 1:
			cout << "you qualify for student loans" << endl;
			break;
		case 2:
			cout << "you qualify for student loans" << endl;
			break;
		case 3:
			cout << "you qualify for free tuition" << endl;
			break;
		case 4:
			cout << "you qualify for student loans" << endl;
			break;
	}



	system("PAUSE");
   return 0;
}