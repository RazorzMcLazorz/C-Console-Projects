#include <iostream>
#include <string>

using namespace std;

int main()
{
	string losers = "Dillon and Taylor";
	cout << losers << endl;
	cout << &losers << endl;
	cout << *&losers << endl;

	string bigloser;
	bigloser = "Eric and " + *&losers; 

	cout << bigloser << endl;
	cout << &bigloser << endl;

	string *stupidPtr;
	stupidPtr = &losers;
	cout << stupidPtr << endl;
	cout << *stupidPtr << endl;

	stupidPtr = &bigloser;
	cout << stupidPtr << endl;

	system("PAUSE");
	return 0;
}