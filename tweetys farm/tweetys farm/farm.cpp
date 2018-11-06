#include <string>
#include <iostream>
#include <iomanip>


using namespace std;


	// no class needed

	int main()
{
	double diam = 0, rot = 1, dist = 0, base = 1;
    const double PIE = 3.14, MILE = 5280;
//	\/ this is basically console.writeline // pi * radius * radius
	cout << "Enter the radius of the spotlight" << endl;
	cin >> diam;
//	/\ this is the parse
	cout << "Enter the Height of the pen" << endl;
	cin >> rot;

	cout << "Enter the base of the pen" << endl;
	cin >> base;

	dist = diam * PIE * rot / MILE;

	cout.precision(4);
	cout.setf(ios::fixed);
	cout <<"The light is " << PIE * diam * diam << " feet around." << endl;
    cout <<"The pen is "<< rot * base << "." << endl;
    //cout <<"The pioneers travelled " << setprecision(4) << dist << "miles." << endl;

	system("PAUSE");
	return 0;
}
