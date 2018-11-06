#include <iostream>
#include <string>

using namespace std;

int main()
{
	string bank;
	double checkings = 1000, savings = 500, moneymarket = 5000, with;
	start:
	cout << "what account would you want to withdrawal from?" << endl;
	cout << "checkings" << endl;
	cout << "savings" << endl;
	cout << "moneymarket" << endl;
	cin >> bank;

	double *loserPtr;
	if (bank == "checkings")
	{
		cout << "checkings" << endl;
		loserPtr = &checkings;
	}
	if (bank == "savings")
		cout << "savings" << endl;
	{
		loserPtr = &savings;
	}
	if (bank == "moneymarket")
	{
		cout << "moneymarket" << endl;
		loserPtr = &moneymarket;
	}
	else
	{
		cout << "try again" << endl;
		cout << "" << endl;
		goto start;
	}

	cout << "withdrawal how much" << endl;
	cin >> with;

	*loserPtr = *loserPtr - with;

	cout << *loserPtr << endl;

	system("PAUSE");
	return 0;
}