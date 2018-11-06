#include <string>
#include <iostream>
#include <iomanip>


using namespace std;


	// no class needed

	int main()
{
	string mar, cho;
	double tax, taxi, loop = 1;
	while (loop > 0)
	{
	cout << "Are you married?" << endl << "'m' for married and jointed taxes, 's' for single or seperate returns" << endl;
	getline (cin, mar);
	while (cin.fail())
	{
		cout << "Data Input Failure!" << endl;
		cin.clear();
		string garbage;
		cin >> garbage;
		cout << "Are you married?" << endl << "'m' for married and jointed taxes, 's' for single or seperate returns" << endl;
		getline (cin, mar);
	}
	if (mar == "m")
	{
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
		cout << "please enter your taxable income." << endl;
		cin >> tax;
		while (cin.fail())
		{
			cout << "Data Input Failure!" << endl;
			cin.clear();
			string garbage;
			cin >> garbage;
			cout << "please enter your taxable income." << endl;
			cin >> tax;
		}
		if (tax <= 1726)
		{
			cout << "hi" << endl;
			taxi = ((tax - 0)* 0.023) + 0;
		}
		else if (tax  >= 1727 && tax <= 5176)
		{
			cout << "his" << endl;
			taxi = ((tax - 1726)* 0.033) + 40;
		}
		else if (tax >= 5177 && tax <= 8626)
		{
			cout << "hist" << endl;
			taxi = ((tax - 5176)* 0.052) + 175;
		}
		else if (tax >= 8627)
		{
			cout << "histe" << endl;
			taxi = ((tax - 8626)* 0.075) + 390;
		}
		else
		{
			cout << "??" << endl;
		}
	}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	else if (mar == "s")
	{
		cout << "please enter your taxable income." << endl;
		cin >> tax;
		while (cin.fail())
		{
			cout << "Data Input Failure!" << endl;
			cin.clear();
			string garbage;
			cin >> garbage;
			cout << "please enter your taxable income." << endl;
			cin >> tax;
		}
		if (tax <= 863)
		{
			cout << "hi" << endl;
			taxi = ((tax - 0)* 0.023) + 0;
		}
		else if (tax  >= 864 && tax <= 2588)
		{
			cout << "his" << endl;
			taxi = ((tax - 863)* 0.033) + 25;
		}
		else if (tax >= 2589 && tax <= 4313)
		{
			cout << "hist" << endl;
			taxi = ((tax - 2588)* 0.052) + 85;
		}
		else if (tax >= 4314)
		{
			cout << "histe" << endl;
			taxi = ((tax - 4313)* 0.075) + 181;
		}
		else
		{
			cout << "??" << endl;
		}
	
	}
	else
	{
		cout << "??" << endl;
	}
	
	
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

	
	cout << "Your taxable income is " << tax << endl << " and you are filing a joint return." << endl << "Your income tax will be " << taxi << endl;


	cout << endl << "would you like to do another calculation ( y or n)?_" << endl;
	getline (cin, cho);
	getline (cin, cho);
	while (cin.fail())
	{
		cout << "Data Input Failure!" << endl;
		cin.clear();
		string garbage;
		cin >> garbage;
		cout << endl << "would you like to do another calculation ( y or n)?_" << endl;
		getline (cin, cho);
	}
	
	if (cho == "y")
	{
		loop++;
	}
	else
	{
		loop--;
	}
	
	}


	system("PAUSE");
}
