#include <string>
#include <iostream>
#include <iomanip>


using namespace std;


	// no class needed

	int main()
{
	string name;
	double gold;
    int age;

	cout << "You are being Robbed." << endl;
	cout << "Enter Name." << endl;
	getline(cin, name);
	while (cin.fail())
	{
		cout << "Data Input Failure!" << endl;
		cin.clear();
		string garbage;
		cin >> garbage;
		cout << "Enter Name." << endl;
		cin >> name;
	}

	cout << "How old are you?" << endl;
	cin >> age;
	while (cin.fail())
	{
		cout << "Data Input Failure!" << endl;
		cin.clear();
		string garbage;

		cin >> garbage;
		cout << "How old are you?" << endl;
		cin >> age;
	}


	cout << "How much money do you have?" << endl;
	cin >> gold;
	while (cin.fail())
	{
		cout << "Data Input Failure!" << endl;
		cin.clear();
		string garbage;

		cin >> garbage;
		cout << "How much money do you have?" << endl;
		cin >> gold;
	}


	cout.precision(2);
	cout.setf(ios::fixed);
	cout << "Your name is" << endl << name << endl << "You are this old" << endl << age << endl << "You have this much money" << endl << "$" << gold << endl;

	system("PAUSE");
	return 0;
}