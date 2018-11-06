#include <string>
#include <iostream>
#include <iomanip>


//ComputeChange(&);   		  

using namespace std;

int main()
{ 
	int year;
    cout << "Enter in a year ";
    cin >> year;

	year = 4 / year;
	
	if (year == 1 || 10 || 100 || 1000)
	cout << "leap year" << endl;
	else
	cout << "nope" << endl;
	


   
	system("PAUSE");
	return 0;
}