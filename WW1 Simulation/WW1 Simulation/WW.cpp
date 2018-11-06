#include "WW.h"
using namespace std;
int main()
{
	int GermanyL, RussiaL, BritianL, FranceL, AustriaL, OttomanL, ItalyL, SerbiaL, UsaL; // LEADER BOARD RANK PER COUNTRY
	const int GN = 1, RN = 2, BN = 3, FN = 4, AN = 5, ON = 6, IN = 7, SN = 8, UN = 9; //Country Assigned Number
	int Teams = 1, right = 0, Select, Select1;
	string Right, country, Done, Select2, Select3;
	vector<double> victor;
	cout << "Warning all input put into game can not be changed unless game is restarted fully!" << endl;
	cout << "" << endl;
	while (Teams < 7|| Teams > 9)
	{
		start:
	cout << "Starting Round 1 of the WW1 Simulation" << endl;
	cout << "How many teams are playing 7 - 9" << endl;
	cin >> Teams;
	if (Teams < 7 || Teams > 9)
	{
		cout << "Error try again" << endl;
	}
	}
	if (Teams = 7)
	{
		Teams = 0;
	}
	switch (Teams)
	{
	case 0:
		
		cout << "The Seven Teams are..." << endl;
		cout << "Germany" << endl; GermanyL = 7;
		cout << "Russia" << endl; RussiaL = 6;
		cout << "Britain" << endl; BritianL = 5;
		cout << "France" << endl; FranceL = 4;
		cout << "Austria" << endl; AustriaL = 3;
		cout << "Ottoman Empire" << endl; OttomanL = 2;
		cout << "Italy" << endl; ItalyL = 1;
		cout << "" << endl;
		goto choice;
		while (right = 0)
		{
			choice:
		cout << "Is this right? 'Y' or 'N'" << endl;
		cin >> Right;
		if (Right == "Y")
		{
			right++;
			goto end;
		}
		if (Right == "N")
		{
			goto start;
		}
		else
		{
			cout << "Error Try again" << endl;
			goto choice;
		}
		}
		end:
		cout << "1st place  - Germany has 1500 units with $25,000" << endl;
		cout << "2nd place  - Russia has 1400 units with $25,000" << endl;
		cout << "3rd place  - Britian has 1100 units with $25,000" << endl;
		cout << "4th place  - France has 1000 units with $25,000" << endl;
		cout << "5th place  - Austria has 800 units with $25,000" << endl;
		cout << "6th place  - Ottoman Empire has 700 units with $25,000" << endl;
		cout << "7th place  - Italy has 600 units with $25,000" << endl;
	end1:
		cout << endl;
		cout << "Now begin by doing trades, and diplomacys, after that write down on a sheet of paper and hand that to Mr. Harrison" << endl;
		cout << "now Mr Harrison write on board who vs who beofre entering input because once data entered it cant go back on input" << endl;
		cout << "" << endl;
		cout << "Done? 'Y' = yes" << endl;
		cin >> Done;
		cout << endl;
		cout << "Now select starting country" << endl; Select1 = 1;
		cout << "type First letter of name in caps for example Austria = 'A'" << endl;
		cin >> country;


		if (country == "R")
		{
			Select2 == "Russia";
			goto end2;
		}
		if (country == "B")
		{
			Select2 == "Britian";
			
			goto end2;
		}
		if (country == "F")
		{
			Select2 == "France";
			goto end2;
		}
		if (country == "A")
		{
			Select2 == "Austria";
			goto end2;
		}
		if (country == "O")
		{
			Select2 == "Ottoman Empire";
			goto end2;
		}
		if (country == "I")
		{
			Select2 == "Italy";
			goto end2;
		}
		if (country == "P")
		{
			cout << Select1 << " wishes to be peaceful" << endl;
			goto end2;
		}
		else
		{
			cout << "Error Try again" << endl;
			goto end1;
		}
	end2:
		if (Select1 = GN)
		{
			Select2 == "Germany";
		}
		if (Select1 = RN)
		{
			Select2 == "Russia";
		}
		if (Select1 = BN)
		{
			Select2 == "Britian";
		}
		if (Select1 = FN)
		{
			Select2 == "France";
		}
		if (Select1 = AN)
		{
			Select2 == "Austria";
		}
		if (Select1 = ON)
		{
			Select2 == "Ottoman Empire";
		}
		if (Select1 = IN)
		{
			Select2 == "Italy";
		}
		cout << Select2 << " vs " << Select3 << endl;
		break;
	}
system("PAUSE");
return 0;
}