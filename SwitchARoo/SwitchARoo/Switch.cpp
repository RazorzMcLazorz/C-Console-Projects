#include <string>
#include <iostream>
#include <iomanip>


using namespace std;

int main()
{

		string one, two, temp;
    

	cout << "one string" << endl;
	getline(cin, one);
	cout << endl;
	while (cin.fail())
	{
		cout << "Data Input Failure!" << endl;
		cin.clear();
		string garbage;
		cin >> garbage;
		cout << "one string" << endl;
		getline(cin, one);
	}

	cout << "second string" << endl;
	getline(cin, two);
	cout << endl;
	while (cin.fail())
	{
		cout << "Data Input Failure!" << endl;
		cin.clear();
		string garbage;
		cin >> garbage;
		cout << "second string" << endl;
		getline(cin, two);
	}

	cout <<"your first string is " << setprecision(4) << endl << one << endl << endl;
	cout << " this is your second string " << endl;
	cout << two << endl;
	cout << endl;
	temp = one;

	one =  two;

	two = temp;

	cout.precision(4);

	cout.setf(ios::fixed);
	
	cout <<"your first string is " << setprecision(4) << endl;
	cout << one << endl;
	cout << endl;
	cout << " this is your second string " << endl;
    cout << two << endl;
	
	


	system("PAUSE");
	return 0;
}