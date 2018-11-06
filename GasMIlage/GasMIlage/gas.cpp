#include <string>
#include <iostream>
#include <iomanip>


using namespace std;


	// no class needed

	int main()
{
	double corn, gas, gal, dis;
    
//	\/ this is basically console.writeline // pi * radius * radius
	cout << "how many gallons" << endl;
	cin >> gal;
//	/\ this is the parse
	cout << "distance" << endl;
	cin >> dis;

	corn = dis * .1;

	corn = dis - corn;

	gas = dis;

	cout.precision(4);
	cout.setf(ios::fixed);
	cout <<"at " << setprecision(4) << gal << " gallons of ethanol you get to " << corn << " miles" << endl;
    cout <<"at " << setprecision(4) << gal << " gallons of pure gas you get to " << gas << " miles" << endl;
    //cout <<"The pioneers travelled " << setprecision(4) << dist << "miles." << endl;
	134
	while (cin.fail())
	{
		cout << "Data Input Failure!" << endl;
		cin.clear();
		string garbage;
		cin >> garbage;
		cout <<"at " << setprecision(4) << gal << " gallons of ethanol you get to " << corn << " miles" << endl;
		cout <<"at " << setprecision(4) << gal << " gallons of pure gas you get to " << gas << " miles" << endl;
		cin >> dis;
	}


	system("PAUSE");
	return 0;
}





