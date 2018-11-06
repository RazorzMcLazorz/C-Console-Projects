#include <string>
#include <iostream>
#include <iomanip>


using namespace std;


	// no class needed

	int main()
{
	int gold, crew, jack, gil, crewgold, fund;
    
	cout << "How much gold" << endl;
	cin >> gold;

	while (cin.fail())
	{
		cout << "Data Input Failure!" << endl;
		cin.clear();
		string garbage;
		cin >> garbage;
		cout << "How much gold." << endl;
		cin >> gold;
	}

	cout << "How many people" << endl;
	cin >> crew;

	while (cin.fail())
	{
		cout << "Data Input Failure!" << endl;
		cin.clear();
		string garbage;
		cin >> garbage;
		cout << "How many people." << endl;
		cin >> crew;
	}

	gold = gold - ((crew - 2) * 3);

	jack = (int)(gold * .12);
	gold = gold - jack;

	gil = (int)(gold * .08);
	gold = gold - gil;

	crewgold = gold / crew;

	fund = gold % crew;

	cout.precision(4);
	cout.setf(ios::fixed);
	cout << "jack has " << jack + crewgold << endl;

	cout << "Giligan has " << gil + crewgold << endl;

	cout << "The Crew has " << 3 + crewgold << endl;

	cout << "left over " << fund << endl;
	
	

	system("PAUSE");
	return 0;
}
